/* compiler: ee-gcc-2.9-G0 */
/* Adapted from SSLeay 0.9.1b, crypto/asn1/a_type.c (i2d_ASN1_TYPE).
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

extern void *memcpy(void *, const void *, size_t);
extern int func_00B9E008(ASN1_OBJECT *a, unsigned char **pp);
extern int func_00B9CB28(ASN1_STRING *a, unsigned char **pp);
extern int func_00B9DB88(ASN1_STRING *a, unsigned char **pp);
extern int func_00BA00D8(ASN1_STRING *a, unsigned char **pp);
extern int func_00B9EBC8(ASN1_STRING *a, unsigned char **pp);
extern int func_00B9D160(ASN1_STRING *a, unsigned char **pp, int tag, int xclass);
extern void func_00B9F1A0(unsigned char **pp, int constructed, int length, int tag, int xclass);

int func_00BA04E0(ASN1_TYPE *a, unsigned char **pp) {
    int r = 0;
    if (a == 0)
        return 0;
    switch (a->type) {
    case 5:
        if (pp != 0)
            func_00B9F1A0(pp, 0, 0, 5, 0x00);
        r = 2;
        break;

    case 2:

    case 2 + 0x100:
        r = func_00B9DB88(a->value.integer, pp);
        break;

    case 3:
        r = func_00B9CB28(a->value.bit_string, pp);
        break;

    case 4:
        r = func_00BA00D8(a->value.octet_string, pp);
        break;

    case 6:
        r = func_00B9E008(a->value.object, pp);
        break;

    case 19:
        r = func_00B9D160((ASN1_STRING *)a->value.printablestring, pp, 19, 0x00);
        break;

    case 20:
        r = func_00B9D160((ASN1_STRING *)a->value.t61string, pp, 20, 0x00);
        break;

    case 22:
        r = func_00B9D160((ASN1_STRING *)a->value.ia5string, pp, 22, 0x00);
        break;

    case 27:
        r = func_00B9D160((ASN1_STRING *)a->value.generalstring, pp, 27, 0x00);
        break;

    case 28:
        r = func_00B9D160((ASN1_STRING *)a->value.universalstring, pp, 28, 0x00);
        break;

    case 30:
        r = func_00B9D160((ASN1_STRING *)a->value.bmpstring, pp, 30, 0x00);
        break;

    case 23:
        r = func_00B9EBC8(a->value.utctime, pp);
        break;

    case 17:

    case 16:
        if (a->value.set == 0)
            r = 0;
        else {
            r = a->value.set->length;
            if (pp != 0) {
                memcpy(*pp, a->value.set->data, r);
                *pp += r;
            }
        }
        break;
    }

    return r;
}
