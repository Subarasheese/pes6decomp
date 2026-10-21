/* compiler: ee-gcc-2.96 */
/* C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/gcc/dp-bit.c). */
typedef enum {
    CLASS_SNAN,
    CLASS_QNAN,
    CLASS_ZERO,
    CLASS_NUMBER,
    CLASS_INFINITY
} fp_class_type;
typedef struct {
    fp_class_type class;
    unsigned int sign;
    int normal_exp;
    union {
        unsigned long ll;
        unsigned int l[2];
    } fraction;
} fp_number_type;
typedef union {
    double value;
    struct {
        unsigned long fraction : 52;
        unsigned int exp : 11;
        unsigned int sign : 1;
    } bits;
} FLO_union_type;
extern float __make_fp(fp_class_type class, unsigned int sign, int exp, unsigned int frac);
double func_0011F538(fp_number_type *src);
void D_0011F678(FLO_union_type *src, fp_number_type *dst);
double __make_dp(fp_class_type class, unsigned int sign, int exp, unsigned long frac) {
    fp_number_type in;
    in.class = class;
    in.sign = sign;
    in.normal_exp = exp;
    in.fraction.ll = frac;
    return func_0011F538(&in);
}