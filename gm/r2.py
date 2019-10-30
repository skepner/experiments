#! /usr/bin/env python3

# https://developers.google.com/gmail/api/quickstart/python
# https://github.com/abhishekchhibber/Gmail-Api-through-Python/blob/master/gmail_read.py

# pip3 install --upgrade google-api-python-client google-auth-httplib2 google-auth-oauthlib
#? pip3 install --upgrade google-auth

# Visit
# https://developers.google.com/gmail/api/quickstart/python
# click "Enable Gmail API", save credentials.json to GM_DATA_DIR

# Docs:
# https://google-auth.readthedocs.io/en/latest/
# https://oauthlib.readthedocs.io/en/latest/

# ======================================================================

import pickle, pprint
from pathlib import Path



# from google.oauth2 import service_account

# ======================================================================

GM_DATA_DIR = "/d/gm"

SCOPES = ['https://www.googleapis.com/auth/gmail.readonly'] # "https://www.googleapis.com/auth/gmail.modify"

# ----------------------------------------------------------------------

def main():
    gmail = connect()
    messages = gmail.users().messages().list(userId='me',labelIds=["INBOX"]).execute()["messages"]
    # pprint.pprint(messages)
    for message_ref in messages:
        message = gmail.users().messages().get(userId="me", id=message_ref["id"]).execute()
        pprint.pprint(message)

# ----------------------------------------------------------------------

def connect():
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

# **********************************************************************
# **********************************************************************
# **********************************************************************

#??? pip3 install --upgrade oauth2client
#??? https://oauth2client.readthedocs.io/en/latest/#supported-python-versions

# '''
# Reading GMAIL using Python
#         - Abhishek Chhibber
# '''

# '''
# This script does the following:
# - Go to Gmal inbox
# - Find and read all the unread messages
# - Extract details (Date, Sender, Subject, Snippet, Body) and export them to a .csv file / DB
# - Mark the messages as Read - so that they are not read again
# '''

# '''
# Before running this script, the user should get the authentication by following
# the link: https://developers.google.com/gmail/api/quickstart/python
# Also, client_secret.json should be saved in the same directory as this file
# '''

# from apiclient import discovery
# from apiclient import errors
# from httplib2 import Http
# from oauth2client import file, client, tools
# import pprint

# # Creating a storage.JSON file with authentication details
# SCOPES = 'https://www.googleapis.com/auth/gmail.modify' # we are using modify and not readonly, as we will be marking the messages Read
# store = file.Storage('/d/gm/storage.json')
# creds = store.get()
# if not creds or creds.invalid:
#     flow = client.flow_from_clientsecrets(f"{GM_DATA_DIR}/credentials.json", SCOPES)
#     creds = tools.run_flow(flow, store)
# GMAIL = discovery.build('gmail', 'v1', http=creds.authorize(Http()))

# user_id =  'me'
# labels = ['INBOX'] # 'UNREAD'

# # Getting all the unread messages from Inbox
# # labelIds can be changed accordingly
# msgs = GMAIL.users().messages().list(userId='me',labelIds=labels).execute()

# pprint.pprint(msgs)

# **********************************************************************
# **********************************************************************
# **********************************************************************

# mssg_list = unread_msgs['messages']

# print ("Total unread messages in inbox: ", str(len(mssg_list)))

# final_list = [ ]


# for mssg in mssg_list:
#         temp_dict = { }
#         m_id = mssg['id'] # get id of individual message
#         message = GMAIL.users().messages().get(userId=user_id, id=m_id).execute() # fetch the message using API
#         payld = message['payload'] # get payload of the message
#         headr = payld['headers'] # get header of the payload


#         for one in headr: # getting the Subject
#                 if one['name'] == 'Subject':
#                         msg_subject = one['value']
#                         temp_dict['Subject'] = msg_subject
#                 else:
#                         pass


#         for two in headr: # getting the date
#                 if two['name'] == 'Date':
#                         # msg_date = two['value']
#                         # date_parse = (parser.parse(msg_date))
#                         # m_date = (date_parse.date())
#                         temp_dict['Date'] = two['value'] # str(m_date)
#                 else:
#                         pass

#         for three in headr: # getting the Sender
#                 if three['name'] == 'From':
#                         msg_from = three['value']
#                         temp_dict['Sender'] = msg_from
#                 else:
#                         pass

#         temp_dict['Snippet'] = message['snippet'] # fetching message snippet


#         try:

#                 # Fetching message body
#                 mssg_parts = payld['parts'] # fetching the message parts
#                 part_one  = mssg_parts[0] # fetching first element of the part
#                 part_body = part_one['body'] # fetching body of the message
#                 part_data = part_body['data'] # fetching data from the body
#                 clean_one = part_data.replace("-","+") # decoding from Base64 to UTF-8
#                 clean_one = clean_one.replace("_","/") # decoding from Base64 to UTF-8
#                 clean_two = base64.b64decode (bytes(clean_one, 'UTF-8')) # decoding from Base64 to UTF-8
#                 ##? soup = BeautifulSoup(clean_two , "lxml" )
#                 ##? mssg_body = soup.body()
#                 # mssg_body is a readible form of message body
#                 # depending on the end user's requirements, it can be further cleaned
#                 # using regex, beautiful soup, or any other method
#                 ##? temp_dict['Message_body'] = mssg_body

#         except :
#                 pass

#         print (temp_dict)
#         final_list.append(temp_dict) # This will create a dictonary item in the final list

#         # This will mark the messagea as read
#         GMAIL.users().messages().modify(userId=user_id, id=m_id,body={ 'removeLabelIds': ['UNREAD']}).execute()




# print ("Total messaged retrived: ", str(len(final_list)))
