/* compiler: ee-gcc-2.96-G0 */
/* gcc fp-bit.c dpcmp (soft double compare) */
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

int dpcmp(FLO_type arg_a, FLO_type arg_b) {
    fp_number_type a;
    fp_number_type b;
    FLO_union_type au, bu;

    au.value = arg_a;
    bu.value = arg_b;
    __unpack_d(&au, &a);
    __unpack_d(&bu, &b);
    return func_0011FDB8(&a, &b);
}
