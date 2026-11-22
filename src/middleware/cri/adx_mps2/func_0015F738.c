/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxps2.c (adxm_mwidle_thrd). See THIRD_PARTY.md. */

extern void func_001051A0(void);
extern int func_0017A088(void);
extern volatile int D_0037B974;
extern volatile int D_0037B984;
extern volatile long long D_0037B9B0;
extern volatile int D_0037B9E0;
extern volatile long long D_0037BA28;
extern volatile long long D_0037BA30;
extern volatile int D_0037BA58;
extern void func_0015F998(int threadId);
extern void func_0015F9E8(void);
extern int func_0015FA00(int threadId);
extern int func_0015FEA0(void);
extern void func_00160E60(void);

void func_0015F738(void *arg) {
    int busy;
    while (D_0037BA28 == 0) {
        D_0037B9B0++;
        D_0037B984 = 1;
        busy = func_0017A088();
        D_0037B984 = 0;
        if (D_0037B974 == 1) {
            D_0037B974 = 0;
            func_0015F9E8();
        }
        if (busy == 0) {
            if (func_0015FEA0() == 1) {
                if (func_0015FA00(D_0037B9E0) == D_0037B9E0) {
                    func_0015F998(D_0037B9E0);
                }
            }
            if (D_0037B974 != 1) {
                func_00160E60();
                D_0037BA58 = 1;
            }
            func_0015F9E8();
        }
    }

    D_0037BA30 = 1;
    func_001051A0();
}
