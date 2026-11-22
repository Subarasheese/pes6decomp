/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxps2.c (adxm_vsync_proc). See THIRD_PARTY.md. */

extern void func_001051A0(void);
extern int func_0017A028(void);
extern volatile int D_0037B978;
extern volatile long long D_0037B9A0;
extern volatile int D_0037B9DC;
extern volatile int D_0037B9E0;
extern volatile long long D_0037BA08;
extern volatile long long D_0037BA10;
extern volatile int D_0037BA58;
extern void func_0015F9E8(void);
extern int func_0015FA68(int threadId);
extern int func_0015FEA0(void);
extern void func_001608B0(void);
extern void func_00160E60(void);

void func_0015F540(void *arg) {
    while (D_0037BA08 == 0) {
        D_0037B9A0++;
        func_0015FA68(D_0037B9DC);
        if (D_0037BA58 == 0) {
            func_00160E60();
        }
        D_0037BA58 = 0;
        if (func_0015FEA0() == 1) {
            func_0015FA68(D_0037B9E0);
        }
        func_001608B0();
        D_0037B978 = 1;
        func_0017A028();
        D_0037B978 = 0;
        func_0015F9E8();
    }

    D_0037BA10 = 1;
    func_001051A0();
}
