/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_2b, ssl/ssl_sess.c (SSL_CTX_add_session). See THIRD_PARTY.md. */
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
extern char D_00C4E0C8[];
typedef struct lhash_st LHASH;
extern char *func_00BB61D0(LHASH *lh, char *data);
extern void func_00BC0748(int mode, int type, char *file, int line);
extern int func_00BC0778(int *pointer, int amount, int type, char *file, int line);
typedef struct ssl_ctx_st SSL_CTX;
typedef struct ssl_session_st {
    unsigned char reserved_00[152];
    int references;
    unsigned char reserved_9c[60];
} SSL_SESSION;
struct ssl_ctx_st {
    unsigned char reserved_00[28];
    struct lhash_st *sessions;
    unsigned char reserved_20[12];
    struct ssl_session_st *session_cache_tail;
    unsigned char reserved_30[28];
    struct {
        int sess_connect;
        int sess_connect_renegotiate;
        int sess_connect_good;
        int sess_accept;
        int sess_accept_renegotiate;
        int sess_accept_good;
        int sess_miss;
        int sess_timeout;
        int sess_cache_full;
        int sess_hit;
        int sess_cb_hit;
    } stats;
    unsigned char reserved_78[80];
};
extern long func_00BCDF48(SSL_CTX *ctx, int cmd, long larg, char *parg);
extern int func_00BD8EE8(SSL_CTX *ctx, SSL_SESSION *c);
extern void func_00BD8F78(SSL_SESSION *ss);
extern void func_00BD9590(SSL_CTX *ctx, SSL_SESSION *s);

int func_00BD8D10(SSL_CTX *ctx, SSL_SESSION *c) {
    int ret = 0;
    SSL_SESSION *s;
    func_00BC0778(&c->references, 1, 14, D_00C4E0C8, 281);
    func_00BC0748(1 | 8, 12, D_00C4E0C8, 283);
    s = (SSL_SESSION *)func_00BB61D0(ctx->sessions, (char *)c);
    if (s == ((void *)0))
        func_00BD9590(ctx, c);
    if (s != ((void *)0)) {
        func_00BD8F78(s);
        ret = 0;
    } else {
        ret = 1;
        if (func_00BCDF48(ctx, 43, 0, (void *)0) > 0) {
            while (func_00BCDF48(ctx, 20, 0, (void *)0) > func_00BCDF48(ctx, 43, 0, (void *)0)) {
                if (!ctx->session_cache_tail)
                    continue;
                if (!func_00BD8EE8(ctx, ctx->session_cache_tail))
                    break;
                else
                    ctx->stats.sess_cache_full++;
            }
        }
    }
    func_00BC0748(2 | 8, 12, D_00C4E0C8, 319);
    return ret;
}
