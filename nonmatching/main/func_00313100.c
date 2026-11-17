/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Job_CopyPayloadOut(s64, s64, s64);
s64 Pes6Job_Create(s64, s64, s64);
void Pes6Job_SetArg(s64, s64, s64);
void Pes6Job_SetField4(s64, s64);
void Pes6MatchPlayer_GetTeamRelativeXZ(s64, s64, s64);
s64 func_0030DBA0(void);
s64 func_0030F240(s64);
s64 func_0030F380(void);
s64 func_0030FAB0(s64, s64, s64, s64);
s64 func_0030FAC0(s64, s64);
s64 func_0030FDD0(s64, s64, s64, s64);
s64 func_0030FE10(s64, s64, s64, s64);
s64 func_0030FE30(s64, s64);
s64 func_00312E70(s64, s64, s64, s64, f32, f32, f32);
s64 func_00333370(s64, s64, s64, s64, s64, s64, s64);
s64 func_00333600(s64);
s64 func_00338530(s64);
void func_00338720(s64, s64);
s64 func_003405E0(f32, f32);
void func_00340B00(s64, f32, f32);

s64 func_00313100(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, f32 fa12, f32 fa13, f32 fa14) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[20];
    s64 sp = (s32) (u32) frame;

    s5 = a0;
    a0 = 3;
    v0 = func_00333600(a0);
    if (v0 == 0) goto L_00313140;
    v0 = 0; goto L_00313184;
L_00313140:;
    v0 = func_0030F380();
    if (v0 == 0) goto L_00313158;
    v0 = 0; goto L_00313184;
L_00313158:;
    v0 = func_0030DBA0();
    if (v0 != 0) { a0 = (s32) ((u32) sp + 0x9fU); goto L_00313170; }
    v0 = 0; goto L_00313184;
L_00313170:;
    v0 = func_0030F240(a0);
    if (v0 == 0) { v0 = 0; goto L_00313184; }
    v0 = 1;
L_00313184:;
    if (v0 != 0) { s4 = (*(volatile s32 *) (u32) (s5 + 60)); goto L_003131AC; }
    a1 = (s32) 0x310000U;
    a2 = (s32) 0x3e0000U;
    a0 = s5;
    a1 = (s32) ((u32) a1 + 0x2fe0U);
    a2 = (s32) ((u32) a2 + 0x1500U); Pes6Job_SetField4(a0, a1);
    v0 = 0; goto L_003136EC;
L_003131AC:;
    v0 = func_0030FE10(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (s4 + 2)) = (u8) v0;
    a0 = (s32) ((u32) sp + 0x80U); v0 = func_0030FDD0(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (s4 + 3)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s4 + 3));
    if (v0 == 0) { a2 = (*(volatile u8 *) (u32) s4); goto L_00313220; }
    v1 = (*(volatile s32 *) (u32) (sp + 128));
    v0 = 3;
    if (v1 != v0) goto L_0031321C;
    a0 = 62; v0 = func_00338530(a0);
    if (v0 != 0) goto L_0031321C;
    (*(volatile u32 *) (u32) (s4 + 108)) = (u32) 0;
    a1 = (s32) 0x310000U;
    a2 = (*(volatile s32 *) (u32) (s5 + 8));
    a3 = (s32) 0x3e0000U;
    a0 = 62;
    a1 = (s32) ((u32) a1 + 0x2e00U);
    a3 = (s32) ((u32) a3 + 0x1500U); v0 = Pes6Job_Create(a0, a1, a2);
    a0 = v0;
    a1 = s5; Pes6Job_CopyPayloadOut(a0, a1, a2);
L_0031321C:;
    a2 = (*(volatile u8 *) (u32) s4);
L_00313220:;
    a0 = (s32) ((u32) sp + 0x98U);
    a1 = (s32) ((u32) sp + 0x94U); Pes6MatchPlayer_GetTeamRelativeXZ(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (s5 + 40));
    v0 = 20;
    s6 = 0;
    s2 = 0;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = hi;
    { s32 c_ = v0 != 0; s1 = 0; if (c_) goto L_003132E0; }
    a0 = (*(volatile u8 *) (u32) (sp + 159)); v0 = func_0030FAB0(a0, a1, a2, a3);
    s3 = v0 & 0xff;
    s0 = 0;
