/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC937C[];

/* X509_NAME_new, provider slot 16. */
X509_NAME *func_00BAC368(void) {
    typedef X509_NAME *(*Operation)(void);
    Operation operation = (Operation)D_00CC937C[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x82);
        return 0;
    }
    return operation();
}
