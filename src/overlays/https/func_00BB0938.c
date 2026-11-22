/* compiler: ee-gcc-2.9-G0 */
/* Adapted from SSLeay 0.9.1b, crypto/des/des_enc.c (des_ncbc_encrypt).
 * licence: ssleay (see THIRD_PARTY.md) */
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
#include "pes6/https/ssleay_091b_types.h"

extern void func_00BAF0E0(unsigned long *data, des_key_schedule ks, int enc);

void func_00BB0938(des_cblock *input, des_cblock *output, long length, des_key_schedule schedule,
                   des_cblock *ivec, int enc) {
    register unsigned long tin0;
    register unsigned long tin1;
    register unsigned long tout0;
    register unsigned long tout1;
    register unsigned long xor0;
    register unsigned long xor1;
    register unsigned char *in;
    register unsigned char *out;
    register long l = length;
    unsigned long tin[2];
    unsigned char *iv;
    in = (unsigned char *)input;
    out = (unsigned char *)output;
    iv = (unsigned char *)ivec;
    if (enc) {
        tout0 = (unsigned long)(*(iv++)), tout0 |= ((unsigned long)(*(iv++))) << 8L,
        tout0 |= ((unsigned long)(*(iv++))) << 16L, tout0 |= ((unsigned long)(*(iv++))) << 24L;
        tout1 = (unsigned long)(*(iv++)), tout1 |= ((unsigned long)(*(iv++))) << 8L,
        tout1 |= ((unsigned long)(*(iv++))) << 16L, tout1 |= ((unsigned long)(*(iv++))) << 24L;
        for (l -= 8; l >= 0; l -= 8) {
            tin0 = (unsigned long)(*(in++)), tin0 |= ((unsigned long)(*(in++))) << 8L,
            tin0 |= ((unsigned long)(*(in++))) << 16L, tin0 |= ((unsigned long)(*(in++))) << 24L;
            tin1 = (unsigned long)(*(in++)), tin1 |= ((unsigned long)(*(in++))) << 8L,
            tin1 |= ((unsigned long)(*(in++))) << 16L, tin1 |= ((unsigned long)(*(in++))) << 24L;
            tin0 ^= tout0;
            tin[0] = tin0;
            tin1 ^= tout1;
            tin[1] = tin1;
            func_00BAF0E0((unsigned long *)tin, schedule, 1);
            tout0 = tin[0];
            *(out++) = (unsigned char)(tout0 & 0xff),
            *(out++) = (unsigned char)((tout0 >> 8L) & 0xff),
            *(out++) = (unsigned char)((tout0 >> 16L) & 0xff),
            *(out++) = (unsigned char)((tout0 >> 24L) & 0xff);
            tout1 = tin[1];
            *(out++) = (unsigned char)(tout1 & 0xff),
            *(out++) = (unsigned char)((tout1 >> 8L) & 0xff),
            *(out++) = (unsigned char)((tout1 >> 16L) & 0xff),
            *(out++) = (unsigned char)((tout1 >> 24L) & 0xff);
        }

        if (l != (-8)) {
            {
                in += l + 8;
                tin0 = (tin1 = 0);
                switch (l + 8) {
                case 8:
                    tin1 = ((unsigned long)(*(--in))) << 24L;

                case 7:
                    tin1 |= ((unsigned long)(*(--in))) << 16L;

                case 6:
                    tin1 |= ((unsigned long)(*(--in))) << 8L;

                case 5:
                    tin1 |= (unsigned long)(*(--in));

                case 4:
                    tin0 = ((unsigned long)(*(--in))) << 24L;

                case 3:
                    tin0 |= ((unsigned long)(*(--in))) << 16L;

                case 2:
                    tin0 |= ((unsigned long)(*(--in))) << 8L;

                case 1:
                    tin0 |= (unsigned long)(*(--in));
                }
            };
            tin0 ^= tout0;
            tin[0] = tin0;
            tin1 ^= tout1;
            tin[1] = tin1;
            func_00BAF0E0((unsigned long *)tin, schedule, 1);
            tout0 = tin[0];
            *(out++) = (unsigned char)(tout0 & 0xff),
            *(out++) = (unsigned char)((tout0 >> 8L) & 0xff),
            *(out++) = (unsigned char)((tout0 >> 16L) & 0xff),
            *(out++) = (unsigned char)((tout0 >> 24L) & 0xff);
            tout1 = tin[1];
            *(out++) = (unsigned char)(tout1 & 0xff),
            *(out++) = (unsigned char)((tout1 >> 8L) & 0xff),
            *(out++) = (unsigned char)((tout1 >> 16L) & 0xff),
            *(out++) = (unsigned char)((tout1 >> 24L) & 0xff);
        }
        iv = (unsigned char *)ivec;
        *(iv++) = (unsigned char)(tout0 & 0xff), *(iv++) = (unsigned char)((tout0 >> 8L) & 0xff),
        *(iv++) = (unsigned char)((tout0 >> 16L) & 0xff),
        *(iv++) = (unsigned char)((tout0 >> 24L) & 0xff);
        *(iv++) = (unsigned char)(tout1 & 0xff), *(iv++) = (unsigned char)((tout1 >> 8L) & 0xff),
        *(iv++) = (unsigned char)((tout1 >> 16L) & 0xff),
        *(iv++) = (unsigned char)((tout1 >> 24L) & 0xff);
    } else {
        xor0 = (unsigned long)(*(iv++)), xor0 |= ((unsigned long)(*(iv++))) << 8L,
        xor0 |= ((unsigned long)(*(iv++))) << 16L, xor0 |= ((unsigned long)(*(iv++))) << 24L;
        xor1 = (unsigned long)(*(iv++)), xor1 |= ((unsigned long)(*(iv++))) << 8L,
        xor1 |= ((unsigned long)(*(iv++))) << 16L, xor1 |= ((unsigned long)(*(iv++))) << 24L;
        for (l -= 8; l >= 0; l -= 8) {
            tin0 = (unsigned long)(*(in++)), tin0 |= ((unsigned long)(*(in++))) << 8L,
            tin0 |= ((unsigned long)(*(in++))) << 16L, tin0 |= ((unsigned long)(*(in++))) << 24L;
            tin[0] = tin0;
            tin1 = (unsigned long)(*(in++)), tin1 |= ((unsigned long)(*(in++))) << 8L,
            tin1 |= ((unsigned long)(*(in++))) << 16L, tin1 |= ((unsigned long)(*(in++))) << 24L;
            tin[1] = tin1;
            func_00BAF0E0((unsigned long *)tin, schedule, 0);
            tout0 = tin[0] ^ xor0;
            tout1 = tin[1] ^ xor1;
            *(out++) = (unsigned char)(tout0 & 0xff),
            *(out++) = (unsigned char)((tout0 >> 8L) & 0xff),
            *(out++) = (unsigned char)((tout0 >> 16L) & 0xff),
            *(out++) = (unsigned char)((tout0 >> 24L) & 0xff);
            *(out++) = (unsigned char)(tout1 & 0xff),
            *(out++) = (unsigned char)((tout1 >> 8L) & 0xff),
            *(out++) = (unsigned char)((tout1 >> 16L) & 0xff),
            *(out++) = (unsigned char)((tout1 >> 24L) & 0xff);
            xor0 = tin0;
            xor1 = tin1;
        }

        if (l != (-8)) {
            tin0 = (unsigned long)(*(in++)), tin0 |= ((unsigned long)(*(in++))) << 8L,
            tin0 |= ((unsigned long)(*(in++))) << 16L, tin0 |= ((unsigned long)(*(in++))) << 24L;
            tin[0] = tin0;
            tin1 = (unsigned long)(*(in++)), tin1 |= ((unsigned long)(*(in++))) << 8L,
            tin1 |= ((unsigned long)(*(in++))) << 16L, tin1 |= ((unsigned long)(*(in++))) << 24L;
            tin[1] = tin1;
            func_00BAF0E0((unsigned long *)tin, schedule, 0);
            tout0 = tin[0] ^ xor0;
            tout1 = tin[1] ^ xor1;
            {
                out += l + 8;
                switch (l + 8) {
                case 8:
                    *(--out) = (unsigned char)((tout1 >> 24L) & 0xff);

                case 7:
                    *(--out) = (unsigned char)((tout1 >> 16L) & 0xff);

                case 6:
                    *(--out) = (unsigned char)((tout1 >> 8L) & 0xff);

                case 5:
                    *(--out) = (unsigned char)(tout1 & 0xff);

                case 4:
                    *(--out) = (unsigned char)((tout0 >> 24L) & 0xff);

                case 3:
                    *(--out) = (unsigned char)((tout0 >> 16L) & 0xff);

                case 2:
                    *(--out) = (unsigned char)((tout0 >> 8L) & 0xff);

                case 1:
                    *(--out) = (unsigned char)(tout0 & 0xff);
                }
            };
            xor0 = tin0;
            xor1 = tin1;
        }
        iv = (unsigned char *)ivec;
        *(iv++) = (unsigned char)(xor0 & 0xff), *(iv++) = (unsigned char)((xor0 >> 8L) & 0xff),
        *(iv++) = (unsigned char)((xor0 >> 16L) & 0xff),
        *(iv++) = (unsigned char)((xor0 >> 24L) & 0xff);
        *(iv++) = (unsigned char)(xor1 & 0xff), *(iv++) = (unsigned char)((xor1 >> 8L) & 0xff),
        *(iv++) = (unsigned char)((xor1 >> 16L) & 0xff),
        *(iv++) = (unsigned char)((xor1 >> 24L) & 0xff);
    }
    tin0 = (tin1 = (tout0 = (tout1 = (xor0 = (xor1 = 0)))));
    tin[0] = (tin[1] = 0);
}
