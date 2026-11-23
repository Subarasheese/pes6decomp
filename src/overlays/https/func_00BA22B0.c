/* compiler: ee-gcc-2.9-nsa-G0 */
/* OpenSSL_0_9_2b, crypto/bio/bf_buff.c (buffer_ctrl). See THIRD_PARTY.md. */
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
extern void func_00BC0A88(void *);
extern void *func_00BC0A38(size_t __size);
extern void *memcpy(void *, const void *, size_t);
typedef struct bio_st {
    unsigned char reserved_00[32];
    char *ptr;
    struct bio_st *next_bio;
    unsigned char reserved_28[32];
} BIO;
typedef struct bio_f_buffer_ctx_struct {
    int ibuf_size;
    int obuf_size;
    char *ibuf;
    int ibuf_len;
    int ibuf_off;
    char *obuf;
    int obuf_len;
    int obuf_off;
} BIO_F_BUFFER_CTX;
extern int func_00BA2D20(BIO *b, char *data, int len);
extern long func_00BA2FC0(BIO *bp, int cmd, long larg, char *parg);
extern long func_00BA2FA0(BIO *bp, int cmd, long larg, int iarg);
extern void func_00BA3208(BIO *b);
extern void func_00BB3380(int lib, int func, int reason, char *file, int line);
extern void func_00BA2910(BIO *);

long func_00BA22B0(BIO *b, int cmd, long num, char *ptr) {
    BIO *dbio;
    BIO_F_BUFFER_CTX *ctx;
    long ret = 1;
    char *p1;
    char *p2;
    int r;
    int i;
    int *ip;
    int ibs;
    int obs;
    ctx = (BIO_F_BUFFER_CTX *)b->ptr;
    switch (cmd) {
    case 1:
        ctx->ibuf_off = 0;
        ctx->ibuf_len = 0;
        ctx->obuf_off = 0;
        ctx->obuf_len = 0;
        ret = func_00BA2FC0(b->next_bio, cmd, num, ptr);
        break;

    case 3:
        ret = (long)ctx->obuf_len;
        break;

    case 116:
        ret = 0;
        p1 = ctx->ibuf;
        for (i = ctx->ibuf_off; i < ctx->ibuf_len; i++) {
            if (p1[i] == '\n')
                ret++;
        }

        break;

    case 13:
        ret = (long)ctx->obuf_len;
        if (ret == 0)
            ret = func_00BA2FC0(b->next_bio, cmd, num, ptr);
        break;

    case 10:
        ret = (long)ctx->ibuf_len;
        if (ret == 0)
            ret = func_00BA2FC0(b->next_bio, cmd, num, ptr);
        break;

    case 122:
        if (num > ctx->ibuf_size) {
            p1 = func_00BC0A38((int)num);
            if (p1 == ((void *)0))
                goto malloc_error;
            if (ctx->ibuf != ((void *)0))
                func_00BC0A88((char *)ctx->ibuf);
            ctx->ibuf = p1;
        }
        ctx->ibuf_off = 0;
        ctx->ibuf_len = (int)num;
        memcpy(ctx->ibuf, ptr, (int)num);
        ret = 1;
        break;

    case 117:
        if (ptr != ((void *)0)) {
            ip = (int *)ptr;
            if ((*ip) == 0) {
                ibs = (int)num;
                obs = ctx->obuf_size;
            } else {
                ibs = ctx->ibuf_size;
                obs = (int)num;
            }
        } else {
            ibs = (int)num;
            obs = (int)num;
        }
        p1 = ctx->ibuf;
        p2 = ctx->obuf;
        if ((ibs > 1024) && (ibs != ctx->ibuf_size)) {
            p1 = (char *)func_00BC0A38((int)num);
            if (p1 == ((void *)0))
                goto malloc_error;
        }
        if ((obs > 1024) && (obs != ctx->obuf_size)) {
            p2 = (char *)func_00BC0A38((int)num);
            if (p2 == ((void *)0)) {
                if (p1 != ctx->ibuf)
                    func_00BC0A88((char *)p1);
                goto malloc_error;
            }
        }
        if (ctx->ibuf != p1) {
            func_00BC0A88((char *)ctx->ibuf);
            ctx->ibuf = p1;
            ctx->ibuf_off = 0;
            ctx->ibuf_len = 0;
            ctx->ibuf_size = ibs;
        }
        if (ctx->obuf != p2) {
            func_00BC0A88((char *)ctx->obuf);
            ctx->obuf = p2;
            ctx->obuf_off = 0;
            ctx->obuf_len = 0;
            ctx->obuf_size = obs;
        }
        break;

    case 101:
        func_00BA2910(b);
        ret = func_00BA2FC0(b->next_bio, cmd, num, ptr);
        func_00BA3208(b);
        break;

    case 11:
        if (ctx->obuf_len > 0)
            for (;;) {
                func_00BA2910(b);
                if (ctx->obuf_len > ctx->obuf_off) {
                    r = func_00BA2D20(b->next_bio, &ctx->obuf[ctx->obuf_off],
                                      ctx->obuf_len - ctx->obuf_off);
                    func_00BA3208(b);
                    if (r <= 0)
                        return (long)r;
                    ctx->obuf_off += r;
                } else {
                    ctx->obuf_len = 0;
                    ctx->obuf_off = 0;
                    ret = 1;
                    break;
                }
            }

        ret = func_00BA2FC0(b->next_bio, cmd, num, ptr);
        break;

    case 12:
        dbio = (BIO *)ptr;
        if ((!func_00BA2FA0(dbio, 117, ctx->ibuf_size, 0)) ||
            (!func_00BA2FA0(dbio, 117, ctx->obuf_size, 1)))
            ret = 0;
        break;

    default:
        ret = func_00BA2FC0(b->next_bio, cmd, num, ptr);
        break;
    }

    return ret;
malloc_error:
    func_00BB3380(32, 107, 1 | 32, (void *)0, 0);

    return 0;
}
