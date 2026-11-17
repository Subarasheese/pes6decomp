/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00C131A0(s32, s32, s32, s32);
s32 func_00C32B50(s32, s32, s32, s32);

s32 func_002C21B0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s2 = a2;
    s1 = a3;
    s0 = a1; v0 = func_00C32B50(a0, a1, a2, a3);
    a0 = s0;
    s0 = v0; v0 = func_00C32B50(a0, a1, a2, a3);
    v1 = (s32) 0x5e0000U;
    a2 = (s32) 0x2c0000U;
    (*(volatile u32 *) (u32) (v1 + 13320)) = (u32) s1;
    a0 = s0;
    v1 = (s32) 0x5e0000U;
    a1 = v0;
    (*(volatile u8 *) (u32) (v1 + 13324)) = (u8) s2;
    a2 = (s32) ((u32) a2 + 0x2220U); v0 = func_00C131A0(a0, a1, a2, a3);
    return v0;
}
