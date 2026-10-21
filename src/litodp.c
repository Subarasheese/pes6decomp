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
double dpsub(double arg_a, double arg_b);
double D_0011F9E0(double arg_a, double arg_b);
double D_0011FA48(double arg_a, double arg_b);
double D_0011FCF8(double arg_a, double arg_b);
int D_0011FF90(double arg_a, double arg_b);
double litodp(int arg_a) {
    fp_number_type in;
    in.class = CLASS_NUMBER;
    in.sign = arg_a < 0;
    if (!arg_a) {
        in.class = CLASS_ZERO;
    } else {
        in.normal_exp = 52 + 8;
        if (in.sign) {
            if (arg_a == -0x7FFFFFFF - 1) {
                return -0x7FFFFFFF - 1;
            }
            in.fraction.ll = -arg_a;
        } else {
            in.fraction.ll = arg_a;
        }
        while (in.fraction.ll < (1L << (52 + 8))) {
            in.fraction.ll <<= 1;
            in.normal_exp -= 1;
        }
    }
    return func_0011F538(&in);
}
double D_00120210(fp_class_type class, unsigned int sign, int exp, unsigned long frac);