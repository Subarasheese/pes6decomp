/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00121430(s32, s32);
s32 func_00154410(s32, s32);
s32 func_00154490(s32, s32);
void strcpy(s32, s32);

s32 Pes6DebugMenu_Update(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    a0 = 0;
    a1 = 16;
    s0 = 0; v0 = func_00154410(a0, a1);
    if (v0 == 0) { a0 = 0; goto L_0017AEE4; }
    v1 = (s32) 0x510000U;
    v0 = (s32) 0x510000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 4076));
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u32 *) (u32) (v0 + 4076)) = (u32) v1; goto L_0017AF08;
L_0017AEE4:;
    a1 = 64; v0 = func_00154410(a0, a1);
    if (v0 == 0) goto L_0017AF08;
    v1 = (s32) 0x510000U;
    v0 = (s32) 0x510000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 4076));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (v0 + 4076)) = (u32) v1;
L_0017AF08:;
    v0 = (s32) 0x510000U;
    v1 = (*(volatile s32 *) (u32) (v0 + 4076));
    at = v1 < 15;
    if (at != 0) goto L_0017AF24;
    v1 = 0; goto L_0017AF34;
L_0017AF24:;
    if (v1 >= 0) goto L_0017AF34;
    v1 = 14; goto L_0017AF34;
L_0017AF34:;
    v0 = (s32) 0x510000U;
    s2 = (s32) 0x390000U;
    s1 = 0;
    (*(volatile u32 *) (u32) (v0 + 4076)) = (u32) v1;
    s2 = (s32) ((u32) s2 + 0x6f00U);
L_0017AF48:;
    v0 = (s32) 0x510000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 4076));
    if (s1 != v0) goto L_0017AF70;
    a1 = (s32) 0x3d0000U;
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = (s32) ((u32) a1 + 0xffffc9b0U); strcpy(a0, a1);
    goto L_0017AF80;
L_0017AF70:;
    a1 = (s32) 0x3d0000U;
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = (s32) ((u32) a1 + 0xffffc9b8U); strcpy(a0, a1);
L_0017AF80:;
    a1 = (*(volatile s32 *) (u32) s2);
    a0 = (s32) ((u32) sp + 0x40U); func_00121430(a0, a1);
    a1 = (s32) 0x3d0000U;
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = (s32) ((u32) a1 + 0xffffc9c0U); func_00121430(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 15;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_0017AF48; }
    a0 = 0;
    a1 = 16384; v0 = func_00154490(a0, a1);
    if (v0 == 0) { v0 = s0; goto L_0017AFC8; }
    s0 = 1;
    v0 = s0;
L_0017AFC8:;
    return v0;
}
