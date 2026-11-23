/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001FAB60(s32, s32, s32, s32);
s32 func_001FABB0(s32, s32, s32, s32);
void func_008E37C0(s32, s32, s32, s32);
void func_008E5200(s32, s32, s32, s32, s32, s32, s32, s32);

void func_008E6200(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    s5 = a0;
    s4 = a1;
    if (s5 == 0) goto L_008E632C;
    { s32 c_ = s4 == 0; (*(volatile u32 *) (u32) (s5 + 1720)) = (u32) s4; if (c_) goto L_008E623C; }
    s0 = (s32) ((u32) s4 + 0x7d5U); goto L_008E6240;
L_008E623C:;
    s0 = 0;
L_008E6240:;
    if (s0 == 0) goto L_008E6310;
    s3 = 0;
    s2 = s0;
    s1 = (s32) ((u32) sp + 0x70U);
L_008E6254:;
    if (s3 == 0) goto L_008E6270;
    v0 = (*(volatile u8 *) (u32) (s2 + -1));
    (*(volatile u16 *) (u32) s1) = (u16) v0;
    v0 = (*(volatile u8 *) (u32) s2);
    (*(volatile u16 *) (u32) (s1 + 2)) = (u16) v0; goto L_008E62A0;
L_008E6270:;
    a0 = 0;
    a1 = 0;
    a2 = 0; v0 = func_001FABB0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    a0 = 0;
    (*(volatile u16 *) (u32) s1) = (u16) v0;
    a1 = 0;
    a2 = 0; v0 = func_001FAB60(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    (*(volatile u16 *) (u32) (s1 + 2)) = (u16) v0;
L_008E62A0:;
    v0 = (s32) ((u32) s0 + (u32) s3);
    a0 = (*(volatile u8 *) (u32) (v0 + 21));
    a1 = (s32) ((u32) s5 + (u32) s3);
    v1 = (s32) ((u32) s4 + (u32) s3);
    s2 = (s32) ((u32) s2 + 0x2U);
    s3 = (s32) ((u32) s3 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U);
    (*(volatile u8 *) (u32) (a1 + 452)) = (u8) a0;
    v0 = s3 < 11;
    v1 = (*(volatile u8 *) (u32) (v1 + 1855));
    { s32 c_ = v0 != 0; (*(volatile u8 *) (u32) (a1 + 463)) = (u8) v1; if (c_) goto L_008E6254; }
    v0 = (*(volatile u8 *) (u32) (s5 + 1));
    s2 = 0;
    s1 = (s32) ((u32) sp + 0x70U);
    s0 = (s32) ((u32) s5 + 0x114U);
    v0 = v0 ^ 0x1;
    s3 = v0 & 0xff;
L_008E62E8:;
    a0 = s5;
    a1 = s3;
    a2 = s0;
    a3 = s1; func_008E37C0(a0, a1, a2, a3);
    s2 = (s32) ((u32) s2 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U);
    v1 = s2 < 11;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x8U); if (c_) goto L_008E62E8; }
L_008E6310:;
    a1 = (*(volatile u8 *) (u32) (s5 + 478));
    v1 = (s32) ((u32) a1 + 0xfffffffaU);
    at = (u64) v1 < (u64) (s64) 2;
    if (at == 0) { ; goto L_008E6330; }
    a0 = s5; func_008E5200(a0, a1, a2, a3, a4, a5, a6, a7);
L_008E632C:;
L_008E6330:;
    return;
}
