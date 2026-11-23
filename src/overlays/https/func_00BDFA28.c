/* compiler: ee-gcc-2.9-nsa-G0 */
/* OpenSSL_0_9_2b, crypto/x509/x509name.c (X509_NAME_add_entry). See THIRD_PARTY.md. */
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
    unsigned char reserved_08[12];
} STACK;
extern int func_00BD9B10(STACK *sk, char *data, int where);
extern void func_00BB3380(int lib, int func, int reason, char *file, int line);
typedef struct X509_name_entry_st {
    unsigned char reserved_00[12];
    int set;
} X509_NAME_ENTRY;
typedef struct X509_name_st {
    unsigned char reserved_00[4];
    STACK *entries;
    int modified;
    unsigned char reserved_0c[12];
} X509_NAME;
extern X509_NAME_ENTRY *func_00BDDEB8(X509_NAME_ENTRY *ne);
extern void func_00BA0090(X509_NAME_ENTRY *a);

int func_00BDFA28(X509_NAME *name, X509_NAME_ENTRY *ne, int loc, int set) {
    X509_NAME_ENTRY *new_name = (void *)0;
    int n;
    int i;
    int inc;
    STACK *sk;
    if (name == ((void *)0))
        return 0;
    sk = name->entries;
    n = sk->num;
    if (loc > n)
        loc = n;
    else if (loc < 0)
        loc = n;
    name->modified = 1;
    if (set == (-1)) {
        if (loc == 0) {
            set = 0;
            inc = 1;
        } else {
            set = ((X509_NAME_ENTRY *)sk->data[loc - 1])->set;
            inc = 0;
        }
    } else {
        if (loc >= n) {
            if (loc != 0)
                set = ((X509_NAME_ENTRY *)sk->data[loc - 1])->set + 1;
            else
                set = 0;
        } else
            set = ((X509_NAME_ENTRY *)sk->data[loc])->set;
        inc = (set == 0) ? (1) : (0);
    }
    if ((new_name = func_00BDDEB8(ne)) == ((void *)0))
        goto err;
    new_name->set = set;
    if (!func_00BD9B10(sk, (char *)new_name, loc)) {
        func_00BB3380(11, 227, 1 | 32, (void *)0, 0);
        goto err;
    }
    if (inc) {
        n = sk->num;
        for (i = loc + 1; i < n; i++)
            ((X509_NAME_ENTRY *)sk->data[i - 1])->set += 1;
    }
    return 1;
err:
    if (new_name != ((void *)0))
        func_00BA0090(new_name);

    return 0;
}
