/* compiler: ee-gcc-2.9-G0 */
/* Adapted from SSLeay 0.9.1b, crypto/des/des_enc.c (des_encrypt3).
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

extern void func_00BAFBF0(unsigned long *data, des_key_schedule ks, int enc);

void func_00BB05D0(unsigned long *data, des_key_schedule ks1, des_key_schedule ks2,
                   des_key_schedule ks3) {
    register unsigned long l;
    register unsigned long r;
    l = data[0];
    r = data[1];
    {
        register unsigned long tt;
        tt = ((r >> 4) ^ l) & 0x0f0f0f0fL, l ^= tt, r ^= tt << 4;
        tt = ((l >> 16) ^ r) & 0x0000ffffL, r ^= tt, l ^= tt << 16;
        tt = ((r >> 2) ^ l) & 0x33333333L, l ^= tt, r ^= tt << 2;
        tt = ((l >> 8) ^ r) & 0x00ff00ffL, r ^= tt, l ^= tt << 8;
        tt = ((r >> 1) ^ l) & 0x55555555L, l ^= tt, r ^= tt << 1;
    };
    data[0] = l;
    data[1] = r;
    func_00BAFBF0((unsigned long *)data, ks1, 1);
    func_00BAFBF0((unsigned long *)data, ks2, 0);
    func_00BAFBF0((unsigned long *)data, ks3, 1);
    l = data[0];
    r = data[1];
    {
        register unsigned long tt;
        tt = ((r >> 1) ^ l) & 0x55555555L, l ^= tt, r ^= tt << 1;
        tt = ((l >> 8) ^ r) & 0x00ff00ffL, r ^= tt, l ^= tt << 8;
        tt = ((r >> 2) ^ l) & 0x33333333L, l ^= tt, r ^= tt << 2;
        tt = ((l >> 16) ^ r) & 0x0000ffffL, r ^= tt, l ^= tt << 16;
        tt = ((r >> 4) ^ l) & 0x0f0f0f0fL, l ^= tt, r ^= tt << 4;
    };
    data[0] = l;
    data[1] = r;
}
