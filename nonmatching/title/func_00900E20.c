/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001543E0(s32);
s32 func_001B5350(s32, s32, s32, s32, f32, f32);
s32 func_001CDAA0(void);
f32 func_001E5410(void);
s32 func_001E6E10(s32);
void func_001ED880(s32, f32);
void func_001ED8F0(s32, s32);
void func_001ED990(s32, s32);
void func_001EDA30(s32, s32);
void func_001EDAE0(s32, s32);
void func_001EDD90(s32, s32, s32, s32);
s32 func_001EE0D0(s32, s32, s32, s32);
s32 func_001F87D0(void);
s32 func_001F87E0(s32, s32);

s32 func_00900E20(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 hi = 0, lo = 0;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    s1 = (*(volatile s32 *) (u32) (gp + -19808));
    { s32 c_ = s1 != 0; s6 = 0; if (c_) goto L_00900E5C; }
    v0 = 1; goto L_009012E8;
L_00900E5C:;
    v1 = (*(volatile s32 *) (u32) (s1 + 12));
    s2 = 4;
    if (v1 == s2) { s6 = 1; goto L_009012E4; }
    v0 = 3;
    if (v1 == v0) goto L_009012B8;
    v0 = 2;
    if (v1 == v0) { v1 = (*(volatile s32 *) (u32) (s1 + 8)); goto L_009010F0; }
    v0 = 1;
    if (v1 == v0) goto L_00900F8C;
    if (v1 == 0) { v0 = (s32) ((u32) sp + 0x98U); goto L_00900EA0; }
    v0 = s6; goto L_009012E8;
L_00900EA0:;
    if (v0 == 0) goto L_00900EC4;
L_00900EA8:;
    (*(volatile u8 *) (u32) v0) = (u8) 0;
    s2 = (s32) ((u32) s2 + 0xffffffffU);
    v0 = (s32) ((u32) v0 + 0x1U);
    if (s2 != 0) goto L_00900EA8;
L_00900EC4:;
    v0 = (s32) 0x900000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 9712));
    if (a0 == 0) { v1 = 255; goto L_00900EF4; }
    a1 = (s32) ((u32) sp + 0x98U); func_001ED990(a0, a1);
    v1 = (s32) 0x900000U;
    v0 = (s32) 0x900000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 9712));
    a1 = (*(volatile u8 *) (u32) (v1 + 9720)); func_001ED8F0(a0, a1);
    v1 = 255;
L_00900EF4:;
    v0 = (s32) 0x900000U;
    (*(volatile u32 *) (u32) (v0 + 9724)) = (u32) v1;
    v0 = (s32) 0x900000U;
    (*(volatile u32 *) (u32) (v0 + 9720)) = (u32) v1;
    v0 = (s32) 0x900000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 9712));
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (s1 + 12)); goto L_00900F84; }
    at = v1 < v1;
    { s32 c_ = at == 0; a0 = v1; if (c_) goto L_00900F40; }
    v0 = (s32) 0x900000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 9728));
    a0 = (s32) ((u32) v1 - (u32) v0);
    at = a0 < v1;
    if (at == 0) goto L_00900F68;
    a0 = v1; goto L_00900F68;
L_00900F40:;
    at = v1 < v1;
    if (at == 0) goto L_00900F68;
    v0 = (s32) 0x900000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 9728));
    a0 = (s32) ((u32) v1 + (u32) v0);
    at = v1 < a0;
    if (at == 0) goto L_00900F68;
    a0 = v1;
L_00900F68:;
    v0 = (s32) 0x900000U;
    a1 = a0 & 0xff;
    (*(volatile u32 *) (u32) (v0 + 9720)) = (u32) a0;
    v0 = (s32) 0x900000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 9712)); func_001ED8F0(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s1 + 12));
L_00900F84:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (s1 + 12)) = (u32) v0;
L_00900F8C:;
    v0 = (s32) 0x900000U;
    v1 = (*(volatile s32 *) (u32) (v0 + 9720));
    v0 = (s32) 0x900000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 9724));
    { s32 c_ = v1 != v0; a0 = 0; if (c_) goto L_00900FA8; }
    a0 = 1;
