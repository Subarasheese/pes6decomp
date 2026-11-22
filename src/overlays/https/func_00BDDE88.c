/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_1c, crypto/x509/x_all.c, PKCS7_dup. See THIRD_PARTY.md. */
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
extern char *func_00B9DAC0(int (*i2d)(), char *(*d2i)(), char *x);
typedef struct X509_algor_st {
    ASN1_OBJECT *algorithm;
    ASN1_TYPE *parameter;
} X509_ALGOR;
typedef struct pkcs7_signed_st {
    ASN1_STRING *version;
    STACK *md_algs;
    STACK *cert;
    STACK *crl;
    STACK *signer_info;
    struct pkcs7_st *contents;
} PKCS7_SIGNED;
typedef struct pkcs7_enc_content_st {
    ASN1_OBJECT *content_type;
    X509_ALGOR *algorithm;
    ASN1_STRING *enc_data;
} PKCS7_ENC_CONTENT;
typedef struct pkcs7_enveloped_st {
    ASN1_STRING *version;
    STACK *recipientinfo;
    PKCS7_ENC_CONTENT *enc_data;
} PKCS7_ENVELOPE;
typedef struct pkcs7_signedandenveloped_st {
    ASN1_STRING *version;
    STACK *md_algs;
    STACK *cert;
    STACK *crl;
    STACK *signer_info;
    PKCS7_ENC_CONTENT *enc_data;
    STACK *recipientinfo;
} PKCS7_SIGN_ENVELOPE;
typedef struct pkcs7_digest_st {
    ASN1_STRING *version;
    X509_ALGOR *md;
    struct pkcs7_st *contents;
    ASN1_STRING *digest;
} PKCS7_DIGEST;
typedef struct pkcs7_encrypted_st {
    ASN1_STRING *version;
    PKCS7_ENC_CONTENT *enc_data;
} PKCS7_ENCRYPT;
typedef struct pkcs7_st {
    unsigned char *asn1;
    long length;
    int state;
    int detached;
    ASN1_OBJECT *type;
    union {
        char *ptr;
        ASN1_STRING *data;
        PKCS7_SIGNED *sign;
        PKCS7_ENVELOPE *enveloped;
        PKCS7_SIGN_ENVELOPE *signed_and_enveloped;
        PKCS7_DIGEST *digest;
        PKCS7_ENCRYPT *encrypted;
    } d;
} PKCS7;
extern int D_00B9FA40(PKCS7 *a, unsigned char **pp);
extern PKCS7 *D_00B9FC88(PKCS7 **a, unsigned char **pp, long length);

PKCS7 *func_00BDDE88(PKCS7 *p7) {
    return (PKCS7 *)func_00B9DAC0((int (*)())D_00B9FA40, (char *(*)())D_00B9FC88, (char *)p7);
}
