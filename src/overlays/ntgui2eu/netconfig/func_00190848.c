/* compiler: ee-gcc-2.9-G0 */
/* Conversion from float to unsigned 64-bit integer. Adapted from OpenRAC/rac5-sm-decomp,
 * src/levels/01_pokitaru/LEVEL_01_1EA280.c. See THIRD_PARTY.md. */
extern double func_0018C438(float);
extern int func_0018B598(double, double);
extern double func_0018B070(double, double);
extern unsigned int func_0018B738(double);
extern double func_00190940(long long value);
extern double func_0018AFB0(double, double);
extern double func_0018B008(double, double);
unsigned long long func_00190848(float f) {
    double a = func_0018C438(f);
    double b;
    double c;
    unsigned long long v;
    if (func_0018B598(a, 0.0) < 0)
        return 0;
    b = func_0018B070(a, 2.3283064365386963e-10);
    v = func_0018B738(b);
    v <<= 32;
    if ((long long)v >= 0)
        c = func_00190940(v);
    else {
        c = func_00190940((v & 1) | (v >> 1));
        c = func_0018AFB0(c, c);
    }
    a = func_0018B008(a, c);
    if (func_0018B598(a, 0.0) < 0)
        v -= func_0018B738(func_0018B008(0.0, a));
    else
        v += func_0018B738(a);
    return v;
}
