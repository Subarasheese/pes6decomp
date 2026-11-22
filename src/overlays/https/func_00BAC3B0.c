/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC9380[];

/* X509_NAME_free, provider slot 17. */
void func_00BAC3B0(X509_NAME *name) {
    typedef void (*Operation)(X509_NAME *name);
    Operation operation = (Operation)D_00CC9380[0];
    if (operation) {
        operation(name);
    } else {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x7c);
    }
}