L_0031325C:;
    a0 = (s32) ((u32) sp + 0x88U);
    a1 = (s32) ((u32) sp + 0x84U);
    a2 = s3; Pes6MatchPlayer_GetTeamRelativeXZ(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 148));
    f0.f = (*(volatile f32 *) (u32) (sp + 132));
    f0.f = f1.f - f0.f;
    f2.i = f0.i & 0x7FFFFFFF;
    f1.f = (*(volatile f32 *) (u32) (sp + 152));
    f0.f = (*(volatile f32 *) (u32) (sp + 136));
    fcc = f1.f < f0.f;
    if (!fcc) goto L_003132C8;
    v0 = (s32) 0x45700000U;
    f0.i = (s32) v0;
    fcc = f2.f < f0.f;
    if (!fcc) goto L_003132C8;
    v0 = (s32) 0x45200000U;
    f0.i = (s32) v0;
    fcc = f2.f < f0.f;
    { s32 c_ = !fcc; s2 = (s32) ((u32) s2 + 0x1U); if (c_) goto L_003132C8; }
    s1 = (s32) ((u32) s1 + 0x1U);
L_003132C8:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = (s32) ((u32) s3 + 0x1U);
    v0 = s0 < 11;
    { s32 c_ = v0 != 0; s3 = v1 & 0xff; if (c_) goto L_0031325C; }
L_003132E0:;
    v0 = s2 | s1;
    if (v0 == 0) { a0 = (s32) ((u32) sp + 0x8cU); goto L_00313318; }
    f2.f = (*(volatile f32 *) (u32) (s4 + 40));
    v0 = (s32) 0x44c00000U;
    f1.f = (*(volatile f32 *) (u32) (sp + 152));
    f0.i = (s32) v0;
    f1.f = f1.f - f2.f;
    fcc = f1.f < f0.f;
    if (fcc) goto L_00313314;
    s6 = 2;
L_00313314:;
    a0 = (s32) ((u32) sp + 0x8cU);
L_00313318:;
    a1 = 0; v0 = func_0030FE30(a0, a1);
    if (v0 == 0) { f12.f = (*(volatile f32 *) (u32) (sp + 152)); goto L_00313404; }
    a0 = (*(volatile s32 *) (u32) (sp + 140));
    v0 = 4;
    v1 = (*(volatile s32 *) (u32) a0);
    if (v1 != v0) goto L_00313400;
    v1 = (*(volatile u8 *) (u32) (sp + 159));
    v0 = 255;
    { s32 c_ = v1 == v0; a1 = (s32) ((u32) a0 + 0x20U); if (c_) goto L_00313360; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
    v1 = (s32) ((u32) a0 << 3); goto L_00313368;
L_00313360:;
    a0 = 1;
    v1 = (s32) ((u32) a0 << 3);
L_00313368:;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile u16 *) (u32) (v0 + 40));
    v0 = v1 < 8192;
    if (v0 != 0) { v1 = (*(volatile u8 *) (u32) (a1 + 8)); goto L_003133A0; }
    at = 0xe001;
    at = v1 < at;
    if (at != 0) goto L_00313400;
    v1 = (*(volatile u8 *) (u32) (a1 + 8));
L_003133A0:;
    v0 = v1 & 0x1;
    if (v0 == 0) { v0 = (s64) ((u64) v1 << 62); goto L_003133B4; }
    s6 = 1; goto L_00313400;
L_003133B4:;
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { v0 = (s64) ((u64) v1 << 60); goto L_003133C8; }
    s6 = 5; goto L_00313400;
L_003133C8:;
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { v0 = (s64) ((u64) v1 << 59); goto L_003133DC; }
    s6 = 4; goto L_00313400;
L_003133DC:;
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { v0 = (s64) ((u64) v1 << 57); goto L_003133F0; }
    s6 = 3; goto L_00313400;
L_003133F0:;
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) goto L_00313400;
    s6 = 6;
L_00313400:;
    f12.f = (*(volatile f32 *) (u32) (sp + 152));
