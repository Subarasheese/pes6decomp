/* compiler: ee-gcc-2.96-G0 */
/* Adapted from newlib 1.9.0, libc/stdio/ungetc.c (ungetc).
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
extern int func_001B29E0(FILE *);
extern void func_001B2D08(struct _reent *);
extern int func_001B50F8(register FILE *fp);

int func_001B51E0(int c, register FILE *fp) {
    if (c == (-1))
        return -1;
    do {
        if (fp->_data == 0)
            fp->_data = D_005CC508;
        if (!fp->_data->__sdidinit)
            func_001B2D08(fp->_data);
    } while (0);
    fp->_flags &= ~0x0020;
    if ((fp->_flags & 0x0004) == 0) {
        if ((fp->_flags & 0x0010) == 0)
            return -1;
        if (fp->_flags & 0x0008) {
            if (func_001B29E0(fp))
                return -1;
            fp->_flags &= ~0x0008;
            fp->_w = 0;
            fp->_lbfsize = 0;
        }
        fp->_flags |= 0x0004;
    }
    c = (unsigned char)c;
    if (fp->_ub._base != 0) {
        if ((fp->_r >= fp->_ub._size) && func_001B50F8(fp))
            return -1;
        *(--fp->_p) = c;
        fp->_r++;
        return c;
    }
    if (((fp->_bf._base != 0) && (fp->_p > fp->_bf._base)) && (fp->_p[-1] == c)) {
        fp->_p--;
        fp->_r++;
        return c;
    }
    fp->_ur = fp->_r;
    fp->_up = fp->_p;
    fp->_ub._base = fp->_ubuf;
    fp->_ub._size = sizeof(fp->_ubuf);
    fp->_ubuf[(sizeof(fp->_ubuf)) - 1] = c;
    fp->_p = &fp->_ubuf[(sizeof(fp->_ubuf)) - 1];
    fp->_r = 1;
    return c;
}
