/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC93EC[];

/* X509_STORE_CTX_get_current_cert, provider slot 59. */
X509 *func_00BACC70(X509_STORE_CTX *ctx) {
    typedef X509 *(*Operation)(X509_STORE_CTX *ctx);
    Operation operation = (Operation)D_00CC93EC[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x8b);
        return 0;
    }
    return operation(ctx);
}
