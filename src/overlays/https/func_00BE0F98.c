/* compiler: ee-gcc-2.9-G0 */
/* Adapted from SSLeay 0.9.1b, crypto/asn1/x_crl.c (i2d_X509_CRL_INFO).
 * licence: ssleay (see THIRD_PARTY.md) */
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
#include "pes6/https/ssleay_091b_types.h"

extern void func_001C6158(void *__base, size_t __nmemb, size_t __size,
                          int (*_compar)(const void *, const void *));
extern int func_00B9DB88(ASN1_STRING *a, unsigned char **pp);
extern int func_00B9EBC8(ASN1_STRING *a, unsigned char **pp);
extern int func_00BA0140(STACK *a, unsigned char **pp, int (*func)(), int ex_tag, int ex_class);
extern long func_00B9DF70(ASN1_STRING *a);
extern void func_00B9F1A0(unsigned char **pp, int constructed, int length, int tag, int xclass);
extern int func_00B9F348(int constructed, int length, int tag);
typedef struct X509_name_st {
    STACK *entries;
    int modified;
    BUF_MEM *bytes;
    unsigned long hash;
} X509_NAME;
typedef struct X509_crl_info_st {
    ASN1_STRING *version;
    X509_ALGOR *sig_alg;
    X509_NAME *issuer;
    ASN1_STRING *lastUpdate;
    ASN1_STRING *nextUpdate;
    STACK *revoked;
    STACK *extensions;
} X509_CRL_INFO;
extern int func_00BDFF50(X509_ALGOR *a, unsigned char **pp);
extern int func_00BE1D18(X509_EXTENSION *a, unsigned char **pp);
extern int func_00B9FA40(X509_NAME *a, unsigned char **pp);
extern int func_00BE0C60(X509_REVOKED *a, unsigned char **pp);
extern int func_00BE1D00(X509_REVOKED **a, X509_REVOKED **b);

int func_00BE0F98(X509_CRL_INFO *a, unsigned char **pp) {
    int v1 = 0;
    long l = 0;
    int r = 0;
    int ret = 0;
    unsigned char *p;
    if (a == 0)
        return 0;
    if (a->revoked->num != 0)
        func_001C6158((char *)a->revoked->data, a->revoked->num, sizeof(X509_REVOKED *),
                      (int (*)(const void *, const void *))func_00BE1D00);
    if ((a->version != 0) && ((l = func_00B9DF70(a->version)) != 0)) {
        ret += func_00B9DB88(a->version, (void *)0);
    }
    ret += func_00BDFF50(a->sig_alg, (void *)0);
    ret += func_00B9FA40(a->issuer, (void *)0);
    ret += func_00B9EBC8(a->lastUpdate, (void *)0);
    if (a->nextUpdate != 0) {
        ret += func_00B9EBC8(a->nextUpdate, (void *)0);
    }
    if ((a->revoked != 0) && (a->revoked->num != 0))
        ret += func_00BA0140(a->revoked, (void *)0, func_00BE0C60, 16, 0x00);
    if ((a->extensions != 0) && (a->extensions->num != 0)) {
        v1 = func_00BA0140(a->extensions, (void *)0, func_00BE1D18, 16, 0x00);
        ret += func_00B9F348(1, v1, 0);
    };
    r = func_00B9F348(1, ret, 16);
    if (pp == 0)
        return r;
    p = *pp;
    func_00B9F1A0(&p, 1, ret, 16, 0x00);
    if ((a->version != 0) && (l != 0)) {
        func_00B9DB88(a->version, &p);
    }
    func_00BDFF50(a->sig_alg, &p);
    func_00B9FA40(a->issuer, &p);
    func_00B9EBC8(a->lastUpdate, &p);
    if (a->nextUpdate != 0) {
        func_00B9EBC8(a->nextUpdate, &p);
    }
    if ((a->revoked != 0) && (a->revoked->num != 0))
        func_00BA0140(a->revoked, &p, func_00BE0C60, 16, 0x00);
    if ((a->extensions != 0) && (a->extensions->num != 0)) {
        func_00B9F1A0(&p, 1, v1, 0, 0x80);
        func_00BA0140(a->extensions, &p, func_00BE1D18, 16, 0x00);
    };
    *pp = p;
    return r;
}
