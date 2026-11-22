/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxps2.c (ADXPS2_ResumeIdleThrd). See THIRD_PARTY.md. */

extern volatile int D_0037B9DC;
extern volatile int D_0037B9E0;
extern void func_0015F998(int threadId);
extern int func_0015FA00(int threadId);
extern int func_0015FEA0(void);

void func_00160828(void) {
    if (func_0015FA00(D_0037B9DC) == D_0037B9DC) {
        func_0015F998(D_0037B9DC);
    }
    if ((func_0015FEA0() == 1) && (func_0015FA00(D_0037B9E0) == D_0037B9E0)) {
        func_0015F998(D_0037B9E0);
    }
}
