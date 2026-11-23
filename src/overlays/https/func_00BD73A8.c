/* compiler: ee-gcc-2.9-nsa-G0 */
/* SSLeay_0_9_0b, ssl/ssl_ciph.c (ssl_cipher_get_evp). See THIRD_PARTY.md. */
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
typedef struct env_md_st EVP_MD;
typedef struct evp_cipher_st EVP_CIPHER;
extern EVP_CIPHER *func_00BB2990(void);
typedef struct ssl_cipher_st {
    unsigned char reserved_00[16];
    unsigned long algorithms;
    unsigned char reserved_18[16];
} SSL_CIPHER;
extern EVP_CIPHER *D_00C3FE90[7];
extern EVP_MD *D_00C3FEB0[2];

int func_00BD73A8(SSL_CIPHER *c, EVP_CIPHER **enc, EVP_MD **md) {
    int i;
    if (c == ((void *)0))
        return 0;
    switch (c->algorithms & 0x0001Fc00L) {
    case 0x00000400L:
        i = 0;
        break;

    case 0x00000800L:
        i = 1;
        break;

    case 0x00001000L:
        i = 2;
        break;

    case 0x00002000L:
        i = 3;
        break;

    case 0x00004000L:
        i = 4;
        break;

    case 0x00010000L:
        i = 6;
        break;
        break;

    default:
        i = -1;
        break;
    }

    if ((i < 0) || (i > 7))
        *enc = (void *)0;
    else {
        if (i == 6)
            *enc = func_00BB2990();
        else
            *enc = D_00C3FE90[i];
    }
    switch (c->algorithms & 0x00060000L) {
    case 0x00020000L:
        i = 0;
        break;

    case 0x00040000L:
        i = 1;
        break;

    default:
        i = -1;
        break;
    }

    if ((i < 0) || (i > 2))
        *md = (void *)0;
    else
        *md = D_00C3FEB0[i];
    if (((*enc) != ((void *)0)) && ((*md) != ((void *)0)))
        return 1;
    else
        return 0;
}
