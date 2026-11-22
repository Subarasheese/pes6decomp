/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC9344[];

/* X509_free, provider slot 2. */
void func_00BABE90(X509 *cert) {
    typedef void (*Operation)(X509 *cert);
    Operation operation = (Operation)D_00CC9344[0];
    if (operation) {
        operation(cert);
    } else {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x70);
    }
}
