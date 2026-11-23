/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
void func_001EF370(s32, s32);
void func_001EF900(s32, s32);

void func_008EACC0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    s1 = a1;
    v1 = (*(volatile s32 *) (u32) (a0 + 60));
    { s32 c_ = v1 == 0; s0 = a0; if (c_) goto L_008EAD44; }
    a0 = (*(volatile s32 *) (u32) (s0 + 48));
    if (a0 == 0) { ; goto L_008EAD48; }
    v0 = 4;
    if (s1 == v0) { a1 = 0; goto L_008EAD00; }
    a1 = 1; goto L_008EAD10;
L_008EAD00:;
    func_001EF900(a0, a1);
    goto L_008EAD44;
L_008EAD10:;
    func_001EF900(a0, a1);
    v0 = (s32) 0x8f0000U;
    v1 = (s32) ((u32) s1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffc6f0U);
    a0 = (*(volatile s32 *) (u32) (s0 + 60));
    v0 = (s32) ((u32) v0 + (u32) v1);
    a2 = (*(volatile u16 *) (u32) v0);
    a1 = (s32) ((u32) sp + 0x30U); v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s0 + 48));
    a1 = (s32) ((u32) sp + 0x30U); func_001EF370(a0, a1);
L_008EAD44:;
L_008EAD48:;
    return;
}
