/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_1c, crypto/evp/evp_enc.c (EVP_DecryptUpdate). See THIRD_PARTY.md. */
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
typedef unsigned char des_cblock[8];
typedef struct des_ks_struct {
    union {
        des_cblock _;
        unsigned long pad[2];
    } ks;
    int weak_key;
} des_key_schedule[16];
typedef struct rc4_key_st {
    unsigned int x;
    unsigned int y;
    unsigned int data[256];
} RC4_KEY;
typedef struct rc2_key_st {
    unsigned int data[64];
} RC2_KEY;
typedef struct rc5_key_st {
    int rounds;
    unsigned long data[2 * (16 + 1)];
} RC5_32_KEY;
typedef struct bf_key_st {
    unsigned long P[16 + 2];
    unsigned long S[4 * 256];
} BF_KEY;
typedef struct cast_key_st {
    unsigned long data[32];
} CAST_KEY;
typedef struct idea_key_st {
    unsigned int data[9][6];
} IDEA_KEY_SCHEDULE;
typedef struct evp_cipher_st {
    int nid;
    int block_size;
    int key_len;
    int iv_len;
    void (*init)();
    void (*do_cipher)();
    void (*cleanup)();
    int ctx_size;
    int (*set_asn1_parameters)();
    int (*get_asn1_parameters)();
} EVP_CIPHER;
typedef struct evp_cipher_ctx_st {
    EVP_CIPHER *cipher;
    unsigned char reserved_0004[4];
    int buf_len;
    unsigned char reserved_000c[64];
    unsigned char buf[8];
    unsigned char reserved_0054[8300];
} EVP_CIPHER_CTX;
extern void func_00BB3F00(EVP_CIPHER_CTX *ctx, unsigned char *out, int *outl, unsigned char *in,
                          int inl);

void func_00BB4058(EVP_CIPHER_CTX *ctx, unsigned char *out, int *outl, unsigned char *in, int inl) {
    int b;
    int bl;
    int n;
    int keep_last = 0;
    *outl = 0;
    if (inl == 0)
        return;
    b = ctx->cipher->block_size;
    if (b > 1) {
        bl = ctx->buf_len;
        n = inl + bl;
        if ((n % b) == 0) {
            if (inl < b) {
                memcpy(&ctx->buf[bl], in, inl);
                ctx->buf_len = b;
                *outl = 0;
                return;
            }
            keep_last = 1;
            inl -= b;
        }
    }
    func_00BB3F00(ctx, out, outl, in, inl);
    if (keep_last) {
        memcpy(&ctx->buf[0], &in[inl], b);
        ctx->buf_len = b;
    }
}
