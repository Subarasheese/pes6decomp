/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC9358[];

/* certificate reference increment, provider slot 7. */
void func_00BABFF8(X509 *cert) {
    typedef s32 (*Operation)(X509 *cert);
    Operation operation = (Operation)D_00CC9358[0];
    if (operation) {
        operation(cert);
    } else {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x88);
    }
}
