/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_1c, crypto/rsa/rsa_saos.c, RSA_verify_ASN1_OCTET_STRING. See THIRD_PARTY.md. */
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
extern void func_00BC0A88(void *);
extern void *func_00BC0A38(size_t __size);
extern int func_001C4698(const void *, const void *, size_t);
extern void *memset(void *, int, size_t);
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
extern void func_00BB3380(int lib, int func, int reason, char *file, int line);
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
extern int func_00BC68D0(RSA *);
extern int func_00BC6CF8(int flen, unsigned char *from, unsigned char *to, RSA *rsa, int padding);
typedef struct asn1_string_st {
    int length;
    int type;
    unsigned char *data;
    long flags;
} ASN1_STRING;
extern void func_00B9F690(ASN1_STRING *a);
extern ASN1_STRING *func_00BA00F8(ASN1_STRING **a, unsigned char **pp, long length);

int func_00BD5818(int dtype, unsigned char *m, unsigned int m_len, unsigned char *sigbuf,
                  unsigned int siglen, RSA *rsa) {
    int i;
    int ret = 0;
    unsigned char *p;
    unsigned char *s;
    ASN1_STRING *sig = (void *)0;
    if (siglen != ((unsigned int)func_00BC68D0(rsa))) {
        func_00BB3380(4, 129, 117, (void *)0, 0);
        return 0;
    }
    s = (unsigned char *)func_00BC0A38((unsigned int)siglen);
    if (s == ((void *)0)) {
        func_00BB3380(4, 129, 1 | 32, (void *)0, 0);
        goto err;
    }
    i = func_00BC6CF8((int)siglen, sigbuf, s, rsa, 1);
    if (i <= 0)
        goto err;
    p = s;
    sig = func_00BA00F8((void *)0, &p, (long)i);
    if (sig == ((void *)0))
        goto err;
    if ((((unsigned int)sig->length) != m_len) || (func_001C4698(m, sig->data, m_len) != 0)) {
        func_00BB3380(4, 129, 103, (void *)0, 0);
    } else
        ret = 1;
err:
    if (sig != ((void *)0))
        func_00B9F690((ASN1_STRING *)sig);

    memset(s, 0, (unsigned int)siglen);
    func_00BC0A88((char *)s);
    return ret;
}
