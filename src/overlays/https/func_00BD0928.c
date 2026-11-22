/* compiler: ee-gcc-2.9-G0 */
/* Adapted from OpenSSL 0.9.5a, ssl/s2_pkt.c (ssl2_do_write).
 * licence: openssl (see THIRD_PARTY.md) */
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
typedef struct buf_mem_st {
    int length;
    char *data;
    int max;
} BUF_MEM;
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
typedef struct comp_method_st {
    int type;
    const char *name;
    int (*init)();
    void (*finish)();
    int (*compress)();
    int (*expand)();
    long (*ctrl)();
    long (*callback_ctrl)();
} COMP_METHOD;
typedef struct comp_ctx_st {
    COMP_METHOD *meth;
    unsigned long compress_in;
    unsigned long compress_out;
    unsigned long expand_in;
    unsigned long expand_out;
    CRYPTO_EX_DATA ex_data;
} COMP_CTX;
typedef struct bio_method_st {
    int type;
    const char *name;
    int (*bwrite)();
    int (*bread)();
    int (*bputs)();
    int (*bgets)();
    long (*ctrl)();
    int (*create)();
    int (*destroy)();
    long (*callback_ctrl)();
} BIO_METHOD;
typedef struct bio_st {
    BIO_METHOD *method;
    long (*callback)(struct bio_st *, int, const char *, int, long, long);
    char *cb_arg;
    int init;
    int shutdown;
    int flags;
    int retry_reason;
    int num;
    void *ptr;
    struct bio_st *next_bio;
    struct bio_st *prev_bio;
    int references;
    unsigned long num_read;
    unsigned long num_write;
    CRYPTO_EX_DATA ex_data;
} BIO;
typedef struct MD2state_st {
    int num;
    unsigned char data[16];
    unsigned int cksm[16];
    unsigned int state[16];
} MD2_CTX;
typedef struct MD5state_st {
    unsigned int A;
    unsigned int B;
    unsigned int C;
    unsigned int D;
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data[64 / 4];
    int num;
} MD5_CTX;
typedef struct SHAstate_st {
    unsigned int h0;
    unsigned int h1;
    unsigned int h2;
    unsigned int h3;
    unsigned int h4;
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data[16];
    int num;
} SHA_CTX;
typedef struct RIPEMD160state_st {
    unsigned int A;
    unsigned int B;
    unsigned int C;
    unsigned int D;
    unsigned int E;
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data[64 / 4];
    int num;
} RIPEMD160_CTX;
typedef unsigned char des_cblock[8];
typedef struct des_ks_struct {
    union {
        des_cblock cblock;
        unsigned long deslong[2];
    } ks;
    int weak_key;
} des_key_schedule[16];
typedef struct rc4_key_st {
    unsigned int x;
    unsigned int y;
    unsigned int data[256];
} RC4_KEY;
typedef struct rc2_key_st {
    unsigned int data[64];
} RC2_KEY;
typedef struct rc5_key_st {
    int rounds;
    unsigned long data[2 * (16 + 1)];
} RC5_32_KEY;
typedef struct bf_key_st {
    unsigned int P[16 + 2];
    unsigned int S[4 * 256];
} BF_KEY;
typedef struct cast_key_st {
    unsigned long data[32];
    int short_key;
} CAST_KEY;
typedef struct idea_key_st {
    unsigned int data[9][6];
} IDEA_KEY_SCHEDULE;
typedef struct mdc2_ctx_st {
    int num;
    unsigned char data[8];
    des_cblock h;
    des_cblock hh;
    int pad_type;
} MDC2_CTX;
typedef struct bignum_st {
    unsigned long *d;
    int top;
    int max;
    int neg;
    int flags;
} BIGNUM;
typedef struct bignum_ctx {
    int tos;
    BIGNUM bn[12];
    int flags;
    int depth;
    int pos[12];
    int too_many;
} BN_CTX;
typedef struct bn_blinding_st {
    int init;
    BIGNUM *A;
    BIGNUM *Ai;
    BIGNUM *mod;
} BN_BLINDING;
typedef struct bn_mont_ctx_st {
    int ri;
    BIGNUM RR;
    BIGNUM N;
    BIGNUM Ni;
    unsigned long n0;
    int flags;
} BN_MONT_CTX;
typedef struct rsa_st RSA;
typedef struct rsa_meth_st {
    const char *name;
    int (*rsa_pub_enc)(int flen, unsigned char *from, unsigned char *to, RSA *rsa, int padding);
    int (*rsa_pub_dec)(int flen, unsigned char *from, unsigned char *to, RSA *rsa, int padding);
    int (*rsa_priv_enc)(int flen, unsigned char *from, unsigned char *to, RSA *rsa, int padding);
    int (*rsa_priv_dec)(int flen, unsigned char *from, unsigned char *to, RSA *rsa, int padding);
    int (*rsa_mod_exp)(BIGNUM *r0, BIGNUM *I, RSA *rsa);
    int (*bn_mod_exp)(BIGNUM *r, BIGNUM *a, const BIGNUM *p, const BIGNUM *m, BN_CTX *ctx,
                      BN_MONT_CTX *m_ctx);
    int (*init)(RSA *rsa);
    int (*finish)(RSA *rsa);
    int flags;
    char *app_data;
    int (*rsa_sign)(int type, unsigned char *m, unsigned int m_len, unsigned char *sigret,
                    unsigned int *siglen, RSA *rsa);
    int (*rsa_verify)(int dtype, unsigned char *m, unsigned int m_len, unsigned char *sigbuf,
                      unsigned int siglen, RSA *rsa);
} RSA_METHOD;
struct rsa_st {
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
    BN_MONT_CTX *_method_mod_n;
    BN_MONT_CTX *_method_mod_p;
    BN_MONT_CTX *_method_mod_q;
    char *bignum_data;
    BN_BLINDING *blinding;
};
typedef struct dh_st DH;
typedef struct dh_method {
    const char *name;
    int (*generate_key)(DH *dh);
    int (*compute_key)(unsigned char *key, BIGNUM *pub_key, DH *dh);
    int (*bn_mod_exp)(DH *dh, BIGNUM *r, BIGNUM *a, const BIGNUM *p, const BIGNUM *m, BN_CTX *ctx,
                      BN_MONT_CTX *m_ctx);
    int (*init)(DH *dh);
    int (*finish)(DH *dh);
    int flags;
    char *app_data;
} DH_METHOD;
struct dh_st {
    int pad;
    int version;
    BIGNUM *p;
    BIGNUM *g;
    int length;
    BIGNUM *pub_key;
    BIGNUM *priv_key;
    int flags;
    char *method_mont_p;
    BIGNUM *q;
    BIGNUM *j;
    unsigned char *seed;
    int seedlen;
    BIGNUM *counter;
    int references;
    CRYPTO_EX_DATA ex_data;
    DH_METHOD *meth;
};
typedef struct dsa_st DSA;
typedef struct DSA_SIG_st {
    BIGNUM *r;
    BIGNUM *s;
} DSA_SIG;
typedef struct dsa_method {
    const char *name;
    DSA_SIG *(*dsa_do_sign)(const unsigned char *dgst, int dlen, DSA *dsa);
    int (*dsa_sign_setup)(DSA *dsa, BN_CTX *ctx_in, BIGNUM **kinvp, BIGNUM **rp);
    int (*dsa_do_verify)(const unsigned char *dgst, int dgst_len, DSA_SIG *sig, DSA *dsa);
    int (*dsa_mod_exp)(DSA *dsa, BIGNUM *rr, BIGNUM *a1, BIGNUM *p1, BIGNUM *a2, BIGNUM *p2,
                       BIGNUM *m, BN_CTX *ctx, BN_MONT_CTX *in_mont);
    int (*bn_mod_exp)(DSA *dsa, BIGNUM *r, BIGNUM *a, const BIGNUM *p, const BIGNUM *m, BN_CTX *ctx,
                      BN_MONT_CTX *m_ctx);
    int (*init)(DSA *dsa);
    int (*finish)(DSA *dsa);
    int flags;
    char *app_data;
} DSA_METHOD;
struct dsa_st {
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
    CRYPTO_EX_DATA ex_data;
    DSA_METHOD *meth;
};
typedef struct asn1_object_st {
    const char *sn;
    const char *ln;
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
typedef struct asn1_string_st ASN1_INTEGER;
typedef struct asn1_string_st ASN1_ENUMERATED;
typedef struct asn1_string_st ASN1_BIT_STRING;
typedef struct asn1_string_st ASN1_OCTET_STRING;
typedef struct asn1_string_st ASN1_PRINTABLESTRING;
typedef struct asn1_string_st ASN1_T61STRING;
typedef struct asn1_string_st ASN1_IA5STRING;
typedef struct asn1_string_st ASN1_GENERALSTRING;
typedef struct asn1_string_st ASN1_UNIVERSALSTRING;
typedef struct asn1_string_st ASN1_BMPSTRING;
typedef struct asn1_string_st ASN1_UTCTIME;
typedef struct asn1_string_st ASN1_GENERALIZEDTIME;
typedef struct asn1_string_st ASN1_VISIBLESTRING;
typedef struct asn1_string_st ASN1_UTF8STRING;
typedef struct asn1_type_st {
    int type;
    union {
        char *ptr;
        ASN1_STRING *asn1_string;
        ASN1_OBJECT *object;
        ASN1_INTEGER *integer;
        ASN1_ENUMERATED *enumerated;
        ASN1_BIT_STRING *bit_string;
        ASN1_OCTET_STRING *octet_string;
        ASN1_PRINTABLESTRING *printablestring;
        ASN1_T61STRING *t61string;
        ASN1_IA5STRING *ia5string;
        ASN1_GENERALSTRING *generalstring;
        ASN1_BMPSTRING *bmpstring;
        ASN1_UNIVERSALSTRING *universalstring;
        ASN1_UTCTIME *utctime;
        ASN1_GENERALIZEDTIME *generalizedtime;
        ASN1_VISIBLESTRING *visiblestring;
        ASN1_UTF8STRING *utf8string;
        ASN1_STRING *set;
        ASN1_STRING *sequence;
    } value;
} ASN1_TYPE;
typedef struct stack_st_ASN1_OBJECT {
    STACK stack;
} STACK_ASN1_OBJECT;
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
typedef struct env_md_st {
    int type;
    int pkey_type;
    int md_size;
    void (*init)();
    void (*update)();
    void (*final)();
    int (*sign)();
    int (*verify)();
    int required_pkey_type[5];
    int block_size;
    int ctx_size;
} EVP_MD;
typedef struct env_md_ctx_st {
    const EVP_MD *digest;
    union {
        unsigned char base[4];
        MD2_CTX md2;
        MD5_CTX md5;
        RIPEMD160_CTX ripemd160;
        SHA_CTX sha;
        MDC2_CTX mdc2;
    } md;
} EVP_MD_CTX;
typedef struct evp_cipher_st {
    int nid;
    int block_size;
    int key_len;
    int iv_len;
    void (*init)();
    void (*do_cipher)();
    void (*cleanup)();
    int ctx_size;
    int (*set_asn1_parameters)();
    int (*get_asn1_parameters)();
} EVP_CIPHER;
typedef struct evp_cipher_ctx_st {
    const EVP_CIPHER *cipher;
    int encrypt;
    int buf_len;
    unsigned char oiv[8];
    unsigned char iv[8];
    unsigned char buf[8];
    int num;
    char *app_data;
    union {
        struct {
            unsigned char key[16];
            RC4_KEY ks;
        } rc4;
        des_key_schedule des_ks;
        struct {
            des_key_schedule ks;
            des_cblock inw;
            des_cblock outw;
        } desx_cbc;
        struct {
            des_key_schedule ks1;
            des_key_schedule ks2;
            des_key_schedule ks3;
        } des_ede;
        IDEA_KEY_SCHEDULE idea_ks;
        RC2_KEY rc2_ks;
        RC5_32_KEY rc5_ks;
        BF_KEY bf_ks;
        CAST_KEY cast_ks;
    } c;
} EVP_CIPHER_CTX;
typedef struct X509_algor_st {
    ASN1_OBJECT *algorithm;
    ASN1_TYPE *parameter;
} X509_ALGOR;
typedef struct stack_st_X509_ALGOR {
    STACK stack;
} STACK_X509_ALGOR;
typedef struct X509_val_st {
    ASN1_UTCTIME *notBefore;
    ASN1_UTCTIME *notAfter;
} X509_VAL;
typedef struct X509_pubkey_st {
    X509_ALGOR *algor;
    ASN1_BIT_STRING *public_key;
    EVP_PKEY *pkey;
} X509_PUBKEY;
typedef struct stack_st_X509_NAME_ENTRY {
    STACK stack;
} STACK_X509_NAME_ENTRY;
typedef struct X509_name_st {
    STACK_X509_NAME_ENTRY *entries;
    int modified;
    BUF_MEM *bytes;
    unsigned long hash;
} X509_NAME;
typedef struct stack_st_X509_NAME {
    STACK stack;
} STACK_X509_NAME;
typedef struct stack_st_X509_EXTENSION {
    STACK stack;
} STACK_X509_EXTENSION;
typedef struct x509_cinf_st {
    ASN1_INTEGER *version;
    ASN1_INTEGER *serialNumber;
    X509_ALGOR *signature;
    X509_NAME *issuer;
    X509_VAL *validity;
    X509_NAME *subject;
    X509_PUBKEY *key;
    ASN1_BIT_STRING *issuerUID;
    ASN1_BIT_STRING *subjectUID;
    STACK_X509_EXTENSION *extensions;
} X509_CINF;
typedef struct x509_cert_aux_st {
    STACK_ASN1_OBJECT *trust;
    STACK_ASN1_OBJECT *reject;
    ASN1_UTF8STRING *alias;
    ASN1_OCTET_STRING *keyid;
    STACK_X509_ALGOR *other;
} X509_CERT_AUX;
typedef struct x509_st {
    X509_CINF *cert_info;
    X509_ALGOR *sig_alg;
    ASN1_BIT_STRING *signature;
    int valid;
    int references;
    char *name;
    CRYPTO_EX_DATA ex_data;
    long ex_pathlen;
    unsigned long ex_flags;
    unsigned long ex_kusage;
    unsigned long ex_xkusage;
    unsigned long ex_nscert;
    unsigned char sha1_hash[20];
    X509_CERT_AUX *aux;
} X509;
typedef struct stack_st_X509 {
    STACK stack;
} STACK_X509;
typedef struct stack_st_X509_LOOKUP {
    STACK stack;
} STACK_X509_LOOKUP;
typedef struct x509_store_state_st X509_STORE_CTX;
typedef struct x509_store_st {
    int cache;
    char *certs;
    STACK_X509_LOOKUP *get_cert_methods;
    int (*verify)(X509_STORE_CTX *ctx);
    int (*verify_cb)(int ok, X509_STORE_CTX *ctx);
    CRYPTO_EX_DATA ex_data;
    int references;
    int depth;
} X509_STORE;
struct x509_store_state_st {
    X509_STORE *ctx;
    int current_method;
    X509 *cert;
    STACK_X509 *untrusted;
    int purpose;
    int trust;
    int depth;
    int valid;
    int last_untrusted;
    STACK_X509 *chain;
    int error_depth;
    int error;
    X509 *current_cert;
    CRYPTO_EX_DATA ex_data;
};
typedef struct lhash_node_st {
    void *data;
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
typedef int pem_password_cb(char *buf, int size, int rwflag, void *userdata);
typedef struct ssl_cipher_st {
    int valid;
    const char *name;
    unsigned long id;
    unsigned long algorithms;
    unsigned long algo_strength;
    unsigned long algorithm2;
    int strength_bits;
    int alg_bits;
    unsigned long mask;
    unsigned long mask_strength;
} SSL_CIPHER;
typedef struct stack_st_SSL_CIPHER {
    STACK stack;
} STACK_SSL_CIPHER;
typedef struct ssl_st SSL;
typedef struct ssl_ctx_st SSL_CTX;
typedef struct ssl_method_st {
    int version;
    int (*ssl_new)(SSL *s);
    void (*ssl_clear)(SSL *s);
    void (*ssl_free)(SSL *s);
    int (*ssl_accept)(SSL *s);
    int (*ssl_connect)(SSL *s);
    int (*ssl_read)(SSL *s, void *buf, int len);
    int (*ssl_peek)(SSL *s, char *buf, int len);
    int (*ssl_write)(SSL *s, const void *buf, int len);
    int (*ssl_shutdown)(SSL *s);
    int (*ssl_renegotiate)(SSL *s);
    int (*ssl_renegotiate_check)(SSL *s);
    long (*ssl_ctrl)(SSL *s, int cmd, long larg, char *parg);
    long (*ssl_ctx_ctrl)(SSL_CTX *ctx, int cmd, long larg, char *parg);
    SSL_CIPHER *(*get_cipher_by_char)(const unsigned char *ptr);
    int (*put_cipher_by_char)(const SSL_CIPHER *cipher, unsigned char *ptr);
    int (*ssl_pending)(SSL *s);
    int (*num_ciphers)(void);
    SSL_CIPHER *(*get_cipher)(unsigned ncipher);
    struct ssl_method_st *(*get_ssl_method)(int version);
    long (*get_timeout)(void);
    struct ssl3_enc_method *ssl3_enc;
    int (*ssl_version)();
    long (*ssl_callback_ctrl)(SSL *s, int cb_id, void (*fp)());
    long (*ssl_ctx_callback_ctrl)(SSL_CTX *s, int cb_id, void (*fp)());
} SSL_METHOD;
typedef struct ssl_session_st {
    int ssl_version;
    unsigned int key_arg_length;
    unsigned char key_arg[8];
    int master_key_length;
    unsigned char master_key[48];
    unsigned int session_id_length;
    unsigned char session_id[32];
    unsigned int sid_ctx_length;
    unsigned char sid_ctx[32];
    int not_resumable;
    struct sess_cert_st *sess_cert;
    X509 *peer;
    long verify_result;
    int references;
    long timeout;
    long time;
    int compress_meth;
    SSL_CIPHER *cipher;
    unsigned long cipher_id;
    STACK_SSL_CIPHER *ciphers;
    CRYPTO_EX_DATA ex_data;
    struct ssl_session_st *prev;
    struct ssl_session_st *next;
} SSL_SESSION;
typedef struct ssl_comp_st {
    int id;
    char *name;
    COMP_METHOD *method;
} SSL_COMP;
typedef struct stack_st_SSL_COMP {
    STACK stack;
} STACK_SSL_COMP;
struct ssl_ctx_st {
    SSL_METHOD *method;
    unsigned long options;
    unsigned long mode;
    STACK_SSL_CIPHER *cipher_list;
    STACK_SSL_CIPHER *cipher_list_by_id;
    struct x509_store_st *cert_store;
    struct lhash_st *sessions;
    unsigned long session_cache_size;
    struct ssl_session_st *session_cache_head;
    struct ssl_session_st *session_cache_tail;
    int session_cache_mode;
    long session_timeout;
    int (*new_session_cb)(struct ssl_st *ssl, SSL_SESSION *sess);
    void (*remove_session_cb)(struct ssl_ctx_st *ctx, SSL_SESSION *sess);
    SSL_SESSION *(*get_session_cb)(struct ssl_st *ssl, unsigned char *data, int len, int *copy);
    struct {
        int sess_connect;
        int sess_connect_renegotiate;
        int sess_connect_good;
        int sess_accept;
        int sess_accept_renegotiate;
        int sess_accept_good;
        int sess_miss;
        int sess_timeout;
        int sess_cache_full;
        int sess_hit;
        int sess_cb_hit;
    } stats;
    int references;
    void (*info_callback)();
    int (*app_verify_callback)();
    char *app_verify_arg;
    struct cert_st *cert;
    int read_ahead;
    int verify_mode;
    int verify_depth;
    unsigned int sid_ctx_length;
    unsigned char sid_ctx[32];
    int (*default_verify_callback)(int ok, X509_STORE_CTX *ctx);
    int purpose;
    int trust;
    pem_password_cb *default_passwd_callback;
    void *default_passwd_callback_userdata;
    int (*client_cert_cb)();
    STACK_X509_NAME *client_CA;
    int quiet_shutdown;
    CRYPTO_EX_DATA ex_data;
    const EVP_MD *rsa_md5;
    const EVP_MD *md5;
    const EVP_MD *sha1;
    STACK_X509 *extra_certs;
    STACK_SSL_COMP *comp_methods;
};
struct ssl_st {
    int version;
    int type;
    SSL_METHOD *method;
    BIO *rbio;
    BIO *wbio;
    BIO *bbio;
    int rwstate;
    int in_handshake;
    int (*handshake_func)();
    int server;
    int new_session;
    int quiet_shutdown;
    int shutdown;
    int state;
    int rstate;
    BUF_MEM *init_buf;
    int init_num;
    int init_off;
    unsigned char *packet;
    unsigned int packet_length;
    struct ssl2_state_st *s2;
    struct ssl3_state_st *s3;
    int read_ahead;
    int hit;
    int purpose;
    int trust;
    STACK_SSL_CIPHER *cipher_list;
    STACK_SSL_CIPHER *cipher_list_by_id;
    EVP_CIPHER_CTX *enc_read_ctx;
    const EVP_MD *read_hash;
    COMP_CTX *expand;
    EVP_CIPHER_CTX *enc_write_ctx;
    const EVP_MD *write_hash;
    COMP_CTX *compress;
    struct cert_st *cert;
    unsigned int sid_ctx_length;
    unsigned char sid_ctx[32];
    SSL_SESSION *session;
    int verify_mode;
    int verify_depth;
    int (*verify_callback)(int ok, X509_STORE_CTX *ctx);
    void (*info_callback)();
    int error;
    int error_code;
    SSL_CTX *ctx;
    int debug;
    long verify_result;
    CRYPTO_EX_DATA ex_data;
    STACK_X509_NAME *client_CA;
    int references;
    unsigned long options;
    unsigned long mode;
    int first_packet;
    int client_version;
};
typedef struct ssl2_state_st {
    int three_byte_header;
    int clear_text;
    int escape;
    int ssl2_rollback;
    unsigned int wnum;
    int wpend_tot;
    const unsigned char *wpend_buf;
    int wpend_off;
    int wpend_len;
    int wpend_ret;
    int rbuf_left;
    int rbuf_offs;
    unsigned char *rbuf;
    unsigned char *wbuf;
    unsigned char *write_ptr;
    unsigned int padding;
    unsigned int rlength;
    int ract_data_length;
    unsigned int wlength;
    int wact_data_length;
    unsigned char *ract_data;
    unsigned char *wact_data;
    unsigned char *mac_data;
    unsigned char *pad_data;
    unsigned char *read_key;
    unsigned char *write_key;
    unsigned int challenge_length;
    unsigned char challenge[32];
    unsigned int conn_id_length;
    unsigned char conn_id[16];
    unsigned int key_material_length;
    unsigned char key_material[24 * 2];
    unsigned long read_sequence;
    unsigned long write_sequence;
    struct {
        unsigned int conn_id_length;
        unsigned int cert_type;
        unsigned int cert_length;
        int csl;
        int clear;
        unsigned int enc;
        unsigned char ccl[32];
        int cipher_spec_length;
        unsigned int session_id_length;
        unsigned int clen;
        unsigned int rlen;
    } tmp;
} SSL2_STATE;
typedef struct ssl3_record_st {
    int type;
    unsigned int length;
    unsigned int off;
    unsigned char *data;
    unsigned char *input;
    unsigned char *comp;
} SSL3_RECORD;
typedef struct ssl3_buffer_st {
    unsigned char *buf;
    int offset;
    int left;
} SSL3_BUFFER;
typedef struct ssl3_state_st {
    long flags;
    int delay_buf_pop_ret;
    unsigned char read_sequence[8];
    unsigned char read_mac_secret[16 + 20];
    unsigned char write_sequence[8];
    unsigned char write_mac_secret[16 + 20];
    unsigned char server_random[32];
    unsigned char client_random[32];
    SSL3_BUFFER rbuf;
    SSL3_BUFFER wbuf;
    SSL3_RECORD rrec;
    SSL3_RECORD wrec;
    unsigned char alert_fragment[2];
    unsigned int alert_fragment_len;
    unsigned char handshake_fragment[4];
    unsigned int handshake_fragment_len;
    unsigned int wnum;
    int wpend_tot;
    int wpend_type;
    int wpend_ret;
    const unsigned char *wpend_buf;
    EVP_MD_CTX finish_dgst1;
    EVP_MD_CTX finish_dgst2;
    int change_cipher_spec;
    int warn_alert;
    int fatal_alert;
    int alert_dispatch;
    unsigned char send_alert[2];
    int renegotiate;
    int total_renegotiations;
    int num_renegotiations;
    int in_read_app_data;
    struct {
        unsigned char cert_verify_md[(16 + 20) * 2];
        unsigned char finish_md[(16 + 20) * 2];
        int finish_md_len;
        unsigned char peer_finish_md[(16 + 20) * 2];
        int peer_finish_md_len;
        unsigned long message_size;
        int message_type;
        SSL_CIPHER *new_cipher;
        DH *dh;
        int next_state;
        int reuse_message;
        int cert_req;
        int ctype_num;
        char ctype[7];
        STACK_X509_NAME *ca_names;
        int use_rsa_tmp;
        int key_block_length;
        unsigned char *key_block;
        const EVP_CIPHER *new_sym_enc;
        const EVP_MD *new_hash;
        const SSL_COMP *new_compression;
        int cert_request;
    } tmp;
} SSL3_STATE;
typedef struct cert_pkey_st {
    X509 *x509;
    EVP_PKEY *privatekey;
} CERT_PKEY;
typedef struct cert_st {
    CERT_PKEY *key;
    int valid;
    unsigned long mask;
    unsigned long export_mask;
    RSA *rsa_tmp;
    RSA *(*rsa_tmp_cb)(SSL *ssl, int is_export, int keysize);
    DH *dh_tmp;
    DH *(*dh_tmp_cb)(SSL *ssl, int is_export, int keysize);
    CERT_PKEY pkeys[5];
    int references;
} CERT;
typedef struct sess_cert_st {
    STACK_X509 *cert_chain;
    int peer_cert_type;
    CERT_PKEY *peer_key;
    CERT_PKEY peer_pkeys[5];
    RSA *peer_rsa_tmp;
    DH *peer_dh_tmp;
    int references;
} SESS_CERT;
typedef struct ssl3_enc_method {
    int (*enc)(SSL *, int);
    int (*mac)(SSL *, unsigned char *, int);
    int (*setup_key_block)(SSL *);
    int (*generate_master_secret)(SSL *, unsigned char *, unsigned char *, int);
    int (*change_cipher_state)(SSL *, int);
    int (*final_finish_mac)(SSL *, EVP_MD_CTX *, EVP_MD_CTX *, const char *, int, unsigned char *);
    int finish_mac_length;
    int (*cert_verify_mac)(SSL *, EVP_MD_CTX *, unsigned char *);
    const char *client_finished_label;
    int client_finished_label_len;
    const char *server_finished_label;
    int server_finished_label_len;
    int (*alert_value)(int);
} SSL3_ENC_METHOD;
extern int func_00BD02E0(SSL *s, const void *_buf, int len);

int func_00BD0928(SSL *s) {
    int ret;
    ret = func_00BD02E0(s, &s->init_buf->data[s->init_off], s->init_num);
    if (ret == s->init_num)
        return 1;
    if (ret < 0)
        return -1;
    s->init_off += ret;
    s->init_num -= ret;
    return 0;
}
