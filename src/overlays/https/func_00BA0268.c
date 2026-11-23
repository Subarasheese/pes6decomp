/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_3a, crypto/asn1/a_set.c (d2i_ASN1_SET). See THIRD_PARTY.md. */
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
typedef struct stack_st STACK;
extern STACK *func_00BD9A70(int (*cmp)());
extern void func_00BDA038(STACK *);
extern void func_00BDA010(STACK *st, void (*func)());
extern int func_00BD9E98(STACK *st, char *data);
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
extern int func_00B9EFB0(unsigned char **pp, long *plength, int *ptag, int *pclass, long omax);
extern int func_00B9EF68(unsigned char **p, long len);
extern void func_00B9F740(unsigned char *address, int offset);

STACK *func_00BA0268(STACK **a, unsigned char **pp, long length, char *(*func)(),
                     void (*free_func)(), int ex_tag, int ex_class) {
    ASN1_CTX c;
    STACK *ret = (void *)0;
    if ((a == ((void *)0)) || ((*a) == ((void *)0))) {
        if ((ret = func_00BD9A70((void *)0)) == ((void *)0))
            goto err;
    } else
        ret = *a;
    c.p = *pp;
    c.max = (length == 0) ? (0) : (c.p + length);
    c.inf = func_00B9EFB0(&c.p, &c.slen, &c.tag, &c.xclass, c.max - c.p);
    if (c.inf & 0x80)
        goto err;
    if (ex_class != c.xclass) {
        func_00BB3380(13, 132, 100, (void *)0, 0);
        goto err;
    }
    if (ex_tag != c.tag) {
        func_00BB3380(13, 132, 105, (void *)0, 0);
        goto err;
    }
    if ((c.slen + c.p) > c.max) {
        func_00BB3380(13, 132, 125, (void *)0, 0);
        goto err;
    }
    if (c.inf == (0x20 + 1))
        c.slen = length + ((*pp) - c.p);
    c.max = c.p + c.slen;
    while (c.p < c.max) {
        char *s;
        if (((c.inf & 1) == 0) ? (c.slen <= 0) : (c.eos = func_00B9EF68(&c.p, c.slen)))
            break;
        if ((s = func((void *)0, &c.p, c.slen, c.max - c.p)) == ((void *)0)) {
            func_00BB3380(13, 132, 112, (void *)0, 0);
            func_00B9F740(*pp, (int)(c.q - (*pp)));
            goto err;
        }
        if (!func_00BD9E98(ret, s))
            goto err;
    }

    if (a != ((void *)0))
        *a = ret;
    *pp = c.p;
    return ret;
err:
    if ((ret != ((void *)0)) && ((a == ((void *)0)) || ((*a) != ret))) {
        if (free_func != ((void *)0))
            func_00BDA010(ret, free_func);
        else
            func_00BDA038(ret);
    }

    return (void *)0;
}
