/* compiler: ee-gcc-2.9-G0 */
/* Source: nathanialf/ico, sce/libgcc/fp-bit.c (fpcmp). */
/* GCC runtime, config/fp-bit.c. Copyright (C) 1994-1998 Free Software Foundation, Inc.
 * GPL-2.0-or-later with the GCC linking exception. See THIRD_PARTY.md and LICENSES/GPL-2.0.txt. */

typedef struct {
    unsigned int class;
    int sign;
    int normal_exp;
    unsigned int fraction;
} fp_number_type;
extern void func_0018B9A8(void *in, void *out);
extern int func_0018C088(fp_number_type *a, fp_number_type *b);

int func_0018C1A0(float arg_a, float arg_b) {
    fp_number_type a;
    fp_number_type b;
    func_0018B9A8(&arg_a, &a);
    func_0018B9A8(&arg_b, &b);
    return func_0018C088(&a, &b);
}
