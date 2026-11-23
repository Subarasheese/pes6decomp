/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Team_ResolveSpecialId(s32);
void func_002B5470(s32, s32);

void func_00361E90(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s0 = a1;
    { s32 c_ = s0 == 0; s1 = a0; if (c_) goto L_00361ED4; }
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) s1 << 1);
    v0 = (s32) ((u32) v0 + 0x1bb0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile u16 *) (u32) v0); v0 = Pes6Team_ResolveSpecialId(a0);
    a0 = s1;
    (*(volatile u16 *) (u32) s0) = (u16) v0;
    a1 = (s32) ((u32) s0 + 0x6U); func_002B5470(a0, a1);
L_00361ED4:;
    return;
}
