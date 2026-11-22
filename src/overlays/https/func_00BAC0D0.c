/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC9364[];

/* X509_get_issuer_name, provider slot 10. */
X509_NAME *func_00BAC0D0(X509 *cert) {
    typedef X509_NAME *(*Operation)(X509 *cert);
    Operation operation = (Operation)D_00CC9364[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x72);
        return 0;
    }
    return operation(cert);
}
