/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B5460(s64, s64, s64, s64);
void func_001B5C10(s64, s64, s64, s64);
void func_001DEF70(s64, f32);
void func_001DF030(s64, s64);
void func_001DF420(s64, s64);
void func_001DF750(s64, f32, f32);

void func_001B5C40(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };
    volatile union { f32 f; s32 i; } f23 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[20];
    s64 sp = (s32) (u32) frame;

    s0 = (s32) 0x520000U;
    s0 = (s32) ((u32) s0 + 0x2910U);
    v1 = (*(volatile u8 *) (u32) (s0 + 60));
    s2 = (*(volatile s32 *) (u32) (a0 + 100));
    v0 = v1 & 0x1;
    { s32 c_ = v0 == 0; s1 = a0; if (c_) goto L_001B5D1C; }
    v0 = -2;
    a0 = 0 & 0x1;
    v0 = v1 & v0;
    s4 = 0;
    v1 = (s32) ((u32) a0 << 2);
    s3 = s0;
    a0 = v0 | a0;
    (*(volatile u8 *) (u32) (s0 + 60)) = (u8) a0;
    v0 = -5;
    a0 = (*(volatile u8 *) (u32) (s0 + 60));
    v0 = a0 & v0;
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) (s0 + 60)) = (u8) v0;
L_001B5CBC:;
    a0 = s3; func_001B5C10(a0, a1, a2, a3);
    s4 = (s32) ((u32) s4 + 0x1U);
    s3 = (s32) ((u32) s3 + 0xcU);
    v0 = s4 < 2;
    if (v0 != 0) goto L_001B5CBC;
    a0 = (*(volatile s32 *) (u32) (s0 + 40));
    if (a0 == 0) { v0 = (*(volatile u8 *) (u32) (s0 + 60)); goto L_001B5D20; }
    func_001B5460(a0, a1, a2, a3);
    v0 = 64;
    a0 = (*(volatile u8 *) (u32) (s0 + 60));
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) v0;
    v0 = 0 & 0x1;
    (*(volatile u32 *) (u32) (s0 + 28)) = (u32) 0;
    v1 = (s32) ((u32) v0 << 1);
    (*(volatile u32 *) (u32) (s0 + 32)) = (u32) 0;
    v0 = -3;
    (*(volatile u32 *) (u32) (s0 + 36)) = (u32) 0;
    v0 = a0 & v0;
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) (s0 + 60)) = (u8) v0;
L_001B5D1C:;
    v0 = (*(volatile u8 *) (u32) (s0 + 60));
L_001B5D20:;
    v0 = (s64) ((u64) v0 << 61);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (s0 + 36)); goto L_001B5D3C; }
    v0 = 1;
    (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) (s0 + 36));
L_001B5D3C:;
    v0 = 1;
    { s32 c_ = v1 == v0; a1 = (*(volatile s32 *) (u32) (s0 + 32)); if (c_) goto L_001B5D6C; }
    at = a1 < 255;
    if (at == 0) { { s64 m_ = (s64) (s32) a1 * (s64) (s32) s2; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; } goto L_001B5DB8; }
    a1 = (s32) ((u32) a1 + 0x28U);
    at = a1 < 256;
    if (at != 0) goto L_001B5DB4;
    a1 = 255; goto L_001B5DB4;
L_001B5D6C:;
    if (a1 <= 0) goto L_001B5D84;
    a1 = (s32) ((u32) a1 + 0xffffffd8U);
    if (a1 >= 0) goto L_001B5D84;
    a1 = 0;
L_001B5D84:;
    if (a1 != 0) goto L_001B5DB4;
    a0 = (*(volatile u8 *) (u32) (s0 + 60));
    v0 = (s64) ((u64) a0 << 61);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) goto L_001B5DB4;
    v0 = -2;
    v1 = (s64) ((u64) 0 + (u64) (s64) 1);
    v0 = a0 & v0;
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) (s0 + 60)) = (u8) v0;
L_001B5DB4:;
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) s2; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
L_001B5DB8:;
    v0 = (s32) 0x80800000U;
    v0 = v0 | 0x8081;
    (*(volatile u32 *) (u32) (s0 + 32)) = (u32) a1;
    s4 = 0;
    s3 = s0;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) a0 >> 31);
    v0 = hi;
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) v0 >> 7;
    s2 = (s32) ((u32) v0 + (u32) v1);
