/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_1c, crypto/x509/x509_obj.c (X509_NAME_oneline). See THIRD_PARTY.md. */
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
extern char D_00C4E5A0[]; /* NO X509_NAME */
typedef unsigned int size_t;
extern void func_00BC0A88(void *);
extern char D_00C40600[17]; /* 0123456789ABCDEF */
extern void *memcpy(void *, const void *, size_t);
extern size_t func_001C80F0(const char *);
typedef struct stack_st {
    int num;
    char **data;
    unsigned char reserved_08[12];
} STACK;
typedef struct buf_mem_st {
    unsigned char reserved_00[4];
    char *data;
    unsigned char reserved_08[4];
} BUF_MEM;
extern BUF_MEM *func_00BAA530(void);
extern void func_00BAA588(BUF_MEM *a);
extern int func_00BAA5E0(BUF_MEM *str, int len);
extern void func_00BB3380(int lib, int func, int reason, char *file, int line);
typedef struct asn1_object_st ASN1_OBJECT;
typedef struct asn1_string_st {
    int length;
    int type;
    unsigned char *data;
    unsigned char reserved_0c[12];
} ASN1_STRING;
extern int func_00B9E310(char *buf, int buf_len, ASN1_OBJECT *a);
extern char *func_00BB8220(int n);
extern int func_00BB8398(ASN1_OBJECT *o);
typedef struct X509_name_entry_st {
    unsigned char reserved_0000[4];
    ASN1_OBJECT *object;
    ASN1_STRING *value;
    unsigned char reserved_000c[4];
} X509_NAME_ENTRY;
typedef struct X509_name_st {
    unsigned char reserved_0000[4];
    STACK *entries;
    unsigned char reserved_0008[16];
} X509_NAME;

char *func_00BDE398(X509_NAME *a, char *buf, int len) {
    X509_NAME_ENTRY *ne;
    unsigned int i;
    int n;
    int lold;
    int l;
    int l1;
    int l2;
    int num;
    int j;
    int type;
    char *s;
    char *p;
    unsigned char *q;
    BUF_MEM *b = (void *)0;

    int gs_doit[4];
    char tmp_buf[80];
    if (a == ((void *)0))
        return D_00C4E5A0;
    if (buf == ((void *)0)) {
        if ((b = func_00BAA530()) == ((void *)0))
            goto err;
        if (!func_00BAA5E0(b, 200))
            goto err;
        b->data[0] = '\0';
        len = 200;
    }
    len--;
    l = 0;
    for (i = 0; ((int)i) < a->entries->num; i++) {
        ne = (X509_NAME_ENTRY *)a->entries->data[i];
        n = func_00BB8398(ne->object);
        if ((n == 0) || ((s = func_00BB8220(n)) == ((void *)0))) {
            func_00B9E310(tmp_buf, sizeof(tmp_buf), ne->object);
            s = tmp_buf;
        }
        l1 = func_001C80F0(s);
        type = ne->value->type;
        num = ne->value->length;
        q = ne->value->data;
        if ((type == 27) && ((num % 4) == 0)) {
            gs_doit[0] = (gs_doit[1] = (gs_doit[2] = (gs_doit[3] = 0)));
            for (j = 0; j < num; j++)
                if (q[j] != 0)
                    gs_doit[j & 3] = 1;

            if ((gs_doit[0] | gs_doit[1]) | gs_doit[2])
                gs_doit[0] = (gs_doit[1] = (gs_doit[2] = (gs_doit[3] = 1)));
            else {
                gs_doit[0] = (gs_doit[1] = (gs_doit[2] = 0));
                gs_doit[3] = 1;
            }
        } else
            gs_doit[0] = (gs_doit[1] = (gs_doit[2] = (gs_doit[3] = 1)));
        for (l2 = (j = 0); j < num; j++) {
            if (!gs_doit[j & 3])
                continue;
            l2++;
            if ((q[j] < ' ') || (q[j] > '~'))
                l2 += 3;
        }

        lold = l;
        l += ((1 + l1) + 1) + l2;
        if (b != ((void *)0)) {
            if (!func_00BAA5E0(b, l + 1))
                goto err;
            p = &b->data[lold];
        } else if (l > len) {
            break;
        } else
            p = &buf[lold];
        *(p++) = '/';
        memcpy(p, s, (unsigned int)l1);
        p += l1;
        *(p++) = '=';
        q = ne->value->data;
        for (j = 0; j < num; j++) {
            if (!gs_doit[j & 3])
                continue;
            n = q[j];
            if ((n < ' ') || (n > '~')) {
                *(p++) = '\\';
                *(p++) = 'x';
                *(p++) = D_00C40600[(n >> 4) & 0x0f];
                *(p++) = D_00C40600[n & 0x0f];
            } else
                *(p++) = n;
        }

        *p = '\0';
    }

    if (b != ((void *)0)) {
        p = b->data;
        func_00BC0A88((char *)((char *)b));
    } else
        p = buf;
    return p;
err:
    func_00BB3380(11, 230, 1 | 32, (void *)0, 0);

    if (b != ((void *)0))
        func_00BAA588(b);
    return (void *)0;
}
