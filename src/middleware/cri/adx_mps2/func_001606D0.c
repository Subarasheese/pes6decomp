/* compiler: ee-gcc-2.96-G0 */
/* Adapted from 3s-decomp, src/anniversary/cri/libadxe/adx_mps2.c (ADXPS2_ExecVint).
 * licence: AGPL-3.0 (see THIRD_PARTY.md) */
typedef signed int Sint32;
typedef signed long Sint64;
extern Sint32 func_0015F020(void);
extern Sint32 D_0037B934;
extern volatile Sint32 D_0037B978;
extern volatile Sint32 D_0037B97C;
extern volatile Sint32 D_0037B980;
extern Sint64 D_0037B9C0;
extern volatile Sint32 D_0037B9CC;
extern volatile Sint32 D_0037B9D0;
extern volatile Sint32 D_0037B9D4;
extern volatile Sint32 D_0037BA4C;
extern Sint32 (*D_0037BA50)(Sint32 arg);
extern volatile Sint32 D_0037ACA0;
extern void func_0015F948(Sint32 tid);
extern Sint32 func_0015FEA0(void);

Sint32 func_001606D0(Sint32 arg) {
    D_0037ACA0 += 1;
    if (D_0037BA4C == 0) {
        D_0037BA4C = 1;
        if (D_0037B934 > 0) {
            if (D_0037B978 != 1) {
                func_0015F948(D_0037B9D0);
            }
            if (D_0037B980 != 1) {
                func_0015F948(D_0037B9D4);
            }
            if ((func_0015FEA0() == 1) && (D_0037B97C != 1)) {
                func_0015F948(D_0037B9CC);
            }
            D_0037B9C0 += 1;
        }
        func_0015F020();
        D_0037BA4C = 0;
    }
    if (D_0037BA50 != 0) {
        return D_0037BA50(arg);
    }
    return 0;
}
