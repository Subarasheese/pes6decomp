/* compiler: ee-gcc-2.9-G0 */
/* Adapted from SSLeay 0.9.1b, crypto/x509/x509_lu.c (X509_STORE_get_by_subject).
 * licence: ssleay (see THIRD_PARTY.md) */
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
#include "pes6/https/ssleay_091b_types.h"

typedef struct X509_name_st {
    STACK *entries;
    int modified;
    BUF_MEM *bytes;
    unsigned long hash;
} X509_NAME;
typedef struct x509_cinf_st {
    ASN1_STRING *version;
    ASN1_STRING *serialNumber;
    X509_ALGOR *signature;
    X509_NAME *issuer;
    X509_VAL *validity;
    X509_NAME *subject;
    X509_PUBKEY *key;
    ASN1_STRING *issuerUID;
    ASN1_STRING *subjectUID;
    STACK *extensions;
} X509_CINF;
typedef struct x509_st {
    X509_CINF *cert_info;
    X509_ALGOR *sig_alg;
    ASN1_STRING *signature;
    int valid;
    int references;
    char *name;
} X509;
typedef struct X509_crl_info_st {
    ASN1_STRING *version;
    X509_ALGOR *sig_alg;
    X509_NAME *issuer;
    ASN1_STRING *lastUpdate;
    ASN1_STRING *nextUpdate;
    STACK *revoked;
    STACK *extensions;
} X509_CRL_INFO;
typedef struct X509_crl_st {
    X509_CRL_INFO *crl;
    X509_ALGOR *sig_alg;
    ASN1_STRING *signature;
    int references;
} X509_CRL;
typedef struct x509_object_st {
    int type;
    union {
        char *ptr;
        X509 *x509;
        X509_CRL *crl;
        EVP_PKEY *pkey;
    } data;
} X509_OBJECT;
typedef struct x509_lookup_method_st {
    char *name;
    int (*new_item)();
    void (*free)();
    int (*init)();
    int (*shutdown)();
    int (*ctrl)();
    int (*get_by_subject)();
    int (*get_by_issuer_serial)();
    int (*get_by_fingerprint)();
    int (*get_by_alias)();
} X509_LOOKUP_METHOD;
typedef struct x509_store_st {
    int cache;
    LHASH *certs;
    STACK *get_cert_methods;
    int (*verify)();
    int (*verify_cb)();
    CRYPTO_EX_DATA ex_data;
    int references;
    int depth;
} X509_STORE;
typedef struct x509_lookup_st {
    int init;
    int skip;
    X509_LOOKUP_METHOD *method;
    char *method_data;
    X509_STORE *store_ctx;
} X509_LOOKUP;
typedef struct x509_store_state_st {
    X509_STORE *ctx;
    int current_method;
    X509 *cert;
    STACK *untrusted;
    int depth;
    int valid;
    int last_untrusted;
    STACK *chain;
    int error_depth;
    int error;
    X509 *current_cert;
    CRYPTO_EX_DATA ex_data;
} X509_STORE_CTX;
extern int func_00BDD2E8(X509_LOOKUP *ctx, int type, X509_NAME *name, X509_OBJECT *ret);
extern void func_00BDD620(X509_OBJECT *a);
extern X509_OBJECT *func_00BDD748(LHASH *h, int type, X509_NAME *name);

int func_00BDD660(X509_STORE_CTX *vs, int type, X509_NAME *name, X509_OBJECT *ret) {
    X509_STORE *ctx = vs->ctx;
    X509_LOOKUP *lu;
    X509_OBJECT stmp;
    X509_OBJECT *tmp;
    int i;
    int j;
    tmp = func_00BDD748(ctx->certs, type, name);
    if (tmp == 0) {
        for (i = vs->current_method; i < ctx->get_cert_methods->num; i++) {
            lu = (X509_LOOKUP *)ctx->get_cert_methods->data[i];
            j = func_00BDD2E8(lu, type, name, &stmp);
            if (j < 0) {
                vs->current_method = j;
                return j;
            } else if (j) {
                tmp = &stmp;
                break;
            }
        }

        vs->current_method = 0;
        if (tmp == 0)
            return 0;
    }
    ret->type = tmp->type;
    ret->data.ptr = tmp->data.ptr;
    func_00BDD620(ret);
    return 1;
}
