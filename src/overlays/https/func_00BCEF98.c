/* compiler: ee-gcc-2.9-G0 */
/* Adapted from SSLeay 0.9.1b, ssl/ssl_lib.c (SSL_get_version).
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
typedef struct ssl_session_st {
    int ssl_version;
    unsigned int key_arg_length;
    unsigned char key_arg[8];
    int master_key_length;
    unsigned char master_key[48];
    unsigned int session_id_length;
    unsigned char session_id[32];
    int not_resumable;
    struct cert_st *cert;
    X509 *peer;
    int references;
    long timeout;
    long time;
    COMP_CTX *compress_meth;
    SSL_CIPHER *cipher;
    unsigned long cipher_id;
    STACK *ciphers;
    CRYPTO_EX_DATA ex_data;
    struct ssl_session_st *prev;
    struct ssl_session_st *next;
} SSL_SESSION;
typedef struct ssl_ctx_st {
    SSL_METHOD *method;
    unsigned long options;
    STACK *cipher_list;
    STACK *cipher_list_by_id;
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
    int references;
    void (*info_callback)();
    int (*app_verify_callback)();
    char *app_verify_arg;
    struct cert_st *default_cert;
    int default_read_ahead;
    int default_verify_mode;
    int (*default_verify_callback)();
    int (*default_passwd_callback)();
    int (*client_cert_cb)();
    STACK *client_CA;
    int quiet_shutdown;
    CRYPTO_EX_DATA ex_data;
    EVP_MD *rsa_md5;
    EVP_MD *md5;
    EVP_MD *sha1;
    STACK *extra_certs;
} SSL_CTX;
typedef struct ssl_st {
    int version;
    int type;
    SSL_METHOD *method;
    BIO *rbio;
    BIO *wbio;
    BIO *bbio;
    int rwstate;
    int in_handshake;
    int (*handshake_func)();
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
    struct ssl2_ctx_st *s2;
    struct ssl3_ctx_st *s3;
    int read_ahead;
    int hit;
    STACK *cipher_list;
    STACK *cipher_list_by_id;
    EVP_CIPHER_CTX *enc_read_ctx;
    EVP_MD *read_hash;
    COMP_CTX *expand;
    EVP_CIPHER_CTX *enc_write_ctx;
    EVP_MD *write_hash;
    COMP_CTX *compress;
    struct cert_st *cert;
    SSL_SESSION *session;
    int verify_mode;
    int (*verify_callback)();
    void (*info_callback)();
    int error;
    int error_code;
    SSL_CTX *ctx;
    int debug;
    long verify_result;
    CRYPTO_EX_DATA ex_data;
    STACK *client_CA;
    int references;
    unsigned long options;
    int first_packet;
} SSL;
typedef struct cert_pkey_st {
    X509 *x509;
    EVP_PKEY *privatekey;
} CERT_PKEY;
typedef struct cert_st {
    int cert_type;
    CERT_PKEY *key;
    int valid;
    unsigned long mask;
    unsigned long export_mask;
    RSA *rsa_tmp;
    DH *dh_tmp;
    RSA *(*rsa_tmp_cb)();
    DH *(*dh_tmp_cb)();
    CERT_PKEY pkeys[5];
    STACK *cert_chain;
    int references;
} CERT;

char *func_00BCEF98(SSL *s) {
    if (s->version == 0x0301)
        return "TLSv1";
    else if (s->version == 0x0300)
        return "SSLv3";
    else if (s->version == 0x0002)
        return "SSLv2";
    else
        return "unknown";
}
