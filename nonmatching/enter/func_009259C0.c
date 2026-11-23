/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D76B0(s64, s64);
void func_001DF420(s64, s64);
void func_001ED8F0(s64, s64);
s64 func_002F9630(s64);
s64 func_002F96F0(s64, s64);
void func_002FA560(s64, s64);

void func_009259C0(s64 a0, s64 a1) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;

    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xfffff720U);
    v1 = (*(volatile s32 *) (u32) (gp + -19836));
    v1 = (s32) ((u32) v1 << 9);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v1 + 116));
    v0 = v0 & 0x1;
    { s32 c_ = v0 == 0; s2 = a0; if (c_) goto L_00925AF0; }
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s0 = v0;
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_00925A48; }
    v1 = (*(volatile s32 *) (u32) (gp + -19836));
L_00925A10:;
    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xfffff720U);
    v1 = (s32) ((u32) v1 << 9);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = s2 & 0xff; func_001D76B0(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s0;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19836)); goto L_00925A10; }
L_00925A48:;
    v1 = (*(volatile s32 *) (u32) (gp + -19836));
    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xfffff720U);
    v1 = (s32) ((u32) v1 << 9);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v1 + 116));
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { s1 = 1; goto L_00925A9C; }
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    a1 = 0;
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_00925A90; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s0;
L_00925A90:;
    a1 = s2 & 0xff; func_001ED8F0(a0, a1);
    s1 = 1;
L_00925A9C:;
    v1 = (*(volatile s32 *) (u32) (gp + -19836));
L_00925AA0:;
    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xfffff720U);
    a1 = s1;
    v1 = (s32) ((u32) v1 << 9);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_00925AD0;
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
L_00925AD0:;
    a0 = s0;
    a1 = s2 & 0xff; func_001DF420(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    at = s1 < 28;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19836)); goto L_00925AA0; }
L_00925AF0:;
    v1 = (*(volatile s32 *) (u32) (gp + -19836));
    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xfffff724U);
    v1 = (s32) ((u32) v1 << 9);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s2; func_002FA560(a0, a1);
    return;
}
