/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"
extern RcomApiFunction D_00CC935C[];
/* Provider slot 8: X509_get_signature_type. */
s32 func_00BAC040(X509 *cert) {
    typedef s32 (*Operation)(X509 *cert);
    Operation operation = (Operation)D_00CC935C[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x77);
        return 0;
    }
    return operation(cert);
}
