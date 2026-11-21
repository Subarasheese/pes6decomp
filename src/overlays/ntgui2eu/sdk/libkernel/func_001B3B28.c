/* compiler: ee-gcc-2.96-G0 */
/* Adapted from newlib 1.9.0, libc/stdio/refill.c (__srefill).
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
extern void func_001B3880(FILE *);
extern int func_001B3700(struct _reent *, int (*)(FILE *));
extern void func_001B2EB8(struct _reent *, void *);
extern int func_001B3AF0(FILE *fp);

int func_001B3B28(register FILE *fp) {
    do {
        if (fp->_data == 0)
            fp->_data = D_005CC508;
        if (!fp->_data->__sdidinit)
            func_001B2D08(fp->_data);
    } while (0);
    fp->_r = 0;
    if (fp->_flags & 0x0020)
        return -1;
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
    } else {
        if (fp->_ub._base != 0) {
            {
                if (fp->_ub._base != fp->_ubuf)
                    func_001B2EB8(fp->_data, (char *)fp->_ub._base);
                fp->_ub._base = (void *)0;
            };
            if ((fp->_r = fp->_ur) != 0) {
                fp->_p = fp->_up;
                return 0;
            }
        }
    }
    if (fp->_bf._base == 0)
        func_001B3880(fp);
    if (fp->_flags & (0x0001 | 0x0002))
        (void)func_001B3700(fp->_data, func_001B3AF0);
    fp->_p = fp->_bf._base;
    fp->_r = (*fp->_read)(fp->_cookie, (char *)fp->_p, fp->_bf._size);
    fp->_flags &= ~0x2000;
    if (fp->_r <= 0) {
        if (fp->_r == 0)
            fp->_flags |= 0x0020;
        else {
            fp->_r = 0;
            fp->_flags |= 0x0040;
        }
        return -1;
    }
    return 0;
}
