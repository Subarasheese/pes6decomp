/* compiler: ee-gcc-2.96 */
/* Adapted from newlib 1.9.0, libc/stdio/ungetc.c (__submore).
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
extern void *func_001AF4A8(struct _reent *, void *, size_t);
extern void *func_001AE624(void *, const void *, size_t);

int func_001B50F8(register FILE *fp) {
    register int i;
    register unsigned char *p;
    if (fp->_ub._base == fp->_ubuf) {
        if ((p = (unsigned char *)func_001ADE68(fp->_data, (size_t)1024)) == 0)
            return -1;
        fp->_ub._base = p;
        fp->_ub._size = 1024;
        p += 1024 - (sizeof(fp->_ubuf));
        for (i = sizeof(fp->_ubuf); (--i) >= 0;)
            p[i] = fp->_ubuf[i];

        fp->_p = p;
        return 0;
    }
    i = fp->_ub._size;
    p = (unsigned char *)func_001AF4A8(fp->_data, (void *)fp->_ub._base, i << 1);
    if (p == 0)
        return -1;
    (void)func_001AE624((void *)(p + i), (void *)p, (size_t)i);
    fp->_p = p + i;
    fp->_ub._base = p;
    fp->_ub._size = i << 1;
    return 0;
}
