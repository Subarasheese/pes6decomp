/* compiler: ee-gcc-2.96-nsa-G0 */
#include "pes6/rcom_certificate.h"

s32 func_00BAB3E8(SSL *ssl, RcomCertificateChain *chain, RcomChainCallback callback) {
    if (!callback)
        return 0;
    return callback(ssl, chain->certificates, chain->count);
}
