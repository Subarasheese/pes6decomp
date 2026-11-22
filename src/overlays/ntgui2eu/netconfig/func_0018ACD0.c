/* compiler: ee-gcc-2.9-G0 */
/* Source: nathanialf/ico, sce/libgcc/dp-bit.c (__unpack_d). */
/* GCC runtime, config/fp-bit.c. Copyright (C) 1994-1998 Free Software Foundation, Inc.
 * GPL-2.0-or-later with the GCC linking exception. See THIRD_PARTY.md and LICENSES/GPL-2.0.txt. */

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

void func_0018ACD0(void *in, void *out) {
    FLO_union_type_d src;
    fp_number_type_d *dst = out;
    unsigned long long fraction;
    int exp;
    int sign;
    src.value = *((long long *)in);
    fraction = src.bits.fraction;
    exp = src.bits.exp;
    sign = src.bits.sign;
    dst->sign = sign;
    if (exp == 0) {
        if ((fraction == 0) || 1) {
            dst->class = 2;
        } else {
            dst->normal_exp = (exp - 1023) + 1;
            fraction <<= 8;
            dst->class = 3;
            while (fraction < 0x1000000000000000ULL) {
                fraction <<= 1;
                dst->normal_exp--;
            }

            dst->fraction.ll = fraction;
        }
    } else if (exp == 0x7FF) {
        if (fraction == 0) {
            dst->class = 4;
        } else {
            if (fraction & 0x8000000000000ULL) {
                dst->class = 1;
            } else {
                dst->class = 0;
            }
            dst->fraction.ll = fraction;
        }
    } else {
        dst->normal_exp = exp - 1023;
        dst->class = 3;
        dst->fraction.ll = (fraction << 8) | 0x1000000000000000ULL;
    }
}
