/* compiler: ee-gcc-2.9-G0 */
/* Source: nathanialf/ico, sce/libgcc/dp-bit.c (__negdf2). */
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
extern long long func_0018ABA0(void *s);
extern void func_0018ACD0(void *in, void *out);

void func_0018B7D8(long long arg_a) {
    fp_number_type_d s;
    long long t = arg_a;
    func_0018ACD0(&t, &s);
    s.sign = s.sign == 0;
    func_0018ABA0(&s);
}
