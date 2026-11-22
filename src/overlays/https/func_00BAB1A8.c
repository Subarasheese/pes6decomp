/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_1c, crypto/x509/by_file.c, X509_load_cert_file. See THIRD_PARTY.md. */
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
typedef struct crypto_ex_data_st {
    STACK *sk;
    int dummy;
} CRYPTO_EX_DATA;
typedef struct buf_mem_st {
    int length;
    char *data;
    int max;
} BUF_MEM;
typedef struct bio_method_st {
    int type;
    char *name;
    int (*bwrite)();
    int (*bread)();
    int (*bputs)();
    int (*bgets)();
    long (*ctrl)();
    int (*create)();
    int (*destroy)();
} BIO_METHOD;
typedef struct bio_st {
    BIO_METHOD *method;
    long (*callback)(struct bio_st *, int, char *, int, long, long);
    char *cb_arg;
    int init;
    int shutdown;
    int flags;
    int retry_reason;
    int num;
    char *ptr;
    struct bio_st *next_bio;
    struct bio_st *prev_bio;
    int references;
    unsigned long num_read;
    unsigned long num_write;
    CRYPTO_EX_DATA ex_data;
} BIO;
extern BIO_METHOD *func_00BA92E0(void);
extern BIO *func_00BA29D8(BIO_METHOD *type);
extern int func_00BA2B20(BIO *a);
extern long func_00BA2FC0(BIO *bp, int cmd, long larg, char *parg);
extern void func_00BB3380(int lib, int func, int reason, char *file, int line);
extern unsigned long func_00BB3590(void);
extern void func_00BB3538(void);
typedef struct lhash_node_st {
    char *data;
    struct lhash_node_st *next;
    unsigned long hash;
} LHASH_NODE;
typedef struct lhash_st {
    LHASH_NODE **b;
    int (*comp)();
    unsigned long (*hash)();
    unsigned int num_nodes;
    unsigned int num_alloc_nodes;
    unsigned int p;
    unsigned int pmax;
    unsigned long up_load;
    unsigned long down_load;
    unsigned long num_items;
    unsigned long num_expands;
    unsigned long num_expand_reallocs;
    unsigned long num_contracts;
    unsigned long num_contract_reallocs;
    unsigned long num_hash_calls;
    unsigned long num_comp_calls;
    unsigned long num_insert;
    unsigned long num_replace;
    unsigned long num_delete;
    unsigned long num_no_delete;
    unsigned long num_retrieve;
    unsigned long num_retrieve_miss;
    unsigned long num_hash_comps;
    int error;
} LHASH;
typedef struct bignum_st {
    unsigned long *d;
    int top;
    int max;
    int neg;
    int flags;
} BIGNUM;
typedef struct bn_blinding_st {
    int init;
    BIGNUM *A;
    BIGNUM *Ai;
    BIGNUM *mod;
} BN_BLINDING;
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
typedef struct asn1_type_st {
    int type;
    union {
        char *ptr;
        ASN1_STRING *asn1_string;
        ASN1_OBJECT *object;
        ASN1_STRING *integer;
        ASN1_STRING *bit_string;
        ASN1_STRING *octet_string;
        ASN1_STRING *printablestring;
        ASN1_STRING *t61string;
        ASN1_STRING *ia5string;
        ASN1_STRING *generalstring;
        ASN1_STRING *bmpstring;
        ASN1_STRING *universalstring;
        ASN1_STRING *utctime;
        ASN1_STRING *generalizedtime;
        ASN1_STRING *set;
        ASN1_STRING *sequence;
    } value;
} ASN1_TYPE;
typedef struct rsa_meth_st {
    char *name;
    int (*rsa_pub_enc)();
    int (*rsa_pub_dec)();
    int (*rsa_priv_enc)();
    int (*rsa_priv_dec)();
    int (*rsa_mod_exp)();
    int (*bn_mod_exp)();
    int (*init)();
    int (*finish)();
    int flags;
    char *app_data;
} RSA_METHOD;
typedef struct rsa_st {
    int pad;
    int version;
    RSA_METHOD *meth;
    BIGNUM *n;
    BIGNUM *e;
    BIGNUM *d;
    BIGNUM *p;
    BIGNUM *q;
    BIGNUM *dmp1;
    BIGNUM *dmq1;
    BIGNUM *iqmp;
    CRYPTO_EX_DATA ex_data;
    int references;
    int flags;
    char *method_mod_n;
    char *method_mod_p;
    char *method_mod_q;
    char *bignum_data;
    BN_BLINDING *blinding;
} RSA;
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
typedef struct dh_st {
    int pad;
    int version;
    BIGNUM *p;
    BIGNUM *g;
    int length;
    BIGNUM *pub_key;
    BIGNUM *priv_key;
    int flags;
    char *method_mont_p;
} DH;
typedef struct evp_pkey_st {
    int type;
    int save_type;
    int references;
    union {
        char *ptr;
        struct rsa_st *rsa;
        struct dsa_st *dsa;
        struct dh_st *dh;
    } pkey;
    int save_parameters;
    STACK *attributes;
} EVP_PKEY;
typedef struct X509_algor_st {
    ASN1_OBJECT *algorithm;
    ASN1_TYPE *parameter;
} X509_ALGOR;
typedef struct X509_val_st {
    ASN1_STRING *notBefore;
    ASN1_STRING *notAfter;
} X509_VAL;
typedef struct X509_pubkey_st {
    X509_ALGOR *algor;
    ASN1_STRING *public_key;
    struct evp_pkey_st *pkey;
} X509_PUBKEY;
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
extern int func_00BDD8A8(X509_STORE *ctx, X509 *x);
extern X509 *func_00BDDE58(BIO *bp, X509 *x509);
extern void func_00BE1C60(X509 *a);
extern X509 *func_00BBABC8(BIO *bp, X509 **x, int (*cb)());

int func_00BAB1A8(X509_LOOKUP *ctx, char *file, int type) {
    int ret = 0;
    BIO *in = (void *)0;
    int i;
    int count = 0;
    X509 *x = (void *)0;
    if (file == ((void *)0))
        return 1;
    in = func_00BA29D8(func_00BA92E0());
    if ((in == ((void *)0)) || (func_00BA2FC0(in, 108, 0x01 | 0x02, file) <= 0)) {
        func_00BB3380(11, 225, 2050, (void *)0, 0);
        goto err;
    }
    if (type == 1) {
        for (;;) {
            x = func_00BBABC8(in, (void *)0, (void *)0);
            if (x == ((void *)0)) {
                if ((((int)(func_00BB3590() & 0xfffL)) == 108) && (count > 0)) {
                    func_00BB3538();
                    break;
                } else {
                    func_00BB3380(11, 225, 2057, (void *)0, 0);
                    goto err;
                }
            }
            i = func_00BDD8A8(ctx->store_ctx, x);
            if (!i)
                goto err;
            count++;
            func_00BE1C60(x);
            x = (void *)0;
        }

        ret = count;
    } else if (type == 2) {
        x = func_00BDDE58(in, (void *)0);
        if (x == ((void *)0)) {
            func_00BB3380(11, 225, 2061, (void *)0, 0);
            goto err;
        }
        i = func_00BDD8A8(ctx->store_ctx, x);
        if (!i)
            goto err;
        ret = i;
    } else {
        func_00BB3380(11, 225, 154, (void *)0, 0);
        goto err;
    }
err:
    if (x != ((void *)0))
        func_00BE1C60(x);

    if (in != ((void *)0))
        func_00BA2B20(in);
    return ret;
}
