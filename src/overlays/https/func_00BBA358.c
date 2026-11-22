/* compiler: ee-gcc-2.9-as210-G0 */
/* Source correspondence: OpenSSL_0_9_1c, crypto/evp/p_lib.c (EVP_PKEY_copy_parameters). See
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
typedef struct bignum_st BIGNUM;
extern void func_00BA4338(BIGNUM *a);
extern BIGNUM *func_00BA4690(BIGNUM *a);
typedef struct dsa_st {
    unsigned char reserved_00[12];
    BIGNUM *p;
    BIGNUM *q;
    BIGNUM *g;
    unsigned char reserved_18[28];
} DSA;
typedef struct evp_pkey_st {
    int type;
    unsigned char reserved_04[8];
    union {
        char *ptr;
        struct rsa_st *rsa;
        struct dsa_st *dsa;
        struct dh_st *dh;
    } pkey;
    unsigned char reserved_10[8];
} EVP_PKEY;
extern int func_00BBA490(EVP_PKEY *pkey);

int func_00BBA358(EVP_PKEY *to, EVP_PKEY *from) {
    if (to->type != from->type) {
        func_00BB3380(6, 104, 102, (void *)0, 0);
        goto err;
    }
    if (func_00BBA490(from)) {
        func_00BB3380(6, 104, 115, (void *)0, 0);
        goto err;
    }
    if (to->type == 116) {
        BIGNUM *a;
        if ((a = func_00BA4690(from->pkey.dsa->p)) == ((void *)0))
            goto err;
        if (to->pkey.dsa->p != ((void *)0))
            func_00BA4338(to->pkey.dsa->p);
        to->pkey.dsa->p = a;
        if ((a = func_00BA4690(from->pkey.dsa->q)) == ((void *)0))
            goto err;
        if (to->pkey.dsa->q != ((void *)0))
            func_00BA4338(to->pkey.dsa->q);
        to->pkey.dsa->q = a;
        if ((a = func_00BA4690(from->pkey.dsa->g)) == ((void *)0))
            goto err;
        if (to->pkey.dsa->g != ((void *)0))
            func_00BA4338(to->pkey.dsa->g);
        to->pkey.dsa->g = a;
    }
    return 1;
err:
    return 0;
}
