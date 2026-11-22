/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC936C[];

/* X509_get_pubkey, provider slot 12. */
EVP_PKEY *func_00BAC160(X509 *cert) {
    typedef EVP_PKEY *(*Operation)(X509 *cert);
    Operation operation = (Operation)D_00CC936C[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x75);
        return 0;
    }
    return operation(cert);
}
