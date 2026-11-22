/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_1c, crypto/asn1/p7_enc.c, i2d_PKCS7_ENCRYPT. See THIRD_PARTY.md. */
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
extern int func_00BDFF50(ASN1_STRING *a, unsigned char **pp);
extern void func_00B9F1A0(unsigned char **pp, int constructed, int length, int tag, int xclass);
extern int func_00B9F348(int constructed, int length, int tag);
typedef struct X509_algor_st {
    ASN1_OBJECT *algorithm;
    ASN1_TYPE *parameter;
} X509_ALGOR;
typedef struct pkcs7_enc_content_st {
    ASN1_OBJECT *content_type;
    X509_ALGOR *algorithm;
    ASN1_STRING *enc_data;
} PKCS7_ENC_CONTENT;
typedef struct pkcs7_encrypted_st {
    ASN1_STRING *version;
    PKCS7_ENC_CONTENT *enc_data;
} PKCS7_ENCRYPT;
extern int func_00B9CB28(PKCS7_ENC_CONTENT *a, unsigned char **pp);

int func_00BE2158(PKCS7_ENCRYPT *a, unsigned char **pp) {
    int r = 0;
    int ret = 0;
    unsigned char *p;
    if (a == ((void *)0))
        return 0;
    ret += func_00BDFF50(a->version, (void *)0);
    ret += func_00B9CB28(a->enc_data, (void *)0);
    r = func_00B9F348(1, ret, 16);
    if (pp == ((void *)0))
        return r;
    p = *pp;
    func_00B9F1A0(&p, 1, ret, 16, 0x00);
    func_00BDFF50(a->version, &p);
    func_00B9CB28(a->enc_data, &p);
    *pp = p;
    return r;
    ;
}
