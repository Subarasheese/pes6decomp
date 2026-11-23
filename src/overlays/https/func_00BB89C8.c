/* compiler: ee-gcc-2.9-nsa-G0 */
/* SSLeay_0_9_1b, crypto/objects/obj_lib.c (OBJ_dup). See THIRD_PARTY.md. */
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
extern size_t func_001C80F0(const char *);
extern void func_00BB3380(int lib, int func, int reason, char *file, int line);
typedef struct asn1_object_st {
    char *sn;
    char *ln;
    int nid;
    int length;
    unsigned char *data;
    int flags;
} ASN1_OBJECT;
extern ASN1_OBJECT *func_00B9E8D0(void);

ASN1_OBJECT *func_00BB89C8(ASN1_OBJECT *o) {
    ASN1_OBJECT *r;
    int i;
    if (o == ((void *)0))
        return (void *)0;
    if (!(o->flags & 0x01))
        return o;
    r = (ASN1_OBJECT *)func_00B9E8D0();
    if (r == ((void *)0)) {
        func_00BB3380(8, 101, 2061, (void *)0, 0);
        return (void *)0;
    }
    r->data = (unsigned char *)func_00BC0A38(o->length);
    if (r->data == ((void *)0))
        goto err;
    memcpy(r->data, o->data, o->length);
    r->length = o->length;
    r->nid = o->nid;
    r->ln = (r->sn = (void *)0);
    if (o->ln != ((void *)0)) {
        i = func_001C80F0(o->ln) + 1;
        r->ln = (char *)func_00BC0A38(i);
        if (r->ln == ((void *)0))
            goto err;
        memcpy(r->ln, o->ln, i);
    }
    if (o->sn != ((void *)0)) {
        i = func_001C80F0(o->sn) + 1;
        r->sn = (char *)func_00BC0A38(i);
        if (r->sn == ((void *)0))
            goto err;
        memcpy(r->sn, o->sn, i);
    }
    r->flags = o->flags | ((0x01 | 0x04) | 0x08);
    return r;
err:
    func_00BB3380(8, 101, 1 | 32, (void *)0, 0);

    if (r != ((void *)0)) {
        if (r->ln != ((void *)0))
            func_00BC0A88((char *)r->ln);
        if (r->data != ((void *)0))
            func_00BC0A88((char *)r->data);
        func_00BC0A88((char *)r);
    }
    return (void *)0;
}
