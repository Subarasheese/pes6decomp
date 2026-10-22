/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern int D_00372AC8;
extern int D_003F35C8;
extern void *D_003F35CC;
extern int D_003F35D0;
extern void func_001137F0(void);
extern int DIntr(void);
extern void EIntr(void);

int func_00113718(int a, int b)
{
    int old;
    int state;

    if (D_00372AC8 < 0)
        func_001137F0();
    state = DIntr();
    old = D_003F35C8;
    D_003F35D0 = b;
    D_003F35C8 = a;
    __asm__ volatile("sw $gp, %0" : "=m"(D_003F35CC));
    if (state)
        EIntr();
    return old;
}
