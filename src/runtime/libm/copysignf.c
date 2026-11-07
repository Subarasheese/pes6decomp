/* compiler: ee-gcc-2.96 */
/* C runtime code (newlib libm); source adapted from re4 (src/lib/fdlibm/sf_copysign.c). */
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
        float copysignf(float x, float y)
{
        __uint32_t ix,iy;
        do { ieee_float_shape_type gf_u; gf_u.value = (x); (ix) = gf_u.word; } while (0);
        do { ieee_float_shape_type gf_u; gf_u.value = (y); (iy) = gf_u.word; } while (0);
        do { ieee_float_shape_type sf_u; sf_u.word = ((ix&0x7fffffff)|(iy&0x80000000)); (x) = sf_u.value; } while (0);
        return x;
}
