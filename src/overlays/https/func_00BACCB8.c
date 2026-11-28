/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC93F4[];

/* The certificate provider installs this operation in slot 29. */
s32 func_00BACCB8(SSL *ssl, RcomCertificateChain *chain, RcomChainCallback callback) {
    typedef s32(*Operation)(SSL *ssl, RcomCertificateChain *chain, RcomChainCallback callback);
    Operation operation = (Operation)D_00CC93F4[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x6f);
        return 0;
    }
    return operation(ssl, chain, callback);
}
