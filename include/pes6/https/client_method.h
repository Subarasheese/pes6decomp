/* OpenSSL 0.9.2b, ssl/ssl.h. See THIRD_PARTY.md. */
#ifndef PES6_HTTPS_CLIENT_METHOD_H
#define PES6_HTTPS_CLIENT_METHOD_H
#include "pes6/https/ssleay_091b_types.h"

typedef struct {
    SSL_METHOD base;
    int (*ssl_version)(void);
} PalClientMethod;

#endif
