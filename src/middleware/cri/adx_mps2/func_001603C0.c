/* compiler: ee-gcc-2.96-G0 */
/* func_00325A58 adapted from LucasPicoli/god-hand-decomp, src/cod/00325a58.c. See THIRD_PARTY.md.
 */
extern volatile long D_0037BA18;
extern volatile long D_0037BA20;
extern volatile int D_0037B980;
extern volatile int D_0037B9D4;
extern volatile int D_0037BA5C;
extern int func_001051F0(int tid, int prio);
extern int WakeupThread(int tid);
extern int func_0015FA00(int tid);
void func_001603C0(void) {
    if (D_0037B980 == 1) {
        while (D_0037BA20 == 0)
            ;

    } else {
        D_0037BA5C = 0;
        while (D_0037BA20 == 0) {
            D_0037BA18 = 1;
            func_001051F0(D_0037B9D4, 1);
            WakeupThread(D_0037B9D4);
            func_0015FA00(D_0037B9D4);
            D_0037BA5C++;
        }
    }
    D_0037BA20 = 0;
    D_0037BA18 = 0;
    D_0037B9D4 = 0;
}
