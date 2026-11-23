/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D78E0(s64, s64);
void func_001D7960(s64, s64);
void func_001D7D60(s64, s64);
void func_001D7E40(s64, s64, s64, s64);
s64 func_0063E1E0(s64);

void func_00636670(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 gp = 0x3ef370;

    s4 = 0;
    s3 = (s32) ((u32) a0 + 0x14U);
    s2 = (s32) ((u32) a0 + 0xf8U);
    v0 = (*(volatile s32 *) (u32) (a0 + 4));
    s5 = (*(volatile s32 *) (u32) (v0 + 68));
L_006366A4:;
    a0 = s4; v0 = func_0063E1E0(a0);
    s1 = v0 & 0xff;
    v0 = (s32) 0x650000U;
    s0 = s1 & 0x7f;
    v0 = (s32) ((u32) v0 + 0x7e60U);
    v1 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) s3); func_001D7E40(a0, a1, a2, a3);
    v1 = s0 & 0xff;
    v0 = 14;
    if (v1 != v0) goto L_006366F8;
    v0 = 35;
    { s32 c_ = s4 != v0; a1 = 0; if (c_) goto L_00636700; }
    a1 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00636700;
L_006366F8:;
    a1 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00636700:;
    a0 = (*(volatile s32 *) (u32) s3); func_001D7D60(a0, a1);
    v0 = s1 & 0x80;
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_00636740;
    a0 = (*(volatile u8 *) (u32) (gp + -31824));
    v1 = (*(volatile u8 *) (u32) (gp + -31823));
    v0 = (*(volatile u8 *) (u32) (gp + -31822));
    (*(volatile u8 *) (u32) s2) = (u8) a0;
    (*(volatile u8 *) (u32) (s2 + 1)) = (u8) v1;
    (*(volatile u8 *) (u32) (s2 + 2)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (gp + -31821));
    (*(volatile u8 *) (u32) (s2 + 3)) = (u8) v0; goto L_00636790;
L_00636740:;
    v0 = 14;
    if (s0 == v0) goto L_00636770;
    a0 = (*(volatile u8 *) (u32) (gp + -31820));
    v1 = (*(volatile u8 *) (u32) (gp + -31819));
    v0 = (*(volatile u8 *) (u32) (gp + -31818));
    (*(volatile u8 *) (u32) s2) = (u8) a0;
    (*(volatile u8 *) (u32) (s2 + 1)) = (u8) v1;
    (*(volatile u8 *) (u32) (s2 + 2)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (gp + -31817));
    (*(volatile u8 *) (u32) (s2 + 3)) = (u8) v0; goto L_00636790;
L_00636770:;
    a0 = (*(volatile u8 *) (u32) (gp + -31816));
    v1 = (*(volatile u8 *) (u32) (gp + -31815));
    v0 = (*(volatile u8 *) (u32) (gp + -31814));
    (*(volatile u8 *) (u32) s2) = (u8) a0;
    (*(volatile u8 *) (u32) (s2 + 1)) = (u8) v1;
    (*(volatile u8 *) (u32) (s2 + 2)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (gp + -31813));
    (*(volatile u8 *) (u32) (s2 + 3)) = (u8) v0;
L_00636790:;
    v0 = 35;
    if (s4 == v0) goto L_006367A8;
    v0 = 14;
    if (s0 == v0) goto L_006367B0;
L_006367A8:;
    s0 = (*(volatile s32 *) (u32) s3); goto L_006367B8;
L_006367B0:;
    s0 = s5;
L_006367B8:;
    a0 = s0;
    a1 = 1; func_001D7960(a0, a1);
    a0 = s0;
    a1 = s2; func_001D78E0(a0, a1);
    s4 = (s32) ((u32) s4 + 0x1U);
    s3 = (s32) ((u32) s3 + 0x4U);
    v1 = s4 < 36;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_006366A4; }
    return;
}
