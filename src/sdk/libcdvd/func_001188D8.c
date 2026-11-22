/* compiler: ee-gcc-2.96-G0-g */
/* devin-thomas/guilty-gear-x-plus src/sdk/libm/e_sqrt.c (__ieee754_sqrt). See THIRD_PARTY.md. */
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
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef union {
    double value;
    struct {
        __uint32_t lsw;
        __uint32_t msw;
    } parts;
} ieee_double_shape_type;

double func_001188D8(double x) {
    double z;
    __int32_t sign = (int)0x80000000;
    __uint32_t r;
    __uint32_t t1;
    __uint32_t s1;
    __uint32_t ix1;
    __uint32_t q1;
    __int32_t ix0;
    __int32_t s0;
    __int32_t q;
    __int32_t m;
    __int32_t t;
    __int32_t i;
    do {
        ieee_double_shape_type ew_u;
        ew_u.value = x;
        ix0 = ew_u.parts.msw;
        ix1 = ew_u.parts.lsw;
    } while (0);
    if ((ix0 & 0x7ff00000) == 0x7ff00000) {
        return (x * x) + x;
    }
    if (ix0 <= 0) {
        if (((ix0 & (~sign)) | ix1) == 0)
            return x;
        else if (ix0 < 0)
            return (x - x) / (x - x);
    }
    m = ix0 >> 20;
    if (m == 0) {
        while (ix0 == 0) {
            m -= 21;
            ix0 |= ix1 >> 11;
            ix1 <<= 21;
        }

        for (i = 0; (ix0 & 0x00100000) == 0; i++)
            ix0 <<= 1;

        m -= i - 1;
        ix0 |= ix1 >> (32 - i);
        ix1 <<= i;
    }
    m -= 1023;
    ix0 = (ix0 & 0x000fffff) | 0x00100000;
    if (m & 1) {
        ix0 += ix0 + ((ix1 & sign) >> 31);
        ix1 += ix1;
    }
    m >>= 1;
    ix0 += ix0 + ((ix1 & sign) >> 31);
    ix1 += ix1;
    q = (q1 = (s0 = (s1 = 0)));
    r = 0x00200000;
    while (r != 0) {
        t = s0 + r;
        if (t <= ix0) {
            s0 = t + r;
            ix0 -= t;
            q += r;
        }
        ix0 += ix0 + ((ix1 & sign) >> 31);
        ix1 += ix1;
        r >>= 1;
    }

    r = sign;
    while (r != 0) {
        t1 = s1 + r;
        t = s0;
        if ((t < ix0) || ((t == ix0) && (t1 <= ix1))) {
            s1 = t1 + r;
            if (((t1 & sign) == sign) && ((s1 & sign) == 0))
                s0 += 1;
            ix0 -= t;
            if (ix1 < t1)
                ix0 -= 1;
            ix1 -= t1;
            q1 += r;
        }
        ix0 += ix0 + ((ix1 & sign) >> 31);
        ix1 += ix1;
        r >>= 1;
    }

    if ((ix0 | ix1) != 0) {
        z = 1.0 - 1.0e-300;
        if (z >= 1.0) {
            z = 1.0 + 1.0e-300;
            if (q1 == ((__uint32_t)0xffffffff)) {
                q1 = 0;
                q += 1;
            } else if (z > 1.0) {
                if (q1 == ((__uint32_t)0xfffffffe))
                    q += 1;
                q1 += 2;
            } else
                q1 += q1 & 1;
        }
    }
    ix0 = (q >> 1) + 0x3fe00000;
    ix1 = q1 >> 1;
    if ((q & 1) == 1)
        ix1 |= sign;
    ix0 += m << 20;
    do {
        ieee_double_shape_type iw_u;
        iw_u.parts.msw = ix0;
        iw_u.parts.lsw = ix1;
        z = iw_u.value;
    } while (0);
    return z;
}
