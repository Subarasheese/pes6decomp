/* compiler: ee-gcc-2.96-G0 */
/* ef_acos.c -- float version of e_acos.c.
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
 */

#include "types.h"
typedef s32 __int32_t;
typedef union {
    u32 word;
    float value;
} FloatWord;
#define GET_FLOAT_WORD(i, f)                                                                       \
    do {                                                                                           \
        FloatWord view;                                                                            \
        view.value = (f);                                                                          \
        (i) = view.word;                                                                           \
    } while (0)
#define SET_FLOAT_WORD(f, i)                                                                       \
    do {                                                                                           \
        FloatWord view;                                                                            \
        view.word = (i);                                                                           \
        (f) = view.value;                                                                          \
    } while (0)
extern float func_0011A6C8(float x);
#define one ((float)(1.0000000000e+00))
#define pi ((float)(3.1415925026e+00))
#define pio2_hi ((float)(1.5707962513e+00))
#define pio2_lo ((float)(7.5497894159e-08))
#define pS0 ((float)(1.6666667163e-01))
#define pS1 ((float)(-3.2556581497e-01))
#define pS2 ((float)(2.0121252537e-01))
#define pS3 ((float)(-4.0055535734e-02))
#define pS4 ((float)(7.9153501429e-04))
#define pS5 ((float)(3.4793309169e-05))
#define qS1 ((float)(-2.4033949375e+00))
#define qS2 ((float)(2.0209457874e+00))
#define qS3 ((float)(-6.8828397989e-01))
#define qS4 ((float)(7.7038154006e-02))

float func_00118BF8(float x) {
    float z, p, q, r, w, s, c, df;
    __int32_t hx, ix;
    GET_FLOAT_WORD(hx, x);
    ix = hx & 0x7fffffff;
    if (ix == 0x3f800000) { /* |x|==1 */
        if (hx > 0)
            return 0.0; /* acos(1) = 0  */
        else
            return pi + (float)2.0 * pio2_lo; /* acos(-1)= pi */
    } else if (ix > 0x3f800000) {             /* |x| >= 1 */
        return (x - x) / (x - x);             /* acos(|x|>1) is NaN */
    }
    if (ix < 0x3f000000) { /* |x| < 0.5 */
        if (ix <= 0x23000000)
            return pio2_hi + pio2_lo; /*if|x|<2**-57*/
        z = x * x;
        p = z * (pS0 + z * (pS1 + z * (pS2 + z * (pS3 + z * (pS4 + z * pS5)))));
        q = one + z * (qS1 + z * (qS2 + z * (qS3 + z * qS4)));
        r = p / q;
        return pio2_hi - (x - (pio2_lo - x * r));
    } else if (hx < 0) { /* x < -0.5 */
        z = (one + x) * (float)0.5;
        p = z * (pS0 + z * (pS1 + z * (pS2 + z * (pS3 + z * (pS4 + z * pS5)))));
        q = one + z * (qS1 + z * (qS2 + z * (qS3 + z * qS4)));
        s = func_0011A6C8(z);
        r = p / q;
        w = r * s - pio2_lo;
        return pi - (float)2.0 * (s + w);
    } else { /* x > 0.5 */
        __int32_t idf;
        z = (one - x) * (float)0.5;
        s = func_0011A6C8(z);
        df = s;
        GET_FLOAT_WORD(idf, df);
        SET_FLOAT_WORD(df, idf & 0xfffff000);
        c = (z - df * df) / (s + df);
        p = z * (pS0 + z * (pS1 + z * (pS2 + z * (pS3 + z * (pS4 + z * pS5)))));
        q = one + z * (qS1 + z * (qS2 + z * (qS3 + z * qS4)));
        r = p / q;
        w = r * s + c;
        return (float)2.0 * (df + w);
    }
}
