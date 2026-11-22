/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC9340[];

/* X509_new, provider slot 1. */
X509 *func_00BABE48(void) {
    typedef X509 *(*Operation)(void);
    Operation operation = (Operation)D_00CC9340[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x84);
        return 0;
    }
    return operation();
}
