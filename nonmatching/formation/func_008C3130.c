/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001F1810(s64, s64);
void func_001F1860(s64, s64);
void func_001F18D0(s64, s64);
s64 func_001F1A20(s64, s64, s64, s64);
void func_001F3CA0(s64, s64, s64, s64);
void func_001F3D10(s64, s64);
void func_001F3D80(s64, s64, s64);
s64 func_002C9BE0(s64);
s64 func_002C9C40(s64);
s64 func_002DB830(s64);
void func_008B2B00(s64, s64, s64, s64);
void func_008B2B80(s64, s64, s64);
s64 func_008C5050(s64);

void func_008C3130(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s64 hi = 0, lo = 0;
    s64 frame[38];
    s64 sp = (s32) (u32) frame;

    fp = a2;
    s2 = a1;
    s1 = a0;
    v1 = (*(volatile s32 *) (u32) (a0 + 92));
    { s32 c_ = v1 == 0; (*(volatile u32 *) (u32) (sp + 204)) = (u32) a3; if (c_) goto L_008C33F8; }
    s7 = (*(volatile s32 *) (u32) (s1 + 28));
    if (s7 != 0) { a0 = s7; goto L_008C318C; }
    goto L_008C33FC;
    a0 = s7;
L_008C318C:;
    func_001F3CA0(a0, a1, a2, a3);
    a0 = 0;
    v1 = s1;
L_008C319C:;
    (*(volatile u32 *) (u32) (v1 + 32)) = (u32) 0;
    a0 = (s32) ((u32) a0 + 0x6U);
    (*(volatile u32 *) (u32) (v1 + 36)) = (u32) 0;
    v0 = a0 < 12;
    (*(volatile u32 *) (u32) (v1 + 40)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + 44)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + 48)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + 52)) = (u32) 0;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x18U); if (c_) goto L_008C319C; }
    a0 = s2;
    (*(volatile u32 *) (u32) (sp + 296)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 300)) = (u32) 0; v0 = func_002C9C40(a0);
    a0 = (*(volatile s32 *) (u32) (s1 + 80));
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_002DB830(a0);
    s0 = v0 & 0xff;
    a0 = s2; v0 = func_002C9BE0(a0);
    s6 = s2 & 0xff;
    { s32 c_ = s6 == 0; a1 = v0 & 0xff; if (c_) goto L_008C320C; }
    v1 = 9;
    if (s6 == v1) { a0 = s0 & 0xff; goto L_008C3210; }
    v1 = (s32) ((u32) a1 + 0xffffffffU);
    a1 = v1 & 0xff;
L_008C320C:;
    a0 = s0 & 0xff;
L_008C3210:;
    v1 = a1 & 0xff;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    s5 = (s32) ((u32) a0 + 0xffffffffU);
    s3 = -1;
    s4 = (s32) ((u32) s1 + 0xfffffffcU);
L_008C3224:;
    if (s5 < 0) goto L_008C33E0;
    { u32 a_ = (u32) (sp + 160) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    at = v1 < s5;
    if (at != 0) goto L_008C33F8;
    f3.f = (*(volatile f32 *) (u32) (s1 + 8));
    s0 = 1;
    f2.f = (*(volatile f32 *) (u32) (s1 + 12));
    f1.f = (*(volatile f32 *) (u32) (s1 + 16));
    f0.f = (*(volatile f32 *) (u32) (s1 + 20));
    (*(volatile f32 *) (u32) (sp + 272)) = f3.f;
    (*(volatile f32 *) (u32) (sp + 276)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 280)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 284)) = f0.f;
    v0 = (*(volatile u8 *) (u32) (s1 + 4));
    f0.f = (*(volatile f32 *) (u32) (sp + 276));
    { s64 m_ = (s64) (s32) s3 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    f0.f = f0.f + f1.f;
    { s32 c_ = s6 == 0; (*(volatile f32 *) (u32) (sp + 276)) = f0.f; if (c_) goto L_008C3290; }
    v0 = 9;
    if (s6 != v0) goto L_008C32E8;
L_008C3290:;
    a2 = fp & 0xff;
    a0 = (s32) ((u32) sp + 0xd0U);
    a1 = s5; func_008B2B80(a0, a1, a2);
    if (s5 == 0) goto L_008C3370;
    v0 = 9;
    if (s5 == v0) goto L_008C3370;
    f2.f = (*(volatile f32 *) (u32) (sp + 280));
    v0 = (s32) 0x40000000U;
    f3.i = (s32) v0;
    s0 = 0;
    v0 = (s32) 0x41c00000U;
    f2.f = f2.f / f3.f;
    f1.i = (s32) v0;
    f1.f = f2.f - f1.f;
    f0.f = (*(volatile f32 *) (u32) (sp + 272));
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (sp + 272)) = f0.f; goto L_008C3370;
L_008C32E8:;
    v0 = (s32) ((u32) s5 << 1);
    v1 = (s32) ((u32) v0 + (u32) s5);
    v0 = (*(volatile u8 *) (u32) (sp + 204));
    a3 = v0;
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s2 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile u8 *) (u32) s2);
    a2 = (*(volatile u8 *) (u32) (s2 + 2));
    a0 = (s32) ((u32) sp + 0xd0U); func_008B2B00(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) s2);
    at = v0 < 23;
    if (at == 0) goto L_008C3370;
    f2.f = (*(volatile f32 *) (u32) (sp + 280));
    v0 = (s32) 0x40000000U;
    f3.i = (s32) v0;
    v1 = (*(volatile s8 *) (u32) (sp + 208));
    v0 = (s32) 0x41600000U;
    s0 = 0;
    f2.f = f2.f / f3.f;
    f1.i = (s32) v0;
    f1.f = f2.f - f1.f;
    v0 = 67;
    f0.f = (*(volatile f32 *) (u32) (sp + 272));
    f1.f = f0.f + f1.f;
    { s32 c_ = v1 != v0; (*(volatile f32 *) (u32) (sp + 272)) = f1.f; if (c_) goto L_008C3370; }
    v0 = (s32) 0x3f800000U;
    f0.i = (s32) v0;
    f0.f = f1.f - f0.f;
    (*(volatile f32 *) (u32) (sp + 272)) = f0.f;
L_008C3370:;
    a0 = s7;
    a1 = 23;
    a2 = (s32) ((u32) sp + 0x128U);
    a3 = (s32) ((u32) sp + 0xd0U); v0 = func_001F1A20(a0, a1, a2, a3);
    s2 = v0;
    { s32 c_ = s0 == 0; (*(volatile u32 *) (u32) (s4 + 36)) = (u32) s2; if (c_) goto L_008C33A0; }
    a0 = s2;
    a1 = 17; func_001F1860(a0, a1);
L_008C33A0:;
    a0 = s2;
    a1 = 1; func_001F3D10(a0, a1);
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x110U);
    a2 = 0; func_001F3D80(a0, a1, a2);
    a0 = 1; v0 = func_008C5050(a0);
    a1 = v0;
    a0 = s2; func_001F18D0(a0, a1);
    a0 = s2;
    a1 = 1; func_001F1810(a0, a1);
L_008C33E0:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < 11;
    s5 = (s32) ((u32) s5 + 0x1U);
    { s32 c_ = v1 != 0; s4 = (s32) ((u32) s4 + 0x4U); if (c_) goto L_008C3224; }
L_008C33F8:;
L_008C33FC:;
    return;
}
