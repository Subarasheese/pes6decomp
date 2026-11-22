/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"
extern RcomApiFunction D_00CC941C[];
/* Provider slot 56: X509_get_version. */
s64 func_00BACF88(X509 *cert) {
    typedef s64 (*Operation)(X509 *cert);
    Operation operation = (Operation)D_00CC941C[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x97);
        return 0;
    }
    return operation(cert);
}
