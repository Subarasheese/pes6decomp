/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_1c, crypto/asn1/x_name.c (i2d_X509_NAME_entries). See THIRD_PARTY.md. */
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
typedef struct stack_st {
    int num;
    char **data;
    int sorted;
    int num_alloc;
    int (*comp)();
} STACK;
typedef struct buf_mem_st {
    int length;
    char *data;
    int max;
} BUF_MEM;
extern int func_00BAA5E0(BUF_MEM *str, int len);
typedef struct asn1_object_st {
    char *sn;
    char *ln;
    int nid;
    int length;
    unsigned char *data;
    int flags;
} ASN1_OBJECT;
typedef struct asn1_string_st {
    int length;
    int type;
    unsigned char *data;
    long flags;
} ASN1_STRING;
extern void func_00B9F1A0(unsigned char **pp, int constructed, int length, int tag, int xclass);
extern int func_00B9F348(int constructed, int length, int tag);
typedef struct X509_name_entry_st {
    unsigned char reserved_0000[12];
    int set;
    int size;
} X509_NAME_ENTRY;
typedef struct X509_name_st {
    unsigned char reserved_0000[4];
    STACK *entries;
    int modified;
    BUF_MEM *bytes;
    unsigned char reserved_0010[8];
} X509_NAME;
extern int func_00B9F7B8(X509_NAME_ENTRY *a, unsigned char **pp);

int func_00B9FAC8(X509_NAME *a) {
    X509_NAME_ENTRY *ne;
    X509_NAME_ENTRY *fe = (void *)0;
    STACK *sk;
    BUF_MEM *buf = (void *)0;
    int set = 0;
    int r;
    int ret = 0;
    int i;
    unsigned char *p;
    int size = 0;
    sk = a->entries;
    for (i = 0; i < sk->num; i++) {
        ne = (X509_NAME_ENTRY *)sk->data[i];
        if (fe == ((void *)0)) {
            fe = ne;
            size = 0;
        }
        if (ne->set != set) {
            ret += func_00B9F348(1, size, 17);
            fe->size = size;
            fe = ne;
            size = 0;
            set = ne->set;
        }
        size += func_00B9F7B8(ne, (void *)0);
    }

    ret += func_00B9F348(1, size, 17);
    if (fe != ((void *)0))
        fe->size = size;
    r = func_00B9F348(1, ret, 16);
    buf = a->bytes;
    if (!func_00BAA5E0(buf, r))
        goto err;
    p = (unsigned char *)buf->data;
    func_00B9F1A0(&p, 1, ret, 16, 0x00);
    set = -1;
    for (i = 0; i < sk->num; i++) {
        ne = (X509_NAME_ENTRY *)sk->data[i];
        if (set != ne->set) {
            set = ne->set;
            func_00B9F1A0(&p, 1, ne->size, 17, 0x00);
        }
        func_00B9F7B8(ne, &p);
    }

    a->modified = 0;
    return r;
err:
    return -1;
}
