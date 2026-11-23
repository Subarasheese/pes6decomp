/* compiler: ee-gcc-2.9-as210-G0 */
/* SSLeay_0_9_0b, crypto/bio/bio_lib.c (BIO_write). See THIRD_PARTY.md. */
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
typedef struct bio_method_st {
    unsigned char reserved_00[8];
    int (*bwrite)();
    unsigned char reserved_0c[24];
} BIO_METHOD;
typedef struct bio_st {
    BIO_METHOD *method;
    long (*callback)(struct bio_st *, int, char *, int, long, long);
    unsigned char reserved_08[4];
    int init;
    unsigned char reserved_10[4];
    int flags;
    unsigned char reserved_18[20];
    int references;
    unsigned char reserved_30[8];
    unsigned long num_write;
    unsigned char reserved_40[8];
} BIO;
extern void func_00BB3380(int lib, int func, int reason, char *file, int line);
extern long func_00BA2FC0(BIO *, int, long, void *);

int func_00BA2D20(BIO *b, char *in, int inl) {
    int i;
    long (*cb)();
    if (b == ((void *)0))
        return 0;
    cb = b->callback;
    if ((b->method == ((void *)0)) || (b->method->bwrite == ((void *)0))) {
        func_00BB3380(32, 106, 111, (void *)0, 0);
        return -2;
    }
    if ((cb != ((void *)0)) && ((i = (int)cb(b, 0x03, in, inl, 0L, 1L)) <= 0))
        return i;
    if (!b->init) {
        func_00BB3380(32, 106, 110, (void *)0, 0);
        return -2;
    }
    i = b->method->bwrite(b, in, inl);
    if (i > 0)
        b->num_write += (unsigned long)i;
    if (b->flags & 0x10) {
        if ((i = func_00BA2FC0(b, 11, 0, 0)) <= 0)
            return i;
    }
    if (b->references <= 0) {
        func_00BB3380(32, 106, 42, 0, 0);
        return 0;
    }
    if (cb != ((void *)0))
        i = (int)cb(b, 0x03 | 0x80, in, inl, 0L, (long)i);
    return i;
}
