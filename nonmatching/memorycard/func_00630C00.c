/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001D5A10(s64);
void func_001D7D60(s64, s64);
void func_001D7D80(s64, s64, s64, s64);
void func_001D7E40(s64, s64, s64, s64);
void func_001D7F10(s64, s64, s64, s64);
s64 func_001D7F90(s64, s64, s64, s64);
void func_001DF2F0(s64);
s64 func_001F08B0(s64);
void func_0063AD20(s64, s64, s64, s64);
void func_0063AD60(s64, s64);
s64 func_0063AD90(s64, s64, s64, s64);
s64 func_0063C0A0(s64);
void func_00654B50(s64);
void sprintf(s64, s64, s64, s64, s64, s64, s64, s64);

void func_00630C00(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 gp = 0x3ef370;

    v1 = (s32) 0x660000U;
    s2 = (s32) 0x660000U;
    s2 = (s32) ((u32) s2 + 0xffffd080U);
    v1 = (*(volatile u8 *) (u32) (v1 + -15582));
    s0 = (s32) 0x660000U;
    { s32 c_ = v1 == 0; s0 = (s32) ((u32) s0 + 0xffffc318U); if (c_) goto L_00630EB4; }
    a0 = (*(volatile s32 *) (u32) s0);
    (*(volatile u8 *) (u32) (s0 + 10)) = (u8) 0; v0 = func_0063C0A0(a0);
    v1 = (*(volatile u8 *) (u32) (s0 + 8));
    { s32 c_ = v1 != 0; s1 = v0; if (c_) goto L_00630CA0; }
    v1 = (*(volatile u8 *) (u32) (s0 + 9));
    if (v1 != 0) { v0 = (*(volatile s32 *) (u32) s2); goto L_00630CA4; }
    a0 = (*(volatile s32 *) (u32) s2);
    if (a0 == 0) { a0 = 0; goto L_00630C74; }
    func_001D7F10(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s2) = (u32) 0;
    a0 = 0;
L_00630C74:;
    a0 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u32 *) (u32) (s2 + 4)) = (u32) 0;
    v1 = (u64) a0 < (u64) (s64) 4;
    s2 = (s32) ((u32) s2 + 0x4U);
    if (v1 != 0) goto L_00630C74;
    v1 = -2;
    (*(volatile u32 *) (u32) (gp + -31764)) = (u32) v1;
    (*(volatile u32 *) (u32) (gp + -31760)) = (u32) v1; goto L_00630EB4;
L_00630CA0:;
    v0 = (*(volatile s32 *) (u32) s2);
L_00630CA4:;
    if (v0 != 0) { v0 = -1; goto L_00630D4C; }
    v0 = (s32) 0x10000U;
    a0 = v0 | 0x383; v0 = func_001D5A10(a0);
    a0 = v0; v0 = func_001D7F90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s2) = (u32) v0;
    a0 = v0;
    a1 = 1; func_001D7E40(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) s2);
    a1 = 1; func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) s2);
    a1 = 2; func_001D7D80(a0, a1, a2, a3);
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -23392)); v0 = func_001F08B0(a0);
    a0 = (*(volatile s32 *) (u32) s2);
    a3 = v0;
    a1 = (s32) ((u32) s2 + 0x4U);
    a2 = 5; v0 = func_0063AD90(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    a0 = (*(volatile s32 *) (u32) (v0 + 12)); func_001DF2F0(a0);
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -23388)); v0 = func_001F08B0(a0);
    a0 = (*(volatile s32 *) (u32) s2);
    a3 = v0;
    a1 = (s32) ((u32) s2 + 0xcU);
    a2 = 7; v0 = func_0063AD90(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    a0 = (*(volatile s32 *) (u32) (v0 + 12)); func_001DF2F0(a0);
    a0 = 0; func_00654B50(a0);
    v0 = -1;
L_00630D4C:;
    if (s1 != v0) { v0 = (*(volatile s32 *) (u32) (gp + -31764)); goto L_00630D68; }
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -23380)); v0 = func_001F08B0(a0);
    s3 = v0; goto L_00630D98;
L_00630D68:;
    if (v0 == s1) goto L_00630D90;
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -23384)); v0 = func_001F08B0(a0);
    a0 = (s32) 0x660000U;
    a1 = v0;
    a0 = (s32) ((u32) a0 + 0xffffcfe0U);
    a2 = s1; sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
L_00630D90:;
    s3 = (s32) 0x660000U;
    s3 = (s32) ((u32) s3 + 0xffffcfe0U);
L_00630D98:;
    a0 = (*(volatile s32 *) (u32) s2);
    a1 = (s32) ((u32) s2 + 0x8U);
    a2 = 4;
    a3 = s3; v0 = func_0063AD90(a0, a1, a2, a3);
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_00630DD0; }
    v0 = (*(volatile s32 *) (u32) (gp + -31764));
    if (v0 == s1) goto L_00630DCC;
    a0 = (*(volatile s32 *) (u32) (s2 + 8));
    a1 = s3; func_0063AD20(a0, a1, a2, a3);
L_00630DCC:;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
L_00630DD0:;
    v0 = -1;
    if (v1 != v0) { v0 = (*(volatile s32 *) (u32) (gp + -31760)); goto L_00630DF0; }
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -23380)); v0 = func_001F08B0(a0);
    s3 = v0; goto L_00630E20;
L_00630DF0:;
    if (v0 == v1) goto L_00630E18;
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -23384)); v0 = func_001F08B0(a0);
    a2 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = (s32) 0x660000U;
    a1 = v0;
    a0 = (s32) ((u32) a0 + 0xffffcfe0U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
L_00630E18:;
    s3 = (s32) 0x660000U;
    s3 = (s32) ((u32) s3 + 0xffffcfe0U);
L_00630E20:;
    a0 = (*(volatile s32 *) (u32) s2);
    a1 = (s32) ((u32) s2 + 0x10U);
    a2 = 6;
    a3 = s3; v0 = func_0063AD90(a0, a1, a2, a3);
    if (v0 != 0) { a1 = (*(volatile u8 *) (u32) (s0 + 8)); goto L_00630E58; }
    v0 = (*(volatile s32 *) (u32) (gp + -31764));
    if (v0 == s1) goto L_00630E54;
    a0 = (*(volatile s32 *) (u32) (s2 + 16));
    a1 = s3; func_0063AD20(a0, a1, a2, a3);
L_00630E54:;
    a1 = (*(volatile u8 *) (u32) (s0 + 8));
L_00630E58:;
    a0 = (*(volatile s32 *) (u32) (s2 + 4)); func_0063AD60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s2 + 8));
    a1 = (*(volatile u8 *) (u32) (s0 + 8)); func_0063AD60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s2 + 12));
    a1 = (*(volatile u8 *) (u32) (s0 + 9)); func_0063AD60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s2 + 16));
    a1 = (*(volatile u8 *) (u32) (s0 + 9)); func_0063AD60(a0, a1);
    v0 = (*(volatile u8 *) (u32) (s0 + 8));
    v1 = (*(volatile u8 *) (u32) (s0 + 9));
    a0 = (*(volatile s32 *) (u32) s2);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    a1 = (s64) ((u64) v0 << 48);
    a1 = a1 >> 48; func_001D7D80(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    (*(volatile u32 *) (u32) (gp + -31764)) = (u32) s1;
    (*(volatile u32 *) (u32) (gp + -31760)) = (u32) v1;
L_00630EB4:;
    return;
}
