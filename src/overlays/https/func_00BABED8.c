/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC9348[];

/* X509_verify, provider slot 3. */
s32 func_00BABED8(X509 *cert, EVP_PKEY *key) {
    typedef s32 (*Operation)(X509 *cert, EVP_PKEY *key);
    Operation operation = (Operation)D_00CC9348[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x96);
        return 0;
    }
    return operation(cert, key);
}
