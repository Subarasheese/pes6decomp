/* compiler: ee-gcc-2.96 */
/* Adapted from newlib 1.9.0, libc/stdio/findfp.c (__sfp).
 * licence: newlib (see THIRD_PARTY.md) */
/*
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that the above copyright notice and this paragraph are
 * duplicated in all such forms and that any documentation,
 * advertising materials, and other materials related to such
 * distribution and use acknowledge that the software was developed
 * by the University of California, Berkeley.  The name of the
 * University may not be used to endorse or promote products derived
 * from this software without specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */
#include "newlib/pal_reent_types.h"

extern struct _glue *func_001B2B58(struct _reent *d, register int n);
extern void func_001B2D08(struct _reent *s);

FILE *func_001B2BD0(struct _reent *d) {
    FILE *fp;
    int n;
    struct _glue *g;
    if (!d->__sdidinit)
        func_001B2D08(d);
    for (g = &d->__sglue;; g = g->_next) {
        for (fp = g->_iobs, n = g->_niobs; (--n) >= 0; fp++)
            if (fp->_flags == 0)
                goto found;

        if ((g->_next == 0) && ((g->_next = func_001B2B58(d, 4)) == 0))
            break;
    }

    d->_errno = 12;
    return (void *)0;
found:
    fp->_flags = 1;

    fp->_p = (void *)0;
    fp->_w = 0;
    fp->_r = 0;
    fp->_bf._base = (void *)0;
    fp->_bf._size = 0;
    fp->_lbfsize = 0;
    fp->_file = -1;
    fp->_ub._base = (void *)0;
    fp->_ub._size = 0;
    fp->_lb._base = (void *)0;
    fp->_lb._size = 0;
    fp->_data = d;
    return fp;
}
