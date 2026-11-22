/* compiler: ee-gcc-2.9-as210-G0 */
/* Source correspondence: OpenSSL_0_9_1c, crypto/asn1/x_crl.c (X509_REVOKED_new). See
 * THIRD_PARTY.md. */
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
extern void *func_00BC0A38(size_t __size);
typedef struct stack_st {
    int num;
    char **data;
    int sorted;
    int num_alloc;
    int (*comp)();
} STACK;
extern void func_00BB3380(int lib, int func, int reason, char *file, int line);
typedef struct asn1_ctx_st {
    unsigned char *p;
    int eos;
    int error;
    int inf;
    int tag;
    int xclass;
    long slen;
    unsigned char *max;
    unsigned char *q;
    unsigned char **pp;
    int line;
} ASN1_CTX;
typedef struct asn1_string_st {
    int length;
    int type;
    unsigned char *data;
    long flags;
} ASN1_STRING;
extern ASN1_STRING *func_00B9F628(int type);
typedef struct X509_revoked_st {
    ASN1_STRING *serialNumber;
    ASN1_STRING *revocationDate;
    STACK *extensions;
    int sequence;
} X509_REVOKED;

X509_REVOKED *func_00BE19A8() {
    X509_REVOKED *ret = (void *)0;
    ASN1_CTX c;
    if ((ret = (X509_REVOKED *)func_00BC0A38(sizeof(X509_REVOKED))) == ((void *)0)) {
        c.line = 205;
        goto err2;
    };
    if ((ret->serialNumber = (ASN1_STRING *)func_00B9F628(2)) == ((void *)0))
        return (void *)0;
    if ((ret->revocationDate = (ASN1_STRING *)func_00B9F628(23)) == ((void *)0))
        return (void *)0;
    ret->extensions = (void *)0;
    return ret;
err2:
    func_00BB3380(13, 218, 1 | 32, (void *)0, 0);

    return (void *)0;
}
