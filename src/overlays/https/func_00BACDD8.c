/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC9404[];

/* d2i_X509_bio, provider slot 34. */
X509 *func_00BACDD8(BIO *bio, X509 **cert) {
    typedef X509 *(*Operation)(BIO *bio, X509 **cert);
    Operation operation = (Operation)D_00CC9404[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x71);
        return 0;
    }
    return operation(bio, cert);
}
