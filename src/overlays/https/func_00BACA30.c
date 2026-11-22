/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC93CC[];

/* X509_STORE_CTX_cleanup, provider slot 43. */
void func_00BACA30(X509_STORE_CTX *ctx) {
    typedef void (*Operation)(X509_STORE_CTX *ctx);
    Operation operation = (Operation)D_00CC93CC[0];
    if (operation) {
        operation(ctx);
    } else {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x89);
    }
}
