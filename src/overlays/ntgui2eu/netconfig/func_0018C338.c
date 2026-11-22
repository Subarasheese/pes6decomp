/* compiler: ee-gcc-2.9-G0 */
/* Voicedrew11/kfiv-decomp, src/sce/libgcc/fp-bit.c (fptoui). See THIRD_PARTY.md. */

typedef struct {
    unsigned int class;
    int sign;
    int normal_exp;
    unsigned int fraction;
} fp_number_type;
extern void func_0018B9A8(void *in, void *out);
static inline int isnan(fp_number_type *x) { return (x->class == 0) || (x->class == 1); }

static inline int isinf(fp_number_type *x) { return x->class == 4; }

static inline int iszero(fp_number_type *x) { return x->class == 2; }

unsigned int func_0018C338(float arg_a) {
    fp_number_type a;
    float au[4];
    au[0] = arg_a;
    func_0018B9A8(au, &a);
    if (iszero(&a)) {
        return 0;
    }
    if (isnan(&a)) {
        return 0;
    }
    if (a.sign) {
        return 0;
    }
    if (isinf(&a)) {
        return 0xFFFFFFFF;
    }
    if (a.normal_exp < 0) {
        return 0;
    }
    if (a.normal_exp > 31) {
        return 0xFFFFFFFF;
    }
    if (a.normal_exp > 30) {
        return a.fraction << (a.normal_exp - 30);
    }
    return a.fraction >> (30 - a.normal_exp);
}
