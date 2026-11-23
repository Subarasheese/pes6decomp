/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7F10(s64, s64, s64, s64);
s64 func_002F9630(s64);
void func_002F9650(s64, s64, s64, s64);
s64 func_002F96F0(s64, s64);
void func_002F97A0(s64, s64, s64, s64);

void func_00925B30(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;

    v1 = (s32) ((u32) gp + 0xffffb288U);
    a3 = (*(volatile s32 *) (u32) (gp + -19836));
    a0 = (s32) ((u32) a3 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 == 0) { ; goto L_00925CD0; }
    v1 = (s32) 0x930000U;
    a0 = (s32) ((u32) a3 << 9);
    v1 = (s32) ((u32) v1 + 0xfffff720U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (v1 + 116));
    v1 = v1 & 0x1;
    if (v1 == 0) { a0 = (s32) ((u32) a3 << 2); goto L_00925CC0; }
    s0 = 1;
    v1 = (*(volatile s32 *) (u32) (gp + -19836));
L_00925B84:;
    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xfffff720U);
    v1 = (s32) ((u32) v1 << 9);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = s0; func_002F9650(a0, a1, a2, a3);
    s0 = (s32) ((u32) s0 + 0x1U);
    at = s0 < 28;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19836)); goto L_00925B84; }
    v1 = (*(volatile s32 *) (u32) (gp + -19836));
    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xfffff720U);
    v1 = (s32) ((u32) v1 << 9);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v1 + 116));
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -19836)); goto L_00925BE8; }
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    a1 = 0; func_002F9650(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -19836));
L_00925BE8:;
    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xfffff724U);
    v1 = (s32) ((u32) v1 << 9);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); func_002F97A0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -19836));
    v1 = (s32) 0x930000U;
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 + 0xfffff724U);
    v0 = (s32) ((u32) v0 + 0xfffff720U);
    a0 = (s32) ((u32) a0 << 9);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002F9630(a0);
    s0 = v0;
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_00925C70; }
    v1 = (*(volatile s32 *) (u32) (gp + -19836));
L_00925C3C:;
    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xfffff720U);
    v1 = (s32) ((u32) v1 << 9);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0; func_001D7F10(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s0;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19836)); goto L_00925C3C; }
L_00925C70:;
    v1 = (*(volatile s32 *) (u32) (gp + -19836));
    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xfffff720U);
    v1 = (s32) ((u32) v1 << 9);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); func_002F97A0(a0, a1, a2, a3);
    a3 = (*(volatile s32 *) (u32) (gp + -19836));
    a1 = (s32) 0x930000U;
    a1 = (s32) ((u32) a1 + 0xfffff720U);
    v1 = -2;
    a0 = 0 & 0x1;
    a2 = (s32) ((u32) a3 << 9);
    a2 = (s32) ((u32) a1 + (u32) a2);
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    a1 = (*(volatile u8 *) (u32) (a2 + 116));
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (a2 + 116)) = (u8) v1;
    a0 = (s32) ((u32) a3 << 2);
L_00925CC0:;
    v1 = (s32) ((u32) gp + 0xffffb288U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) 0;
L_00925CD0:;
    return;
}
