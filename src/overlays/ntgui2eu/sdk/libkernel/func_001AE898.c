/* compiler: ee-gcc-2.96-G0-g */
/* OpenRAC/rac-deadlocked-decomp src/core/0011F338.c (func_0011F338). See THIRD_PARTY.md. */

typedef int s32;
extern s32 func_0019B010(void);
extern void func_0019B160(s32);
extern s32 D_005CC968[];
extern s32 D_005CC96C[];
extern s32 D_005CAC20[];

void func_001AE898(void) {
    s32 tid = func_0019B010();
    if (D_005CC968[0] == tid) {
        D_005CC96C[0] = D_005CC96C[0] + 1;
    } else {
        func_0019B160(D_005CAC20[0]);
        D_005CC968[0] = tid;
        D_005CC96C[0] = D_005CC96C[0] + 1;
    }
}
