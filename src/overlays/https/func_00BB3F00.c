/* compiler: ee-gcc-2.9-nsa-G0 */
/* OpenSSL_0_9_2b, crypto/evp/evp_enc.c (EVP_EncryptUpdate). See THIRD_PARTY.md. */
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
typedef unsigned int size_t;
extern void *memcpy(void *, const void *, size_t);
typedef struct evp_cipher_st {
    unsigned char reserved_00[4];
    int block_size;
    unsigned char reserved_08[12];
    void (*do_cipher)();
    unsigned char reserved_18[4];
} EVP_CIPHER;
typedef struct evp_cipher_ctx_st {
    EVP_CIPHER *cipher;
    unsigned char reserved_04[4];
    int buf_len;
    unsigned char reserved_0c[64];
    unsigned char buf[8];
    unsigned char reserved_54[8364];
} EVP_CIPHER_CTX;

void func_00BB3F00(EVP_CIPHER_CTX *ctx, unsigned char *out, int *outl, unsigned char *in, int inl) {
    int i;
    int j;
    int bl;
    i = ctx->buf_len;
    bl = ctx->cipher->block_size;
    *outl = 0;
    if ((inl == 0) && (i != bl))
        return;
    if (i != 0) {
        if ((i + inl) < bl) {
            memcpy(&ctx->buf[i], in, inl);
            ctx->buf_len += inl;
            return;
        } else {
            j = bl - i;
            if (j != 0)
                memcpy(&ctx->buf[i], in, j);
            ctx->cipher->do_cipher(ctx, out, ctx->buf, bl);
            inl -= j;
            in += j;
            out += bl;
            *outl += bl;
        }
    }
    i = inl % bl;
    inl -= i;
    if (inl > 0) {
        ctx->cipher->do_cipher(ctx, out, in, inl);
        *outl += inl;
    }
    if (i != 0)
        memcpy(ctx->buf, &in[inl], i);
    ctx->buf_len = i;
}
