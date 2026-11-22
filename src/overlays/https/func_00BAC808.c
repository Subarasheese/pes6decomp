/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC93B0[];

/* X509_STORE_free, provider slot 36. */
void func_00BAC808(X509_STORE *store) {
    typedef void (*Operation)(X509_STORE *store);
    Operation operation = (Operation)D_00CC93B0[0];
    if (operation) {
        operation(store);
    } else {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x92);
    }
}
