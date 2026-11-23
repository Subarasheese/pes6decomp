/* compiler: ee-gcc-2.9-nsa-G0 */
/* SSLeay_0_8_1b, crypto/lhash/lhash.c (getrn). See THIRD_PARTY.md. */
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
typedef struct lhash_node_st {
    char *data;
    struct lhash_node_st *next;
    unsigned long hash;
} LHASH_NODE;
typedef struct lhash_st {
    LHASH_NODE **b;
    int (*comp)();
    unsigned long (*hash)();
    unsigned char reserved_0c[4];
    unsigned int num_alloc_nodes;
    unsigned int p;
    unsigned int pmax;
    unsigned char reserved_1c[60];
    unsigned long num_hash_calls;
    unsigned long num_comp_calls;
    unsigned char reserved_68[48];
    unsigned long num_hash_comps;
} LHASH;

LHASH_NODE **func_00BB6710(LHASH *lh, char *data, unsigned long *rhash) {
    LHASH_NODE **ret;
    LHASH_NODE *n1;
    unsigned long hash;
    unsigned long nn;
    int (*cf)();
    hash = (*lh->hash)(data);
    lh->num_hash_calls++;
    *rhash = hash;
    nn = hash % lh->pmax;
    if (nn < lh->p)
        nn = hash % lh->num_alloc_nodes;
    cf = lh->comp;
    ret = &lh->b[(int)nn];
    for (n1 = *ret; n1 != ((void *)0); n1 = n1->next) {
        lh->num_hash_comps++;
        if (n1->hash != hash) {
            ret = &n1->next;
            continue;
        }
        lh->num_comp_calls++;
        if ((*cf)(n1->data, data) == 0)
            break;
        ret = &n1->next;
    }

    return ret;
}
