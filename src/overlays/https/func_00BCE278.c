/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_1c, ssl/ssl_lib.c, ssl_bytes_to_cipher_list. See THIRD_PARTY.md. */
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
extern int func_00BD9E98(STACK *st, char *data);
extern void func_00BD9F40(STACK *st);
extern void func_00BB3380(int lib, int func, int reason, char *file, int line);
typedef struct ssl_cipher_st SSL_CIPHER;
typedef struct ssl_method_st {
    unsigned char reserved_00[56];
    SSL_CIPHER *(*get_cipher_by_char)();
    int (*put_cipher_by_char)();
    unsigned char reserved_40[24];
} SSL_METHOD;
typedef struct ssl_st {
    unsigned char reserved_00[8];
    SSL_METHOD *method;
    unsigned char reserved_0c[188];
} SSL;

STACK *func_00BCE278(SSL *s, unsigned char *p, int num, STACK **skp) {
    SSL_CIPHER *c;
    STACK *sk;
    int i;
    int n;
    n = s->method->put_cipher_by_char((void *)0, (void *)0);
    if ((num % n) != 0) {
        func_00BB3380(20, 162, 151, (void *)0, 0);
        return (void *)0;
    }
    if ((skp == ((void *)0)) || ((*skp) == ((void *)0)))
        sk = func_00BD9A70((void *)0);
    else {
        sk = *skp;
        func_00BD9F40(sk);
    }
    for (i = 0; i < num; i += n) {
        c = s->method->get_cipher_by_char(p);
        p += n;
        if (c != ((void *)0)) {
            if (!func_00BD9E98(sk, (char *)c)) {
                func_00BB3380(20, 162, 1 | 32, (void *)0, 0);
                goto err;
            }
        }
    }

    if (skp != ((void *)0))
        *skp = sk;
    return sk;
err:
    if ((skp == ((void *)0)) || ((*skp) == ((void *)0)))
        func_00BDA038(sk);

    return (void *)0;
}
