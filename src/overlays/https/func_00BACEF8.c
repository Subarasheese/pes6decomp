/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC9414[];

/* The certificate provider installs this operation in slot 54. */
EVP_PKEY *func_00BACEF8(s32 type, EVP_PKEY **out, u8 **input, long length) {
    typedef EVP_PKEY *(*Operation)(s32 type, EVP_PKEY **out, u8 **input, long length);
    Operation operation = (Operation)D_00CC9414[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x6c);
        return 0;
    }
    return operation(type, out, input, length);
}
