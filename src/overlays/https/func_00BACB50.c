/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC93DC[];

/* X509_STORE_CTX_get_ex_data, provider slot 47. */
char *func_00BACB50(X509_STORE_CTX *ctx, s32 index) {
    typedef char *(*Operation)(X509_STORE_CTX *ctx, s32 index);
    Operation operation = (Operation)D_00CC93DC[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x8e);
        return 0;
    }
    return operation(ctx, index);
}
