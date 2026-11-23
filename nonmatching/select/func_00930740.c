/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6GeneralSettings_Update(s32, s32, s32, s32);
void func_0023F510(s32, s32, s32, s32);
void func_0023FC70(void);
s32 func_0024A380(s32, s32, s32, s32);
s32 func_0095C090(s32, s32, s32, s32, s32, s32, s32, s32);

void func_00930740(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    a1 = (*(volatile s32 *) (u32) (gp + -18816));
    v1 = 3;
    if (a1 == v1) goto L_00930830;
    a0 = 2;
    if (a1 == a0) goto L_009307E4;
    v1 = 1;
    if (a1 == v1) goto L_00930794;
    if (a1 == 0) goto L_0093077C;
    goto L_00930874;
L_0093077C:;
    func_0023F510(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -18816));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18816)) = (u32) v1; goto L_00930870;
L_00930794:;
    v0 = func_0024A380(a0, a1, a2, a3);
    v1 = 1;
    if (v0 == v1) { (*(volatile u32 *) (u32) (gp + -18816)) = (u32) 0; goto L_009307D4; }
    v1 = 2;
    if (v0 == v1) { v0 = (*(volatile s32 *) (u32) (gp + -18816)); goto L_009307BC; }
    goto L_00930870;
L_009307BC:;
    a0 = 3;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18816)) = (u32) v0; func_0023F510(a0, a1, a2, a3);
    goto L_00930870;
L_009307D4:;
    func_0023FC70();
    goto L_00930870;
L_009307E4:;
    v0 = func_0095C090(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 1;
    if (v0 == v1) { v0 = (*(volatile s32 *) (u32) (gp + -18816)); goto L_00930818; }
    v1 = 2;
    if (v0 == v1) { v1 = (*(volatile s32 *) (u32) (gp + -18816)); goto L_0093080C; }
    goto L_00930870;
L_0093080C:;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18816)) = (u32) v1; goto L_00930870;
L_00930818:;
    a0 = 2;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u32 *) (u32) (gp + -18816)) = (u32) v0; func_0023F510(a0, a1, a2, a3);
    goto L_00930870;
L_00930830:;
    v0 = Pes6GeneralSettings_Update(a0, a1, a2, a3);
    v1 = 1;
    if (v0 == v1) { v1 = (*(volatile s32 *) (u32) (gp + -18816)); goto L_00930868; }
    v1 = 2;
    if (v0 == v1) { a0 = 3; goto L_00930858; }
    goto L_00930870;
L_00930858:;
    v1 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (gp + -18816)) = (u32) 0;
    (*(volatile u16 *) (u32) (v1 + -15614)) = (u16) a0; goto L_00930870;
L_00930868:;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u32 *) (u32) (gp + -18816)) = (u32) v1;
L_00930870:;
L_00930874:;
    return;
}
