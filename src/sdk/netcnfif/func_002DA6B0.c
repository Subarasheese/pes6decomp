/* compiler: ee-gcc-2.9 */
#include "pes6/netcnf_string_request.h"
s32 func_002DA6B0(const char *first, s32 setting, const char *second) {
    return sendNetcnfStringRequest(first, setting, second, 6);
}
