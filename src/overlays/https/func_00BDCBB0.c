/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_1c, crypto/x509/x509_cmp.c (X509_NAME_cmp). See THIRD_PARTY.md. */
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
extern int func_001C4698(const void *, const void *, size_t);
typedef struct stack_st {
    int num;
    char **data;
    unsigned char reserved_08[12];
} STACK;
typedef struct asn1_object_st ASN1_OBJECT;
typedef struct asn1_string_st {
    int length;
    unsigned char reserved_04[4];
    unsigned char *data;
    unsigned char reserved_0c[12];
} ASN1_STRING;
extern int func_00BB8B50(ASN1_OBJECT *a, ASN1_OBJECT *b);
typedef struct X509_name_entry_st {
    unsigned char reserved_0000[4];
    ASN1_OBJECT *object;
    ASN1_STRING *value;
    int set;
} X509_NAME_ENTRY;
typedef struct X509_name_st {
    unsigned char reserved_0000[4];
    STACK *entries;
    unsigned char reserved_0008[16];
} X509_NAME;

int func_00BDCBB0(X509_NAME *a, X509_NAME *b) {
    int i;
    int j;
    X509_NAME_ENTRY *na;
    X509_NAME_ENTRY *nb;
    if (a->entries->num != b->entries->num)
        return a->entries->num - b->entries->num;
    for (i = a->entries->num - 1; i >= 0; i--) {
        na = (X509_NAME_ENTRY *)a->entries->data[i];
        nb = (X509_NAME_ENTRY *)b->entries->data[i];
        j = na->value->length - nb->value->length;
        if (j)
            return j;
        j = func_001C4698(na->value->data, nb->value->data, na->value->length);
        if (j)
            return j;
        j = na->set - nb->set;
        if (j)
            return j;
    }

    for (i = a->entries->num - 1; i >= 0; i--) {
        na = (X509_NAME_ENTRY *)a->entries->data[i];
        nb = (X509_NAME_ENTRY *)b->entries->data[i];
        j = func_00BB8B50(na->object, nb->object);
        if (j)
            return j;
    }

    return 0;
}
