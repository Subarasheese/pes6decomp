/* compiler: ee-gcc-2.9-G0 */
/* Source: OpenSSL_0_9_1c, crypto/asn1/i2d_dsap.c (i2d_DSAparams). */
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
typedef unsigned int size_t;
extern void func_00BC0A88(void *);
extern void *func_00BC0A38(size_t __size);
extern void func_00BB3380(int lib, int func, int reason, char *file, int line);
typedef struct bignum_st {
    unsigned long *d;
    int top;
    int max;
    int neg;
    int flags;
} BIGNUM;
extern int func_00BA4268(BIGNUM *a);
extern int func_00BA49D0(BIGNUM *a, unsigned char *to);
typedef struct asn1_string_st {
    int length;
    int type;
    unsigned char *data;
    long flags;
} ASN1_STRING;
extern int func_00B9DB88(ASN1_STRING *a, unsigned char **pp);
extern void func_00B9F1A0(unsigned char **pp, int constructed, int length, int tag, int xclass);
extern int func_00B9F348(int constructed, int length, int tag);
typedef struct dsa_st {
    int pad;
    int version;
    int write_params;
    BIGNUM *p;
    BIGNUM *q;
    BIGNUM *g;
    BIGNUM *pub_key;
    BIGNUM *priv_key;
    BIGNUM *kinv;
    BIGNUM *r;
    int flags;
    char *method_mont_p;
    int references;
} DSA;

int func_00BB5BF8(DSA *a, unsigned char **pp) {
    BIGNUM *num[3];
    ASN1_STRING bs;
    unsigned int j;
    unsigned int i;
    unsigned int tot = 0;
    unsigned int len;
    unsigned int max = 0;
    int t;
    int ret = -1;
    unsigned char *p;
    if (a == ((void *)0))
        return 0;
    num[0] = a->p;
    num[1] = a->q;
    num[2] = a->g;
    for (i = 0; i < 3; i++) {
        if (num[i] == ((void *)0))
            continue;
        j = func_00BA4268(num[i]);
        len = (j == 0) ? (0) : ((j / 8) + 1);
        if (len > max)
            max = len;
        len = func_00B9F348(0, len, (num[i]->neg) ? (2 + 0x100) : (2));
        tot += len;
    }

    t = func_00B9F348(1, tot, 16);
    if (pp == ((void *)0))
        return t;
    p = *pp;
    func_00B9F1A0(&p, 1, tot, 16, 0x00);
    bs.type = 2;
    bs.data = (unsigned char *)func_00BC0A38(max + 4);
    if (bs.data == ((void *)0)) {
        func_00BB3380(13, 178, 1 | 32, (void *)0, 0);
        goto err;
    }
    for (i = 0; i < 3; i++) {
        if (num[i] == ((void *)0))
            continue;
        bs.length = func_00BA49D0(num[i], bs.data);
        func_00B9DB88(&bs, &p);
    }

    func_00BC0A88((char *)((char *)bs.data));
    ret = t;
err:
    *pp = p;

    return ret;
}
