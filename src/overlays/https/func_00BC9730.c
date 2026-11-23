/* compiler: ee-gcc-2.9-nsa-G0 */
/* OpenSSL_0_9_2b, ssl/s2_clnt.c (get_server_finished). See THIRD_PARTY.md. */
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
typedef void (*InfoCallback)(SSL *, int, int);
typedef struct {
    char reserved00[0x7c];
    InfoCallback info;
} SSL_CTX;
typedef struct {
    int length;
    char *data;
} BUF_MEM;
typedef struct {
    char reserved00[0x44];
    int session_id_length;
    unsigned char session_id[32];
} SSL_SESSION;
struct SSL {
    char reserved00[0x30];
    int state;
    char reserved34[8];
    BUF_MEM *init_buf;
    int init_num;
    char reserved44[0x18];
    int hit;
    char reserved60[0x50];
    SSL_SESSION *session;
    char reservedb4[0xc];
    InfoCallback info;
    char reservedc4[0x18];
    SSL_CTX *ctx;
    char reservede0[0x20];
    unsigned long options;
};
extern int func_00BCFBB8(SSL *, char *, int), func_00BD0878(SSL *, int, int);
extern void func_00BB3380(int, int, int, char *, int), func_00BD0A08(SSL *, int);
extern void *memcpy(void *, const void *, unsigned int);
extern int func_001C4698(const void *, const void *, unsigned int);
int func_00BC9730(SSL *s) {
    unsigned char *buf;
    unsigned char *p;
    int i;
    buf = (unsigned char *)s->init_buf->data;
    p = buf;
    if (s->state == (0x70 | 0x1000)) {
        i = func_00BCFBB8(s, (char *)(&buf[s->init_num]), 1 - s->init_num);
        if (i < (1 - s->init_num))
            return func_00BD0878(s, 108, i);
        s->init_num = i;
        if ((*p) == 7) {
            InfoCallback cb;
            s->state = 0x1091;
            if (s->info)
                cb = s->info;
            else if (s->ctx->info)
                cb = s->ctx->info;
            else
                cb = 0;
            if (cb)
                cb(s, 0x1001, 1);
            s->state = 0x50 | 0x1000;
            return 1;
        } else if ((*p) != 6) {
            if (p[0] != 0) {
                func_00BD0A08(s, 0x0000);
                func_00BB3380(20, 108, 212, (void *)0, 0);
            } else
                func_00BB3380(20, 108, 200, (void *)0, 0);
            return -1;
        }
        s->state = 0x03;
        s->init_num = 0;
    }
    i = func_00BCFBB8(s, (char *)(&buf[s->init_num]), 16 - s->init_num);
    if (i < (16 - s->init_num))
        return func_00BD0878(s, 108, i);
    if (!s->hit) {
        s->session->session_id_length = 16;
        memcpy(s->session->session_id, p, 16);
    } else {
        if (!(s->options & 0x00000001L)) {
            if (func_001C4698(buf, s->session->session_id,
                              (unsigned int)s->session->session_id_length) != 0) {
                func_00BD0A08(s, 0x0000);
                func_00BB3380(20, 108, 231, (void *)0, 0);
                return -1;
            }
        }
    }
    return 1;
}
