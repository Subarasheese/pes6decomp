/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6FormationMenu_InitTeam(s64, s64, s64, s64);
void SD_call(s64);
s64 func_0026DA40(s64);
s64 func_002DCA30(void);
void func_008B4490(void);
s64 func_008BC3B0(void);

void Pes6FormationMenu_Open(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 gp = 0x3ef370;

    s1 = a0;
    s0 = a1; v0 = func_002DCA30();
    if (v0 == 0) goto L_008B7994;
    s1 = s1 | 0xc0;
L_008B7994:;
    v0 = (s32) 0x8f0000U;
    (*(volatile u32 *) (u32) (gp + -31364)) = (u32) s0;
    (*(volatile u8 *) (u32) (v0 + -7789)) = (u8) 0;
    v0 = (s32) 0x8f0000U;
    (*(volatile u16 *) (u32) (v0 + -7792)) = (u16) s1;
    v0 = (s32) 0x8f0000U;
    a0 = (*(volatile u16 *) (u32) (v0 + -7792));
    v1 = a0 & 0xf;
    v0 = 8;
    v1 = (s64) ((u64) v1 << 48);
    v1 = v1 >> 48;
    { s32 c_ = v1 != v0; (*(volatile u8 *) (u32) (gp + -20100)) = (u8) 0; if (c_) goto L_008B79D4; }
    v1 = a0 | 0x40;
    v0 = (s32) 0x8f0000U;
    (*(volatile u16 *) (u32) (v0 + -7792)) = (u16) v1;
L_008B79D4:;
    v0 = (s32) 0x8f0000U;
    v0 = (*(volatile u16 *) (u32) (v0 + -7792));
    v0 = v0 & 0x40;
    v0 = (u64) 0 < (u64) v0;
    if (v0 == 0) goto L_008B79FC;
    v1 = 1;
    v0 = (s32) 0x8f0000U;
    (*(volatile u8 *) (u32) (v0 + -7790)) = (u8) v1; goto L_008B7A04;
L_008B79FC:;
    v0 = (s32) 0x8f0000U;
    (*(volatile u8 *) (u32) (v0 + -7790)) = (u8) 0;
L_008B7A04:;
    v0 = func_008BC3B0();
    if (v0 == 0) goto L_008B7A1C;
    func_008B4490();
L_008B7A1C:;
    s3 = (s32) 0x590000U;
    s2 = (s32) 0x8f0000U;
    s0 = (s32) 0x8f0000U;
    s4 = 0;
    s3 = (s32) ((u32) s3 + 0x1a90U);
    s2 = (s32) ((u32) s2 + 0xffffe730U);
    s1 = (s32) ((u32) gp + 0xffffb180U);
    s0 = (s32) ((u32) s0 + 0xffffe750U);
L_008B7A3C:;
    a4 = 0;
L_008B7A40:;
    a3 = (s32) ((u32) s3 + (u32) a4);
    a1 = (*(volatile u8 *) (u32) (a3 + 7));
    a2 = (s32) ((u32) s2 + (u32) a4);
    a0 = (*(volatile u8 *) (u32) (a3 + 8));
    a4 = (s32) ((u32) a4 + 0x5U);
    v1 = (*(volatile u8 *) (u32) (a3 + 9));
    v0 = a4 < 6;
    (*(volatile u8 *) (u32) a2) = (u8) a1;
    (*(volatile u8 *) (u32) (a2 + 1)) = (u8) a0;
    (*(volatile u8 *) (u32) (a2 + 2)) = (u8) v1;
    a0 = (*(volatile u8 *) (u32) (a3 + 10));
    v1 = (*(volatile u8 *) (u32) (a3 + 11));
    (*(volatile u8 *) (u32) (a2 + 3)) = (u8) a0;
    { s32 c_ = v0 != 0; (*(volatile u8 *) (u32) (a2 + 4)) = (u8) v1; if (c_) goto L_008B7A40; }
    v0 = (s32) ((u32) s3 + (u32) a4);
    v1 = (s32) ((u32) s2 + (u32) a4);
    a2 = (*(volatile u8 *) (u32) (v0 + 7));
    a1 = s4 & 0xff;
    a0 = s0;
    v0 = (*(volatile u8 *) (u32) (s3 + 6));
    (*(volatile u8 *) (u32) v1) = (u8) a2;
    (*(volatile u8 *) (u32) s1) = (u8) v0; Pes6FormationMenu_InitTeam(a0, a1, a2, a3);
    s4 = (s32) ((u32) s4 + 0x1U);
    s3 = (s32) ((u32) s3 + 0x8bU);
    v1 = s4 < 2;
    s2 = (s32) ((u32) s2 + 0xbU);
    s1 = (s32) ((u32) s1 + 0x1U);
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x3224U); if (c_) goto L_008B7A3C; }
    v1 = (s32) 0x8f0000U;
    a0 = (*(volatile u16 *) (u32) (v1 + -7792));
    v1 = a0 & 0x80;
    v1 = (u64) 0 < (u64) v1;
    if (v1 == 0) { ; goto L_008B7B1C; }
    v1 = (s32) 0x8b0000U;
    a0 = a0 & 0xf;
    a2 = (*(volatile s8 *) (u32) (v1 + 5198));
    a1 = (s64) ((u64) a0 << 48);
    a1 = a1 >> 48;
    a0 = 3;
    v1 = (s32) 0x8f0000U;
    a2 = a2 & 0x1;
    { s32 c_ = a1 != a0; (*(volatile u8 *) (u32) (v1 + -7789)) = (u8) a2; if (c_) goto L_008B7B18; }
    a0 = 1; v0 = func_0026DA40(a0);
    if (v0 != 0) goto L_008B7B18;
    v0 = (s32) 0x9a080000U;
    a0 = v0 | 0x840e; SD_call(a0);
L_008B7B18:;
L_008B7B1C:;
    return;
}
