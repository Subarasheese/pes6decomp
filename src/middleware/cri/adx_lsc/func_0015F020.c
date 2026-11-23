/* compiler: ee-gcc-2.96-G0 */
/* ADXMNG_CallVintServerFunctions adapted from LucasPicoli/god-hand-decomp, src/cod/00323660.c. See
 * THIRD_PARTY.md. */
extern int func_0015F1D0(int framework);

extern int D_0037B928;
extern void func_00179FF8(void);
extern void func_0017A010(void);
extern void func_0017A028(void);
extern void func_0017A040(void);
extern void func_0017A070(void);
int func_0015F020(void) {
    int x;
    x = func_0015F1D0(D_0037B928);
    if (x == 1) {
    } else if (x >= 2) {
        switch (x) {
        case 2:
            func_00179FF8();
            break;

        case 3:
            func_00179FF8();
            func_0017A010();
            func_0017A028();
            func_0017A040();
            func_0017A070();
            break;
        }
    }
    return 0;
}
