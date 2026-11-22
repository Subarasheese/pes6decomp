/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC93C0[];

/* X509_STORE_CTX_new, provider slot 40. */
X509_STORE_CTX *func_00BAC958(void) {
    typedef X509_STORE_CTX *(*Operation)(void);
    Operation operation = (Operation)D_00CC93C0[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x99);
        return 0;
    }
    return operation();
}
