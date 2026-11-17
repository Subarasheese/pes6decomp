/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00153FD0(s32, s32, s32, s32);
s32 func_001540A0(s32);
s32 func_001540C0(void);

s32 func_002CB820(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    a0 = 1;
    a1 = a0;
    a2 = 120;
    v0 = func_00153FD0(a0, a1, a2, a3);
    s0 = v0; v0 = func_001540C0();
    (*(volatile u8 *) (u32) (s0 + 112)) = (u8) v0;
    s2 = 1;
    s1 = (s32) ((u32) s0 + 0x4U);
L_002CB858:;
    a0 = s2; v0 = func_001540A0(a0);
    s2 = (s32) ((u32) s2 + 0x1U);
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    v1 = s2 < 28;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_002CB858; }
    v1 = (s32) 0x5e0000U;
    a0 = (s32) 0x5e0000U;
    a2 = (*(volatile s32 *) (u32) (v1 + 15520));
    a1 = (s32) 0x5e0000U;
    (*(volatile u32 *) (u32) (s0 + 116)) = (u32) a2;
    v1 = (s32) 0x5e0000U;
    a0 = (*(volatile s32 *) (u32) (a0 + 15516));
    (*(volatile u32 *) (u32) (a1 + 15520)) = (u32) s0;
    a0 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + 15516)) = (u32) a0;
    return v0;
}
