/* compiler: ee-gcc-2.96-G0 */
/* Source: g-guthrie/mvc2-port-and-decomp, src/newlib_k_tanf_00115E18.c (func_00115E18). */
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

extern float func_0011D210(float);
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef union {
    float value;
    __uint32_t word;
} ieee_float_shape_type;
static const float one = 1.0000000000e+00;
static const float pio4 = 7.8539812565e-01;
static const float pio4lo = 3.7748947079e-08;
static const float T[] = {3.3333334327e-01, 1.3333334029e-01, 5.3968254477e-02, 2.1869488060e-02,
                          8.8632395491e-03, 3.5920790397e-03, 1.4562094584e-03, 5.8804126456e-04,
                          2.4646313977e-04, 7.8179444245e-05, 7.1407252108e-05, -1.8558637748e-05,
                          2.5907305826e-05};

float func_0011C2B8(float x, float y, int iy) {
    float z;
    float r;
    float v;
    float w;
    float s;
    __int32_t ix;
    __int32_t hx;
    do {
        ieee_float_shape_type gf_u;
        gf_u.value = x;
        hx = gf_u.word;
    } while (0);
    ix = hx & 0x7fffffff;
    if (ix < 0x31800000) {
        if (((int)x) == 0) {
            if ((ix | (iy + 1)) == 0)
                return one / func_0011D210(x);
            else
                return (iy == 1) ? (x) : ((-one) / x);
        }
    }
    if (ix >= 0x3f2ca140) {
        if (hx < 0) {
            x = -x;
            y = -y;
        }
        z = pio4 - x;
        w = pio4lo - y;
        x = z + w;
        y = 0.0;
    }
    z = x * x;
    w = z * z;
    r = T[1] + (w * (T[3] + (w * (T[5] + (w * (T[7] + (w * (T[9] + (w * T[11])))))))));
    v = z * (T[2] + (w * (T[4] + (w * (T[6] + (w * (T[8] + (w * (T[10] + (w * T[12]))))))))));
    s = z * x;
    r = y + (z * ((s * (r + v)) + y));
    r += T[0] * s;
    w = x + r;
    if (ix >= 0x3f2ca140) {
        v = (float)iy;
        return ((float)(1 - ((hx >> 30) & 2))) *
               (v - (((float)2.0) * (x - (((w * w) / (w + v)) - r))));
    }
    if (iy == 1)
        return w;
    else {
        float a;
        float t;
        __int32_t i;
        z = w;
        do {
            ieee_float_shape_type gf_u;
            gf_u.value = z;
            i = gf_u.word;
        } while (0);
        do {
            ieee_float_shape_type sf_u;
            sf_u.word = i & 0xfffff000;
            z = sf_u.value;
        } while (0);
        v = r - (z - x);
        t = (a = (-((float)1.0)) / w);
        do {
            ieee_float_shape_type gf_u;
            gf_u.value = t;
            i = gf_u.word;
        } while (0);
        do {
            ieee_float_shape_type sf_u;
            sf_u.word = i & 0xfffff000;
            t = sf_u.value;
        } while (0);
        s = ((float)1.0) + (t * z);
        return t + (a * (s + (t * v)));
    }
}
