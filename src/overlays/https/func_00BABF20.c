/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC934C[];

/* X509_digest, provider slot 4. */
s32 func_00BABF20(X509 *cert, EVP_MD *type, u8 *digest, u32 *length) {
    typedef s32 (*Operation)(X509 *cert, EVP_MD *type, u8 *digest, u32 *length);
    Operation operation = (Operation)D_00CC934C[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x6e);
        return 0;
    }
    return operation(cert, type, digest, length);
}
