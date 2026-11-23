/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_1c, crypto/x509/x509_vfy.c (X509_STORE_add_cert). See THIRD_PARTY.md. */
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
extern char D_00C4E4C8[]; /* ./crypto/x509/../../crypto/x509/x509_st.c */
typedef unsigned int size_t;
extern void func_00BC0A88(void *);
extern void *func_00BC0A38(size_t __size);
extern void func_00BC0748(int mode, int type, char *file, int line);
extern void func_00BB3380(int lib, int func, int reason, char *file, int line);
typedef struct lhash_st LHASH;
extern char *func_00BB61D0(LHASH *lh, char *data);
extern char *func_00BB62C0(LHASH *lh, char *data);
typedef struct evp_pkey_st EVP_PKEY;
typedef struct x509_st X509;
typedef struct X509_crl_st X509_CRL;
typedef struct x509_object_st {
    int type;
    union {
        char *ptr;
        X509 *x509;
        X509_CRL *crl;
        EVP_PKEY *pkey;
    } data;
} X509_OBJECT;
typedef struct x509_store_st {
    unsigned char reserved_00[4];
    LHASH *certs;
    unsigned char reserved_08[24];
} X509_STORE;
extern void func_00BDD620(X509_OBJECT *a);
extern void func_00BDD640(X509_OBJECT *a);

int func_00BDD788(X509_STORE *ctx, X509 *x) {
    X509_OBJECT *obj;
    X509_OBJECT *r;
    int ret = 1;
    if (x == 0)
        return 0;
    obj = (X509_OBJECT *)func_00BC0A38(sizeof(X509_OBJECT));
    if (obj == 0) {
        func_00BB3380(11, 232, 1 | 32, 0, 0);
        return 0;
    }
    obj->type = 1;
    obj->data.x509 = x;
    func_00BC0748(1 | 8, 11, D_00C4E4C8, 72);
    func_00BDD620(obj);
    r = (X509_OBJECT *)func_00BB61D0(ctx->certs, (char *)obj);
    if (r != 0) {
        func_00BB62C0(ctx->certs, (char *)obj);
        func_00BDD640(obj);
        func_00BC0A88((char *)obj);
        func_00BB61D0(ctx->certs, (char *)r);
        func_00BB3380(11, 232, 155, 0, 0);
        ret = 0;
    }
    func_00BC0748(2 | 8, 11, D_00C4E4C8, 87);
    return ret;
}
