/* compiler: ee-gcc-2.9-G0 */
#include "pes6/https/ssl_lifetime.h"

s64 func_00BD91F0(SSL_SESSION *session) {
    if (!session)
        return 0;
    return session->timeout;
}
