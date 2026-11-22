/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxps2.c (ADXPS2_ExecServerLocked). See THIRD_PARTY.md. */

extern void func_00167190(void);
extern void func_0015E3A0(void);
extern int D_0037BA48;
extern void func_00160690(void);
extern void func_001606A8(void);

void func_00160A68(void) {
    func_00160690();
    if (D_0037BA48 == 0) {
        D_0037BA48 = 1;
        func_001606A8();
        func_00167190();
        func_0015E3A0();
        D_0037BA48 = 0;
    } else {
        func_001606A8();
    }
}
