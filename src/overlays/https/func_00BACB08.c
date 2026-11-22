/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC93D8[];

/* X509_STORE_CTX_set_ex_data, provider slot 46. */
s32 func_00BACB08(X509_STORE_CTX *ctx, s32 index, char *value) {
    typedef s32 (*Operation)(X509_STORE_CTX *ctx, s32 index, char *value);
    Operation operation = (Operation)D_00CC93D8[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x91);
        return 0;
    }
    return operation(ctx, index, value);
}
