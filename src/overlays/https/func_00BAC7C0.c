/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC93AC[];

/* X509_STORE_new, provider slot 35. */
X509_STORE *func_00BAC7C0(void) {
    typedef X509_STORE *(*Operation)(void);
    Operation operation = (Operation)D_00CC93AC[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x94);
        return 0;
    }
    return operation();
}
