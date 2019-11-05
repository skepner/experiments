#! /usr/bin/env python3

# https://developers.google.com/gmail/api/quickstart/python
# https://github.com/abhishekchhibber/Gmail-Api-through-Python/blob/master/gmail_read.py
# https://oauthlib.readthedocs.io/en/latest/
# https://developers.google.com/gmail/api/v1/reference/

# pip3 install --upgrade google-api-python-client google-auth-httplib2 google-auth-oauthlib
#? pip3 install --upgrade google-auth

# Visit
# https://developers.google.com/gmail/api/quickstart/python
# click "Enable Gmail API", save credentials.json to GM_DATA_DIR

# Docs:
# https://google-auth.readthedocs.io/en/latest/
# https://oauthlib.readthedocs.io/en/latest/

# ======================================================================

import sys, datetime, pprint
from pathlib import Path

# ======================================================================

GM_DATA_DIR = "/d/gm"

SCOPES = ['https://www.googleapis.com/auth/gmail.readonly'] # "https://www.googleapis.com/auth/gmail.modify"

# ----------------------------------------------------------------------

def main():
    if len(sys.argv) > 1 and sys.argv[1] == "-h":
        print(f"Usage: {sys.argv[0]} [list] [meta] [reply:message-id]", file=sys.stderr)
        exit(1)
    exit_code = 0
    gmail = connect()
    if len(sys.argv) == 1:
        list_messages(gmail)
    else:
        for action in sys.argv[1:]:
            if action == "list":
                list_messages(gmail)
            elif action == "meta":
                meta(gmail)
            elif action.startswith("reply:"):
                make_reply(gmail, action[6:])
            else:
                print(f"ERROR: unrecognized action: {action!r}", file=sys.stderr)
                exit_code = 1
    exit(exit_code)

# ----------------------------------------------------------------------

def list_messages(gmail):
    messages = gmail.users().messages().list(userId='me',labelIds=["INBOX"]).execute()["messages"]
    meta = [metadata(gmail, message_ref["id"]) for message_ref in messages]
    max_from = 0
    for en in meta:
        max_from = max(max_from, len(en["from"]))
    for en in meta:
        print(f"{en['from']:{max_from}s} {en['date']:21s} {en['size']:6d} {en['subject']} --id:{en['id']}--")

# ----------------------------------------------------------------------

def meta(gmail):
    messages = gmail.users().messages().list(userId='me',labelIds=["INBOX"]).execute()["messages"]
    meta = [metadata(gmail, message_ref["id"]) for message_ref in messages]
    pprint.pprint(meta)

# ----------------------------------------------------------------------

def make_reply(gmail, message_id):
    message_data = gmail.users().messages().get(userId="me", id=message_id).execute()
    message = {"id": message_id, "body": get_body(message_data["payload"])}
    for hdr in message_data["payload"]["headers"]:
        if hdr["name"] == "From":
            message["from"] = hdr["value"]
        elif hdr["name"] == "Subject":
            message["subject"] = hdr["value"]
    # pprint.pprint(message)
    print("To:", message["from"])
    subject = message["subject"].strip()
    if not subject.lower().startswith("re:"):
        subject = "Re: " + subject
    print("Subject:", subject)
    print()
    body = "\n\n".join(message["body"])
    print(body)

# ----------------------------------------------------------------------

def get_body(payload):
    import base64
    body = []
    # pprint.pprint(payload)
    if payload.get("body", {}).get("size") > 0 and get_content_type(payload) == "text/plain":
        text = base64.b64decode(payload["body"]["data"])
        try:
            body.append(text.decode("utf-8").replace("\r\n", "\n"))
        except Exception as err:
            print("ERROR:", err)
            print(text)
    for part in payload.get("parts", []):
        body.extend(get_body(part))
    return body

# ----------------------------------------------------------------------

def get_content_type(payload):
    for hdr in payload["headers"]:
        if hdr["name"] == "Content-Type":
            return hdr["value"].split(";")[0]
    return None

# ----------------------------------------------------------------------

def metadata(gmail, message_id):
    # https://developers.google.com/gmail/api/v1/reference/users/messages/get
    message_data = gmail.users().messages().get(userId="me", id=message_id, format="metadata").execute()
    message = {"size": message_data["sizeEstimate"], "id": message_id, **message_data}
    del message["payload"]
    for hdr in message_data["payload"]["headers"]:
        if hdr["name"] == "From":
            message["from"] = hdr["value"]
        elif hdr["name"] == "Date":
            message["date"] = hdr["value"]
            for source_fmt in ["%a, %d %b %Y %H:%M:%S %z", "%a, %d %b %Y %H:%M:%S %z (%Z)"]:
                try:
                    message["date"] = datetime.datetime.strptime(hdr["value"], source_fmt).astimezone(tz=None).strftime("%Y-%m-%d %H:%M %Z")
                    break
                except ValueError:
                    pass
        elif hdr["name"] == "Subject":
            message["subject"] = hdr["value"]
    return message

# ----------------------------------------------------------------------

def connect():
    import pickle
    token_file = Path(f"{GM_DATA_DIR}/token.pickle")
    if token_file.exists():
        creds = pickle.load(token_file.open("rb"))
    else:
        creds = None
    if not creds or not creds.valid:
        if creds and creds.expired and creds.refresh_token:
            import google.auth.transport.requests
            creds.refresh(google.auth.transport.requests.Request())
        else:
            import google_auth_oauthlib.flow
            flow = google_auth_oauthlib.flow.InstalledAppFlow.from_client_secrets_file(f"{GM_DATA_DIR}/credentials.json", SCOPES)
            creds = flow.run_local_server(port=0)
        pickle.dump(creds, token_file.open("wb"))
    import googleapiclient.discovery
    return googleapiclient.discovery.build('gmail', 'v1', credentials=creds)

# ----------------------------------------------------------------------

main()
