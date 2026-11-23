/* compiler: ee-gcc-2.9-nsa-G0 */
/* SSLeay_0_9_0b, crypto/asn1/x_pubkey.c (X509_PUBKEY_get). See THIRD_PARTY.md. */
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
extern void func_00BB3380(int lib, int func, int reason, char *file, int line);
typedef struct asn1_object_st ASN1_OBJECT;
typedef struct asn1_string_st {
    unsigned int length;
    unsigned char reserved_04[4];
    unsigned char *data;
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
typedef struct dsa_st {
    unsigned char reserved_00[8];
    int write_params;
    unsigned char reserved_0c[32];
} DSA;
extern DSA *func_00BAE4B8(DSA **a, unsigned char **pp, long long length);
extern int func_00BB8398(ASN1_OBJECT *o);
typedef struct evp_pkey_st {
    int type;
    unsigned char reserved_04[8];
    union {
        char *ptr;
        struct rsa_st *rsa;
        struct dsa_st *dsa;
        struct dh_st *dh;
    } pkey;
    int save_parameters;
    unsigned char reserved_14[4];
} EVP_PKEY;
extern void func_00BBA788(EVP_PKEY *pkey);
extern EVP_PKEY *func_00BAE878(int type, EVP_PKEY **a, unsigned char **pp, long long length);
typedef struct X509_algor_st {
    ASN1_OBJECT *algorithm;
    ASN1_TYPE *parameter;
} X509_ALGOR;
typedef struct X509_pubkey_st {
    X509_ALGOR *algor;
    ASN1_STRING *public_key;
    struct evp_pkey_st *pkey;
} X509_PUBKEY;

EVP_PKEY *func_00BE2708(X509_PUBKEY *key) {
    EVP_PKEY *ret = (void *)0;
    unsigned long long j;
    int type;
    unsigned char *p;
    X509_ALGOR *a;
    if (key == ((void *)0))
        goto err;
    if (key->pkey != ((void *)0))
        return key->pkey;
    if (key->public_key == ((void *)0))
        goto err;
    type = func_00BB8398(key->algor->algorithm);
    p = key->public_key->data;
    j = key->public_key->length;
    if ((ret = func_00BAE878(type, (void *)0, &p, j)) == ((void *)0)) {
        func_00BB3380(11, 209, 152, (void *)0, 0);
        goto err;
    }
    ret->save_parameters = 0;
    a = key->algor;
    if (ret->type == 116) {
        if (a->parameter->type == 16) {
            ret->pkey.dsa->write_params = 0;
            p = a->parameter->value.sequence->data;
            j = a->parameter->value.sequence->length;
            if (!func_00BAE4B8(&ret->pkey.dsa, &p, j))
                goto err;
        }
        ret->save_parameters = 1;
    }
    key->pkey = ret;
    return ret;
err:
    if (ret != ((void *)0))
        func_00BBA788(ret);

    return (void *)0;
}