L_001B5DE8:;
    a0 = (*(volatile s32 *) (u32) (s3 + 4));
    a1 = s2 & 0xff; func_001DF420(a0, a1);
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = s4 < 2;
    { s32 c_ = v1 != 0; s3 = (s32) ((u32) s3 + 0xcU); if (c_) goto L_001B5DE8; }
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    if (v1 == 0) goto L_001B6040;
    v1 = (s32) 0x3f0000U;
    a0 = (*(volatile s32 *) (u32) (s0 + 48));
    v1 = (*(volatile s16 *) (u32) (v1 + 30612));
    f22.f = (*(volatile f32 *) (u32) (s0 + 24));
    f0.i = (s32) v1;
    { s32 c_ = a0 <= 0; f23.f = (f32) f0.i; if (c_) goto L_001B5E34; }
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) a0;
L_001B5E34:;
    if (a0 > 0) { v1 = (*(volatile u8 *) (u32) (s0 + 60)); goto L_001B5E58; }
    a1 = (*(volatile u8 *) (u32) (s0 + 60));
    v1 = -3;
    a0 = (s64) ((u64) 0 + (u64) (s64) 2);
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (s0 + 60)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (s0 + 60));
L_001B5E58:;
    v1 = (s64) ((u64) v1 << 62);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 == 0) goto L_001B5FD0;
    v1 = (s32) 0x3f0000U;
    a0 = (s32) 0x42100000U;
    v1 = (*(volatile s16 *) (u32) (v1 + 30612));
    f0.i = (s32) a0;
    f1.i = (s32) v1;
    f1.f = (f32) f1.i;
    f0.f = f1.f - f0.f;
    fcc = f22.f <= f0.f;
    if (fcc) goto L_001B5FD0;
    v1 = (s32) 0x3f990000U;
    v1 = v1 | 0x999a;
    f21.f = (*(volatile f32 *) (u32) (s0 + 28));
    f1.i = (s32) v1;
    fcc = f21.f < f1.f;
    if (!fcc) { s4 = 0; goto L_001B5EE0; }
    v1 = (s32) 0x3e190000U;
    v1 = v1 | 0x999a;
    f0.i = (s32) v1;
    f21.f = f21.f + f0.f;
    fcc = f21.f <= f1.f;
    if (fcc) { (*(volatile f32 *) (u32) (s0 + 28)) = f21.f; goto L_001B5EDC; }
    f21.i = f1.i;
    (*(volatile f32 *) (u32) (s0 + 28)) = f21.f;
L_001B5EDC:;
    s4 = 0;
L_001B5EE0:;
    s2 = s0;
    f20.i = f22.i ^ (s32) 0x80000000U;
L_001B5EE8:;
    s3 = (*(volatile s32 *) (u32) (s2 + 4));
    if (s3 == 0) goto L_001B5FC0;
    a0 = s3;
    a1 = (s32) ((u32) sp + 0x90U); func_001DF030(a0, a1);
    v0 = (s32) 0x40000000U;
    f0.i = (s32) v0;
    f1.f = f23.f / f0.f;
    f2.f = (*(volatile f32 *) (u32) (sp + 144));
    f0.f = f20.f - f1.f;
    f12.f = f2.f - f21.f;
    fcc = f12.f < f0.f;
    if (!fcc) goto L_001B5F78;
    v0 = (*(volatile s32 *) (u32) (s2 + 8));
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    if (a0 == 0) goto L_001B5F68;
    a1 = (s32) ((u32) sp + 0x80U); func_001DF030(a0, a1);
    f2.f = (*(volatile f32 *) (u32) (sp + 128));
    v0 = (s32) 0x41900000U;
    f1.i = (s32) v0;
    v0 = (s32) 0x42800000U;
    f2.f = f2.f + f22.f;
    f1.f = f1.f + f2.f;
    f0.i = (s32) v0;
    f12.f = f0.f + f1.f; goto L_001B5F78;
L_001B5F68:;
    v0 = (s32) 0x41900000U;
    f0.i = (s32) v0;
    f12.f = f1.f - f0.f;
L_001B5F78:;
    f13.f = (*(volatile f32 *) (u32) (sp + 148));
    a0 = s3; func_001DF750(a0, f12.f, f13.f);
    v1 = (*(volatile s32 *) (u32) (gp + -23160));
    if (v1 != 0) goto L_001B5FC0;
    v0 = (*(volatile u8 *) (u32) (s1 + 112));
    v0 = v0 & 0x1;
    if (v0 == 0) { f1.f = (*(volatile f32 *) (u32) (s1 + 8)); goto L_001B5FA4; }
    f1.f = (*(volatile f32 *) (u32) (s1 + 108));
L_001B5FA4:;
    v0 = (s32) 0x44030000U;
    a0 = s3;
    v0 = v0 | 0x4000;
    f0.i = (s32) v0;
    f12.f = f0.f + f1.f; func_001DEF70(a0, f12.f);
L_001B5FC0:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = s4 < 2;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0xcU); if (c_) goto L_001B5EE8; }
L_001B5FD0:;
    a1 = (*(volatile u8 *) (u32) (s0 + 60));
    a0 = 0 & 0x1;
    v1 = -17;
    a0 = (s32) ((u32) a0 << 4);
    v1 = a1 & v1;
    v1 = v1 | a0;
    a1 = (s64) ((u64) a1 << 59);
    a0 = (s64) ((u64) a1 >> 63);
    { s32 c_ = a0 == 0; (*(volatile u8 *) (u32) (s0 + 60)) = (u8) v1; if (c_) goto L_001B6040; }
    f1.f = (*(volatile f32 *) (u32) (s1 + 116));
    v0 = (s32) 0x40800000U;
    f0.i = (s32) v0;
    s2 = 0;
    f20.f = f0.f + f1.f;
L_001B600C:;
    s1 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = (s32) ((u32) sp + 0x70U);
    a0 = s1; func_001DF030(a0, a1);
    f12.f = (*(volatile f32 *) (u32) (sp + 112));
    a0 = s1;
    f13.i = f20.i; func_001DF750(a0, f12.f, f13.f);
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 2;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0xcU); if (c_) goto L_001B600C; }
L_001B6040:;
    return;
}