L_00313404:;
    f13.f = (*(volatile f32 *) (u32) (sp + 148));
    a0 = (s32) ((u32) sp + 0x90U); func_00340B00(a0, f12.f, f13.f);
    a0 = (*(volatile u8 *) (u32) (s4 + 1));
    v0 = (*(volatile s32 *) (u32) (sp + 144));
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) v1 + (u32) s4);
    v1 = (*(volatile s32 *) (u32) (a0 + 76));
    if (v1 == v0) { a0 = (*(volatile u8 *) (u32) s4); goto L_00313478; }
    v0 = (*(volatile s32 *) (u32) (a0 + 80));
    (*(volatile u32 *) (u32) (a0 + 84)) = (u32) v0;
    v1 = (*(volatile u8 *) (u32) (s4 + 1));
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v0 + (u32) s4);
    v0 = (*(volatile s32 *) (u32) (v1 + 76));
    (*(volatile u32 *) (u32) (v1 + 80)) = (u32) v0;
    v1 = (*(volatile u8 *) (u32) (s4 + 1));
    a0 = (*(volatile s32 *) (u32) (sp + 144));
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s4);
    (*(volatile u32 *) (u32) (v0 + 76)) = (u32) a0;
    a0 = (*(volatile u8 *) (u32) s4);
L_00313478:;
    a1 = 1; v0 = func_0030FAC0(a0, a1);
    f2.f = (*(volatile f32 *) (u32) (sp + 152));
    f0.f = (*(volatile f32 *) (u32) (s4 + 40));
    fcc = f0.f <= f2.f;
    { s32 c_ = fcc; s0 = v0 & 0xffff; if (c_) goto L_003134C4; }
    (*(volatile f32 *) (u32) (s4 + 40)) = f2.f;
    v1 = (s32) 0x45200000U;
    f0.f = (*(volatile f32 *) (u32) (sp + 148));
    v0 = (s32) 0x44800000U;
    (*(volatile f32 *) (u32) (s4 + 44)) = f0.f;
    (*(volatile u32 *) (u32) (s4 + 48)) = (u32) v1;
    (*(volatile u32 *) (u32) (s4 + 52)) = (u32) v0;
    f0.f = (*(volatile f32 *) (u32) (sp + 152));
    (*(volatile f32 *) (u32) (s4 + 20)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (sp + 148));
    (*(volatile f32 *) (u32) (s4 + 24)) = f0.f; goto L_00313500;
L_003134C4:;
    f1.f = (*(volatile f32 *) (u32) (s4 + 44));
    f0.f = (*(volatile f32 *) (u32) (sp + 148));
    f0.f = f1.f - f0.f;
    f1.i = f0.i & 0x7FFFFFFF;
    f0.f = (*(volatile f32 *) (u32) (s4 + 52));
    fcc = f1.f <= f0.f;
    if (fcc) { f1.f = (*(volatile f32 *) (u32) (s4 + 60)); goto L_00313504; }
    (*(volatile f32 *) (u32) (s4 + 40)) = f2.f;
    v1 = (s32) 0x45200000U;
    f0.f = (*(volatile f32 *) (u32) (sp + 148));
    v0 = (s32) 0x44800000U;
    (*(volatile f32 *) (u32) (s4 + 44)) = f0.f;
    (*(volatile u32 *) (u32) (s4 + 48)) = (u32) v1;
    (*(volatile u32 *) (u32) (s4 + 52)) = (u32) v0;
L_00313500:;
    f1.f = (*(volatile f32 *) (u32) (s4 + 60));
L_00313504:;
    f0.f = (*(volatile f32 *) (u32) (sp + 148));
    fcc = f1.f < f0.f;
    if (!fcc) { f1.f = (*(volatile f32 *) (u32) (sp + 152)); goto L_00313528; }
    f0.f = (*(volatile f32 *) (u32) (sp + 152));
    (*(volatile f32 *) (u32) (s4 + 56)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (sp + 148));
    (*(volatile f32 *) (u32) (s4 + 60)) = f0.f; goto L_00313558;
L_00313528:;
    f0.f = (*(volatile f32 *) (u32) (s4 + 56));
    f0.f = f0.f - f1.f;
    f2.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x44400000U;
    f0.i = (s32) v0;
    fcc = f2.f <= f0.f;
    if (fcc) { f1.f = (*(volatile f32 *) (u32) (s4 + 68)); goto L_0031355C; }
    (*(volatile f32 *) (u32) (s4 + 56)) = f1.f;
    f0.f = (*(volatile f32 *) (u32) (sp + 148));
    (*(volatile f32 *) (u32) (s4 + 60)) = f0.f;
L_00313558:;
    f1.f = (*(volatile f32 *) (u32) (s4 + 68));
