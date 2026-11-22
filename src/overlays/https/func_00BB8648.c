/* compiler: ee-gcc-2.9-G0 */
/* Adapted from SSLeay 0.9.1b, crypto/objects/obj_dat.c (OBJ_create_objects).
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

extern const char _ctype_[];
extern int func_00BA2E98(BIO *bp, char *buf, int size);
extern int func_00BB8868(char *oid, char *sn, char *ln);

int func_00BB8648(BIO *in) {
    char buf[512];
    int i;
    int num = 0;
    char *o;
    char *s;
    char *l = (void *)0;
    for (;;) {
        s = (o = (void *)0);
        i = func_00BA2E98(in, buf, 512);
        if (i <= 0)
            return num;
        buf[i - 1] = '\0';
        if (!((_ctype_ + 1)[(unsigned)buf[0]] & ((01 | 02) | 04)))
            return num;
        o = (s = buf);
        while (((_ctype_ + 1)[(unsigned)(*s)] & 04) || ((*s) == '.'))
            s++;

        if ((*s) != '\0') {
            *(s++) = '\0';
            while ((_ctype_ + 1)[(unsigned)(*s)] & 010)
                s++;

            if ((*s) == '\0')
                s = (void *)0;
            else {
                l = s;
                while (((*l) != '\0') && (!((_ctype_ + 1)[(unsigned)(*l)] & 010)))
                    l++;

                if ((*l) != '\0') {
                    *(l++) = '\0';
                    while ((_ctype_ + 1)[(unsigned)(*l)] & 010)
                        l++;

                    if ((*l) == '\0')
                        l = (void *)0;
                } else
                    l = (void *)0;
            }
        } else
            s = (void *)0;
        if ((o == 0) || ((*o) == '\0'))
            return num;
        if (!func_00BB8868(o, s, l))
            return num;
        num++;
    }
}
