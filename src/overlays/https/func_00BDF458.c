/* compiler: ee-gcc-2.9-nsa-G0 */
/* SSLeay_0_8_1b, crypto/x509/x509_vfy.c (internal_verify). See THIRD_PARTY.md. */
/* Copyright (C) 1995-1997 Eric Young (eay@cryptsoft.com)
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
    unsigned char reserved_08[12];
} STACK;
typedef struct asn1_string_st ASN1_STRING;
typedef struct evp_pkey_st EVP_PKEY;
typedef struct X509_name_st X509_NAME;
typedef struct x509_st {
    unsigned char reserved_00[16];
    int valid;
    unsigned char reserved_14[8];
} X509;
typedef struct x509_store_st {
    unsigned char reserved_00[16];
    int (*verify_cb)();
    unsigned char reserved_14[12];
} X509_STORE;
typedef struct x509_store_state_st {
    X509_STORE *ctx;
    unsigned char reserved_04[24];
    STACK *chain;
    int error_depth;
    int error;
    X509 *current_cert;
    unsigned char reserved_2c[4];
} X509_STORE_CTX;
extern int func_00BDDDC0(X509 *a, EVP_PKEY *r);
extern X509_NAME *func_00BDCB80(X509 *a);
extern X509_NAME *func_00BDCB90(X509 *a);
extern int func_00BDCBB0(X509_NAME *a, X509_NAME *b);
extern int func_00BDEF88(int ok, X509_STORE_CTX *e);
extern int func_00BDDF98(ASN1_STRING *ctm);
extern EVP_PKEY *func_00BDCE40(X509 *x);
extern ASN1_STRING *func_00BDD038(X509 *);
extern ASN1_STRING *func_00BDD048(X509 *);

int func_00BDF458(X509_STORE_CTX *ctx) {
    int i;
    int ok = 0;
    int n;
    X509 *xs;
    X509 *xi;
    EVP_PKEY *pkey = (void *)0;
    int (*cb)();
    cb = ctx->ctx->verify_cb;
    if (cb == ((void *)0))
        cb = func_00BDEF88;
    n = ctx->chain->num;
    ctx->error_depth = n - 1;
    n--;
    xi = (X509 *)ctx->chain->data[n];
    if (func_00BDCBB0(func_00BDCB90(xi), func_00BDCB80(xi)) == 0)
        xs = xi;
    else {
        if (n <= 0) {
            ctx->error = 21;
            ctx->current_cert = xi;
            ok = cb(0, ctx);
            goto end;
        } else {
            n--;
            ctx->error_depth = n;
            xs = (X509 *)ctx->chain->data[n];
        }
    }
    while (n >= 0) {
        ctx->error_depth = n;
        if (!xs->valid) {
            if ((pkey = func_00BDCE40(xi)) == ((void *)0)) {
                ctx->error = 6;
                ctx->current_cert = xi;
                ok = (*cb)(0, ctx);
                if (!ok)
                    goto end;
            }
            if (func_00BDDDC0(xs, pkey) <= 0) {
                ctx->error = 7;
                ctx->current_cert = xs;
                ok = (*cb)(0, ctx);
                if (!ok)
                    goto end;
            }
            pkey = (void *)0;
            i = func_00BDDF98(func_00BDD038(xs));
            if (i == 0) {
                ctx->error = 13;
                ctx->current_cert = xs;
                ok = (*cb)(0, ctx);
                if (!ok)
                    goto end;
            }
            if (i > 0) {
                ctx->error = 9;
                ctx->current_cert = xs;
                ok = (*cb)(0, ctx);
                if (!ok)
                    goto end;
            }
            xs->valid = 1;
        }
        i = func_00BDDF98(func_00BDD048(xs));
        if (i == 0) {
            ctx->error = 14;
            ctx->current_cert = xs;
            ok = (*cb)(0, ctx);
            if (!ok)
                goto end;
        }
        if (i < 0) {
            ctx->error = 10;
            ctx->current_cert = xs;
            ok = (*cb)(0, ctx);
            if (!ok)
                goto end;
        }
        ctx->current_cert = xs;
        ok = (*cb)(1, ctx);
        if (!ok)
            goto end;
        n--;
        if (n >= 0) {
            xi = xs;
            xs = (X509 *)ctx->chain->data[n];
        }
    }

    ok = 1;
end:
    return ok;
}
