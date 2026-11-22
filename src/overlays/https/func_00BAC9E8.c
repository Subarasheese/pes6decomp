/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC93C8[];

/* X509_STORE_CTX_free, provider slot 42. */
void func_00BAC9E8(X509_STORE_CTX *ctx) {
    typedef void (*Operation)(X509_STORE_CTX *ctx);
    Operation operation = (Operation)D_00CC93C8[0];
    if (operation) {
        operation(ctx);
    } else {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x98);
    }
}
