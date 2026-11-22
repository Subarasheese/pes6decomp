/* compiler: ee-gcc-2.96-G0 */
/* Adapted from newlib 1.9.0, libc/stdio/fflush.c (fflush).
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

extern struct _reent *D_005CC508;
extern void func_001B2D08(struct _reent *);
extern int func_001B3700(struct _reent *, int (*)(FILE *));

int func_001B29E0(register FILE *fp) {
    register unsigned char *p;
    register int n;
    register int t;
    if (fp == 0)
        return func_001B3700(D_005CC508, func_001B29E0);
    do {
        if (fp->_data == 0)
            fp->_data = D_005CC508;
        if (!fp->_data->__sdidinit)
            func_001B2D08(fp->_data);
    } while (0);
    t = fp->_flags;
    if (((t & 0x0008) == 0) || ((p = fp->_bf._base) == 0))
        return 0;
    n = fp->_p - p;
    fp->_p = p;
    fp->_w = (t & (0x0001 | 0x0002)) ? (0) : (fp->_bf._size);
    while (n > 0) {
        t = (*fp->_write)(fp->_cookie, (char *)p, n);
        if (t <= 0) {
            fp->_flags |= 0x0040;
            return -1;
        }
        p += t;
        n -= t;
    }

    return 0;
}
