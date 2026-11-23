/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_1c, crypto/bn/bn_gcd.c (BN_mod_inverse). See THIRD_PARTY.md. */
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
typedef struct bignum_st {
    unsigned long *d;
    int top;
    int max;
    int neg;
    int flags;
} BIGNUM;
typedef struct bignum_ctx {
    int tos;
    BIGNUM bn[12 + 1];
    unsigned char reserved_108[4];
} BN_CTX;
extern BIGNUM *func_00BA4490(void);
extern BIGNUM *func_00BA46D0(BIGNUM *a, BIGNUM *b);
extern int func_00BA3648(BIGNUM *r, BIGNUM *a, BIGNUM *b);
extern int func_00BA3248(BIGNUM *r, BIGNUM *a, BIGNUM *b);
extern int func_00BA3E08(BIGNUM *rem, BIGNUM *m, BIGNUM *d, BN_CTX *ctx);
extern int func_00BA3780(BIGNUM *dv, BIGNUM *rem, BIGNUM *m, BIGNUM *d, BN_CTX *ctx);
extern int func_00BA56E8(BIGNUM *r, BIGNUM *a, BIGNUM *b, BN_CTX *ctx);
extern int func_00BA4808(BIGNUM *a, unsigned long w);
extern void func_00BA4338(BIGNUM *a);

BIGNUM *func_00BA3E40(BIGNUM *in, BIGNUM *a, BIGNUM *n, BN_CTX *ctx) {
    BIGNUM *A;
    BIGNUM *B;
    BIGNUM *X;
    BIGNUM *Y;
    BIGNUM *M;
    BIGNUM *D;
    BIGNUM *R;
    BIGNUM *T;
    BIGNUM *ret = 0;
    int sign;

    A = &ctx->bn[ctx->tos];
    B = &ctx->bn[ctx->tos + 1];
    X = &ctx->bn[ctx->tos + 2];
    D = &ctx->bn[ctx->tos + 3];
    M = &ctx->bn[ctx->tos + 4];
    Y = &ctx->bn[ctx->tos + 5];
    ctx->tos += 6;
    if (in == 0)
        R = func_00BA4490();
    else
        R = in;
    if (R == 0)
        goto err;
    func_00BA4808(X, 0);
    func_00BA4808(Y, 1);
    if (func_00BA46D0(A, a) == 0)
        goto err;
    if (func_00BA46D0(B, n) == 0)
        goto err;
    sign = 1;
    while (!((B->top == 0) || ((B->top == 1) && (B->d[0] == ((unsigned long)0))))) {
        if (!func_00BA3780(D, M, A, B, ctx))
            goto err;
        T = A;
        A = B;
        B = M;
        if (!func_00BA56E8(T, D, X, ctx))
            goto err;
        if (!func_00BA3248(T, T, Y))
            goto err;
        M = Y;
        Y = X;
        X = T;
        sign = -sign;
    }

    if (sign < 0) {
        if (!func_00BA3648(Y, n, Y))
            goto err;
    }
    if ((A->top == 1) && (A->d[0] == ((unsigned long)1))) {
        if (!func_00BA3E08(R, Y, n, ctx))
            goto err;
    } else {
        goto err;
    }
    ret = R;
err:
    if ((ret == 0) && (in == 0))
        func_00BA4338(R);

    ctx->tos -= 6;
    return ret;
}