L_00900FA8:;
    v0 = 1;
    if (a0 != v0) goto L_009012E4;
    v0 = func_001EE0D0(a0, a1, a2, a3);
    s4 = v0;
    a1 = 1;
    a0 = s4; func_001EDA30(a0, a1);
    v1 = (*(volatile s32 *) (u32) (s1 + 8));
    v0 = (s32) 0x900000U;
    v0 = (s32) ((u32) v0 + 0x1c1cU);
    v1 = (s32) ((u32) v1 << 4);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { s32 c_ = v0 <= 0; s5 = 0; if (c_) goto L_009010A0; }
    s2 = 0;
L_00900FF0:;
    v1 = (*(volatile s32 *) (u32) (s1 + 8));
    v0 = (s32) 0x900000U;
    v0 = (s32) ((u32) v0 + 0x1c10U);
    v1 = (s32) ((u32) v1 << 4);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) (v0 + 8));
    s0 = (s32) ((u32) v0 + (u32) s2);
    a0 = (*(volatile s32 *) (u32) s0); v0 = func_001E6E10(a0);
    s3 = v0;
    v0 = (s32) 0x3f0000U;
    v1 = (*(volatile s16 *) (u32) (v0 + 30612));
    v0 = (s32) 0x40000000U;
    f0.i = (s32) v0;
    v0 = (s32) ((u32) 0 - (u32) v1);
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    f20.f = f1.f / f0.f;
    f0.f = func_001E5410();
    f1.i = f0.i ^ (s32) 0x80000000U;
    v0 = (s32) 0x40000000U;
    f0.i = (s32) v0;
    a3 = s3;
    f13.f = f1.f / f0.f;
    a0 = (s32) ((u32) s0 + 0x4U);
    f12.i = f20.i;
    a1 = (s32) ((u32) s0 + 0x14U);
    a2 = s4; v0 = func_001B5350(a0, a1, a2, a3, f12.f, f13.f);
    v1 = (*(volatile s32 *) (u32) (s1 + 8));
    v0 = (s32) 0x900000U;
    v0 = (s32) ((u32) v0 + 0x1c10U);
    s5 = (s32) ((u32) s5 + 0x1U);
    v1 = (s32) ((u32) v1 << 4);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) (v0 + 12));
    v0 = s5 < v0;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x1cU); if (c_) goto L_00900FF0; }
L_009010A0:;
    a0 = s4;
    a1 = 1; func_001EDAE0(a0, a1);
    v0 = (s32) 0x447a0000U;
    f12.i = (s32) v0;
    a0 = s4; func_001ED880(a0, f12.f);
    a0 = (*(volatile s32 *) (u32) s1);
    if (a0 == 0) { (*(volatile u32 *) (u32) s1) = (u32) s4; goto L_009010D4; }
    func_001EDD90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s1) = (u32) s4;
L_009010D4:;
    v0 = (s32) 0x900000U;
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + 9724)) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) (s1 + 12));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (s1 + 12)) = (u32) v0; goto L_009012E4;
L_009010F0:;
    v0 = (s32) 0x900000U;
    v0 = (s32) ((u32) v0 + 0x1c10U);
    v1 = (s32) ((u32) v1 << 4);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 4));
    v0 = v0 & 0x1;
    if (v0 == 0) { s0 = (*(volatile s32 *) (u32) (s1 + 8)); goto L_009011A0; }
    a0 = 0; v0 = func_001543E0(a0);
    v0 = v0 & 0x4000;
    if (v0 == 0) goto L_0090119C;
    s0 = (*(volatile s32 *) (u32) (s1 + 8)); v0 = func_001CDAA0();
    v1 = (s32) 0x3c0000U;
    v1 = (s32) ((u32) v1 + 0x54c0U);
    v0 = (s32) ((u32) v1 + (u32) v0);
    { s32 c_ = s0 < 0; a0 = (*(volatile u8 *) (u32) v0); if (c_) goto L_0090114C; }
    v0 = (u64) s0 < (u64) (s64) 2;
    if (v0 != 0) goto L_00901150;
L_0090114C:;
    s0 = 0;
