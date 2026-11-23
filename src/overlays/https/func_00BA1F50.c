/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_1c, crypto/bio/bf_buff.c (buffer_read). See THIRD_PARTY.md. */
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
extern void func_00BA2910(struct bio_st *);
typedef unsigned int size_t;
extern void *memcpy(void *, const void *, size_t);
typedef struct bio_st {
    unsigned char reserved_00[32];
    char *ptr;
    struct bio_st *next_bio;
    unsigned char reserved_28[32];
} BIO;
typedef struct bio_f_buffer_ctx_struct {
    int ibuf_size;
    unsigned char reserved_04[4];
    char *ibuf;
    int ibuf_len;
    int ibuf_off;
    unsigned char reserved_14[12];
} BIO_F_BUFFER_CTX;
extern int func_00BA2C00(BIO *b, char *data, int len);
extern void func_00BA3208(BIO *b);

int func_00BA1F50(BIO *b, char *out, int outl) {
    int i;
    int num = 0;
    BIO_F_BUFFER_CTX *ctx;
    if (out == 0)
        return 0;
    ctx = (BIO_F_BUFFER_CTX *)b->ptr;
    if ((ctx == 0) || (b->next_bio == 0))
        return 0;
    num = 0;
    func_00BA2910(b);
start:
    i = ctx->ibuf_len;

    if (i != 0) {
        if (i > outl)
            i = outl;
        memcpy(out, &ctx->ibuf[ctx->ibuf_off], i);
        ctx->ibuf_off += i;
        ctx->ibuf_len -= i;
        num += i;
        if (outl == i)
            return num;
        outl -= i;
        out += i;
    }
    if (outl > ctx->ibuf_size) {
        for (;;) {
            i = func_00BA2C00(b->next_bio, out, outl);
            if (i <= 0) {
                func_00BA3208(b);
                if (i < 0)
                    return (num > 0) ? (num) : (i);
                if (i == 0)
                    return num;
            }
            num += i;
            if (outl == i)
                return num;
            out += i;
            outl -= i;
        }
    }
    i = func_00BA2C00(b->next_bio, ctx->ibuf, ctx->ibuf_size);
    if (i <= 0) {
        func_00BA3208(b);
        if (i < 0)
            return (num > 0) ? (num) : (i);
        if (i == 0)
            return num;
    }
    ctx->ibuf_off = 0;
    ctx->ibuf_len = i;
    goto start;
}
