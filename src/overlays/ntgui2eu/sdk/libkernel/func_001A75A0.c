/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/w199_m.c (func_00116FA0). See THIRD_PARTY.md. */
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
/* fdlibm single-precision sf_cos.c for the EE floating-point format. */
#include "types.h"
extern float func_001A8FA0(float, float, s32);
extern float func_001A85E8(float, float);
extern s32 func_001A8168(float, float *);

float func_001A75A0(float x) {
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
        return func_001A85E8(x, 0.0f);
    }
    n = func_001A8168(x, y);
    switch (n & 3) {
    case 0:
        return func_001A85E8(y[0], y[1]);
    case 1:
        return -func_001A8FA0(y[0], y[1], 1);
    case 2:
        return -func_001A85E8(y[0], y[1]);
    default:
        return func_001A8FA0(y[0], y[1], 1);
    }
}
