/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC93E0[];

/* X509_STORE_CTX_get_error, provider slot 48. */
s32 func_00BACB98(X509_STORE_CTX *ctx) {
    typedef s32 (*Operation)(X509_STORE_CTX *ctx);
    Operation operation = (Operation)D_00CC93E0[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x8c);
        return 0;
    }
    return operation(ctx);
}
