/* Types adapted from SSLeay 0.9.1b. Copyright (C) 1995-1998 Eric Young
 * (eay@cryptsoft.com). See LICENSES/SSLeay.txt and THIRD_PARTY.md. */
#ifndef PES6_HTTPS_SSLEAY_091B_TYPES_H
#define PES6_HTTPS_SSLEAY_091B_TYPES_H

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

typedef struct bf_key_st {
    unsigned long P[16 + 2];
    unsigned long S[4 * 256];
} BF_KEY;

typedef struct bignum_st {
    unsigned long *d;
    int top;
    int max;
    int neg;
    int flags;
} BIGNUM;

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

typedef struct buf_mem_st {
    int length;
    char *data;
    int max;
} BUF_MEM;

typedef struct cast_key_st {
    unsigned long data[32];
} CAST_KEY;

typedef struct comp_method_st {
    int type;
    char *name;
    int (*init)();
    void (*finish)();
    int (*compress)();
    int (*expand)();
    long (*ctrl)();
} COMP_METHOD;

typedef struct crypto_ex_data_func_st {
    long argl;
    char *argp;
    int (*new_func)();
    void (*free_func)();
    int (*dup_func)();
} CRYPTO_EX_DATA_FUNCS;

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

typedef struct evp_Encode_Ctx_st {
    int num;
    int length;
    unsigned char enc_data[80];
    int line_num;
    int expect_nl;
} EVP_ENCODE_CTX;

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

typedef struct __sFILE FILE;

typedef struct idea_key_st {
    unsigned int data[9][6];
} IDEA_KEY_SCHEDULE;

typedef struct lhash_node_st {
    char *data;
    struct lhash_node_st *next;
    unsigned long hash;
} LHASH_NODE;

typedef struct MD2state_st {
    int num;
    unsigned char data[16];
    unsigned int cksm[16];
    unsigned int state[16];
} MD2_CTX;

typedef struct MD5state_st {
    unsigned long A;
    unsigned long B;
    unsigned long C;
    unsigned long D;
    unsigned long Nl;
    unsigned long Nh;
    unsigned long data[16];
    int num;
} MD5_CTX;

typedef struct rc2_key_st {
    unsigned int data[64];
} RC2_KEY;

typedef struct rc4_key_st {
    unsigned int x;
    unsigned int y;
    unsigned int data[256];
} RC4_KEY;

typedef struct rc5_key_st {
    int rounds;
    unsigned long data[2 * (16 + 1)];
} RC5_32_KEY;

typedef struct RIPEMD160state_st {
    unsigned long A;
    unsigned long B;
    unsigned long C;
    unsigned long D;
    unsigned long E;
    unsigned long Nl;
    unsigned long Nh;
    unsigned long data[16];
    int num;
} RIPEMD160_CTX;

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

typedef struct SHAstate_st {
    unsigned long h0;
    unsigned long h1;
    unsigned long h2;
    unsigned long h3;
    unsigned long h4;
    unsigned long Nl;
    unsigned long Nh;
    unsigned long data[16];
    int num;
} SHA_CTX;

typedef struct ssl2_ctx_st {
    int three_byte_header;
    int clear_text;
    int escape;
    int ssl2_rollback;
    unsigned int wnum;
    int wpend_tot;
    char *wpend_buf;
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
} SSL2_CTX;

typedef struct ssl3_buffer_st {
    int total;
    int wanted;
    int left;
    int offset;
    unsigned char *buf;
} SSL3_BUFFER;

typedef struct ssl3_enc_method {
    int (*enc)();
    int (*mac)();
    int (*setup_key_block)();
    int (*generate_master_secret)();
    int (*change_cipher_state)();
    int (*final_finish_mac)();
    int finish_mac_length;
    int (*cert_verify_mac)();
    unsigned char client_finished[20];
    int client_finished_len;
    unsigned char server_finished[20];
    int server_finished_len;
    int (*alert_value)();
} SSL3_ENC_METHOD;

typedef struct ssl3_record_st {
    int type;
    unsigned int length;
    unsigned int off;
    unsigned char *data;
    unsigned char *input;
    unsigned char *comp;
} SSL3_RECORD;

typedef struct ssl_cipher_st {
    int valid;
    char *name;
    unsigned long id;
    unsigned long algorithms;
    unsigned long algorithm2;
    unsigned long mask;
} SSL_CIPHER;

typedef struct stack_st {
    int num;
    char **data;
    int sorted;
    int num_alloc;
    int (*comp)();
} STACK;

