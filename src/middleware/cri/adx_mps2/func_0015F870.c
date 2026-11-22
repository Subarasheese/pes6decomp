/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxps2.c (adxm_usridle_thrd). See THIRD_PARTY.md. */

extern void func_001051A0(void);
extern int func_0017A0A0(void);
extern volatile int D_0037B974;
extern volatile int D_0037B988;
extern long long D_0037B9B8;
extern volatile long long D_0037BA38;
extern volatile long long D_0037BA40;
extern void func_0015F9E8(void);

void func_0015F870(void *arg) {
    int busy;
    while (D_0037BA38 == 0) {
        D_0037B9B8++;
        do {
            D_0037B988 = 1;
        } while (0);
        busy = func_0017A0A0();
        D_0037B988 = 0;
        if (D_0037B974 == 1) {
            D_0037B974 = 0;
            func_0015F9E8();
        }
        if (busy == 0) {
            func_0015F9E8();
        }
    }

    D_0037BA40 = 1;
    func_001051A0();
}
