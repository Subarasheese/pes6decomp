/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_1c, crypto/x509/x509_v3.c, X509v3_add_ext. See THIRD_PARTY.md. */
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
typedef struct stack_st {
    int num;
    char **data;
    int sorted;
    int num_alloc;
    int (*comp)();
} STACK;
extern STACK *func_00BD9A70(int (*cmp)());
extern void func_00BDA038(STACK *);
extern int func_00BD9B10(STACK *sk, char *data, int where);
extern void func_00BB3380(int lib, int func, int reason, char *file, int line);
typedef struct asn1_object_st {
    char *sn;
    char *ln;
    int nid;
    int length;
    unsigned char *data;
    int flags;
} ASN1_OBJECT;
typedef struct asn1_string_st {
    int length;
    int type;
    unsigned char *data;
    long flags;
} ASN1_STRING;
typedef struct X509_extension_st {
    ASN1_OBJECT *object;
    short critical;
    short netscape_hack;
    ASN1_STRING *value;
    long argl;
    char *argp;
    void (*ex_free)();
} X509_EXTENSION;
extern X509_EXTENSION *func_00BDDDF8(X509_EXTENSION *ex);
extern void func_00BE20F0(X509_EXTENSION *a);

STACK *func_00BDE960(STACK **x, X509_EXTENSION *ex, int loc) {
    X509_EXTENSION *new_ex = (void *)0;
    int n;
    STACK *sk = (void *)0;
    if ((x != ((void *)0)) && ((*x) == ((void *)0))) {
        if ((sk = func_00BD9A70((void *)0)) == ((void *)0))
            goto err;
    } else
        sk = *x;
    n = sk->num;
    if (loc > n)
        loc = n;
    else if (loc < 0)
        loc = n;
    if ((new_ex = func_00BDDDF8(ex)) == ((void *)0))
        goto err2;
    if (!func_00BD9B10(sk, (char *)new_ex, loc))
        goto err;
    if ((x != ((void *)0)) && ((*x) == ((void *)0)))
        *x = sk;
    return sk;
err:
    func_00BB3380(11, 217, 1 | 32, (void *)0, 0);

err2:
    if (new_ex != ((void *)0))
        func_00BE20F0(new_ex);

    if (sk != ((void *)0))
        func_00BDA038(sk);
    return (void *)0;
}
