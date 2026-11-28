#ifndef PES6_RCOM_DIGEST_H
#define PES6_RCOM_DIGEST_H

#include "types.h"
#include "pes6/https/ssleay_091b_types.h"

typedef struct HmacContext HmacContext;
typedef struct {
    const EVP_MD *method;
    u8 reserved04[4];
    u32 stateSize;
    void *state;
} RcomEvpDigest;
typedef struct {
    u8 reserved00[4];
    RcomEvpDigest *digest;
} RcomDigestContext;
typedef struct {
    u8 reserved00[0x14];
    s32 type;
    u8 reserved18[4];
    union {
        HmacContext *hmac;
        RcomDigestContext *plain;
    } state;
} RcomDigest;

extern void func_00BB1F80(RcomEvpDigest *, u8 *output, u32 *size);

#endif
