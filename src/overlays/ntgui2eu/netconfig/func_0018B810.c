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

double func_0018B810(fp_class_type class, unsigned int sign, int exp, unsigned long long frac) {
    fp_number_type in;
    in.class = class;
    in.sign = sign;
    in.normal_exp = exp;
    in.fraction.ll = frac;
    return func_0018ABA0(&in);
}
