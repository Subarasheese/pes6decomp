/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_1c, ssl/ssl_cert.c (ssl_cert_free). See THIRD_PARTY.md. */
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
extern char D_00C4CAA8[];
typedef struct stack_st STACK;
extern void func_00BDA010(STACK *st, void (*func)());
typedef struct rsa_st RSA;
extern void func_00BC6730(RSA *r);
typedef struct dh_st DH;
extern void func_00BB1A28(DH *dh);
typedef struct evp_pkey_st EVP_PKEY;
extern void func_00BACE68(EVP_PKEY *pkey);
typedef struct x509_st X509;
extern void func_00BABE90(X509 *a);
extern void func_00BC0A88(void *);
extern int func_00BC0778(int *pointer, int amount, int type, char *file, int line);
typedef struct cert_pkey_st {
    X509 *x509;
    EVP_PKEY *privatekey;
} CERT_PKEY;
typedef struct cert_st {
    unsigned char reserved_00[32];
    RSA *rsa_tmp;
    RSA *rsa_tmp2;
    RSA *rsa_tmp3;
    DH *dh_tmp;
    DH *dh_tmp2;
    unsigned char reserved_34[12];
    CERT_PKEY pkeys[5];
    STACK *cert_chain;
    int references;
} CERT;

void func_00BCD3E8(CERT *c) {
    int i;
    i = func_00BC0778(&c->references, -1, 13, D_00C4CAA8, 79);
    if (i > 0)
        return;
    if (c->rsa_tmp)
        func_00BC6730(c->rsa_tmp);
    if (c->rsa_tmp2)
        func_00BC6730(c->rsa_tmp2);
    if (c->rsa_tmp3)
        func_00BC6730(c->rsa_tmp3);
    if (c->dh_tmp)
        func_00BB1A28(c->dh_tmp);
    if (c->dh_tmp2)
        func_00BB1A28(c->dh_tmp2);
    for (i = 0; i < 5; i++) {
        if (c->pkeys[i].x509 != ((void *)0))
            func_00BABE90(c->pkeys[i].x509);
        if (c->pkeys[i].privatekey != ((void *)0))
            func_00BACE68(c->pkeys[i].privatekey);
    }

    if (c->cert_chain != ((void *)0))
        func_00BDA010(c->cert_chain, func_00BABE90);
    func_00BC0A88((char *)c);
}
