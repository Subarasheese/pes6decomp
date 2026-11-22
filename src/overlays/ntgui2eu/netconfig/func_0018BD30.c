/* compiler: ee-gcc-2.9-G0 */
/* new-coke/rez-decomp, src/libc/libgcc/fp-bit.c (fpmul). See THIRD_PARTY.md. */

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
inline static fp_number_type_f *_fpmul_parts(fp_number_type_f *a, fp_number_type_f *b,
                                             fp_number_type_f *tmp) {
    fractype_f low = 0;
    fractype_f high = 0;
    if (fpf_isnan(a)) {
        a->sign = a->sign != b->sign;
        return a;
    }
    if (fpf_isnan(b)) {
        b->sign = a->sign != b->sign;
        return b;
    }
    if (fpf_isinf(a)) {
        if (fpf_iszero(b))
            return &D_011F6C68;
        a->sign = a->sign != b->sign;
        return a;
    }
    if (fpf_isinf(b)) {
        if (fpf_iszero(a))
            return &D_011F6C68;
        b->sign = a->sign != b->sign;
        return b;
    }
    if (fpf_iszero(a)) {
        a->sign = a->sign != b->sign;
        return a;
    }
    if (fpf_iszero(b)) {
        b->sign = a->sign != b->sign;
        return b;
    }
    {
        unsigned long answer = ((unsigned long)a->fraction.ll) * ((unsigned long)b->fraction.ll);
        high = answer >> 32;
        low = answer;
    }
    tmp->normal_exp = ((a->normal_exp + b->normal_exp) + 32) - (23 + 7);
    tmp->sign = a->sign != b->sign;
    while (high >= (((fractype_f)1) << 31)) {
        tmp->normal_exp++;
        if (high & 1) {
            low >>= 1;
            low |= ((fractype_f)1) << 31;
        }
        high >>= 1;
    }

    while (high < (((fractype_f)1) << 30)) {
        tmp->normal_exp--;
        high <<= 1;
        if (low & (((fractype_f)1) << 31))
            high |= 1;
        low <<= 1;
    }

    if ((high & 0x7f) == 0x40) {
        if (high & (1 << 7)) {
            high += 0x3f + 1;
        } else if (low) {
            high += 0x3f + 1;
        }
    }
    tmp->fraction.ll = high;
    tmp->class = CLASS_NUMBER;
    return tmp;
}

float func_0018BD30(float arg_a, float arg_b) {
    fp_number_type_f a;
    fp_number_type_f b;
    fp_number_type_f tmp;
    fp_number_type_f *res;
    func_0018B9A8((FLO_union_type_f *)(&arg_a), &a);
    func_0018B9A8((FLO_union_type_f *)(&arg_b), &b);
    res = _fpmul_parts(&a, &b, &tmp);
    return func_0018B898(res);
}
