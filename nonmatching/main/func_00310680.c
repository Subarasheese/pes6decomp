/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00C321E0(s32, s32, s32, s32);

s32 func_00310680(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1ef6U);
    s0 = a0;
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == 0) { v0 = 0; goto L_00310750; }
    v0 = func_00C321E0(a0, a1, a2, a3);
    v1 = (s32) 0x590000U;
    a0 = 1;
    a1 = (*(volatile u8 *) (u32) (v1 + 7980));
    if (a1 == a0) goto L_00310724;
    v1 = 2;
    if (a1 == v1) goto L_003106FC;
    if (a1 == 0) goto L_003106EC;
    v0 = 3;
    if (a1 == v0) { v0 = a0; goto L_00310750; }
    goto L_0031074C;
L_003106EC:;
    if (v0 == 0) goto L_0031074C;
    v0 = a0; goto L_00310750;
L_003106FC:;
    if (s0 != a0) goto L_00310714;
    if (v0 != 0) goto L_0031074C;
    v0 = a0; goto L_00310750;
L_00310714:;
    if (v0 == 0) goto L_0031074C;
    v0 = a0; goto L_00310750;
L_00310724:;
    if (s0 != 0) goto L_0031073C;
    if (v0 != 0) goto L_0031074C;
    v0 = a0; goto L_00310750;
L_0031073C:;
    if (v0 == 0) goto L_0031074C;
    v0 = a0; goto L_00310750;
L_0031074C:;
    v0 = 0;
L_00310750:;
    return v0;
}
