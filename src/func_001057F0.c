/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern int DIntr(void);
extern int EIntr(void);
void func_001057F0(void) {
    int intr;
    intr=DIntr();
    *(volatile int *)0x1000F000=4;
    __asm__ volatile("sync");
    if(intr) EIntr();
    while(!(*(volatile int *)0x1000F000&4)) {}
    intr=DIntr();
    *(volatile int *)0x1000F000=4;
    __asm__ volatile("sync");
    if(intr) EIntr();
}
