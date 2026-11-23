/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D76B0(s64, s64);
void func_001DF420(s64, s64);
void func_001ED8F0(s64, s64);
s64 func_002F9630(s64);
s64 func_002F96F0(s64, s64);

s64 func_00919FD0(s64 a0, s64 a1) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;

    v0 = (s32) ((u32) gp + 0xffffb1dcU);
    v1 = (*(volatile s32 *) (u32) (gp + -20008));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 32));
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_0091A100;
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s0 = v0;
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_0091A058; }
    v1 = (*(volatile s32 *) (u32) (gp + -20008));
L_0091A01C:;
    v0 = (s32) ((u32) gp + 0xffffb1dcU);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 255; func_001D76B0(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s0;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -20008)); goto L_0091A01C; }
L_0091A058:;
    v1 = (*(volatile s32 *) (u32) (gp + -20008));
    v0 = (s32) ((u32) gp + 0xffffb1dcU);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 32));
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { s1 = 1; goto L_0091A0AC; }
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    a1 = 0;
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_0091A0A0; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s0;
L_0091A0A0:;
    a1 = 255; func_001ED8F0(a0, a1);
    s1 = 1;
L_0091A0AC:;
    v1 = (*(volatile s32 *) (u32) (gp + -20008));
L_0091A0B0:;
    v0 = (s32) ((u32) gp + 0xffffb1dcU);
    a1 = s1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_0091A0E0;
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
L_0091A0E0:;
    a0 = s0;
    a1 = 255; func_001DF420(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    at = s1 < 11;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -20008)); goto L_0091A0B0; }
L_0091A100:;
    v0 = 1;
    return v0;
}
