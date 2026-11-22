/* compiler: ee-gcc-2.9-G0 */
/* Source: nathanialf/ico, sce/libgcc/fp-bit.c (fpadd). */
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
extern fp_number_type *func_0018BA38(fp_number_type *a, fp_number_type *b, fp_number_type *tmp);

float func_0018BC70(float arg_a, float arg_b) {
    fp_number_type a;
    fp_number_type b;
    fp_number_type tmp;
    fp_number_type *res;
    func_0018B9A8(&arg_a, &a);
    func_0018B9A8(&arg_b, &b);
    res = func_0018BA38(&a, &b, &tmp);
    return func_0018B898(res);
}
