/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_2b, ssl/s3_clnt.c (ssl3_send_client_certificate). See THIRD_PARTY.md. */
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
typedef struct x509_st X509;
typedef struct evp_pkey_st EVP_PKEY;
typedef struct {
    X509 *x509;
    EVP_PKEY *privatekey;
} CertKey;
typedef struct {
    int pad;
    CertKey *key;
} CERT;
typedef struct {
    unsigned char reserved00[0xdc];
    int (*client_cert_cb)(void *, X509 **, EVP_PKEY **);
} SSL_CTX;
typedef struct {
    unsigned char reserved00[0x16c];
    int cert_req;
} SSL3_STATE;
typedef struct {
    int version;
    unsigned char reserved04[0x14];
    int rwstate;
    unsigned char reserved1c[20];
    int state;
    unsigned char reserved34[8];
    void *init_buf;
    int init_num, init_off;
    unsigned char reserved48[12];
    SSL3_STATE *s3;
    unsigned char reserved58[0x2c];
    CERT *cert;
    unsigned char reserved88[0x54];
    SSL_CTX *ctx;
} SSL;
extern int func_00BCF310(SSL *, X509 *);
extern int func_00BCF568(SSL *, EVP_PKEY *);
extern void func_00BACE68(EVP_PKEY *);
extern void func_00BABE90(X509 *);
extern void func_00BB3380(int, int, int, char *, int);
extern int func_00BD4A88(SSL *, int);
extern void func_00BD4858(SSL *, int, int);
extern unsigned long func_00BCA880(SSL *, X509 *);
int func_00BD3050(SSL *s) {
    X509 *x509 = (void *)0;
    EVP_PKEY *pkey = (void *)0;
    int i;
    unsigned long l;
    if (s->state == (0x170 | 0x1000)) {
        if (((s->cert == ((void *)0)) || (s->cert->key->x509 == ((void *)0))) ||
            (s->cert->key->privatekey == ((void *)0)))
            s->state = 0x171 | 0x1000;
        else
            s->state = 0x172 | 0x1000;
    }
    if (s->state == (0x171 | 0x1000)) {
        i = 0;
        if (s->ctx->client_cert_cb != ((void *)0))
            i = s->ctx->client_cert_cb(s, &x509, &pkey);
        if (i < 0) {
            s->rwstate = 4;
            return -1;
        }
        s->rwstate = 1;
        if (((i == 1) && (pkey != ((void *)0))) && (x509 != ((void *)0))) {
            s->state = 0x171 | 0x1000;
            if ((!func_00BCF310(s, x509)) || (!func_00BCF568(s, pkey)))
                i = 0;
        } else if (i == 1) {
            i = 0;
            func_00BB3380(20, 152, 106, (void *)0, 0);
        }
        if (x509 != ((void *)0))
            func_00BABE90(x509);
        if (pkey != ((void *)0))
            func_00BACE68(pkey);
        if (i == 0) {
            if (s->version == 0x0300) {
                s->s3->cert_req = 0;
                func_00BD4858(s, 1, 41);
                return 1;
            } else {
                s->s3->cert_req = 2;
            }
        }
        s->state = 0x172 | 0x1000;
    }
    if (s->state == (0x172 | 0x1000)) {
        s->state = 0x173 | 0x1000;
        l = func_00BCA880(s, (s->s3->cert_req == 2) ? ((void *)0) : (s->cert->key->x509));
        s->init_num = (int)l;
        s->init_off = 0;
    }
    return func_00BD4A88(s, 22);
}
