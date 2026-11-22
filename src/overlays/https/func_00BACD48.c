/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC93FC[];

/* X509_check_private_key, provider slot 32. */
s32 func_00BACD48(X509 *cert, EVP_PKEY *key) {
    typedef s32 (*Operation)(X509 *cert, EVP_PKEY *key);
    Operation operation = (Operation)D_00CC93FC[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x6d);
        return 0;
    }
    return operation(cert, key);
}
