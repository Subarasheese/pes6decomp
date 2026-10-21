/* compiler: ee-gcc-2.96 */
/* C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/newlib/libc/stdlib/mprec.c). */
extern const double D_003D1C10[];
double _mprec_log10(int dig)
{
    double v = 1.0;
    if (dig < 24) {
        return D_003D1C10[dig];
    }
    while (dig > 0) {
        v *= 10;
        dig--;
    }
    return v;
}