L_00901150:;
    v0 = (s32) 0x900000U;
    v1 = (s32) ((u32) s0 << 4);
    v0 = (s32) ((u32) v0 + 0x1c10U);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = 60;
    { s32 c_ = a0 == v0; v1 = (*(volatile s32 *) (u32) v1); if (c_) goto L_00901194; }
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v0 = (s32) 0x88880000U;
    v0 = v0 | 0x8889;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) a0 >> 31);
    v0 = hi;
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) v0 >> 5;
    v1 = (s32) ((u32) v0 + (u32) v1);
L_00901194:;
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) v1;
    s2 = 32;
L_0090119C:;
    s0 = (*(volatile s32 *) (u32) (s1 + 8));
L_009011A0:;
    v0 = func_001CDAA0();
    v1 = (s32) 0x3c0000U;
    v1 = (s32) ((u32) v1 + 0x54c0U);
    v0 = (s32) ((u32) v1 + (u32) v0);
    { s32 c_ = s0 < 0; a0 = (*(volatile u8 *) (u32) v0); if (c_) goto L_009011C8; }
    v0 = (u64) s0 < (u64) (s64) 2;
    if (v0 != 0) goto L_009011CC;
L_009011C8:;
    s0 = 0;
L_009011CC:;
    v0 = (s32) 0x900000U;
    v1 = (s32) ((u32) s0 << 4);
    v0 = (s32) ((u32) v0 + 0x1c10U);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = 60;
    { s32 c_ = a0 == v0; a1 = (*(volatile s32 *) (u32) v1); if (c_) goto L_00901210; }
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v0 = (s32) 0x88880000U;
    v0 = v0 | 0x8889;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) a0 >> 31);
    v0 = hi;
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) v0 >> 5;
    a1 = (s32) ((u32) v0 + (u32) v1);
L_00901210:;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    v1 = (s32) ((u32) v0 + 0x1U);
    v0 = v1 < a1;
    { s32 c_ = v0 != 0; (*(volatile u32 *) (u32) (s1 + 4)) = (u32) v1; if (c_) goto L_009012E4; }
    v0 = (*(volatile s32 *) (u32) (s1 + 8));
    v0 = (s32) ((u32) v0 + 0x1U);
    at = (u64) v0 < (u64) (s64) 2;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (s1 + 8)) = (u32) v0; if (c_) goto L_0090129C; }
    v0 = (s32) 0x900000U;
    v1 = (*(volatile u8 *) (u32) (gp + -31212));
    a0 = (*(volatile s32 *) (u32) (v0 + 9712));
    (*(volatile u8 *) (u32) (sp + 156)) = (u8) v1;
    v0 = (*(volatile u8 *) (u32) (gp + -31211));
    v1 = (*(volatile u8 *) (u32) (gp + -31210));
    (*(volatile u8 *) (u32) (sp + 157)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (gp + -31209));
    (*(volatile u8 *) (u32) (sp + 158)) = (u8) v1;
    { s32 c_ = a0 == 0; (*(volatile u8 *) (u32) (sp + 159)) = (u8) v0; if (c_) goto L_00901280; }
    a1 = (s32) ((u32) sp + 0x9cU); func_001ED990(a0, a1);
    v1 = (s32) 0x900000U;
    v0 = (s32) 0x900000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 9712));
    a1 = (*(volatile u8 *) (u32) (v1 + 9720)); func_001ED8F0(a0, a1);
L_00901280:;
    v1 = 255;
    v0 = (s32) 0x900000U;
    (*(volatile u32 *) (u32) (v0 + 9724)) = (u32) v1;
    v0 = (*(volatile s32 *) (u32) (s1 + 12));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u32 *) (u32) (s1 + 12)) = (u32) v0; goto L_009012E4;
L_0090129C:;
    a1 = s2 & 0xff;
    a0 = 1; v0 = func_001F87E0(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s1 + 12));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (s1 + 12)) = (u32) v0; goto L_009012E4;
L_009012B8:;
    v0 = func_001F87D0();
    v1 = 1;
    if (v0 != v1) goto L_009012E4;
    a0 = (*(volatile s32 *) (u32) s1); func_001EDD90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s1) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) (s1 + 12));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (s1 + 12)) = (u32) v0;
L_009012E4:;
    v0 = s6;
L_009012E8:;
    return v0;
}
