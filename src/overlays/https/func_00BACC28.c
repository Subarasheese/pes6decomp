/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC93E8[];

/* X509_STORE_CTX_get_error_depth, provider slot 50. */
s32 func_00BACC28(X509_STORE_CTX *ctx) {
    typedef s32 (*Operation)(X509_STORE_CTX *ctx);
    Operation operation = (Operation)D_00CC93E8[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x8d);
        return 0;
    }
    return operation(ctx);
}