L_0031355C:;
    f0.f = (*(volatile f32 *) (u32) (sp + 148));
    fcc = f1.f <= f0.f;
    if (fcc) { f1.f = (*(volatile f32 *) (u32) (sp + 152)); goto L_00313580; }
    f0.f = (*(volatile f32 *) (u32) (sp + 152));
    (*(volatile f32 *) (u32) (s4 + 64)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (sp + 148));
    (*(volatile f32 *) (u32) (s4 + 68)) = f0.f; goto L_003135B0;
L_00313580:;
    f0.f = (*(volatile f32 *) (u32) (s4 + 64));
    f0.f = f0.f - f1.f;
    f2.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x44400000U;
    f0.i = (s32) v0;
    fcc = f2.f <= f0.f;
    if (fcc) goto L_003135B0;
    (*(volatile f32 *) (u32) (s4 + 64)) = f1.f;
    f0.f = (*(volatile f32 *) (u32) (sp + 148));
    (*(volatile f32 *) (u32) (s4 + 68)) = f0.f;
L_003135B0:;
    v0 = func_00333370(a0, a1, a2, a3, a4, a5, a6);
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) (s4 + 5)); goto L_003136B8; }
    if (s6 == 0) { f12.f = (*(volatile f32 *) (u32) (sp + 152)); goto L_00313654; }
    f0.f = (*(volatile f32 *) (u32) (sp + 152));
    v0 = (s32) 0x44400000U;
    f1.i = (s32) v0;
    f13.f = (*(volatile f32 *) (u32) (sp + 148));
    f12.f = f1.f + f0.f; v0 = func_003405E0(f12.f, f13.f);
    if (v0 == 0) { v0 = (s32) 0x80000000U; goto L_003135F0; }
    v0 = 0; goto L_003136EC;
L_003135F0:;
    a1 = (s32) 0x310000U;
    a3 = (s32) 0x3e0000U;
    a1 = (s32) ((u32) a1 + 0x2ac0U);
    a0 = v0 | 0x2b;
    a2 = 8;
    a3 = (s32) ((u32) a3 + 0x1500U); v0 = Pes6Job_Create(a0, a1, a2);
    s0 = v0;
    a1 = s5;
    a0 = s0; Pes6Job_CopyPayloadOut(a0, a1, a2);
    a2 = s2;
    a0 = s0;
    a1 = 0; Pes6Job_SetArg(a0, a1, a2);
    a2 = s1;
    a0 = s0;
    a1 = 1; Pes6Job_SetArg(a0, a1, a2);
    a0 = s0;
    a2 = s6;
    a1 = 2; Pes6Job_SetArg(a0, a1, a2);
    goto L_003136B4;
L_00313654:;
    a1 = s0;
    f13.f = (*(volatile f32 *) (u32) (sp + 148));
    a0 = s4; v0 = func_00312E70(a0, a1, a2, a3, f12.f, f13.f, f14.f);
    if (v0 == 0) goto L_003136B4;
    v0 = (*(volatile u8 *) (u32) (s4 + 5));
    if (v0 != 0) goto L_003136B4;
    f0.f = (*(volatile f32 *) (u32) (sp + 152));
    v0 = (s32) 0x80000000U;
    a1 = (s32) 0x310000U;
    a3 = (s32) 0x3e0000U;
    a0 = v0 | 0x14;
    a1 = (s32) ((u32) a1 + 0x25c0U);
    (*(volatile f32 *) (u32) (s4 + 28)) = f0.f;
    a2 = 8;
    f0.f = (*(volatile f32 *) (u32) (sp + 148));
    a3 = (s32) ((u32) a3 + 0x1500U);
    (*(volatile f32 *) (u32) (s4 + 32)) = f0.f; v0 = Pes6Job_Create(a0, a1, a2);
    a0 = v0;
    a1 = s5; Pes6Job_CopyPayloadOut(a0, a1, a2);
L_003136B4:;
    v0 = (*(volatile u8 *) (u32) (s4 + 5));
L_003136B8:;
    if (v0 == 0) { v0 = 1; goto L_003136EC; }
    a0 = s5;
    a1 = 3; func_00338720(a0, a1);
    a1 = (s32) 0x310000U;
    a2 = (s32) 0x3e0000U;
    a0 = s5;
    a1 = (s32) ((u32) a1 + 0x3020U);
    a2 = (s32) ((u32) a2 + 0x1500U);
    (*(volatile u8 *) (u32) (s4 + 5)) = (u8) 0; Pes6Job_SetField4(a0, a1);
    v0 = 1;
L_003136EC:;
    return v0;
}
