/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC9410[];

/* d2i_PrivateKey, provider slot 51. */
EVP_PKEY *func_00BACEB0(s32 type, EVP_PKEY **key, u8 **input, long length) {
    typedef EVP_PKEY *(*Operation)(s32 type, EVP_PKEY **key, u8 **input, long length);
    Operation operation = (Operation)D_00CC9410[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x6b);
        return 0;
    }
    return operation(type, key, input, length);
}
