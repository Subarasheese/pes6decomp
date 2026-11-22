/* compiler: ee-gcc-2.9-as210-G0 */
/* Copyright (C) 1995-1998 Eric Young (eay@cryptsoft.com)
 * All rights reserved.
 *
 * This package is an SSL implementation written
 * by Eric Young (eay@cryptsoft.com).
 * The implementation was written so as to conform with Netscapes SSL.
 *
 * This library is free for commercial and non-commercial use as long as
 * the following conditions are aheared to.  The following conditions
 * apply to all code found in this distribution, be it the RC4, RSA,
 * lhash, DES, etc., code; not just the SSL code.  The SSL documentation
 * included with this distribution is covered by the same copyright terms
 * except that the holder is Tim Hudson (tjh@cryptsoft.com).
 *
 * Copyright remains Eric Young's, and as such any Copyright notices in
 * the code are not to be removed.
 * If this package is used in a product, Eric Young should be given attribution
 * as the author of the parts of the library used.
 * This can be in the form of a textual message at program startup or
 * in documentation (online or textual) provided with the package.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *    "This product includes cryptographic software written by
 *     Eric Young (eay@cryptsoft.com)"
 *    The word 'cryptographic' can be left out if the rouines from the library
 *    being used are not cryptographic related :-).
 * 4. If you include any Windows specific code (or a derivative thereof) from
 *    the apps directory (application code) you must include an acknowledgement:
 *    "This product includes software written by Tim Hudson (tjh@cryptsoft.com)"
 *
 * THIS SOFTWARE IS PROVIDED BY ERIC YOUNG ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * The licence and distribution terms for any publically available version or
 * derivative of this code cannot be changed.  i.e. this code cannot simply be
 * copied and put under another distribution licence
 * [including the GNU Public Licence.]
 */
/* SSLeay 0.9.1b, crypto/des/des_enc.c and des_locl.h. The PAL library obtains the permutation
 * tables from its DES state. */
#include "types.h"
typedef unsigned long DES_LONG;
typedef struct {
    u8 pad[0x240];
    DES_LONG sbox[8][64];
} Tables;
extern const Tables *func_00BAD1A0(void);
#define ROTATE(a, n) (((a) >> (n)) + ((a) << (32 - (n))))
#define LOAD_DATA_tmp(R, S, u, t, unused1, unused2)                                                \
    do {                                                                                           \
        u = (R) ^ s[(S)];                                                                          \
        t = (R) ^ s[(S) + 1];                                                                      \
    } while (0)
#define D_ENCRYPT(LL, R, S)                                                                        \
    {                                                                                              \
        DES_LONG shifted;                                                                          \
        const Tables *tables = func_00BAD1A0();                                                    \
        t = (R) ^ s[(S) + 1];                                                                      \
        u = (R) ^ s[(S)];                                                                          \
        shifted = (t >> 4) + (t << (32 - 4));                                                      \
        t = shifted;                                                                               \
        LL ^= tables->sbox[0][(u >> 2L) & 0x3f] ^ tables->sbox[2][(u >> 10L) & 0x3f] ^             \
              tables->sbox[4][(u >> 18L) & 0x3f] ^ tables->sbox[6][(u >> 26L) & 0x3f] ^            \
              tables->sbox[1][(t >> 2L) & 0x3f] ^ tables->sbox[3][(t >> 10L) & 0x3f] ^             \
              tables->sbox[5][(t >> 18L) & 0x3f] ^ tables->sbox[7][(t >> 26L) & 0x3f];             \
    }
#define PERM_OP(a, b, t, n, m) ((t) = ((((a) >> (n)) ^ (b)) & (m)), (b) ^= (t), (a) ^= ((t) << (n)))

#define IP(l, r)                                                                                   \
    {                                                                                              \
        register DES_LONG tt;                                                                      \
        PERM_OP(r, l, tt, 4, 0x0f0f0f0fL);                                                         \
        PERM_OP(l, r, tt, 16, 0x0000ffffL);                                                        \
        PERM_OP(r, l, tt, 2, 0x33333333L);                                                         \
        PERM_OP(l, r, tt, 8, 0x00ff00ffL);                                                         \
        PERM_OP(r, l, tt, 1, 0x55555555L);                                                         \
    }

#define FP(l, r)                                                                                   \
    {                                                                                              \
        register DES_LONG tt;                                                                      \
        PERM_OP(l, r, tt, 1, 0x55555555L);                                                         \
        PERM_OP(r, l, tt, 8, 0x00ff00ffL);                                                         \
        PERM_OP(l, r, tt, 2, 0x33333333L);                                                         \
        PERM_OP(r, l, tt, 16, 0x0000ffffL);                                                        \
        PERM_OP(l, r, tt, 4, 0x0f0f0f0fL);                                                         \
    }
void func_00BAF0E0(DES_LONG *data, const DES_LONG *ks, int enc) {
    register DES_LONG l, r, u, t;

    register int i;

    const DES_LONG *s;

    r = data[0];
    l = data[1];

    IP(r, l);

    r = ROTATE(r, 29) & 0xffffffffL;
    l = ROTATE(l, 29) & 0xffffffffL;

    s = ks;

    if (enc) {
        for (i = 0; i < 32; i += 8) {
            D_ENCRYPT(l, r, i + 0);
            D_ENCRYPT(r, l, i + 2);
            D_ENCRYPT(l, r, i + 4);
            D_ENCRYPT(r, l, i + 6);
        }

    } else {
        for (i = 30; i > 0; i -= 8) {
            D_ENCRYPT(l, r, i - 0);
            D_ENCRYPT(r, l, i - 2);
            D_ENCRYPT(l, r, i - 4);
            D_ENCRYPT(r, l, i - 6);
        }
    }

    l = ROTATE(l, 3) & 0xffffffffL;
    r = ROTATE(r, 3) & 0xffffffffL;

    FP(r, l);
    data[0] = l;
    data[1] = r;
    l = r = t = u = 0;
}
