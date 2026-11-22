/* compiler: ee-gcc-2.96-G0 */
/* zm2283145/syphon-filter-omega-strain-decomp, src/lib/libgcc/libgcc_11D980.c (Math_FModImpl). See
 * THIRD_PARTY.md. */
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
typedef union {
    float value;
    unsigned int word;
} ieee_float_shape_type;
extern const float D_003C4980[13];

float func_001195A0(float x, float y) {
    const float one = 1.0;
    int n;
    int hx;
    int hy;
    int hz;
    int ix;
    int iy;
    int sx;
    int i;
    do {
        ieee_float_shape_type gf_u;
        gf_u.value = x;
        hx = gf_u.word;
    } while (0);
    do {
        ieee_float_shape_type gf_u;
        gf_u.value = y;
        hy = gf_u.word;
    } while (0);
    sx = hx & 0x80000000;
    hx ^= sx;
    hy &= 0x7fffffff;
    if (hy < 0x00800000L)
        return (x * y) / (x * y);
    if (hx < hy)
        return x;
    if (hx == hy)
        return ((const float *)D_003C4980)[((unsigned int)sx) >> 31];
    if (0) {
        for (ix = -126, i = hx << 8; i > 0; i <<= 1)
            ix -= 1;

    } else
        ix = (hx >> 23) - 127;
    if (0) {
        for (iy = -126, i = hy << 8; i >= 0; i <<= 1)
            iy -= 1;

    } else
        iy = (hy >> 23) - 127;
    if (ix >= (-126))
        hx = 0x00800000 | (0x007fffff & hx);
    else {
        n = (-126) - ix;
        hx = hx << n;
    }
    if (iy >= (-126))
        hy = 0x00800000 | (0x007fffff & hy);
    else {
        n = (-126) - iy;
        hy = hy << n;
    }
    n = ix - iy;
    while (n--) {
        hz = hx - hy;
        if (hz < 0) {
            hx = hx + hx;
        } else {
            if (hz == 0)
                return ((const float *)D_003C4980)[((unsigned int)sx) >> 31];
            hx = hz + hz;
        }
    }

    hz = hx - hy;
    if (hz >= 0) {
        hx = hz;
    }
    if (hx == 0)
        return ((const float *)D_003C4980)[((unsigned int)sx) >> 31];
    while (hx < 0x00800000) {
        hx = hx + hx;
        iy -= 1;
    }

    if (iy >= (-126)) {
        hx = (hx - 0x00800000) | ((iy + 127) << 23);
        do {
            ieee_float_shape_type sf_u;
            sf_u.word = hx | sx;
            x = sf_u.value;
        } while (0);
    } else {
        n = (-126) - iy;
        hx >>= n;
        do {
            ieee_float_shape_type sf_u;
            sf_u.word = hx | sx;
            x = sf_u.value;
        } while (0);
        x *= one;
    }
    return x;
}
