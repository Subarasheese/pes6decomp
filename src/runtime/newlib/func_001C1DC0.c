/* compiler: ee-gcc-2.96 */
/* Adapted from newlib 1.9.0, libc/stdio/fgets.c (fgets).
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

extern void *memchr(const void *, int, size_t);
extern void *memcpy(void *, const void *, size_t);
extern int func_001C7200();

char *func_001C1DC0(char *buf, int n, FILE *fp) {
    size_t len;
    char *s;
    unsigned char *p;
    unsigned char *t;
    if (n < 2)
        return 0;
    s = buf;
    n--;
    do {
        if ((len = fp->_r) <= 0) {
            if (func_001C7200(fp)) {
                if (s == buf)
                    return 0;
                break;
            }
            len = fp->_r;
        }
        p = fp->_p;
        if (len > n)
            len = n;
        t = (unsigned char *)memchr((void *)p, '\n', len);
        if (t != 0) {
            len = (++t) - p;
            fp->_r -= len;
            fp->_p = t;
            (void)memcpy((void *)s, (void *)p, len);
            s[len] = 0;
            return buf;
        }
        fp->_r -= len;
        fp->_p += len;
        (void)memcpy((void *)s, (void *)p, len);
        s += len;
    } while ((n -= len) != 0);
    *s = 0;
    return buf;
}
