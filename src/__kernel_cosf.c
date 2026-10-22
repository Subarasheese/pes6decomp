/* compiler: ee-gcc-2.96-G0 */
/* C runtime code (newlib libm); source adapted from re4 (src/lib/fdlibm/kf_cos.c). */
typedef unsigned int __uint32_t;
typedef int __int32_t;
extern double sqrt (double);
extern double pow (double, double);
extern double log (double);
extern double log10 (double);
extern double atan2 (double, double);
extern double fmod (double, double);
extern int __ieee754_rem_pio2 (double, double *);
extern double atan (double);
extern double fabs (double);
extern double floor (double);
extern double scalbn (double, int);
extern double copysign (double, double);
extern double cos (double);
extern double tan (double);
extern double __kernel_sin (double, double, int);
extern double __kernel_cos (double, double);
extern double __kernel_tan (double, double, int);
extern int __kernel_rem_pio2 (double *, double *, int, int, int, const __int32_t *);
extern float sqrtf (float);
extern float powf (float, float);
extern float acosf (float);
extern float asinf (float);
extern float atan2f (float, float);
extern __int32_t __ieee754_rem_pio2f (float, float *);
extern float atanf (float);
extern float fabsf (float);
extern float floorf (float);
extern float scalbnf (float, int);
extern float copysignf (float, float);
extern float cosf (float);
extern float sinf (float);
extern float tanf (float);
extern float __kernel_sinf (float, float, int);
extern float __kernel_cosf (float, float);
extern float __kernel_tanf (float, float, int);
extern int __kernel_rem_pio2f (float *, float *, int, int, int, const __int32_t *);
typedef union {
    double value;
    struct {
        __uint32_t msw;
        __uint32_t lsw;
    } parts;
} ieee_double_shape_type;
typedef union {
    float value;
    __uint32_t word;
} ieee_float_shape_type;
#define one ((float)1.0000000000e+00)
#define C1 ((float)4.1666667908e-02)
#define C2 ((float)-1.3888889225e-03)
#define C3 ((float)2.4801587642e-05)
#define C4 ((float)-2.7557314297e-07)
#define C5 ((float)2.0875723372e-09)
#define C6 ((float)-1.1359647598e-11)
        float __kernel_cosf(float x, float y)
{
        float a,hz,z,r,qx;
        __int32_t ix;
        do { ieee_float_shape_type gf_u; gf_u.value = (x); (ix) = gf_u.word; } while (0);
        ix &= 0x7fffffff;
        if(ix<0x32000000) {
            if(((int)x)==0) return one;
        }
        z = x*x;
        r = z*(C1+z*(C2+z*(C3+z*(C4+z*(C5+z*C6)))));
        if(ix < 0x3e99999a)
            return one - ((float)0.5*z - (z*r - x*y));
        else {
            if(ix > 0x3f480000) {
                qx = (float)0.28125;
            } else {
                do { ieee_float_shape_type sf_u; sf_u.word = (ix-0x01000000); (qx) = sf_u.value; } while (0);
            }
            hz = (float)0.5*z-qx;
            a = one-qx;
            return a - (hz - (z*r-x*y));
        }
}
