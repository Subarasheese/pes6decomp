/* compiler: ee-gcc-2.96-G0 */
/* zm2283145/syphon-filter-omega-strain-decomp, src/lib/libgcc/libgcc_3.c (Libc_Floorf). See
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
float func_001A9360(float x) {
    int i0;
    int j0;
    unsigned int i;
    unsigned int ix;
    do {
        ieee_float_shape_type gf_u;
        gf_u.value = x;
        i0 = gf_u.word;
    } while (0);
    ix = i0 & 0x7fffffff;
    j0 = (ix >> 23) - 0x7f;
    if (j0 < 23) {
        if (j0 < 0) {
            if ((1.0e30f + x) > ((float)0.0)) {
                if (i0 >= 0) {
                    i0 = 0;
                } else if (!(ix < 0x00800000L)) {
                    i0 = 0xbf800000;
                }
            }
        } else {
            i = 0x007fffff >> j0;
            if ((i0 & i) == 0)
                return x;
            if ((1.0e30f + x) > ((float)0.0)) {
                if (i0 < 0)
                    i0 += 0x00800000 >> j0;
                i0 &= ~i;
            }
        }
    } else {
        return x;
    }
    do {
        ieee_float_shape_type sf_u;
        sf_u.word = i0;
        x = sf_u.value;
    } while (0);
    return x;
}
