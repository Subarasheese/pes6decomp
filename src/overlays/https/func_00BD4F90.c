/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_2b, crypto/des/set_key.c (des_set_key). See THIRD_PARTY.md. */
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
typedef unsigned char des_cblock[8];
typedef struct des_ks_struct {
    union {
        des_cblock _;
        unsigned long pad[2];
    } ks;
} des_key_schedule[16];
extern const unsigned long D_00C4CD10[8][64];
typedef struct {
    unsigned char reserved00[0x1c];
    int checkKey;
} CryptoOptions;
extern CryptoOptions *func_00BAD1A0(void);
extern int func_00BD4ED8(des_cblock *key);
extern int func_00BD4F20(des_cblock *key);

int func_00BD4F90(des_cblock *key, des_key_schedule schedule) {
    extern int D_00C3FE40[16];
    register unsigned long c;
    register unsigned long d;
    register unsigned long t;
    register unsigned long s;
    register unsigned long t2;
    register unsigned char *in;
    register unsigned long *k;
    register int i;
    if (func_00BAD1A0()->checkKey) {
        if (!func_00BD4ED8(key))
            return -1;
        if (func_00BD4F20(key))
            return -2;
    }
    k = (unsigned long *)schedule;
    in = (unsigned char *)key;
    c = (unsigned long)(*(in++)), c |= ((unsigned long)(*(in++))) << 8L,
    c |= ((unsigned long)(*(in++))) << 16L, c |= ((unsigned long)(*(in++))) << 24L;
    d = (unsigned long)(*(in++)), d |= ((unsigned long)(*(in++))) << 8L,
    d |= ((unsigned long)(*(in++))) << 16L, d |= ((unsigned long)(*(in++))) << 24L;
    t = ((d >> 4) ^ c) & 0x0f0f0f0fL, c ^= t, d ^= t << 4;
    t = ((c << (16 - (-2))) ^ c) & 0xcccc0000L, c = (c ^ t) ^ (t >> (16 - (-2)));
    t = ((d << (16 - (-2))) ^ d) & 0xcccc0000L, d = (d ^ t) ^ (t >> (16 - (-2)));
    t = ((d >> 1) ^ c) & 0x55555555L, c ^= t, d ^= t << 1;
    t = ((c >> 8) ^ d) & 0x00ff00ffL, d ^= t, c ^= t << 8;
    t = ((d >> 1) ^ c) & 0x55555555L, c ^= t, d ^= t << 1;
    d = ((((d & 0x000000ffL) << 16L) | (d & 0x0000ff00L)) | ((d & 0x00ff0000L) >> 16L)) |
        ((c & 0xf0000000L) >> 4L);
    c &= 0x0fffffffL;
    for (i = 0; i < 16; i++) {
        if (D_00C3FE40[i]) {
            c = (c >> 2L) | (c << 26L);
            d = (d >> 2L) | (d << 26L);
        } else {
            c = (c >> 1L) | (c << 27L);
            d = (d >> 1L) | (d << 27L);
        }
        c &= 0x0fffffffL;
        d &= 0x0fffffffL;
        s = ((D_00C4CD10[0][c & 0x3f] | D_00C4CD10[1][((c >> 6) & 0x03) | ((c >> 7L) & 0x3c)]) |
             D_00C4CD10[2][((c >> 13) & 0x0f) | ((c >> 14L) & 0x30)]) |
            D_00C4CD10[3][(((c >> 20) & 0x01) | ((c >> 21L) & 0x06)) | ((c >> 22L) & 0x38)];
        t = ((D_00C4CD10[4][d & 0x3f] | D_00C4CD10[5][((d >> 7L) & 0x03) | ((d >> 8L) & 0x3c)]) |
             D_00C4CD10[6][(d >> 15L) & 0x3f]) |
            D_00C4CD10[7][((d >> 21L) & 0x0f) | ((d >> 22L) & 0x30)];
        t2 = ((t << 16L) | (s & 0x0000ffffL)) & 0xffffffffL;
        *(k++) = ((t2 >> 30) + (t2 << (32 - 30))) & 0xffffffffL;
        t2 = (s >> 16L) | (t & 0xffff0000L);
        *(k++) = ((t2 >> 26) + (t2 << (32 - 26))) & 0xffffffffL;
    }

    return 0;
}
