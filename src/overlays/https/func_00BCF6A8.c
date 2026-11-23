/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_1c, ssl/ssl_rsa.c (ssl_set_cert). See THIRD_PARTY.md. */
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
typedef struct rsa_st RSA;
extern int func_00BC7068(RSA *r);
typedef struct evp_pkey_st {
    int type;
    unsigned char reserved_04[8];
    union {
        char *ptr;
        struct rsa_st *rsa;
        struct dsa_st *dsa;
        struct dh_st *dh;
    } pkey;
    unsigned char reserved_10[8];
} EVP_PKEY;
extern void func_00BACE68(EVP_PKEY *pkey);
extern int func_00BD9740(EVP_PKEY *to, EVP_PKEY *from);
typedef struct x509_st X509;
extern void func_00BABE90(X509 *a);
extern EVP_PKEY *func_00BAC160(X509 *x);
extern int func_00BACD48(X509 *x509, EVP_PKEY *pkey);
extern void func_00BB3380(int lib, int func, int reason, char *file, int line);
extern void func_00BB3538(void);
typedef struct cert_pkey_st {
    X509 *x509;
    EVP_PKEY *privatekey;
} CERT_PKEY;
typedef struct cert_st {
    unsigned char reserved_00[4];
    CERT_PKEY *key;
    int valid;
    unsigned char reserved_0c[52];
    CERT_PKEY pkeys[5];
    unsigned char reserved_68[8];
} CERT;
extern int func_00BCAF18(X509 *x, EVP_PKEY *pkey);
extern void func_00BABFF8(X509 *);

int func_00BCF6A8(CERT *c, X509 *x) {
    EVP_PKEY *pkey;
    int i;
    int ok = 0;
    int bad = 0;
    pkey = func_00BAC160(x);
    if (pkey == ((void *)0)) {
        func_00BB3380(20, 191, 268, (void *)0, 0);
        return 0;
    }
    i = func_00BCAF18(x, pkey);
    if (i < 0) {
        func_00BB3380(20, 191, 247, (void *)0, 0);
        return 0;
    }
    if (c->pkeys[i].privatekey != ((void *)0)) {
        func_00BD9740(pkey, c->pkeys[i].privatekey);
        func_00BB3538();
        if ((c->pkeys[i].privatekey->type == 6) &&
            (func_00BC7068(c->pkeys[i].privatekey->pkey.rsa) & 0x01))
            ok = 1;
        else {
            if (!func_00BACD48(x, c->pkeys[i].privatekey)) {
                if ((i == 3) || (i == 4)) {
                    i = (i == 3) ? (4) : (3);
                    if (c->pkeys[i].privatekey == ((void *)0))
                        ok = 1;
                    else {
                        if (!func_00BACD48(x, c->pkeys[i].privatekey))
                            bad = 1;
                        else
                            ok = 1;
                    }
                } else
                    bad = 1;
            } else
                ok = 1;
        }
    } else
        ok = 1;
    if (bad) {
        func_00BACE68(c->pkeys[i].privatekey);
        c->pkeys[i].privatekey = (void *)0;
    }
    if (c->pkeys[i].x509 != ((void *)0))
        func_00BABE90(c->pkeys[i].x509);
    func_00BABFF8(x);
    c->pkeys[i].x509 = x;
    c->key = &c->pkeys[i];
    c->valid = 0;
    return 1;
}
