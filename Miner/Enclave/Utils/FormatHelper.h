#ifndef _CRUST_FORMAT_HELPER_H_
#define _CRUST_FORMAT_HELPER_H_

#include <string>
#include <string.h>
#include "EUtils.h"

std::string unsigned_char_array_to_hex_string(const unsigned char *in, size_t size);
char *unsigned_char_array_to_hex_char_array(const unsigned char *in, size_t size);
char* unsigned_char_to_hex(unsigned char in);

#endif /* !_CRUST_FORMAT_HELPER_H_ */
