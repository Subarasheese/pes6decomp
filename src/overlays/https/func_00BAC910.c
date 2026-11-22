/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC93A8[];

/* X509_STORE_get_by_subject, provider slot 27. */
s32 func_00BAC910(X509_STORE_CTX *ctx, s32 type, X509_NAME *name, X509_OBJECT *out) {
    typedef s32 (*Operation)(X509_STORE_CTX *ctx, s32 type, X509_NAME *name, X509_OBJECT *out);
    Operation operation = (Operation)D_00CC93A8[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x93);
        return 0;
    }
    return operation(ctx, type, name, out);
}
