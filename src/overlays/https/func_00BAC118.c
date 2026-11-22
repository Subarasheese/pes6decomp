/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC9368[];

/* X509_get_subject_name, provider slot 11. */
X509_NAME *func_00BAC118(X509 *cert) {
    typedef X509_NAME *(*Operation)(X509 *cert);
    Operation operation = (Operation)D_00CC9368[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x78);
        return 0;
    }
    return operation(cert);
}
