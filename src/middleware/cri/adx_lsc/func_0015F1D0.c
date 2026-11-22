/* compiler: ee-gcc-2.96-G0 */
/* adxmng_DecideFramework adapted from LucasPicoli/god-hand-decomp, src/cod/0033f8.c. See
 * THIRD_PARTY.md. */
extern int func_0015FEB0(void);
int func_0015F1D0(int mode) {
    if (mode == (-1)) {
        if (func_0015FEB0() == 1)
            mode = 2;
        else
            mode = 1;
    }
    return mode;
}
