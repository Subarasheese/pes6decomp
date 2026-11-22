/* compiler: ee-gcc-2.96 */
/* C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/newlib/libc/stdlib/mprec.c). */
extern const double D_00601DF8[];
double func_001B93A8(int dig) {
    double v = 1.0;
    if (dig < 24) {
        return D_00601DF8[dig];
    }
    while (dig > 0) {
        v *= 10;
        dig--;
    }
    return v;
}
