/* compiler: ee-gcc-2.96-G0 */
/* gcc fp-bit.c dpadd (soft double add) */
typedef unsigned long long UDItype;
typedef float DFtype __attribute__ ((mode (DF)));
typedef DFtype FLO_type;

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
        UDItype ll;
        unsigned int l[2];
    } fraction;
} fp_number_type;

typedef union {
    FLO_type value;
    UDItype value_raw;
    unsigned int words[2];
} FLO_union_type;

extern void __unpack_d(FLO_union_type *, fp_number_type *);
extern fp_number_type *func_0011F6D0(fp_number_type *, fp_number_type *, fp_number_type *);
extern FLO_type func_0011F538(fp_number_type *);
extern int func_0011FDB8(fp_number_type *, fp_number_type *);

FLO_type dpadd(FLO_type arg_a, FLO_type arg_b) {
    fp_number_type a;
    fp_number_type b;
    fp_number_type tmp;
    fp_number_type *res;
    FLO_union_type au, bu;

    au.value = arg_a;
    bu.value = arg_b;
    __unpack_d(&au, &a);
    __unpack_d(&bu, &b);
    res = func_0011F6D0(&a, &b, &tmp);
    return func_0011F538(res);
}
