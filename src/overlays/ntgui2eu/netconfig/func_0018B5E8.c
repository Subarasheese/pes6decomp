/* compiler: ee-gcc-2.9 */
/* GCC floating-point runtime, config/fp-bit.c, via crashwoc-decomp-ps2. See THIRD_PARTY.md. */
/* C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/gcc/dp-bit.c). */
typedef enum { CLASS_SNAN, CLASS_QNAN, CLASS_ZERO, CLASS_NUMBER, CLASS_INFINITY } fp_class_type;
typedef struct {
    fp_class_type class;
    unsigned int sign;
    int normal_exp;
    union {
        unsigned long long ll;
        unsigned int l[2];
    } fraction;
} fp_number_type;
double func_0018ABA0(fp_number_type *src);

double dpsub(double arg_a, double arg_b);
double D_0011F9E0(double arg_a, double arg_b);
double D_0011FA48(double arg_a, double arg_b);
double D_0011FCF8(double arg_a, double arg_b);

double func_0018B5E8(int arg_a) {
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
        while (in.fraction.ll < (1LL << (52 + 8))) {
            in.fraction.ll <<= 1;
            in.normal_exp -= 1;
        }
    }
    return func_0018ABA0(&in);
}
double D_00120210(fp_class_type class, unsigned int sign, int exp, unsigned long long frac);
