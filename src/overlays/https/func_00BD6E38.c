/* compiler: ee-gcc-2.9-nsa-G0 */
/* OpenSSL_0_9_2b, crypto/rsa/rsa_sign.c (RSA_sign). See THIRD_PARTY.md. */
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
extern void *memset(void *, int, size_t);
extern void func_00BB3380(int lib, int func, int reason, char *file, int line);
typedef struct rsa_st RSA;
extern int func_00BC68D0(RSA *);
extern int func_00BC6C60(int flen, unsigned char *from, unsigned char *to, RSA *rsa, int padding);
typedef struct asn1_object_st {
    unsigned char reserved_00[12];
    int length;
    unsigned char reserved_10[8];
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
extern ASN1_OBJECT *func_00BB8168(int n);
typedef struct X509_algor_st {
    ASN1_OBJECT *algorithm;
    ASN1_TYPE *parameter;
} X509_ALGOR;
typedef struct X509_sig_st {
    X509_ALGOR *algor;
    ASN1_STRING *digest;
} X509_SIG;
extern int func_00BE2828(X509_SIG *a, unsigned char **pp);

int func_00BD6E38(int type, unsigned char *m, unsigned int m_len, unsigned char *sigret,
                  unsigned int *siglen, RSA *rsa) {
    X509_SIG sig;
    ASN1_TYPE parameter;
    int i;
    int j;
    int ret = 1;
    unsigned char *p;
    unsigned char *s;
    X509_ALGOR algor;
    ASN1_STRING digest;
    sig.algor = &algor;
    sig.algor->algorithm = func_00BB8168(type);
    if (sig.algor->algorithm == ((void *)0)) {
        func_00BB3380(4, 126, 120, (void *)0, 0);
        return 0;
    }
    if (sig.algor->algorithm->length == 0) {
        func_00BB3380(4, 126, 119, (void *)0, 0);
        return 0;
    }
    parameter.type = 5;
    parameter.value.ptr = (void *)0;
    sig.algor->parameter = &parameter;
    sig.digest = &digest;
    sig.digest->data = m;
    sig.digest->length = m_len;
    i = func_00BE2828(&sig, (void *)0);
    j = func_00BC68D0(rsa);
    if ((i - 1) > j) {
        func_00BB3380(4, 126, 111, (void *)0, 0);
        return 0;
    }
    s = (unsigned char *)func_00BC0A38(((unsigned int)j) + 1);
    if (s == ((void *)0)) {
        func_00BB3380(4, 126, 1 | 32, (void *)0, 0);
        return 0;
    }
    p = s;
    func_00BE2828(&sig, &p);
    i = func_00BC6C60(i, s, sigret, rsa, 1);
    if (i <= 0)
        ret = 0;
    else
        *siglen = i;
    memset(s, 0, ((unsigned int)j) + 1);
    func_00BC0A88((char *)s);
    return ret;
}
