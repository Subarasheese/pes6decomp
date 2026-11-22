/* compiler: ee-gcc-2.9-G0 */
/* Source: nathanialf/ico, sce/libgcc/fp-bit.c (__negsf2). */
/* GCC runtime, config/fp-bit.c. Copyright (C) 1994-1998 Free Software Foundation, Inc.
 * GPL-2.0-or-later with the GCC linking exception. See THIRD_PARTY.md and LICENSES/GPL-2.0.txt. */

typedef struct {
    unsigned int class;
    int sign;
    int normal_exp;
    unsigned int fraction;
} fp_number_type;
extern float func_0018B898(void *s);
extern void func_0018B9A8(void *in, void *out);

float func_0018C3D0(float arg_a) {
    fp_number_type o;
    float in[4];
    in[0] = arg_a;
    func_0018B9A8(in, &o);
    o.sign = o.sign == 0;
    return func_0018B898(&o);
}
