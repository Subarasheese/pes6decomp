/* compiler: ee-gcc-2.9-nsa-G0 */
/* OpenSSL_0_9_3a, crypto/lhash/lhash.c (lh_delete). See THIRD_PARTY.md. */
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
extern void func_00BC0A88(void *);
typedef struct lhash_node_st {
    char *data;
    struct lhash_node_st *next;
    unsigned char reserved_08[8];
} LHASH_NODE;
typedef struct lhash_st {
    unsigned char reserved_00[12];
    unsigned int num_nodes;
    unsigned char reserved_10[24];
    unsigned long down_load;
    unsigned long num_items;
    unsigned char reserved_38[64];
    unsigned long num_delete;
    unsigned long num_no_delete;
    unsigned char reserved_88[24];
    int error;
    unsigned char reserved_a4[4];
} LHASH;
extern void func_00BB65E8(LHASH *lh);
extern LHASH_NODE **func_00BB6710(LHASH *lh, char *data, unsigned long *rhash);

char *func_00BB62C0(LHASH *lh, char *data) {
    unsigned long hash;
    LHASH_NODE *nn;
    LHASH_NODE **rn;
    char *ret;
    lh->error = 0;
    rn = func_00BB6710(lh, data, &hash);
    if ((*rn) == ((void *)0)) {
        lh->num_no_delete++;
        return (void *)0;
    } else {
        nn = *rn;
        *rn = nn->next;
        ret = nn->data;
        func_00BC0A88((char *)((char *)nn));
        lh->num_delete++;
    }
    lh->num_items--;
    if ((lh->num_nodes > 16) && (lh->down_load >= ((lh->num_items * 256) / lh->num_nodes)))
        func_00BB65E8(lh);
    return ret;
}
