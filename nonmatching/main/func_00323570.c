/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Team_ResolveSpecialId(s32);
s32 func_002290D0(s32);
s32 func_00235B60(void);
s32 func_00236680(s32);
void func_0023CFE0(s32, s32, s32, s32);

void func_00323570(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s64 frame[24];
    s32 sp = (s32) (u32) frame;

    v0 = 7;
    v1 = (*(volatile s32 *) (u32) a0);
    { s32 c_ = v1 == v0; s5 = a0; if (c_) goto L_003235B4; }
    v0 = 1;
    (*(volatile u32 *) (u32) (sp + 184)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 188)) = (u32) v0; goto L_003238C0;
L_003235B4:;
    v0 = (*(volatile u8 *) (u32) (s5 + 13));
    if (v0 != 0) { a2 = 0; goto L_0032386C; }
    v0 = func_00235B60();
    s6 = v0 & 0xff;
    s4 = 0;
    s2 = s5;
    s1 = (s32) ((u32) sp + 0x80U);
L_003235D8:;
    v0 = 2;
    a0 = s6 & 0xff;
    (*(volatile u32 *) (u32) (s2 + 2664)) = (u32) v0;
    s0 = (s32) ((u32) s2 + 0xa60U); v0 = func_00236680(a0);
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) s4 + (u32) v0);
    a0 = v0 & 0xff; v0 = func_002290D0(a0);
    s3 = v0 & 0xffff;
    v0 = 295;
    if (s3 == v0) goto L_00323620;
    v0 = 294;
    if (s3 == v0) goto L_00323620;
    goto L_00323630;
L_00323620:;
    a0 = s3; v0 = Pes6Team_ResolveSpecialId(a0);
    (*(volatile u16 *) (u32) s0) = (u16) v0; goto L_00323638;
L_00323630:;
    (*(volatile u16 *) (u32) s0) = (u16) s3;
L_00323638:;
    a1 = s3;
    a0 = (s32) ((u32) sp + 0xb0U);
    a2 = 0; func_0023CFE0(a0, a1, a2, a3);
    v0 = (*(volatile u16 *) (u32) s0);
    a0 = 0;
    a1 = (*(volatile s8 *) (u32) (sp + 176));
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = (*(volatile s8 *) (u32) (sp + 177));
    s2 = (s32) ((u32) s2 + 0xcU);
    (*(volatile u16 *) (u32) s1) = (u16) v0;
    a0 = (s32) ((u32) a0 + (u32) a1);
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) 0;
    a2 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) a0;
    a1 = (*(volatile s8 *) (u32) (sp + 178));
    v0 = s4 < 4;
    a0 = (*(volatile s8 *) (u32) (sp + 179));
    v1 = (*(volatile s8 *) (u32) (sp + 180));
    a1 = (s32) ((u32) a2 + (u32) a1);
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) a2;
    a0 = (s32) ((u32) a1 + (u32) a0);
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) a1;
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) a0;
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) v1;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0xcU); if (c_) goto L_003235D8; }
    a4 = (s32) ((u32) sp + 0x80U);
    a2 = 0;
    a1 = a4;
L_003236B4:;
    (*(volatile u8 *) (u32) (a4 + 2)) = (u8) 0;
    v0 = 0;
    a3 = a1;
L_003236C0:;
    a0 = (*(volatile s32 *) (u32) (a4 + 4));
    v1 = (*(volatile s32 *) (u32) (a3 + 4));
    at = a0 < v1;
    if (at == 0) goto L_003236E0;
    v1 = (*(volatile u8 *) (u32) (a4 + 2));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (a4 + 2)) = (u8) v1;
L_003236E0:;
    v0 = (s32) ((u32) v0 + 0x1U);
    v1 = v0 < 4;
    { s32 c_ = v1 != 0; a3 = (s32) ((u32) a3 + 0xcU); if (c_) goto L_003236C0; }
    a2 = (s32) ((u32) a2 + 0x1U);
    v1 = a2 < 4;
    { s32 c_ = v1 != 0; a4 = (s32) ((u32) a4 + 0xcU); if (c_) goto L_003236B4; }
    a4 = 0;
    a5 = (s32) ((u32) sp + 0x80U);
    a1 = 1;
    a2 = 2;
    a0 = 4;
    a3 = 3;
L_00323718:;
    v1 = (*(volatile u8 *) (u32) (a5 + 2));
    if (v1 == a3) goto L_00323758;
    if (v1 == a2) goto L_00323750;
    if (v1 == a1) goto L_00323750;
    if (v1 == 0) goto L_00323748;
    goto L_00323760;
L_00323748:;
    (*(volatile u32 *) (u32) (a5 + 8)) = (u32) a2; goto L_00323760;
