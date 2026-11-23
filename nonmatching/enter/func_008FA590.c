/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Write(s32, s32, s32);
s32 func_008FA3C0(s32, s32);

void func_008FA590(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    s2 = a2;
    s1 = a0;
    v0 = (*(volatile s32 *) (u32) a1);
    s0 = a1;
    s3 = (*(volatile s32 *) (u32) (a1 + 44));
    v0 = v0 ^ 0x6;
    a1 = 75;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = s2 & 0xff;
    a0 = s1;
    v0 = (s32) ((u32) v0 << 2);
    a1 = 76;
    v0 = (s32) ((u32) v0 + (u32) s0);
    s2 = (s32) ((u32) v0 + 0x40U);
    v0 = (*(volatile s32 *) (u32) (v0 + 64));
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s0 + 64));
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s1; goto L_008FA620; }
    v0 = (*(volatile s32 *) (u32) (s0 + 68));
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s1;
L_008FA620:;
    a1 = 77; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) s2);
    a0 = 1;
    { s32 c_ = v0 != a0; a2 = 0; if (c_) goto L_008FA678; }
    v0 = (s32) ((u32) s3 + 0xfffffff5U);
    at = (u64) v0 < (u64) (s64) 22;
    { s32 c_ = at == 0; a1 = 0; if (c_) goto L_008FA664; }
    v1 = (s32) ((u32) a0 << (v0 & 31));
    v0 = (s32) 0x220000U;
    v0 = v0 | 0x5;
    v0 = v1 & v0;
    if (v0 == 0) { v0 = (u64) 0 < (u64) a1; goto L_008FA668; }
    a1 = a0;
L_008FA664:;
    v0 = (u64) 0 < (u64) a1;
L_008FA668:;
    v0 = v0 ^ 0x1;
    if (v0 == 0) { a0 = s1; goto L_008FA67C; }
    a2 = 1;
L_008FA678:;
    a0 = s1;
L_008FA67C:;
    a1 = 78; Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (s0 + 20));
    v0 = 5;
    s5 = 0;
    { s32 c_ = v1 != v0; s4 = 0; if (c_) goto L_008FA700; }
    s3 = 0;
    s2 = (s32) ((u32) sp + 0x78U);
L_008FA6A0:;
    a0 = s3 & 0xff;
    a1 = s0; v0 = func_008FA3C0(a0, a1);
    (*(volatile u32 *) (u32) s2) = (u32) v0;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 2;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_008FA6A0; }
    a0 = (*(volatile s32 *) (u32) (sp + 120));
    v1 = 2;
    if (a0 != v1) { v1 = 3; goto L_008FA6E8; }
    v0 = (*(volatile s32 *) (u32) (sp + 124));
    if (v0 != v1) goto L_008FA6E4;
    s5 = 1; goto L_008FA700;
L_008FA6E4:;
    v1 = 3;
L_008FA6E8:;
    if (a0 != v1) { v0 = (*(volatile s32 *) (u32) (s0 + 20)); goto L_008FA704; }
    v0 = (*(volatile s32 *) (u32) (sp + 124));
    if (v0 != v1) goto L_008FA700;
    s4 = 1;
L_008FA700:;
    v0 = (*(volatile s32 *) (u32) (s0 + 20));
L_008FA704:;
    a0 = s1;
    a1 = 79;
    v0 = v0 ^ 0x5;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    a2 = s4;
    a0 = s1;
    a1 = 80; Pes6BitSet_Write(a0, a1, a2);
    a0 = s1;
    a2 = s5;
    a1 = 81; Pes6BitSet_Write(a0, a1, a2);
    v0 = 1;
    return;
}
