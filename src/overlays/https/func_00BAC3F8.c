/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC9384[];

/* X509_NAME_dup, provider slot 18. */
X509_NAME *func_00BAC3F8(X509_NAME *name) {
    typedef X509_NAME *(*Operation)(X509_NAME *name);
    Operation operation = (Operation)D_00CC9384[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x7a);
        return 0;
    }
    return operation(name);
}
