/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC938C[];

/* X509_NAME_cmp, provider slot 21. */
s32 func_00BAC488(X509_NAME *a, X509_NAME *b) {
    typedef s32 (*Operation)(X509_NAME *a, X509_NAME *b);
    Operation operation = (Operation)D_00CC938C[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x79);
        return 0;
    }
    return operation(a, b);
}
