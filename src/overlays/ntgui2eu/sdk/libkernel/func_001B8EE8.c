/* compiler: ee-gcc-2.96-G0-g */
/* newlib-1.10.0 newlib/libc/stdlib/mprec.c (_ulp). See THIRD_PARTY.md. */
/****************************************************************
 *
 * The author of this software is David M. Gay.
 *
 * Copyright (c) 1991 by AT&T.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose without fee is hereby granted, provided that this entire notice
 * is included in all copies of any software which is or includes a copy
 * or modification of this software and in all copies of the supporting
 * documentation for such software.
 *
 * THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTY.  IN PARTICULAR, NEITHER THE AUTHOR NOR AT&T MAKES ANY
 * REPRESENTATION OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY
 * OF THIS SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 ***************************************************************/
typedef int __int32_t;
typedef unsigned int __uint32_t;
union double_union {
    double d;
    __uint32_t i[2];
};

double func_001B8EE8(double _x) {
    union double_union x;
    union double_union a;
    register __int32_t L;
    x.d = _x;
    L = (x.i[1] & ((__uint32_t)0x7ff00000L)) - ((53 - 1) * ((__uint32_t)0x100000L));
    if (L > 0) {
        a.i[1] = L;
        a.i[0] = 0;
    } else {
        L = (-L) >> 20;
        if (L < 20) {
            a.i[1] = 0x80000 >> L;
            a.i[0] = 0;
        } else {
            a.i[1] = 0;
            L -= 20;
            a.i[0] = (L >= 31) ? (1) : (1 << (31 - L));
        }
    }
    return a.d;
}
