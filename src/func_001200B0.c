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
extern float func_0011F4C8(fp_class_type class, unsigned int sign, int exp, unsigned int frac);
void __unpack_d(FLO_union_type *src, fp_number_type *dst);
double D_0011F920(double arg_a, double arg_b);
double D_0011F978(double arg_a, double arg_b);
double D_0011F9E0(double arg_a, double arg_b);
double D_0011FC90(double arg_a, double arg_b);
int litodp(double arg_a, double arg_b);
double D_001201A8(fp_class_type class, unsigned int sign, int exp, unsigned long frac);
float func_001200B0(double arg_a) {
    fp_number_type in;
    unsigned int sffrac;
    FLO_union_type au;
    au.value = arg_a;
    __unpack_d(&au, &in);
    sffrac = in.fraction.ll >> 30;
    if ((in.fraction.ll & ((1 << 30) - 1)) != 0) {
        sffrac |= 1;
    }
    return func_0011F4C8(in.class, in.sign, in.normal_exp, sffrac);
}