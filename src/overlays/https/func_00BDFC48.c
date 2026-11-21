/* compiler: ee-gcc-2.9-G0 */
/* Adapted from SSLeay 0.9.1b, crypto/x509/x509name.c (X509_NAME_ENTRY_create_by_OBJ).
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

typedef struct X509_name_entry_st {
    ASN1_OBJECT *object;
    ASN1_STRING *value;
    int set;
    int size;
} X509_NAME_ENTRY;
extern X509_NAME_ENTRY *func_00BA0018(void);
extern void func_00BA0090(X509_NAME_ENTRY *a);
extern int func_00BDFD38(X509_NAME_ENTRY *ne, ASN1_OBJECT *obj);
extern int func_00BDFDA8(X509_NAME_ENTRY *ne, int type, unsigned char *bytes, int len);

X509_NAME_ENTRY *func_00BDFC48(X509_NAME_ENTRY **ne, ASN1_OBJECT *obj, int type,
                               unsigned char *bytes, int len) {
    X509_NAME_ENTRY *ret;
    if ((ne == 0) || ((*ne) == 0)) {
        if ((ret = func_00BA0018()) == 0)
            return (void *)0;
    } else
        ret = *ne;
    if (!func_00BDFD38(ret, obj))
        goto err;
    if (!func_00BDFDA8(ret, type, bytes, len))
        goto err;
    if ((ne != 0) && ((*ne) == 0))
        *ne = ret;
    return ret;
err:
    if ((ne == 0) || (ret != (*ne)))
        func_00BA0090(ret);

    return (void *)0;
}