L_00323750:;
    (*(volatile u32 *) (u32) (a5 + 8)) = (u32) a3; goto L_00323760;
L_00323758:;
    (*(volatile u32 *) (u32) (a5 + 8)) = (u32) a0;
L_00323760:;
    a4 = (s32) ((u32) a4 + 0x1U);
    v1 = a4 < 4;
    { s32 c_ = v1 != 0; a5 = (s32) ((u32) a5 + 0xcU); if (c_) goto L_00323718; }
    a0 = 0;
    a2 = 1;
    a1 = (s32) ((u32) sp + 0x80U);
L_0032377C:;
    v1 = (*(volatile s32 *) (u32) (a1 + 4));
    at = v1 < 401;
    if (at == 0) { a0 = (s32) ((u32) a0 + 0x1U); goto L_00323794; }
    a2 = 0; goto L_003237A0;
L_00323794:;
    v1 = a0 < 4;
    { s32 c_ = v1 != 0; a1 = (s32) ((u32) a1 + 0xcU); if (c_) goto L_0032377C; }
L_003237A0:;
    if (a2 == 0) { a3 = 0; goto L_003237C4; }
    v1 = (s32) ((u32) v0 << 1);
    a0 = 5;
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    (*(volatile u32 *) (u32) (v0 + 136)) = (u32) a0;
    a3 = 0;
L_003237C4:;
    a5 = s5;
    a0 = (s32) ((u32) sp + 0x80U);
L_003237CC:;
    a1 = (s32) ((u32) a5 + 0xa60U);
    a2 = 0;
    a4 = a0;
L_003237D8:;
    v1 = (*(volatile u16 *) (u32) a1);
    v0 = (*(volatile u16 *) (u32) a4);
    if (v1 != v0) goto L_003237F0;
    v0 = (*(volatile s32 *) (u32) (a4 + 8));
    (*(volatile u32 *) (u32) (a1 + 4)) = (u32) v0;
L_003237F0:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v0 = a2 < 4;
    { s32 c_ = v0 != 0; a4 = (s32) ((u32) a4 + 0xcU); if (c_) goto L_003237D8; }
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < 4;
    { s32 c_ = v0 != 0; a5 = (s32) ((u32) a5 + 0xcU); if (c_) goto L_003237CC; }
    a2 = 0;
    a5 = s5;
    a4 = (s32) ((u32) sp + 0xb8U);
L_0032381C:;
    v1 = (*(volatile u16 *) (u32) (a5 + 58));
    a1 = 0;
    a3 = s5;
L_00323828:;
    v0 = (*(volatile u16 *) (u32) (a3 + 2656));
    { s32 c_ = v1 != v0; a0 = (s32) ((u32) a3 + 0xa60U); if (c_) goto L_00323840; }
    v0 = (*(volatile s32 *) (u32) (a0 + 4));
    (*(volatile u32 *) (u32) a4) = (u32) v0;
L_00323840:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < 4;
    { s32 c_ = v0 != 0; a3 = (s32) ((u32) a3 + 0xcU); if (c_) goto L_00323828; }
    a2 = (s32) ((u32) a2 + 0x1U);
    a5 = (s32) ((u32) a5 + 0x2U);
    v0 = a2 < 2;
    { s32 c_ = v0 != 0; a4 = (s32) ((u32) a4 + 0x4U); if (c_) goto L_0032381C; }
    goto L_003238C0;
L_0032386C:;
    a5 = s5;
    a4 = (s32) ((u32) sp + 0xb8U);
L_00323874:;
    v1 = (*(volatile u16 *) (u32) (a5 + 58));
    a1 = 0;
    a3 = s5;
L_00323880:;
    v0 = (*(volatile u16 *) (u32) (a3 + 2656));
    { s32 c_ = v1 != v0; a0 = (s32) ((u32) a3 + 0xa60U); if (c_) goto L_00323898; }
    v0 = (*(volatile s32 *) (u32) (a0 + 4));
    (*(volatile u32 *) (u32) a4) = (u32) v0;
L_00323898:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < 4;
    { s32 c_ = v0 != 0; a3 = (s32) ((u32) a3 + 0xcU); if (c_) goto L_00323880; }
    a2 = (s32) ((u32) a2 + 0x1U);
    a5 = (s32) ((u32) a5 + 0x2U);
    v0 = a2 < 2;
    { s32 c_ = v0 != 0; a4 = (s32) ((u32) a4 + 0x4U); if (c_) goto L_00323874; }
L_003238C0:;
    a0 = (*(volatile s32 *) (u32) (sp + 184));
    v1 = (*(volatile s32 *) (u32) (sp + 188));
    v0 = 1;
    (*(volatile u32 *) (u32) (s5 + 100)) = (u32) a0;
    (*(volatile u32 *) (u32) (s5 + 160)) = (u32) v1;
    return;
}
