/* compiler: ee-gcc-2.9-as210-G0 */
/* Source correspondence: OpenSSL_0_9_1c, crypto/asn1/x_spki.c (d2i_NETSCAPE_SPKI). See
 * THIRD_PARTY.md. */
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
extern void func_00BB3380(int lib, int func, int reason, char *file, int line);
typedef struct asn1_ctx_st {
    unsigned char *p;
    int eos;
    int error;
    int inf;
    int tag;
    int xclass;
    long slen;
    unsigned char *max;
    unsigned char *q;
    unsigned char **pp;
    int line;
} ASN1_CTX;
typedef struct asn1_string_st ASN1_STRING;
extern ASN1_STRING *func_00B9CC38(ASN1_STRING **a, unsigned char **pp, long length);
extern int func_00B9F3D0(ASN1_CTX *c);
typedef struct X509_algor_st X509_ALGOR;
typedef struct Netscape_spkac_st NETSCAPE_SPKAC;
typedef struct Netscape_spki_st {
    NETSCAPE_SPKAC *spkac;
    X509_ALGOR *sig_algor;
    ASN1_STRING *signature;
} NETSCAPE_SPKI;
extern X509_ALGOR *func_00BE0020(X509_ALGOR **a, unsigned char **pp, long length);
extern int func_00B9F450(ASN1_CTX *c, long *length);
extern void func_00B9F740(unsigned char *address, int offset);
extern NETSCAPE_SPKAC *func_00BE1210(NETSCAPE_SPKAC **a, unsigned char **pp, long length);
extern NETSCAPE_SPKI *func_00BE1AE8();
extern void func_00BE1C60(NETSCAPE_SPKI *a);

NETSCAPE_SPKI *func_00BE17B0(NETSCAPE_SPKI **a, unsigned char **pp, long length) {
    ASN1_CTX c;
    NETSCAPE_SPKI *ret = (void *)0;
    c.pp = pp;
    c.q = *pp;
    c.error = 4;
    if ((a == ((void *)0)) || ((*a) == ((void *)0))) {
        if ((ret = (NETSCAPE_SPKI *)func_00BE1AE8()) == ((void *)0)) {
            c.line = 188;
            goto err;
        }
    } else
        ret = *a;
    ;
    c.p = *pp;
    c.max = (length == 0) ? (0) : (c.p + length);
    ;
    if (!func_00B9F450(&c, &length)) {
        c.line = 191;
        goto err;
    };
    c.q = c.p;
    if (func_00BE1210(&ret->spkac, &c.p, c.slen) == ((void *)0)) {
        c.line = 192;
        goto err;
    }
    c.slen -= c.p - c.q;
    ;
    c.q = c.p;
    if (func_00BE0020(&ret->sig_algor, &c.p, c.slen) == ((void *)0)) {
        c.line = 193;
        goto err;
    }
    c.slen -= c.p - c.q;
    ;
    c.q = c.p;
    if (func_00B9CC38(&ret->signature, &c.p, c.slen) == ((void *)0)) {
        c.line = 194;
        goto err;
    }
    c.slen -= c.p - c.q;
    ;
    if (!func_00B9F3D0(&c)) {
        c.line = 196;
        goto err;
    }
    *pp = c.p;
    if (a != ((void *)0))
        *a = ret;
    return ret;
    ;
err:
    func_00BB3380(13, 163, c.error, (void *)0, 0);

    func_00B9F740(*pp, (int)(c.q - (*pp)));
    if ((ret != ((void *)0)) && ((a == ((void *)0)) || ((*a) != ret)))
        func_00BE1C60(ret);
    return (void *)0;
}
