/* compiler: ee-gcc-2.9-G0 */
/* Voicedrew11/kfiv-decomp, src/sce/libgcc/dp-bit.c (__pack_d). See THIRD_PARTY.md. */

typedef struct {
    unsigned int class;
    int sign;
    int normal_exp;
    int pad;
    union {
        unsigned long long ll;
        unsigned int l[2];
    } fraction;
} fp_number_type_d;
typedef union {
    struct {
        unsigned long long fraction : 52;
        unsigned int exp : 11;
        unsigned int sign : 1;
    } bits;
    long long value;
} FLO_union_type_d;
static inline int isnan_d(fp_number_type_d *x) { return (x->class == 0) || (x->class == 1); }

static inline int isinf_d(fp_number_type_d *x) { return x->class == 4; }

static inline int iszero_d(fp_number_type_d *x) { return x->class == 2; }

long long func_0018ABA0(void *s) {
    fp_number_type_d *src = s;
    FLO_union_type_d dst;
    unsigned long long fraction = src->fraction.ll;
    int sign = src->sign;
    int exp = 0;
    if (isnan_d(src)) {
        exp = 0x7FF;
        fraction |= 0x8000000000000ULL;
    } else if (isinf_d(src)) {
        exp = 0x7FF;
        fraction = 0;
    } else if (iszero_d(src)) {
        exp = 0;
        fraction = 0;
    } else if (fraction == 0) {
        exp = 0;
    } else {
        if (src->normal_exp < (-1022)) {
            int shift = (-1022) - src->normal_exp;
            if (shift > 56) {
                exp = 0;
                fraction = 0;
            } else {
                exp = 0;
                fraction >>= shift;
            }
            fraction >>= 8;
        } else if (src->normal_exp > 1023) {
            exp = 0x7FF;
            fraction = 0;
        } else {
            exp = src->normal_exp + 1023;
            if ((fraction & 0xFF) == 0x80) {
                if (fraction & 0x100) {
                    fraction += 0x80;
                }
            } else {
                fraction += 0x7F;
            }
            if (fraction >= 0x2000000000000000ULL) {
                fraction >>= 1;
                exp += 1;
            }
            fraction >>= 8;
        }
    }
    dst.bits.fraction = fraction;
    dst.bits.exp = exp;
    dst.bits.sign = sign;
    return dst.value;
}
