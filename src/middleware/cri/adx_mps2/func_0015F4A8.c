/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxps2.c (adxm_usrvsync_proc). See THIRD_PARTY.md. */

extern void func_001051A0(void);
extern int func_0017A010(void);
extern volatile int D_0037B97C;
extern long long D_0037B998;
extern volatile long long D_0037B9F8;
extern volatile long long D_0037BA00;
extern void func_0015F9E8(void);

void func_0015F4A8(void *arg) {
    while (D_0037B9F8 == 0) {
        D_0037B998++;
        do {
            D_0037B97C = 1;
        } while (0);
        func_0017A010();
        D_0037B97C = 0;
        func_0015F9E8();
    }

    D_0037BA00 = 1;
    func_001051A0();
}
