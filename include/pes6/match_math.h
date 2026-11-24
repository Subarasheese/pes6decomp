#ifndef PES6_MATCH_MATH_H
#define PES6_MATCH_MATH_H

static inline float pes6_absf(float value)
{
#ifdef __MWERKS__
    return __s_abs(value);
#else
    return __builtin_fabsf(value);
#endif
}

#endif
