/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/w181_d.c (func_001135B0). See THIRD_PARTY.md. */
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
/* fdlibm single-precision ef_log10.c for the EE floating-point format. */
#include "types.h"
typedef float f32;

extern f32 D_003C49CC;

f32 func_00119A50(f32 x) {
    extern f32 func_00119770(f32);
    s32 hx, ix, k, i;
    f32 y, z, xx;
    f32 zero = 0.0f;
    do {
        union {
            f32 f;
            s32 w;
        } gf_u;
        gf_u.f = x;
        hx = gf_u.w;
    } while (0);
    ix = hx & 0x7FFFFFFF;
    if (ix <= 0x7FFFFF)
        return D_003C49CC;
    if (hx < 0)
        return (x - x) / zero;
    k = (hx >> 23) - 127;
    i = ((u32)k & 0x80000000) >> 31;
    hx = (hx & 0x7FFFFF) | ((0x7F - i) << 23);
    y = (f32)(k + i);
    do {
        union {
            f32 f;
            s32 w;
        } sf_u;
        sf_u.w = hx;
        xx = sf_u.f;
    } while (0);
    z = y * 7.9034153e-07f + 0.4342944920063019f * func_00119770(xx);
    return z + y * 0.30102917551994324f;
}
