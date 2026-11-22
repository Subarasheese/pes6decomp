/* compiler: ee-gcc-2.96-G0 */
/* Adapted from newlib 1.9.0, libc/stdio/ftell.c (ftell).
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

extern struct _reent *_impure_ptr;
typedef _fpos_t fpos_t;
extern int fflush(FILE *);
extern void __sinit(struct _reent *);

long func_001C2EA0(register FILE *fp) {
    fpos_t pos;
    do {
        if (fp->_data == 0)
            fp->_data = _impure_ptr;
        if (!fp->_data->__sdidinit)
            __sinit(fp->_data);
    } while (0);
    if (fp->_seek == 0) {
        fp->_data->_errno = 29;
        return -1L;
    }
    fflush(fp);
    if (fp->_flags & 0x1000)
        pos = fp->_offset;
    else {
        pos = (*fp->_seek)(fp->_cookie, (fpos_t)0, 1);
        if (pos == (-1L))
            return pos;
    }
    if (fp->_flags & 0x0004) {
        pos -= fp->_r;
        if (fp->_ub._base != 0)
            pos -= fp->_ur;
    } else if ((fp->_flags & 0x0008) && (fp->_p != 0)) {
        pos += fp->_p - fp->_bf._base;
    }
    return pos;
}
