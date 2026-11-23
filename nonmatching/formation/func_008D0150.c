/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
s32 func_001E6E10(s32);
void func_001F22B0(s32, s32, s32, s32);
s32 func_008B9D60(s32, s32, s32, s32);
s32 func_008B9F20(s32, s32, s32, s32);

void func_008D0150(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    s1 = a1;
    v1 = (*(volatile s32 *) (u32) (a0 + 80));
    { s32 c_ = v1 == 0; s0 = a0; if (c_) goto L_008D0244; }
    v1 = (*(volatile s32 *) (u32) (s0 + 516));
    if (v1 == 0) { ; goto L_008D0248; }
    a0 = (*(volatile s32 *) (u32) (s0 + 464));
    if (a0 == 0) { a0 = 20188; goto L_008D01AC; }
    func_001F22B0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 464)) = (u32) 0;
    a0 = 20188;
L_008D01AC:;
    v0 = func_001E6E10(a0);
    a0 = (*(volatile s32 *) (u32) (s0 + 80));
    s4 = v0;
    a1 = 1;
    a2 = 0; v0 = func_008B9F20(a0, a1, a2, a3);
    s5 = v0;
    s3 = (s32) 0x8f0000U;
    v0 = s1 & 0xff;
    s6 = 0;
    v1 = v0 & 0x3;
    s1 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v1 << 1);
    s3 = (s32) ((u32) s3 + 0xffffc120U);
    v1 = (s32) ((u32) v0 + (u32) v1);
    s1 = (s32) ((u32) s1 + 0xffffc0e0U);
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffc110U);
    s2 = (s32) ((u32) v0 + (u32) v1);
L_008D01FC:;
    a2 = (*(volatile u16 *) (u32) s3);
    a0 = (*(volatile s32 *) (u32) (s0 + 516));
    a1 = (s32) ((u32) sp + 0x80U); v0 = func_001D7A20(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) s2);
    a0 = s5;
    a1 = (s32) ((u32) sp + 0x80U);
    a2 = s4;
    v0 = (s32) ((u32) v0 << 3);
    a3 = (s32) ((u32) s1 + (u32) v0); v0 = func_008B9D60(a0, a1, a2, a3);
    s6 = (s32) ((u32) s6 + 0x1U);
    s3 = (s32) ((u32) s3 + 0x4U);
    v1 = s6 < 3;
    s2 = (s32) ((u32) s2 + 0x1U);
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x10U); if (c_) goto L_008D01FC; }
    (*(volatile u32 *) (u32) (s0 + 464)) = (u32) s5;
L_008D0244:;
L_008D0248:;
    return;
}
