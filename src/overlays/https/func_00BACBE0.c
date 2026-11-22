/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC93E4[];

/* X509_STORE_CTX_set_error, provider slot 49. */
void func_00BACBE0(X509_STORE_CTX *ctx, s32 error) {
    typedef void (*Operation)(X509_STORE_CTX *ctx, s32 error);
    Operation operation = (Operation)D_00CC93E4[0];
    if (operation) {
        operation(ctx, error);
    } else {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x90);
    }
}
