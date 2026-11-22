/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/u2d.c (func_00117178). See THIRD_PARTY.md. */
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
/* fdlibm single-precision sf_scalbn.c for the EE floating-point format. */
#include "types.h"
#define GET_FLOAT_WORD(i, d)                                                                       \
    do {                                                                                           \
        union {                                                                                    \
            float f;                                                                               \
            u32 w;                                                                                 \
        } gf_u;                                                                                    \
        gf_u.f = (d);                                                                              \
        (i) = gf_u.w;                                                                              \
    } while (0)
#define SET_FLOAT_WORD(d, i)                                                                       \
    do {                                                                                           \
        union {                                                                                    \
            float f;                                                                               \
            u32 w;                                                                                 \
        } sf_u;                                                                                    \
        sf_u.w = (i);                                                                              \
        (d) = sf_u.f;                                                                              \
    } while (0)

extern float func_0011D0F8(float, float);

float func_0011D3A0(float x, s32 n) {
    u32 ix;
    s32 k;
    float t;
    GET_FLOAT_WORD(ix, x);
    if ((ix & 0x7FFFFFFF) > 0x7FFFFF) {
        k = (ix & 0x7FFFFFFF) >> 23;
        k += n;
        if (k >= 256) {
            t = 1.0e30f;
            return func_0011D0F8(t, x) * t;
        }
        if (k > 0) {
            SET_FLOAT_WORD(x, (ix & 0x807FFFFF) | (k << 23));
            return x;
        }
        if (n > 50000) {
            t = 1.0e30f;
            return func_0011D0F8(t, x) * t;
        } else {
            t = 1.0e-30f;
            return func_0011D0F8(t, x) * t;
        }
    }
    return x;
}
