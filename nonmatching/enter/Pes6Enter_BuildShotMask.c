/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Enter_UpdateClosingShots(void);

void Pes6Enter_BuildShotMask(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, t4 = 0;

    v0 = (s32) 0x930000U;
    t4 = 0;
    (*(volatile u8 *) (u32) (v0 + -3843)) = (u8) 0;
    v0 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (v0 + -3876)) = (u32) 0;
    a7 = (s32) 0x930000U;
    a6 = 1;
    a1 = (s32) 0x930000U;
    a0 = (s32) 0x930000U;
    v1 = (s32) 0x930000U;
    v0 = (s32) 0x930000U;
    a7 = (s32) ((u32) a7 + 0xfffff0a0U);
L_00908D48:;
    a2 = t4 & 0xff;
    a2 = (s32) ((u32) a7 + (u32) a2);
    a2 = (*(volatile u8 *) (u32) (a2 + 95));
    if (a2 == 0) goto L_00908D90;
    a2 = (s32) ((u32) a2 + 0xffffffffU);
    a3 = (*(volatile u8 *) (u32) (v1 + -3843));
    a5 = (s32) ((u32) a6 << (a2 & 31));
    a4 = (*(volatile s32 *) (u32) (a1 + -3876));
    a2 = (s32) ((u32) t4 + 0x1U);
    t4 = a2 & 0xff;
    a2 = (s32) ((u32) a3 + 0x1U);
    a4 = a4 | a5;
    (*(volatile u8 *) (u32) (v0 + -3843)) = (u8) a2;
    a2 = t4 < 33;
    { s32 c_ = a2 != 0; (*(volatile u32 *) (u32) (a0 + -3876)) = (u32) a4; if (c_) goto L_00908D48; }
L_00908D90:;
    v0 = (s32) 0x930000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -3888));
    v0 = (s32) 0x400000U;
    v0 = v1 & v0;
    if (v0 == 0) goto L_00908DD0;
    v0 = (s32) 0x930000U;
    a1 = -2;
    a2 = (*(volatile s32 *) (u32) (v0 + -3876));
    a0 = -17;
    v1 = -9;
    a1 = a2 & a1;
    v0 = (s32) 0x930000U;
    a0 = a1 & a0;
    v1 = a0 & v1;
    (*(volatile u32 *) (u32) (v0 + -3876)) = (u32) v1;
L_00908DD0:;
    v0 = (s32) 0x930000U;
    v1 = 3;
    v0 = (*(volatile s32 *) (u32) (v0 + -3892));
    if (v0 != v1) goto L_00908E18;
    v0 = (s32) 0x930000U;
    v1 = (s32) 0x200000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -3888));
    v0 = v0 & v1;
    if (v0 != 0) goto L_00908E18;
    v0 = (s32) 0x930000U;
    v1 = (s32) 0xffbf0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -3876));
    v1 = v1 | 0xffff;
    v0 = (s32) 0x930000U;
    v1 = a0 & v1;
    (*(volatile u32 *) (u32) (v0 + -3876)) = (u32) v1;
L_00908E18:;
    Pes6Enter_UpdateClosingShots();
    v1 = (s32) 0x930000U;
    a1 = (*(volatile s32 *) (u32) (v1 + -3876));
    v1 = a1 & 0x10;
    if (v1 == 0) { ; goto L_00908E54; }
    v1 = a1 & 0x8;
    if (v1 == 0) goto L_00908E50;
    a0 = -17;
    v1 = (s32) 0x930000U;
    a0 = a1 & a0;
    (*(volatile u32 *) (u32) (v1 + -3876)) = (u32) a0;
L_00908E50:;
L_00908E54:;
    return;
}
