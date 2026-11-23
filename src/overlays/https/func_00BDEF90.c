/* compiler: ee-gcc-2.9-nsa-G0 */
/* OpenSSL_0_9_1c, crypto/x509/x509_vfy.c (X509_verify_cert). See THIRD_PARTY.md. */
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
extern char D_00C4E5D8[];
typedef struct stack_st {
    int num;
    char **data;
    unsigned char reserved_08[12];
} STACK;
extern STACK *func_00BD9A70(int (*cmp)());
extern void func_00BDA038(STACK *);
extern char *func_00BD9C10(STACK *st, char *p);
extern int func_00BD9E98(STACK *st, char *data);
extern char *func_00BD9F08(STACK *st);
extern STACK *func_00BD99D8(STACK *st);
extern int func_00BC0778(int *pointer, int amount, int type, char *file, int line);
extern void func_00BB3380(int lib, int func, int reason, char *file, int line);
typedef struct evp_pkey_st EVP_PKEY;
typedef struct X509_name_st X509_NAME;
typedef struct x509_st {
    unsigned char reserved_00[20];
    int references;
    unsigned char reserved_18[4];
} X509;
typedef struct X509_crl_st X509_CRL;
typedef struct x509_object_st {
    int type;
    union {
        char *ptr;
        X509 *x509;
        X509_CRL *crl;
        EVP_PKEY *pkey;
    } data;
} X509_OBJECT;
typedef struct x509_store_st {
    unsigned char reserved_00[12];
    int (*verify)();
    int (*verify_cb)();
    unsigned char reserved_14[16];
} X509_STORE;
typedef struct x509_store_state_st {
    X509_STORE *ctx;
    unsigned char reserved_04[4];
    X509 *cert;
    STACK *untrusted;
    int depth;
    unsigned char reserved_14[4];
    int last_untrusted;
    STACK *chain;
    int error_depth;
    int error;
    X509 *current_cert;
    unsigned char reserved_2c[8];
} X509_STORE_CTX;
extern void func_00BDD640(X509_OBJECT *a);
extern int func_00BDD660(X509_STORE_CTX *vs, int type, X509_NAME *name, X509_OBJECT *ret);
extern void func_00BE3280(X509 *a);
extern X509_NAME *func_00BDCB80(X509 *a);
extern X509_NAME *func_00BDCB90(X509 *a);
extern int func_00BDCBB0(X509_NAME *a, X509_NAME *b);
extern X509 *func_00BDCDB0(STACK *sk, X509_NAME *name);
extern int func_00BDEF88(int ok, X509_STORE_CTX *e);
extern int func_00BDF458(X509_STORE_CTX *ctx);
extern int func_00BDE270(EVP_PKEY *pkey, STACK *chain);

int func_00BDEF90(X509_STORE_CTX *ctx) {
    X509 *x;
    X509 *xtmp;
    X509 *chain_ss = (void *)0;
    X509_NAME *xn;
    X509_OBJECT obj;
    int depth;
    int i;
    int ok = 0;
    int num;
    int (*cb)();
    STACK *sktmp = (void *)0;
    if (ctx->cert == ((void *)0)) {
        func_00BB3380(11, 236, 159, (void *)0, 0);
        return -1;
    }
    cb = ctx->ctx->verify_cb;
    if (cb == ((void *)0))
        cb = func_00BDEF88;
    if (ctx->chain == ((void *)0)) {
        if (((ctx->chain = func_00BD9A70((void *)0)) == ((void *)0)) ||
            (!func_00BD9E98(ctx->chain, (char *)ctx->cert))) {
            func_00BB3380(11, 236, 1 | 32, (void *)0, 0);
            goto end;
        }
        func_00BC0778(&ctx->cert->references, 1, 3, D_00C4E5D8, 92);
        ctx->last_untrusted = 1;
    }
    if ((ctx->untrusted != ((void *)0)) &&
        ((sktmp = func_00BD99D8(ctx->untrusted)) == ((void *)0))) {
        func_00BB3380(11, 236, 1 | 32, (void *)0, 0);
        goto end;
    }
    num = ctx->chain->num;
    x = (X509 *)ctx->chain->data[num - 1];
    depth = ctx->depth;
    for (;;) {
        if (depth <= num)
            break;
        xn = func_00BDCB80(x);
        if (func_00BDCBB0(func_00BDCB90(x), xn) == 0)
            break;
        if (ctx->untrusted != ((void *)0)) {
            xtmp = func_00BDCDB0(sktmp, xn);
            if (xtmp != ((void *)0)) {
                if (!func_00BD9E98(ctx->chain, (char *)xtmp)) {
                    func_00BB3380(11, 236, 1 | 32, (void *)0, 0);
                    goto end;
                }
                func_00BC0778(&xtmp->references, 1, 3, D_00C4E5D8, 129);
                func_00BD9C10(sktmp, (char *)xtmp);
                ctx->last_untrusted++;
                x = xtmp;
                num++;
                continue;
            }
        }
        break;
    }

    i = ctx->chain->num;
    x = (X509 *)ctx->chain->data[i - 1];
    if (func_00BDCBB0(func_00BDCB90(x), func_00BDCB80(x)) == 0) {
        if (ctx->chain->num == 1) {
            ctx->error = 18;
            ctx->current_cert = x;
            ctx->error_depth = i - 1;
            ok = cb(0, ctx);
            if (!ok)
                goto end;
        } else {
            chain_ss = (X509 *)func_00BD9F08(ctx->chain);
            ctx->last_untrusted--;
            num--;
            x = (X509 *)ctx->chain->data[num - 1];
        }
    }
    for (;;) {
        if (depth <= num)
            break;
        xn = func_00BDCB80(x);
        if (func_00BDCBB0(func_00BDCB90(x), xn) == 0)
            break;
        ok = func_00BDD660(ctx, 1, xn, &obj);
        if (ok != 1) {
            if (ok == (-1)) {
                func_00BDD640(&obj);
                func_00BB3380(11, 236, 160, (void *)0, 0);
                return ok;
            } else if (ok != 0) {
                func_00BDD640(&obj);
                return ok;
            }
            break;
        }
        x = obj.data.x509;
        if (!func_00BD9E98(ctx->chain, (char *)obj.data.x509)) {
            func_00BDD640(&obj);
            func_00BB3380(11, 236, 1 | 32, (void *)0, 0);
            return 0;
        }
        num++;
    }

    xn = func_00BDCB80(x);
    if (func_00BDCBB0(func_00BDCB90(x), xn) != 0) {
        if ((chain_ss == ((void *)0)) || (func_00BDCBB0(func_00BDCB90(chain_ss), xn) != 0)) {
            if (ctx->last_untrusted >= num)
                ctx->error = 20;
            else
                ctx->error = 2;
            ctx->current_cert = x;
        } else {
            func_00BD9E98(ctx->chain, (char *)chain_ss);
            num++;
            ctx->last_untrusted = num;
            ctx->current_cert = chain_ss;
            ctx->error = 19;
            chain_ss = (void *)0;
        }
        ctx->error_depth = num - 1;
        ok = cb(0, ctx);
        if (!ok)
            goto end;
    }
    func_00BDE270((void *)0, ctx->chain);
    if (ctx->ctx->verify != ((void *)0))
        ok = ctx->ctx->verify(ctx);
    else
        ok = func_00BDF458(ctx);
    if (0) {
    end:
        func_00BDE270((void *)0, ctx->chain);
    }
    if (sktmp != ((void *)0))
        func_00BDA038(sktmp);
    if (chain_ss != ((void *)0))
        func_00BE3280(chain_ss);
    return ok;
}
