/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001FAB60(s32, s32, s32, s32);
s32 func_001FABB0(s32, s32, s32, s32);
void func_008E37C0(s32, s32, s32, s32);
void func_008E5200(s32, s32, s32, s32, s32, s32, s32, s32);

void func_008E60D0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = a1;
    if (s4 == 0) goto L_008E61D8;
    if (s3 == 0) goto L_008E61C0;
    s2 = 0;
    s1 = s3;
    s0 = (s32) ((u32) sp + 0x60U);
L_008E610C:;
    if (s2 == 0) goto L_008E6128;
    v0 = (*(volatile u8 *) (u32) (s1 + -1));
    (*(volatile u16 *) (u32) s0) = (u16) v0;
    v0 = (*(volatile u8 *) (u32) s1);
    (*(volatile u16 *) (u32) (s0 + 2)) = (u16) v0; goto L_008E6158;
L_008E6128:;
    a0 = 0;
    a1 = 0;
    a2 = 0; v0 = func_001FABB0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    a0 = 0;
    (*(volatile u16 *) (u32) s0) = (u16) v0;
    a1 = 0;
    a2 = 0; v0 = func_001FAB60(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    (*(volatile u16 *) (u32) (s0 + 2)) = (u16) v0;
L_008E6158:;
    v0 = (s32) ((u32) s3 + (u32) s2);
    a0 = (*(volatile u8 *) (u32) (v0 + 21));
    a1 = (s32) ((u32) s4 + (u32) s2);
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = 1;
    s1 = (s32) ((u32) s1 + 0x2U);
    s0 = (s32) ((u32) s0 + 0x4U);
    (*(volatile u8 *) (u32) (a1 + 452)) = (u8) a0;
    v0 = s2 < 11;
    { s32 c_ = v0 != 0; (*(volatile u8 *) (u32) (a1 + 463)) = (u8) v1; if (c_) goto L_008E610C; }
    s3 = (*(volatile u8 *) (u32) (s4 + 1));
    s2 = 0;
    s1 = (s32) ((u32) sp + 0x60U);
    s0 = (s32) ((u32) s4 + 0x16cU);
L_008E6194:;
    a0 = s4;
    a1 = s3;
    a2 = s0;
    a3 = s1; func_008E37C0(a0, a1, a2, a3);
    s2 = (s32) ((u32) s2 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U);
    v1 = s2 < 11;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x8U); if (c_) goto L_008E6194; }
L_008E61C0:;
    a1 = (*(volatile u8 *) (u32) (s4 + 478));
    v1 = 8;
    if (a1 != v1) { ; goto L_008E61DC; }
    a0 = s4; func_008E5200(a0, a1, a2, a3, a4, a5, a6, a7);
L_008E61D8:;
L_008E61DC:;
    return;
}
