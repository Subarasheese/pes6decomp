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
typedef union {
    double value;
    unsigned long long bits;
} FLO_union_type;
extern float func_0018C408(fp_class_type class, unsigned int sign, int exp, unsigned int frac);
void func_0018ACD0(FLO_union_type *src, fp_number_type *dst);

float func_0018B840(double arg_a) {
    fp_number_type in;
    unsigned int sffrac;
    FLO_union_type au;
    au.value = arg_a;
    func_0018ACD0(&au, &in);
    sffrac = in.fraction.ll >> 30;
    if ((in.fraction.ll & ((1 << 30) - 1)) != 0) {
        sffrac |= 1;
    }
    return func_0018C408(in.class, in.sign, in.normal_exp, sffrac);
}
