/* compiler: ee-gcc-2.9-nsa-G0 */
/* OpenSSL_0_9_2b, ssl/s3_both.c (ssl3_get_finished). See THIRD_PARTY.md. */
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
typedef unsigned int size_t;
typedef struct buf_mem_st {
    unsigned char reserved_00[4];
    char *data;
    unsigned char reserved_08[4];
} BUF_MEM;
typedef struct stack_st STACK;
typedef struct dh_st DH;
typedef struct env_md_st EVP_MD;
typedef struct evp_cipher_st EVP_CIPHER;
extern int func_001C4698(const void *, const void *, size_t);
typedef struct comp_method_st COMP_METHOD;
extern void func_00BB3380(int lib, int func, int reason, char *file, int line);
typedef struct ssl_cipher_st SSL_CIPHER;
typedef struct ssl_method_st {
    unsigned char reserved_00[84];
    struct ssl3_enc_method *ssl3_enc;
} SSL_METHOD;
typedef struct ssl_st {
    unsigned char reserved_00[8];
    SSL_METHOD *method;
    unsigned char reserved_0c[48];
    BUF_MEM *init_buf;
    unsigned char reserved_40[20];
    struct ssl3_ctx_st *s3;
    unsigned char reserved_58[112];
} SSL;
typedef struct ssl3_ctx_st {
    unsigned char reserved_00[256];
    int change_cipher_spec;
    unsigned char reserved_104[36];
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
    unsigned char reserved_1c0[432];
} SSL3_CTX;
typedef struct ssl3_enc_method {
    unsigned char reserved_00[24];
    int finish_mac_length;
    unsigned char reserved_1c[56];
} SSL3_ENC_METHOD;
extern void func_00BD4858(SSL *s, int level, int desc);
extern long func_00BCACC0(SSL *s, int st1, int stn, int mt, long max, int *ok);

int func_00BCA728(SSL *s, int a, int b) {
    int al;
    int i;
    int ok;
    long n;
    unsigned char *p;
    n = func_00BCACC0(s, a, b, 20, 64, &ok);
    if (!ok)
        return (int)n;
    if (!s->s3->change_cipher_spec) {
        al = 10;
        func_00BB3380(20, 140, 154, (void *)0, 0);
        goto f_err;
    }
    s->s3->change_cipher_spec = 0;
    p = (unsigned char *)s->init_buf->data;
    i = s->method->ssl3_enc->finish_mac_length;
    if (i != n) {
        al = 50;
        func_00BB3380(20, 140, 111, (void *)0, 0);
        goto f_err;
    }
    if (func_001C4698(p, (char *)(&s->s3->tmp.finish_md[0]), i) != 0) {
        al = 51;
        func_00BB3380(20, 140, 149, (void *)0, 0);
        goto f_err;
    }
    return 1;
f_err:
    func_00BD4858(s, 2, al);

    return -1;
}
