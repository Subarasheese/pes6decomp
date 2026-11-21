/* compiler: ee-gcc-2.96 */
/* Adapted from newlib 1.9.0, libc/stdio/vsprintf.c (vsprintf_r).
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

typedef char *__gnuc_va_list;
typedef __gnuc_va_list va_list;
extern int func_001CAD78(FILE *, const char *, __gnuc_va_list);

int func_001CD4E8(struct _reent *ptr, char *str, const char *fmt, va_list ap) {
    int ret;
    FILE f;
    f._flags = 0x0008 | 0x0200;
    f._bf._base = (f._p = (unsigned char *)str);
    f._bf._size = (f._w = 2147483647);
    f._data = ptr;
    ret = func_001CAD78(&f, fmt, ap);
    *f._p = 0;
    return ret;
}
