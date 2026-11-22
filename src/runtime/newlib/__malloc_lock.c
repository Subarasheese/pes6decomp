/* compiler: ee-gcc-2.96-G0-g */
/* OpenRAC/rac-deadlocked-decomp src/core/0011F338.c (func_0011F338). See THIRD_PARTY.md. */

typedef int s32;
extern s32 func_00105250(void);
extern s32 WaitSema(s32);
extern s32 D_00398E80[];
extern s32 D_00398E84[];
extern s32 D_00371A20[];

void __malloc_lock(void) {
    s32 tid = func_00105250();
    if (D_00398E80[0] == tid) {
        D_00398E84[0] = D_00398E84[0] + 1;
    } else {
        WaitSema(D_00371A20[0]);
        D_00398E80[0] = tid;
        D_00398E84[0] = D_00398E84[0] + 1;
    }
}
