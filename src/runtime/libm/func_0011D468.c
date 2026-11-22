/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/w182_e.c (func_00117240). See THIRD_PARTY.md. */
/*
 * ====================================================
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunPro, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice
 * is preserved.
 * ====================================================
 */
/* fdlibm single-precision sf_sin.c for the EE floating-point format. */
#include "types.h"
extern float __kernel_sinf(float, float, s32);
extern float __kernel_cosf(float, float);
extern s32 __ieee754_rem_pio2f(float, float *);

float func_0011D468(float x) {
    float y[2];
    s32 hx;
    s32 n;
    do {
        union {
            float f;
            s32 w;
        } gh_u;
        gh_u.f = x;
        hx = gh_u.w;
    } while (0);
    hx &= 0x7fffffff;
    if (hx <= 0x3f490fd8) {
        return __kernel_sinf(x, 0.0f, 0);
    }
    n = __ieee754_rem_pio2f(x, y);
    switch (n & 3) {
    case 0:
        return __kernel_sinf(y[0], y[1], 1);
    case 1:
        return __kernel_cosf(y[0], y[1]);
    case 2:
        return -__kernel_sinf(y[0], y[1], 1);
    default:
        return -__kernel_cosf(y[0], y[1]);
    }
}
