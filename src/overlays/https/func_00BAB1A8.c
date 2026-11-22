/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_1c, crypto/x509/by_file.c, X509_load_cert_file. See THIRD_PARTY.md. */
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
extern void func_00BB3380(int lib, int func, int reason, char *file, int line);
extern unsigned long func_00BB3590(void);
extern void func_00BB3538(void);
typedef struct x509_st X509;
typedef struct x509_store_st X509_STORE;
typedef struct x509_lookup_st {
    unsigned char reserved_00[16];
    X509_STORE *store_ctx;
} X509_LOOKUP;
extern int func_00BDD8A8(X509_STORE *ctx, X509 *x);
extern X509 *func_00BDDE58(BIO *bp, X509 *x509);
extern void func_00BE1C60(X509 *a);
extern X509 *func_00BBABC8(BIO *bp, X509 **x, int (*cb)());

int func_00BAB1A8(X509_LOOKUP *ctx, char *file, int type) {
    int ret = 0;
    BIO *in = (void *)0;
    int i;
    int count = 0;
    X509 *x = (void *)0;
    if (file == ((void *)0))
        return 1;
    in = func_00BA29D8(func_00BA92E0());
    if ((in == ((void *)0)) || (func_00BA2FC0(in, 108, 0x01 | 0x02, file) <= 0)) {
        func_00BB3380(11, 225, 2050, (void *)0, 0);
        goto err;
    }
    if (type == 1) {
        for (;;) {
            x = func_00BBABC8(in, (void *)0, (void *)0);
            if (x == ((void *)0)) {
                if ((((int)(func_00BB3590() & 0xfffL)) == 108) && (count > 0)) {
                    func_00BB3538();
                    break;
                } else {
                    func_00BB3380(11, 225, 2057, (void *)0, 0);
                    goto err;
                }
            }
            i = func_00BDD8A8(ctx->store_ctx, x);
            if (!i)
                goto err;
            count++;
            func_00BE1C60(x);
            x = (void *)0;
        }

        ret = count;
    } else if (type == 2) {
        x = func_00BDDE58(in, (void *)0);
        if (x == ((void *)0)) {
            func_00BB3380(11, 225, 2061, (void *)0, 0);
            goto err;
        }
        i = func_00BDD8A8(ctx->store_ctx, x);
        if (!i)
            goto err;
        ret = i;
    } else {
        func_00BB3380(11, 225, 154, (void *)0, 0);
        goto err;
    }
err:
    if (x != ((void *)0))
        func_00BE1C60(x);

    if (in != ((void *)0))
        func_00BA2B20(in);
    return ret;
}
