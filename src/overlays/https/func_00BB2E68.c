/* compiler: ee-gcc-2.9-G0 */
/* Adapted from SSLeay 0.9.1b, crypto/evp/encode.c (EVP_DecodeUpdate). See THIRD_PARTY.md. */
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

extern unsigned char D_00C3D480[128];
extern int func_00BB3090(unsigned char *t, unsigned char *f, int n);
int func_00BB2E68(EVP_ENCODE_CTX *ctx, unsigned char *out, int *outl, unsigned char *in, int inl) {
    int seof = -1;
    int eof = 0;
    int rv = -1;
    int ret = 0;
    int i;
    int v;
    int tmp;
    int n;
    int ln;
    int tmp2;
    int exp_nl;
    unsigned char *d;
    n = ctx->num;
    d = ctx->enc_data;
    ln = ctx->line_num;
    exp_nl = ctx->expect_nl;
    if ((inl == 0) || ((n == 0) && (D_00C3D480[in[0] & 0x7f] == 0xF2))) {
        rv = 0;
        goto end;
    }
    for (i = 0; i < inl; i++) {
        if (ln >= 80) {
            rv = -1;
            goto end;
        }
        tmp = *(in++);
        v = D_00C3D480[tmp & 0x7f];
        if (!((v | 0x13) == 0xF3)) {
            d[n++] = tmp;
            ln++;
        } else if (v == 0xFF) {
            rv = -1;
            goto end;
        }
        if (tmp == '=') {
            if (seof == (-1))
                seof = n;
            eof++;
        }
        if (v == 0xF0) {
            ln = 0;
            if (exp_nl) {
                exp_nl = 0;
                continue;
            }
        }
        exp_nl = 0;
        if (((i + 1) == inl) && (((n & 3) == 0) || eof))
            v = 0xF2;
        if ((v == 0xF2) || (n >= 64)) {
            if ((v != 0xF2) && (n >= 64))
                exp_nl = 1;
            tmp2 = v;
            if (n > 0) {
                v = func_00BB3090(out, d, n);
                if (v < 0) {
                    rv = 0;
                    goto end;
                }
                n = 0;
                ret += v - eof;
            } else {
                eof = 1;
                v = 0;
            }
            if ((v < ctx->length) && eof) {
                rv = 0;
                goto end;
            } else
                ctx->length = v;
            if (seof >= 0) {
                rv = 0;
                goto end;
            }
            out += v;
        }
    }

    rv = 1;
end:
    *outl = ret;

    ctx->num = n;
    ctx->line_num = ln;
    ctx->expect_nl = exp_nl;
    return rv;
}
