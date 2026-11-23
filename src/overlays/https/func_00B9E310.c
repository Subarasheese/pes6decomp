/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_1c, crypto/asn1/a_object.c (i2t_ASN1_OBJECT). See THIRD_PARTY.md. */
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
extern int sprintf(char *, const char *, ...);
extern size_t func_001C80F0(const char *);
extern char *strncpy(char *, const char *, size_t);
typedef struct asn1_object_st {
    char *sn;
    char *ln;
    int nid;
    int length;
    unsigned char *data;
    int flags;
} ASN1_OBJECT;
extern char *func_00BB82D8(int n);
extern char *func_00BB8220(int n);
extern int func_00BB8398(ASN1_OBJECT *o);

int func_00B9E310(char *buf, int buf_len, ASN1_OBJECT *a) {
    int i;
    int idx = 0;
    int n = 0;
    int len;
    int nid;
    unsigned long l;
    unsigned char *p;
    char *s;
    char tbuf[40];
    if (buf_len <= 0)
        return 0;
    if ((a == 0) || (a->data == 0)) {
        buf[0] = '\0';
        return 0;
    }
    nid = func_00BB8398(a);
    if (nid == 0) {
        len = a->length;
        p = a->data;
        idx = 0;
        l = 0;
        while (idx < a->length) {
            l |= p[idx] & 0x7f;
            if (!(p[idx] & 0x80))
                break;
            l <<= 7L;
            idx++;
        }

        idx++;
        i = (int)(l / 40);
        if (i > 2)
            i = 2;
        l -= (long)(i * 40);
        sprintf(tbuf, "%d.%ld", i, l);
        i = func_001C80F0(tbuf);
        strncpy(buf, tbuf, buf_len);
        buf_len -= i;
        buf += i;
        n += i;
        l = 0;
        for (; idx < len; idx++) {
            l |= p[idx] & 0x7f;
            if (!(p[idx] & 0x80)) {
                sprintf(tbuf, ".%ld", l);
                i = func_001C80F0(tbuf);
                if (buf_len > 0)
                    strncpy(buf, tbuf, buf_len);
                buf_len -= i;
                buf += i;
                n += i;
                l = 0;
            }
            l <<= 7L;
        }

    } else {
        s = (char *)func_00BB82D8(nid);
        if (s == 0)
            s = (char *)func_00BB8220(nid);
        strncpy(buf, s, buf_len);
        n = func_001C80F0(s);
    }
    buf[buf_len - 1] = '\0';
    return n;
}
