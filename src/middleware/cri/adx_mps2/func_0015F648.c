/* compiler: ee-gcc-2.96-G0 */
/* adxm_fs_proc adapted from LucasPicoli/god-hand-decomp, src/cod/00324eb0.c. See THIRD_PARTY.md. */
extern volatile long D_0037BA18;
extern volatile long D_0037BA20;
extern volatile long D_0037B9A8;
extern volatile int D_0037B980;
extern unsigned short D_0037BA54;
extern void func_0015F9E8(void);
extern void func_001051A0(void);
extern int func_0017A058(void);
void func_0015F648(void) {
    while (D_0037BA18 == 0) {
        D_0037B9A8++;
        D_0037B980 = 1;
        if (D_0037BA54 != 0) {
            *((volatile unsigned long *)0x120000E0) = D_0037BA54;
        }
        func_0017A058();
        if (D_0037BA54 != 0) {
            *((volatile unsigned long *)0x120000E0) = 0;
        }
        D_0037B980 = 0;
        if (D_0037BA18 != 0) {
            break;
        }
        func_0015F9E8();
    }

    D_0037BA20 = 1;
    func_001051A0();
}
