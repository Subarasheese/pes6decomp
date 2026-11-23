/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_2b, ssl/s3_both.c (ssl3_send_finished). See THIRD_PARTY.md. */
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
typedef struct SSL SSL;
typedef struct {
    unsigned char reserved00[0xf8];
    void *finish_dgst1, *finish_dgst2;
} SSL3_STATE;
typedef struct {
    char reserved00[0x14];
    int (*final_finish_mac)(SSL *, void *, void *, unsigned char *, int, unsigned char *);
} SSL3_ENC_METHOD;
typedef struct {
    char reserved00[0x54];
    SSL3_ENC_METHOD *ssl3_enc;
} SSL_METHOD;
typedef struct {
    int length;
    char *data;
} BUF_MEM;
struct SSL {
    char reserved00[8];
    SSL_METHOD *method;
    char reserved0c[0x24];
    int state;
    char reserved34[8];
    BUF_MEM *init_buf;
    int init_num, init_off;
    char reserved48[0xc];
    SSL3_STATE *s3;
};
extern int func_00BD4A88(SSL *, int);
int func_00BCA658(SSL *s, int a, int b, unsigned char *sender, int slen) {
    unsigned char *p;
    unsigned char *d;
    int i;
    unsigned long l;
    if (s->state == a) {
        d = (unsigned char *)s->init_buf->data;
        p = &d[4];
        i = s->method->ssl3_enc->final_finish_mac(s, s->s3->finish_dgst1, s->s3->finish_dgst2,
                                                  sender, slen, p);
        if (!i)
            return -1;
        p += i;
        l = i;
        *(d++) = 20;
        (d[0] = (unsigned char)((l >> 16) & 0xff), d[1] = (unsigned char)((l >> 8) & 0xff),
         d[2] = (unsigned char)(l & 0xff)),
            d += 3;
        s->init_num = ((int)l) + 4;
        s->init_off = 0;
        s->state = b;
    }
    return func_00BD4A88(s, 22);
}
