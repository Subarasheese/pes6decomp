/* compiler: ee-gcc-2.9-as210-G0 */
/* Sony SDK code; written from the PES6 executable after the older printfloat in kfiv-decomp
   (src/sce/libkernl/kprintf.c), which prints through a global putchar instead of a callback. */

int ftoi(unsigned long long bits);
int func_00107F08(int (*out)(), void *ctx, int *remain, const char *fmt, ...);

/* Print v as "0.<6 digits>e<exponent>" through out(ctx, remain, c); returns the characters
   counted by the formatter (the sign is not counted). */
int printfloat(int (*out)(), void *ctx, int *remain, double v)
{
    double zero;
    int count;
    int e;
    int n;

    count = 0;
    e = 0;
    if (*remain == 0) {
        return 0;
    }
    zero = 0.0;
    if (v < zero) {
        v = zero - v;
        count = 1;
        out(ctx, remain, '-');
        (*remain)--;
    }
    if (v < 0.1) {
        while (v < 0.1) {
            v *= 10.0;
            e--;
        }
    } else if (v >= 1.0) {
        while (v >= 1.0) {
            v /= 10.0;
            e++;
        }
    }
    v *= 1000000.0;
    n = ftoi(v);
    count += func_00107F08(out, ctx, remain, "0.%d", n);
    if (e >= 0) {
        count += func_00107F08(out, ctx, remain, "e+%d", e);
    } else {
        count += func_00107F08(out, ctx, remain, "e%d", e);
    }
    return count;
}
