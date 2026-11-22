/* compiler: ee-gcc-2.9-G0 */
/* new-coke/rez-decomp, src/libc/libgcc/fp-bit.c (fpdiv). See THIRD_PARTY.md. */

typedef enum { CLASS_SNAN, CLASS_QNAN, CLASS_ZERO, CLASS_NUMBER, CLASS_INFINITY } fp_class_type;
typedef unsigned int fractype_f;
typedef struct {
    fp_class_type class;
    unsigned int sign;
    int normal_exp;
    union {
        fractype_f ll;
        unsigned short l[2];
    } fraction;
} fp_number_type_f;
typedef union {
    float value;
    fractype_f value_raw;
    struct {
        fractype_f fraction : 23;
        unsigned int exp : 8;
        unsigned int sign : 1;
    } bits;
} FLO_union_type_f;
inline static int fpf_isnan(fp_number_type_f *x) {
    return (x->class == CLASS_SNAN) || (x->class == CLASS_QNAN);
}

inline static int fpf_isinf(fp_number_type_f *x) { return x->class == CLASS_INFINITY; }

inline static int fpf_iszero(fp_number_type_f *x) { return x->class == CLASS_ZERO; }

extern fp_number_type_f D_011F6C68;
extern float func_0018B898(fp_number_type_f *src);
extern void func_0018B9A8(FLO_union_type_f *src, fp_number_type_f *dst);
inline static fp_number_type_f *_fpdiv_parts(fp_number_type_f *a, fp_number_type_f *b) {
    fractype_f bit;
    fractype_f numerator;
    fractype_f denominator;
    fractype_f quotient;
    if (fpf_isnan(a))
        return a;
    if (fpf_isnan(b))
        return b;
    a->sign = a->sign ^ b->sign;
    if (fpf_isinf(a) || fpf_iszero(a)) {
        if (a->class == b->class)
            return &D_011F6C68;
        return a;
    }
    if (fpf_isinf(b)) {
        a->fraction.ll = 0;
        a->normal_exp = 0;
        return a;
    }
    if (fpf_iszero(b)) {
        a->class = CLASS_INFINITY;
        return a;
    }
    {
        a->normal_exp = a->normal_exp - b->normal_exp;
        numerator = a->fraction.ll;
        denominator = b->fraction.ll;
        if (numerator < denominator) {
            numerator *= 2;
            a->normal_exp--;
        }
        bit = ((fractype_f)1) << 30;
        quotient = 0;
        while (bit) {
            if (numerator >= denominator) {
                quotient |= bit;
                numerator -= denominator;
            }
            bit >>= 1;
            numerator *= 2;
        }

        if ((quotient & 0x7f) == 0x40) {
            if (quotient & (1 << 7)) {
                quotient += 0x3f + 1;
            } else if (numerator) {
                quotient += 0x3f + 1;
            }
        }
        a->fraction.ll = quotient;
        return a;
    }
}

float func_0018BF28(float arg_a, float arg_b) {
    fp_number_type_f a;
    fp_number_type_f b;
    fp_number_type_f *res;
    func_0018B9A8((FLO_union_type_f *)(&arg_a), &a);
    func_0018B9A8((FLO_union_type_f *)(&arg_b), &b);
    res = _fpdiv_parts(&a, &b);
    return func_0018B898(res);
}
