/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC93F8[];

/* The certificate provider installs this operation in slot 30. */
s32 func_00BACD00(SSL *ssl, RcomCertificateChain *chain, X509_STORE *store, RcomVerifyCallback verify, void *argument, s64 *error) {
    typedef s32(*Operation)(SSL *ssl, RcomCertificateChain *chain, X509_STORE *store, RcomVerifyCallback verify, void *argument, s64 *error);
    Operation operation = (Operation)D_00CC93F8[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x64);
        return 0;
    }
    return operation(ssl, chain, store, verify, argument, error);
}
