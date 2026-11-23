/* compiler: ee-gcc-2.9-nsa-G0 */
/* OpenSSL_0_9_3a, crypto/asn1/d2i_s_pu.c (d2i_DSAPublicKey). See THIRD_PARTY.md. */
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
typedef struct bignum_st BIGNUM;
extern BIGNUM *func_00BA4890(unsigned char *s, int len, BIGNUM *ret);
typedef struct dsa_st {
    unsigned char reserved_00[8];
    int write_params;
    BIGNUM *p;
    BIGNUM *q;
    BIGNUM *g;
    BIGNUM *pub_key;
    unsigned char reserved_1c[24];
} DSA;
extern DSA *func_00BB1FE0(void);
extern void func_00BB2260(DSA *r);
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
typedef struct asn1_string_st {
    int length;
    unsigned char reserved_04[4];
    unsigned char *data;
    unsigned char reserved_0c[12];
} ASN1_STRING;
extern void func_00B9F690(ASN1_STRING *a);
extern ASN1_STRING *func_00B9DD38(ASN1_STRING **a, unsigned char **pp, long length);
extern int func_00B9F3D0(ASN1_CTX *c);
extern int func_00B9F450(ASN1_CTX *c, long *length);

DSA *func_00BAED68(DSA **a, unsigned char **pp, long length) {
    int i = 130;
    ASN1_STRING *bs = (void *)0;
    ASN1_CTX c;
    DSA *ret = (void *)0;
    c.pp = pp;
    c.q = *pp;
    c.error = 4;
    if ((a == ((void *)0)) || ((*a) == ((void *)0))) {
        if ((ret = (DSA *)func_00BB1FE0()) == ((void *)0)) {
            c.line = 36;
            goto err;
        }
    } else
        ret = *a;

    c.p = *pp;
    c.max = (length == 0) ? (0) : (c.p + length);

    if ((length != 0) && (((*c.p) & (~0x20)) == (0x00 | 2))) {
        c.slen = length;
        c.q = c.p;
        if (func_00B9DD38(&bs, &c.p, c.slen) == ((void *)0)) {
            c.line = 43;
            goto err;
        }
        c.slen -= c.p - c.q;

        if ((ret->pub_key = func_00BA4890(bs->data, bs->length, ret->pub_key)) == ((void *)0))
            goto err_bn;
        ret->write_params = 0;
    } else {
        if (!func_00B9F450(&c, &length)) {
            c.line = 50;
            goto err;
        }

        c.q = c.p;
        if (func_00B9DD38(&bs, &c.p, c.slen) == ((void *)0)) {
            c.line = 51;
            goto err;
        }
        c.slen -= c.p - c.q;

        if ((ret->pub_key = func_00BA4890(bs->data, bs->length, ret->p)) == ((void *)0))
            goto err_bn;
        c.q = c.p;
        if (func_00B9DD38(&bs, &c.p, c.slen) == ((void *)0)) {
            c.line = 56;
            goto err;
        }
        c.slen -= c.p - c.q;

        if ((ret->p = func_00BA4890(bs->data, bs->length, ret->p)) == ((void *)0))
            goto err_bn;
        c.q = c.p;
        if (func_00B9DD38(&bs, &c.p, c.slen) == ((void *)0)) {
            c.line = 59;
            goto err;
        }
        c.slen -= c.p - c.q;

        if ((ret->q = func_00BA4890(bs->data, bs->length, ret->q)) == ((void *)0))
            goto err_bn;
        c.q = c.p;
        if (func_00B9DD38(&bs, &c.p, c.slen) == ((void *)0)) {
            c.line = 62;
            goto err;
        }
        c.slen -= c.p - c.q;

        if ((ret->g = func_00BA4890(bs->data, bs->length, ret->g)) == ((void *)0))
            goto err_bn;
        ret->write_params = 1;
    }
    func_00B9F690((ASN1_STRING *)bs);
    bs = (void *)0;
    if (!func_00B9F3D0(&c)) {
        c.line = 70;
        goto err;
    }
    *pp = c.p;
    if (a != ((void *)0))
        *a = ret;
    return ret;

err_bn:
    i = 0x803;

err:
    func_00BB3380(13, 139, i, (void *)0, 0);

    if ((ret != ((void *)0)) && ((a == ((void *)0)) || ((*a) != ret)))
        func_00BB2260(ret);
    if (bs != ((void *)0))
        func_00B9F690((ASN1_STRING *)bs);
    return (void *)0;
}
