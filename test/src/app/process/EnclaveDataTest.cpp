#include "EnclaveDataTest.h"
#include "ECalls.h"

EnclaveDataTest *EnclaveDataTest::enclavedataTest = NULL;

EnclaveDataTest *EnclaveDataTest::get_instance()
{
    if (EnclaveDataTest::enclavedataTest == NULL)
    {
        EnclaveDataTest::enclavedataTest = new EnclaveDataTest();
    }

    return EnclaveDataTest::enclavedataTest;
}

void EnclaveDataTest::set_enclave_workreport(std::string report)
{
    enclave_workreport = report;
}

std::string EnclaveDataTest::get_enclave_workreport()
{
    return enclave_workreport;
}

void EnclaveDataTest::set_file_info(std::string file_info)
{
    g_file_info = file_info;
}

std::string EnclaveDataTest::get_file_info()
{
    return g_file_info;
}
