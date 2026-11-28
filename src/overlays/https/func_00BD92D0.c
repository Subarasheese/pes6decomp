/* compiler: ee-gcc-2.9-G0 */
#include "pes6/https/ssl_lifetime.h"

s64 func_00BD92D0(SSL_CTX *ctx) {
    if (!ctx)
        return 0;
    return ctx->sessionTimeout;
}
