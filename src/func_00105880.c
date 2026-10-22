/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
void func_001056D0(volatile int *,long *);
int DIntr(void);
int EIntr(void);
long func_00105880(void) {
    struct { volatile int flag; int pad; volatile long value; } local;
    int intr;
    local.flag=0;
    func_001056D0(&local.flag,(long *)((unsigned int)&local | 8));
    intr=DIntr();
    *(volatile int *)0x1000F000=4;
    __asm__ volatile("sync");
    if(intr) EIntr();
    while(!(*(volatile int *)0x1000F000&4) && local.flag==0) {}
    intr=DIntr();
    *(volatile int *)0x1000F000=4;
    __asm__ volatile("sync");
    if(intr) EIntr();
    return local.value;
}
