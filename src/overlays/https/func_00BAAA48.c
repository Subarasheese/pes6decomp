/* compiler: ee-gcc-2.9-nsa-G0 */
/* SSLeay_0_8_1b, crypto/x509/by_dir.c (add_cert_dir). See THIRD_PARTY.md. */
/* Copyright (C) 1995-1997 Eric Young (eay@cryptsoft.com)
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
extern int func_001C83D8(const char *, const char *, size_t);
extern char *strncpy(char *, const char *, size_t);
extern void func_00BB3380(int lib, int func, int reason, char *file, int line);
typedef struct lookup_dir_st {
    unsigned char reserved_00[4];
    int num_dirs;
    char **dirs;
    int *dirs_type;
    int num_dirs_alloced;
} BY_DIR;
extern unsigned int func_001C80F0(const char *);

int func_00BAAA48(BY_DIR *ctx, char *dir, int type) {
    int j;
    int len;
    int *ip;
    char *s;
    char *ss;
    char *p;
    char **pp;
    if ((!dir) || (!func_001C80F0(dir)))
        return 0;
    s = dir;
    p = s;
    for (;;) {
        if (((*p) == ':') || ((*p) == '\0')) {
            ss = s;
            s = p + 1;
            len = (int)(p - ss);
            if (len == 0)
                continue;
            for (j = 0; j < ctx->num_dirs; j++)
                if (func_001C83D8(ctx->dirs[j], ss, (unsigned int)len) == 0)
                    continue;

            if (ctx->num_dirs_alloced < (ctx->num_dirs + 1)) {
                ctx->num_dirs_alloced += 10;
                pp = (char **)func_00BC0A38(ctx->num_dirs_alloced * (sizeof(char *)));
                ip = (int *)func_00BC0A38(ctx->num_dirs_alloced * (sizeof(int)));
                if ((pp == ((void *)0)) || (ip == ((void *)0))) {
                    func_00BB3380(11, 213, 1 | 32, (void *)0, 0);
                    return 0;
                }
                memcpy(pp, ctx->dirs, (ctx->num_dirs_alloced - 10) * (sizeof(char *)));
                memcpy(ip, ctx->dirs_type, (ctx->num_dirs_alloced - 10) * (sizeof(int)));
                if (ctx->dirs != ((void *)0))
                    func_00BC0A88((char *)((char *)ctx->dirs));
                if (ctx->dirs_type != ((void *)0))
                    func_00BC0A88((char *)((char *)ctx->dirs_type));
                ctx->dirs = pp;
                ctx->dirs_type = ip;
            }
            ctx->dirs_type[ctx->num_dirs] = type;
            ctx->dirs[ctx->num_dirs] = (char *)func_00BC0A38(((unsigned int)len) + 1);
            if (ctx->dirs[ctx->num_dirs] == ((void *)0))
                return 0;
            strncpy(ctx->dirs[ctx->num_dirs], ss, (unsigned int)len);
            ctx->dirs[ctx->num_dirs][len] = '\0';
            ctx->num_dirs++;
        }
        if ((*p) == '\0')
            break;
        p++;
    }

    return 1;
}
