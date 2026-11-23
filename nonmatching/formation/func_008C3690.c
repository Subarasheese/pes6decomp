/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001D7A20(s64, s64, s64);
void func_008B9BC0(s64, s64, s64, s64);
s64 func_008C5740(s64);

void func_008C3690(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 frame[10];
    s64 sp = (s32) (u32) frame;

    s0 = (s64) ((u64) a1 << 56);
    s0 = s0 >> 56;
    at = s0 < 10;
    { s32 c_ = at == 0; s1 = a0; if (c_) goto L_008C36F4; }
    v1 = (*(volatile s32 *) (u32) (s1 + 92));
    if (v1 == 0) { ; goto L_008C3730; }
    a0 = (s32) ((u32) s1 + 0x68U); v0 = func_008C5740(a0);
    a0 = v0;
    a1 = (s32) ((u32) sp + 0x40U);
    a2 = 15; v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s1 + 80));
    a1 = s0;
    a2 = s0;
    a3 = (s32) ((u32) sp + 0x40U); func_008B9BC0(a0, a1, a2, a3);
    goto L_008C372C;
L_008C36F4:;
    v1 = (*(volatile s32 *) (u32) (s1 + 92));
    if (v1 == 0) goto L_008C372C;
    a0 = (s32) ((u32) s1 + 0x68U); v0 = func_008C5740(a0);
    a0 = v0;
    a1 = (s32) ((u32) sp + 0x30U);
    a2 = 15; v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s1 + 80));
    a1 = s0;
    a2 = 10;
    a3 = (s32) ((u32) sp + 0x30U); func_008B9BC0(a0, a1, a2, a3);
L_008C372C:;
L_008C3730:;
    return;
}
