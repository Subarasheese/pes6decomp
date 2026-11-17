/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0027B880(s32, s32, s32, s32);
s32 func_00295DE0(s32, s32, s32, s32);
s32 func_00297670(s32, s32, s32, s32, s32);

s32 func_00295C90(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s1 = 0;
    s0 = (s32) 0x5a0000U;
    s0 = (s32) ((u32) s0 + 0x24c0U);
L_00295CB0:;
    a0 = (*(volatile s32 *) (u32) s0);
    if (a0 == 0) goto L_00295CC8;
    v0 = func_0027B880(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s0) = (u32) 0;
L_00295CC8:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 28;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x60U); if (c_) goto L_00295CB0; }
    s1 = (s32) 0x5a0000U;
    s2 = 15;
    s1 = (s32) ((u32) s1 + 0x2a60U);
    s0 = (s32) ((u32) sp + 0x4dU);
L_00295CE8:;
    v1 = (s32) ((u32) s2 + 0x2U);
    v0 = (s32) ((u32) s2 + 0xfffffff1U);
    (*(volatile u8 *) (u32) s0) = (u8) v1;
    a0 = s1;
    (*(volatile u8 *) (u32) (s1 + 5)) = (u8) v0;
    a1 = 0;
    a2 = 8;
    a3 = (s32) ((u32) sp + 0x4cU);
    a4 = 0; v0 = func_00297670(a0, a1, a2, a3, a4);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 20;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x60U); if (c_) goto L_00295CE8; }
    v0 = func_00295DE0(a0, a1, a2, a3);
    return v0;
}
