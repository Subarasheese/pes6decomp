/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_3a, ssl/ssl_rsa.c (SSL_CTX_use_PrivateKey_file). See THIRD_PARTY.md. */
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
typedef struct bio_method_st BIO_METHOD;
typedef struct bio_st BIO;
extern BIO_METHOD *func_00BA92E0(void);
extern BIO *func_00BA29D8(BIO_METHOD *type);
extern int func_00BA2B20(BIO *a);
extern long func_00BA2FC0(BIO *bp, int cmd, long larg, char *parg);
typedef struct evp_pkey_st EVP_PKEY;
extern void func_00BACE68(EVP_PKEY *pkey);
typedef int pem_password_cb(char *buf, int size, int rwflag);
extern EVP_PKEY *func_00BBAC00(BIO *bp, EVP_PKEY **x, pem_password_cb *);
extern void func_00BB3380(int lib, int func, int reason, const char *file, int line);
typedef struct ssl_ctx_st SSL_CTX;
struct ssl_ctx_st {
    unsigned char reserved_00[216];
    pem_password_cb *default_passwd_callback;
    unsigned char reserved_dc[44];
};
extern int func_00BCF9C8(SSL_CTX *ctx, EVP_PKEY *pkey);

int func_00BCFA50(SSL_CTX *ctx, const char *file, int type) {
    int j;
    int ret = 0;
    BIO *in;
    EVP_PKEY *pkey = 0;
    in = func_00BA29D8(func_00BA92E0());
    if (in == 0) {
        func_00BB3380(20, 176, 2055, 0, 0);
        goto end;
    }
    if (func_00BA2FC0(in, 108, 0x01 | 0x02, (char *)file) <= 0) {
        func_00BB3380(20, 176, 2050, 0, 0);
        goto end;
    }
    if (type == 1) {
        j = 0x809;
        pkey = func_00BBAC00(in, 0, ctx->default_passwd_callback);
    } else {
        func_00BB3380(20, 176, 124, 0, 0);
        goto end;
    }
    if (pkey == 0) {
        func_00BB3380(20, 176, j, 0, 0);
        goto end;
    }
    ret = func_00BCF9C8(ctx, pkey);
    func_00BACE68(pkey);
end:
    if (in != 0)
        func_00BA2B20(in);

    return ret;
}
