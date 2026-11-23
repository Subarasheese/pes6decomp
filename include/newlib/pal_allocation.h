/****************************************************************
 *
 * The author of this software is David M. Gay.
 *
 * Copyright (c) 1991 by AT&T.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose without fee is hereby granted, provided that this entire notice
 * is included in all copies of any software which is or includes a copy
 * or modification of this software and in all copies of the supporting
 * documentation for such software.
 *
 * THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTY.  IN PARTICULAR, NEITHER THE AUTHOR NOR AT&T MAKES ANY
 * REPRESENTATION OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY
 * OF THIS SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 ***************************************************************/
/* Adapted from newlib 1.9.0, libc/stdlib/mprec.c. */

#ifndef PES6_NEWLIB_ALLOCATION_H
#define PES6_NEWLIB_ALLOCATION_H

#include "newlib/mprec.h"

#define _Kmax 15
extern void *_calloc_r(struct _reent *, unsigned int, unsigned int);

Bigint *_Balloc(struct _reent *ptr, int k)
{
    int x;
    Bigint *rv;

    if (ptr->_freelist == 0) {
        /* Allocate a list of pointers to the mprec objects */
        ptr->_freelist = (struct Bigint **)_calloc_r(ptr, sizeof(struct Bigint *), _Kmax + 1);
        if (ptr->_freelist == 0) {
            return 0;
        }
    }

    if ((rv = ptr->_freelist[k]) != 0) {
        ptr->_freelist[k] = rv->_next;
    } else {
        x = 1 << k;
        /* Allocate an mprec Bigint and put it in the freelist */
        rv = (Bigint *)_calloc_r(ptr, 1, sizeof(Bigint) + (x - 1) * sizeof(rv->_x));
        if (rv == 0)
            return 0;
        rv->_k = k;
        rv->_maxwds = x;
    }
    rv->_sign = rv->_wds = 0;
    return rv;
}

void _Bfree(struct _reent *ptr, Bigint *v)
{
    if (v) {
        v->_next = ptr->_freelist[v->_k];
        ptr->_freelist[v->_k] = v;
    }
}

Bigint *_multadd(struct _reent *ptr, Bigint *b, int m, int a)
{
    int i, wds;
    ULong *x, y;
    ULong xi, z;

    Bigint *b1;

    wds = b->_wds;
    x = b->_x;
    i = 0;
    do {
        xi = *x;
        y = (xi & 0xffff) * m + a;
        z = (xi >> 16) * m + (y >> 16);
        a = (int)(z >> 16);
        *x++ = (z << 16) + (y & 0xffff);

    } while (++i < wds);
    if (a) {
        if (wds >= b->_maxwds) {
            b1 = Balloc(ptr, b->_k + 1);
            Bcopy(b1, b);
            Bfree(ptr, b);
            b = b1;
        }
        b->_x[wds++] = a;
        b->_wds = wds;
    }
    return b;
}

#endif
