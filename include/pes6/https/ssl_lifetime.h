/* PAL SSL object layouts used by ssl/ssl_lib.c. See THIRD_PARTY.md. */
#ifndef PES6_HTTPS_SSL_LIFETIME_H
#define PES6_HTTPS_SSL_LIFETIME_H

#include "types.h"
#include "pes6/https/ssleay_091b_types.h"

typedef struct ssl_st SSL;
typedef struct ssl_ctx_st SSL_CTX;
typedef struct {
    STACK *connectionMethods;
    STACK *reserved04;
    STACK *contextMethods;
} ExtraMethods;

typedef struct ssl_session_st {
    u8 reserved00[0x98];
    int references;
    u8 reserved9c[4];
    s64 timeout;
} SSL_SESSION;

typedef struct {
    u8 reserved00[0x160];
    DH *temporaryDH;
    u8 reserved164[0x17c - 0x164];
    STACK *caNames;
    u8 reserved180[4];
    s32 keyBlockLength;
    u8 *keyBlock;
} PalSSL3State;

typedef struct Cert Cert;
struct ssl_st {
    int version;
    u8 reserved04[4];
    SSL_METHOD *method;
    BIO *rbio, *wbio, *bbio;
    u8 reserved18[0x3c - 0x18];
    void *initBuffer;
    u8 reserved40[8];
    u8 *packet;
    u32 packetLength;
    SSL2_CTX *s2;
    PalSSL3State *s3;
    u8 reserved58[0x60 - 0x58];
    STACK *cipherList, *cipherListById;
    u8 reserved68[0x84 - 0x68];
    Cert *cert;
    STACK *peerCertificates;
    u8 reserved8c[0xb0 - 0x8c];
    void *session;
    u8 reservedb4[0xdc - 0xb4];
    SSL_CTX *ctx;
    u8 reservede0[0xf0 - 0xe0];
    CRYPTO_EX_DATA extra;
    STACK *clientCA;
    int references;
    u8 reserved100[0x128 - 0x100];
    void *additionalData;
};

struct ssl_ctx_st {
    u8 reserved00[0x10];
    STACK *cipherList, *cipherListById;
    void *certStore, *sessions;
    u8 reserved20[0x38 - 0x20];
    s64 sessionTimeout;
    u8 reserved40[0x78 - 0x40];
    int references;
    u8 reserved7c[0xa0 - 0x7c];
    Cert *defaultCert;
    u8 reserveda4[0xe0 - 0xa4];
    STACK *clientCA;
    u8 reservede4[0xf8 - 0xe4];
    CRYPTO_EX_DATA extra;
    u8 reserved100[0x110 - 0x100];
    STACK *extraCerts;
};

extern void func_00BCB8C8(SSL *ssl);
extern void func_00BCC458(SSL *ssl);

#endif
