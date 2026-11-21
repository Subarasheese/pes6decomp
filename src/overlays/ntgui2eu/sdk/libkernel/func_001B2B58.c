/* compiler: ee-gcc-2.96 */
/* Adapted from newlib 1.9.0, libc/stdio/findfp.c (__sfmoreglue).
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

extern void *func_001ADE68(struct _reent *, size_t);
extern void *func_001AE7D8(void *, int, size_t);

struct _glue *func_001B2B58(struct _reent *d, register int n) {
    struct _glue *g;
    FILE *p;
    g = (struct _glue *)func_001ADE68(d, (sizeof(*g)) + (n * (sizeof(FILE))));
    if (g == 0)
        return (void *)0;
    p = (FILE *)(g + 1);
    g->_next = (void *)0;
    g->_niobs = n;
    g->_iobs = p;
    func_001AE7D8(p, 0, n * (sizeof(FILE)));
    return g;
}