typedef unsigned long __ULong;

typedef long _fpos_t;

typedef unsigned char des_cblock[8];

typedef unsigned int size_t;

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

typedef struct bn_blinding_st {
    int init;
    BIGNUM *A;
    BIGNUM *Ai;
    BIGNUM *mod;
} BN_BLINDING;

typedef struct bignum_ctx {
    int tos;
    BIGNUM bn[12 + 1];
    int flags;
} BN_CTX;

typedef struct crypto_ex_data_st {
    STACK *sk;
    int dummy;
} CRYPTO_EX_DATA;

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

typedef struct mdc2_ctx_st {
    int num;
    unsigned char data[8];
    des_cblock h;
    des_cblock hh;
    int pad_type;
} MDC2_CTX;

typedef struct ssl_method_st {
    int version;
    int (*ssl_new)();
    void (*ssl_clear)();
    void (*ssl_free)();
    int (*ssl_accept)();
    int (*ssl_connect)();
    int (*ssl_read)();
    int (*ssl_peek)();
    int (*ssl_write)();
    int (*ssl_shutdown)();
    int (*ssl_renegotiate)();
    int (*ssl_renegotiate_check)();
    long (*ssl_ctrl)();
    long (*ssl_ctx_ctrl)();
    SSL_CIPHER *(*get_cipher_by_char)();
    int (*put_cipher_by_char)();
    int (*ssl_pending)();
    int (*num_ciphers)();
    SSL_CIPHER *(*get_cipher)();
    struct ssl_method_st *(*get_ssl_method)();
    long (*get_timeout)();
    struct ssl3_enc_method *ssl3_enc;
} SSL_METHOD;

typedef struct X509_extension_st {
    ASN1_OBJECT *object;
    short critical;
    short netscape_hack;
    ASN1_STRING *value;
    long argl;
    char *argp;
    void (*ex_free)();
} X509_EXTENSION;

typedef struct X509_revoked_st {
    ASN1_STRING *serialNumber;
    ASN1_STRING *revocationDate;
    STACK *extensions;
    int sequence;
} X509_REVOKED;

typedef struct X509_val_st {
    ASN1_STRING *notBefore;
    ASN1_STRING *notAfter;
} X509_VAL;

typedef struct des_ks_struct {
    union {
        des_cblock _;
        unsigned long pad[2];
    } ks;
    int weak_key;
} des_key_schedule[16];

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

typedef struct comp_ctx_st {
    COMP_METHOD *meth;
    unsigned long compress_in;
    unsigned long compress_out;
    unsigned long expand_in;
    unsigned long expand_out;
    CRYPTO_EX_DATA ex_data;
} COMP_CTX;

typedef struct evp_cipher_ctx_st {
    EVP_CIPHER *cipher;
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

typedef struct env_md_ctx_st {
    EVP_MD *digest;
    union {
        unsigned char base[4];
        MD2_CTX md2;
        MD5_CTX md5;
        RIPEMD160_CTX ripemd160;
        SHA_CTX sha;
        MDC2_CTX mdc2;
    } md;
} EVP_MD_CTX;

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

typedef struct X509_algor_st {
    ASN1_OBJECT *algorithm;
    ASN1_TYPE *parameter;
} X509_ALGOR;

typedef struct ssl3_ctx_st {
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
    unsigned int wnum;
    int wpend_tot;
    int wpend_type;
    int wpend_ret;
    char *wpend_buf;
    EVP_MD_CTX finish_dgst1;
    EVP_MD_CTX finish_dgst2;
    int change_cipher_spec;
    int warn_alert;
    int fatal_alert;
    int alert_dispatch;
    char send_alert[2];
    int renegotiate;
    int total_renegotiations;
    int num_renegotiations;
    int in_read_app_data;
    struct {
        unsigned char finish_md[(16 + 20) * 2];
        unsigned long message_size;
        int message_type;
        SSL_CIPHER *new_cipher;
        DH *dh;
        int next_state;
        int reuse_message;
        int cert_req;
        int ctype_num;
        char ctype[7];
        STACK *ca_names;
        int use_rsa_tmp;
        int key_block_length;
        unsigned char *key_block;
        EVP_CIPHER *new_sym_enc;
        EVP_MD *new_hash;
        COMP_METHOD *new_compression;
        int cert_request;
    } tmp;
} SSL3_CTX;

typedef struct X509_pubkey_st {
    X509_ALGOR *algor;
    ASN1_STRING *public_key;
    struct evp_pkey_st *pkey;
} X509_PUBKEY;

#endif
