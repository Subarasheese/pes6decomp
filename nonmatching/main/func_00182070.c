/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00182770(s32, s32, s32, s32);

void func_00182070(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    v1 = (s32) 0x520000U;
    s1 = 0;
    v1 = (*(volatile s32 *) (u32) (v1 + -200));
    s0 = a1;
    a1 = (s32) ((u32) a0 << 1);
    at = 0 < s0;
    a0 = (s32) ((u32) a1 + (u32) a0);
    a0 = (s32) ((u32) a0 << 5);
    { s32 c_ = at == 0; s2 = (s32) ((u32) v1 + (u32) a0); if (c_) goto L_001820D8; }
L_001820AC:;
    v1 = (*(volatile s32 *) (u32) s2);
    if (v1 == 0) goto L_001820C0;
    a0 = s2; func_00182770(a0, a1, a2, a3);
L_001820C0:;
    s1 = (s32) ((u32) s1 + 0x1U);
    (*(volatile u32 *) (u32) s2) = (u32) 0;
    v1 = s1 < s0;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x60U); if (c_) goto L_001820AC; }
L_001820D8:;
    return;
}
