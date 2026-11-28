/* compiler: mwcc-3.0.1b151 */
/* ef_atan2.c -- float version of e_atan2.c.
 * Conversion to float by Ian Lance Taylor, Cygnus Support, ian@cygnus.com.
 */

/*
 * ====================================================
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunPro, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice
 * is preserved.
 * ====================================================
 *
 */

/* PES6 resident copy of newlib's ef_atan2.c, built for the PS2 float format. */
#include "types.h"

extern float Pes6Math_Atanf(float);
extern float func_0011D210(float);

typedef union {
    float value;
    u32 word;
} FdlibmFloat;

#define GET_FLOAT_WORD(i, v) do { FdlibmFloat n; n.value = (v); (i) = n.word; } while (0)
#define SET_FLOAT_WORD(v, i) do { FdlibmFloat n; n.word = (i); (v) = n.value; } while (0)
#define FLT_UWORD_IS_ZERO(x) ((x) < 0x00800000L)
#define tiny 1.0e-30F
#define zero 0.0F
#define pi_o_4 7.8539818525e-01F
#define pi_o_2 1.5707963705e+00F
#define pi 3.1415925026e+00F
#define pi_lo 1.5099578832e-07F

float func_00152EA0(float y, float x)
{
    float z;
    s32 k, m, hx, hy, ix, iy;

    GET_FLOAT_WORD(hx, x);
    ix = hx & 0x7fffffff;
    GET_FLOAT_WORD(hy, y);
    iy = hy & 0x7fffffff;
    if (hx == 0x3f800000)
        return Pes6Math_Atanf(y);                     /* x=1.0 */
    m = ((hy >> 31) & 1) | ((hx >> 30) & 2); /* 2*sign(x)+sign(y) */

    /* when y = 0 */
    if (FLT_UWORD_IS_ZERO(iy)) {
        switch (m) {
        case 0:
        case 1:
            return y; /* atan(+-0,+anything)=+-0 */
        case 2:
            return pi + tiny; /* atan(+0,-anything) = pi */
        case 3:
            return -pi - tiny; /* atan(-0,-anything) =-pi */
        }
    }
    /* when x = 0 */
    if (FLT_UWORD_IS_ZERO(ix))
        return (hy < 0) ? -pi_o_2 - tiny : pi_o_2 + tiny;

    /* compute y/x */
    k = (iy - ix) >> 23;
    if (k > 60)
        z = pi_o_2 + (float)0.5 * pi_lo; /* |y/x| >  2**60 */
    else if (hx < 0 && k < -60)
        z = 0.0; /* |y|/x < -2**60 */
    else
        z = Pes6Math_Atanf(func_0011D210(y / x)); /* safe to do y/x */
    switch (m) {
    case 0:
        return z; /* atan(+,+) */
    case 1: {
        u32 zh;
        GET_FLOAT_WORD(zh, z);
        SET_FLOAT_WORD(z, zh ^ 0x80000000);
    }
        return z; /* atan(-,+) */
    case 2:
        return pi - (z - pi_lo); /* atan(+,-) */
    default:                     /* case 3 */
        return (z - pi_lo) - pi; /* atan(-,-) */
    }
}
