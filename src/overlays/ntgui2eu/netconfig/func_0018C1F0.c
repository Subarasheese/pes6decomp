/* compiler: ee-gcc-2.9-G0 */
/* Source: nathanialf/ico, sce/libgcc/fp-bit.c (sitofp). */
/* GCC runtime, config/fp-bit.c. Copyright (C) 1994-1998 Free Software Foundation, Inc.
 * GPL-2.0-or-later with the GCC linking exception. See THIRD_PARTY.md and LICENSES/GPL-2.0.txt. */

typedef struct {
    unsigned int class;
    int sign;
    int normal_exp;
    unsigned int fraction;
} fp_number_type;
extern float func_0018B898(void *s);

float func_0018C1F0(int arg_a) {
    fp_number_type in;
    in.class = 3;
    in.sign = arg_a < 0;
    if (!arg_a) {
        in.class = 2;
    } else {
        in.normal_exp = 30;
        if (in.sign) {
            if (arg_a == ((-0x7FFFFFFF) - 1)) {
                return (float)((-0x7FFFFFFF) - 1);
            }
            in.fraction = -arg_a;
        } else {
            in.fraction = arg_a;
        }
        while (in.fraction < 0x40000000) {
            in.fraction <<= 1;
            in.normal_exp--;
        }
    }
    return func_0018B898(&in);
}
