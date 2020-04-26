#ifndef _CRUST_API_HANDLER_H_
#define _CRUST_API_HANDLER_H_

#include <stdio.h>
#include <algorithm>
#include <mutex>
#include <exception>
#include <sgx_report.h>
#include <sgx_key_exchange.h>
#include <sgx_error.h>
#include "Enclave_u.h"
#include "sgx_eid.h"
#include "Common.h"
#include "Config.h"
#include "FormatUtils.h"
#include "IASReport.h"
#include "SgxSupport.h"
#include "Resource.h"
#include "HttpLib.h"
#include "FileUtils.h"
#include "Log.h"
#include "Json.hpp"
#include "sgx_tseal.h"

class ApiHandler
{
public:
    ApiHandler();
    ~ApiHandler();
    int start();
    int stop();

private:
    httplib::Server *server;
    void handle_get(httplib::Request req);
    void handle_post(httplib::Request req);
    static void *change_empty(void *);
};

#endif /* !_CRUST_API_HANDLER_H_ */