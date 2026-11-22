/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC93C4[];

/* X509_STORE_CTX_init, provider slot 41. */
void func_00BAC9A0(X509_STORE_CTX *ctx, X509_STORE *store, X509 *cert, STACK *chain) {
    typedef void (*Operation)(X509_STORE_CTX *ctx, X509_STORE *store, X509 *cert, STACK *chain);
    Operation operation = (Operation)D_00CC93C4[0];
    if (operation) {
        operation(ctx, store, cert, chain);
    } else {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x8f);
    }
}
