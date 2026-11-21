/* compiler: ee-gcc-2.96 */
/* Adapted from newlib 1.9.0, libc/stdio/fread.c (fread).
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

extern void *func_001AE624(void *, const void *, size_t);
extern int func_001B3B28(FILE *fp);

size_t func_001B2D98(void *buf, size_t size, size_t count, FILE *fp) {
    register size_t resid;
    register char *p;
    register int r;
    size_t total;
    if ((resid = count * size) == 0)
        return 0;
    if (fp->_r < 0)
        fp->_r = 0;
    total = resid;
    p = buf;
    while (resid > (r = fp->_r)) {
        (void)func_001AE624((void *)p, (void *)fp->_p, (size_t)r);
        fp->_p += r;
        p += r;
        resid -= r;
        if (func_001B3B28(fp)) {
            return (total - resid) / size;
        }
    }

    (void)func_001AE624((void *)p, (void *)fp->_p, resid);
    fp->_r -= resid;
    fp->_p += resid;
    return count;
}
