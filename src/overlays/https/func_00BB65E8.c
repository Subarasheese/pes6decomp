/* compiler: ee-gcc-2.9-nsa-G0 */
/* SSLeay_0_9_1b, crypto/lhash/lhash.c (contract). See THIRD_PARTY.md. */
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
extern void *func_00BC0A60(void *__r, size_t __size, size_t oldBytes);
typedef struct lhash_node_st {
    unsigned char reserved_00[4];
    struct lhash_node_st *next;
    unsigned char reserved_08[8];
} LHASH_NODE;
typedef struct lhash_st {
    LHASH_NODE **b;
    unsigned char reserved_04[8];
    unsigned int num_nodes;
    unsigned int num_alloc_nodes;
    unsigned int p;
    unsigned int pmax;
    unsigned char reserved_1c[44];
    unsigned long num_contracts;
    unsigned long num_contract_reallocs;
    unsigned char reserved_58[72];
    int error;
    unsigned char reserved_a4[4];
} LHASH;

void func_00BB65E8(LHASH *lh) {
    LHASH_NODE **n;
    LHASH_NODE *n1;
    LHASH_NODE *np;
    np = lh->b[(lh->p + lh->pmax) - 1];
    lh->b[(lh->p + lh->pmax) - 1] = (void *)0;
    if (lh->p == 0) {
        n = (LHASH_NODE **)func_00BC0A60(
            (char *)lh->b, (lh->num_alloc_nodes >> 1) * (sizeof(*n)),
            (unsigned int)((sizeof(LHASH_NODE *)) * lh->num_alloc_nodes));
        if (n == ((void *)0)) {
            lh->error++;
            return;
        }
        lh->num_contract_reallocs++;
        lh->num_alloc_nodes /= 2;
        lh->pmax /= 2;
        lh->p = lh->pmax - 1;
        lh->b = n;
    } else
        lh->p--;
    lh->num_nodes--;
    lh->num_contracts++;
    n1 = lh->b[(int)lh->p];
    if (n1 == ((void *)0))
        lh->b[(int)lh->p] = np;
    else {
        while (n1->next != ((void *)0))
            n1 = n1->next;

        n1->next = np;
    }
}
