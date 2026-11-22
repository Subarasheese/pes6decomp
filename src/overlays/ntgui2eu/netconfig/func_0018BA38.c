/* compiler: ee-gcc-2.9-G0 */
/* new-coke/rez-decomp, src/libc/libgcc/fp-bit.c (_fpadd_parts_f). See THIRD_PARTY.md. */

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
inline static int fpf_isnan(fp_number_type_f *x) {
    return (x->class == CLASS_SNAN) || (x->class == CLASS_QNAN);
}

inline static int fpf_isinf(fp_number_type_f *x) { return x->class == CLASS_INFINITY; }

inline static int fpf_iszero(fp_number_type_f *x) { return x->class == CLASS_ZERO; }

extern fp_number_type_f D_011F6C68;
fp_number_type_f *func_0018BA38(fp_number_type_f *a, fp_number_type_f *b, fp_number_type_f *tmp) {
    int tfraction;
    int a_normal_exp;
    int b_normal_exp;
    fractype_f a_fraction;
    fractype_f b_fraction;
    if (fpf_isnan(a))
        return a;
    if (fpf_isnan(b))
        return b;
    if (fpf_isinf(a)) {
        if (fpf_isinf(b) && (a->sign != b->sign))
            return &D_011F6C68;
        return a;
    }
    if (fpf_isinf(b))
        return b;
    if (fpf_iszero(b)) {
        if (fpf_iszero(a)) {
            *tmp = *a;
            tmp->sign = a->sign & b->sign;
            return tmp;
        }
        return a;
    }
    if (fpf_iszero(a))
        return b;
    {
        int diff;
        a_normal_exp = a->normal_exp;
        b_normal_exp = b->normal_exp;
        a_fraction = a->fraction.ll;
        b_fraction = b->fraction.ll;
        diff = a_normal_exp - b_normal_exp;
        if (diff < 0)
            diff = -diff;
        if (diff < 32) {
            while (a_normal_exp > b_normal_exp) {
                b_normal_exp++;
                b_fraction = (b_fraction & 1) | (b_fraction >> 1);
            }

            while (b_normal_exp > a_normal_exp) {
                a_normal_exp++;
                a_fraction = (a_fraction & 1) | (a_fraction >> 1);
            }

        } else {
            if (a_normal_exp > b_normal_exp) {
                b_normal_exp = a_normal_exp;
                b_fraction = 0;
            } else {
                a_normal_exp = b_normal_exp;
                a_fraction = 0;
            }
        }
    }
    if (a->sign != b->sign) {
        if (a->sign)
            tfraction = (-a_fraction) + b_fraction;
        else
            tfraction = a_fraction - b_fraction;
        if (tfraction >= 0) {
            tmp->sign = 0;
            tmp->normal_exp = a_normal_exp;
            tmp->fraction.ll = tfraction;
        } else {
            tmp->sign = 1;
            tmp->normal_exp = a_normal_exp;
            tmp->fraction.ll = -tfraction;
        }
        while ((tmp->fraction.ll < (((fractype_f)1) << 30)) && tmp->fraction.ll) {
            tmp->fraction.ll <<= 1;
            tmp->normal_exp--;
        }

    } else {
        tmp->sign = a->sign;
        tmp->normal_exp = a_normal_exp;
        tmp->fraction.ll = a_fraction + b_fraction;
    }
    tmp->class = CLASS_NUMBER;
    if (tmp->fraction.ll >= (((fractype_f)1) << 31)) {
        tmp->fraction.ll = (tmp->fraction.ll & 1) | (tmp->fraction.ll >> 1);
        tmp->normal_exp++;
    }
    return tmp;
}
