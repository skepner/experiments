#include <string>

#include "apache2/httpd.h"
#include "apache2/http_core.h"
#include "apache2/http_protocol.h"
#include "apache2/http_request.h"

// #include "apr_hooks.h"

static void register_hooks(apr_pool_t *pool);
static int example_handler(request_rec *r);

extern "C" module example_module;

module AP_MODULE_DECLARE_DATA example_module = {
    STANDARD20_MODULE_STUFF, NULL, NULL, NULL, NULL, NULL, register_hooks
};

static void register_hooks(apr_pool_t *pool) {
    ap_hook_handler(example_handler, NULL, NULL, APR_HOOK_LAST);
}

static int example_handler(request_rec *r) {
    if (!r->handler || strcmp(r->handler, "example"))
        return (DECLINED);

    ap_set_content_type(r, "application/json");
    ap_rprintf(r, "{N: \"Hello, world! filename:[%s] args:[%s]\", b:2, c:3, d:{a:2}}\n\n", r->filename, r->args);
    return OK;
}

// ----------------------------------------------------------------------
/// Local Variables:
/// eval: (if (fboundp 'eu-rename-buffer) (eu-rename-buffer))
/// End:
