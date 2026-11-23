/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL, ssl/ssl_lib.c. See THIRD_PARTY.md. */
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
#include "pes6/https/ssl_lifetime.h"

extern ExtraMethods *func_00BD9638(void);
extern int func_00BC0778(int *count, int change, int lock, const char *file, int line);
extern char D_00C4CAD8[];
extern void func_00BB4FC0(STACK *methods, void *owner, CRYPTO_EX_DATA *data);
extern BIO *func_00BA3138(BIO *bio);
extern int func_00BA2B20(BIO *bio);
extern void func_00BA31B8(BIO *bio);
extern void func_00BAA588(void *);
extern void func_00BDA038(STACK *);
extern void func_00BD9470(SSL *);
extern void func_00BD8F78(void *);
extern void func_00BCEFE8(SSL *);
extern void func_00BDA010(STACK *, void (*freeEntry)(void *));
extern void func_00BABE90(void *);
extern void func_00BAC3B0(void *);
extern void func_00BCD3E8(Cert *);
extern void func_00BB48D0(void *);
extern void func_00BCE720(SSL_CTX *);
extern void func_00BC0A88(void *);

void func_00BCD948(SSL *s) {
    STACK *methods = func_00BD9638()->connectionMethods;
    if (func_00BC0778(&s->references, -1, 15, D_00C4CAD8, 352) > 0)
        return;
    func_00BB4FC0(methods, s, &s->extra);
    if (s->bbio) {
        if (s->bbio == s->wbio)
            s->wbio = func_00BA3138(s->bbio);
        func_00BA2B20(s->bbio);
        s->bbio = 0;
    }
    if (s->rbio)
        func_00BA31B8(s->rbio);
    if (s->wbio && s->wbio != s->rbio)
        func_00BA31B8(s->wbio);
    if (s->initBuffer)
        func_00BAA588(s->initBuffer);
    if (s->cipherList)
        func_00BDA038(s->cipherList);
    if (s->cipherListById)
        func_00BDA038(s->cipherListById);
    if (s->session) {
        func_00BD9470(s);
        func_00BD8F78(s->session);
    }
    func_00BCEFE8(s);
    if (s->peerCertificates)
        func_00BDA010(s->peerCertificates, func_00BABE90);
    if (s->cert)
        func_00BCD3E8(s->cert);
    if (s->additionalData)
        func_00BB48D0(s->additionalData);
    if (s->ctx)
        func_00BCE720(s->ctx);
    if (s->clientCA)
        func_00BDA010(s->clientCA, func_00BAC3B0);
    if (s->method)
        s->method->ssl_free(s);
    func_00BC0A88(s);
}
