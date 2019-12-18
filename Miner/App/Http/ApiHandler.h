#ifndef _CRUST_API_HANDLER_H_
#define _CRUST_API_HANDLER_H_

#include <stdio.h>
#include <sgx_report.h>
#include <sgx_key_exchange.h>
#include <sgx_error.h>
#include <cpprest/uri.h>
#include <cpprest/http_listener.h>
#include <cpprest/http_client.h>
#include <cpprest/asyncrt_utils.h>
#include "Enclave_u.h"
#include "sgx_eid.h"
#include "Config.h"
#include "FormatUtils.h"
#include "IASReport.h"
#include "Quote_size.h"

class ApiHandler
{
public:
    ApiHandler(utility::string_t url, sgx_enclave_id_t *p_global_eid_in);
    ~ApiHandler();

private:
    sgx_enclave_id_t *p_global_eid;                                     /* The point for sgx global eid*/
    web::http::experimental::listener::http_listener m_listener;        /* External api listener*/
    void handle_get(web::http::http_request message);
    void handle_post(web::http::http_request message);
};

ApiHandler *new_api_handler(const char *url, sgx_enclave_id_t *p_global_eid);
ApiHandler *get_api_handler();

#endif /* !_CRUST_API_HANDLER_H_ */