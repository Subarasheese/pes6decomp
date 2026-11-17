/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002D4BE0(s64, s64, s64, s64);
s64 func_00305E60(s64, s64);
s64 func_009E1C90(s64, s64, s64, s64);
s64 func_00BC8D30(s64, s64, s64, s64);

s64 func_00300050(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    v0 = (s32) 0xcc0000U;
    v1 = 255;
    s2 = a0;
    v0 = (*(volatile u8 *) (u32) (v0 + -16896));
    s0 = (*(volatile s32 *) (u32) (a0 + 24));
    { s32 c_ = v0 == v1; s1 = (s64) ((u64) 0 + (u64) (s64) 1); if (c_) goto L_00300084; }
    s1 = 0;
L_00300084:;
    v1 = (*(volatile s32 *) (u32) (s0 + 36));
    v0 = 7;
    if (v1 == v0) goto L_003000A8;
    v0 = 6;
    if (v1 == v0) goto L_003000A8;
    goto L_003000DC;
L_003000A8:;
    v0 = func_00BC8D30(a0, a1, a2, a3);
    if (v0 == 0) { a0 = 1; goto L_003000C0; }
    s1 = 0;
    a0 = 1;
L_003000C0:;
    v0 = func_009E1C90(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 5;
    if (v1 != v0) goto L_003000DC;
    s1 = 0;
L_003000DC:;
    if (s1 == 0) { v0 = 0; goto L_00300114; }
    v1 = (*(volatile s32 *) (u32) (s0 + 36));
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x4f80U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002D4BE0(a0, a1, a2, a3);
    a1 = (s32) 0x300000U;
    a0 = s2;
    a1 = (s32) ((u32) a1 + 0x270U); v0 = func_00305E60(a0, a1);
    v0 = 1;
L_00300114:;
    return v0;
}
