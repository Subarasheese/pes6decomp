/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_00131B60(f32);
void func_0027B6B0(s64);
void func_00296330(s64, s64, s64, s64, s64, s64);

void func_00295930(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, f32 fa12) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    u64 qh_a0 = 0;
    u64 qh_a1 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f6 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    f32 acc = 0;
    s64 frame[32];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x3b0000U;
    s4 = 0;
    s3 = (s32) ((u32) sp + 0xe0U);
    s5 = (s32) ((u32) s3 + 0x8U);
    s1 = (s32) ((u32) s3 + 0x4U);
    { u32 a_ = (u32) (v0 + -17600) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    s6 = (s32) ((u32) s3 + 0xcU);
    s7 = (s32) ((u32) s3 + 0x10U);
    fp = (s32) ((u32) s3 + 0x14U);
    v0 = (s32) 0x3b0000U;
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) a1; *(volatile u64 *) (a_ + 8) = qh_a1; }
    { u32 a_ = (u32) (v0 + -17584) & ~15U; a0 = *(volatile s64 *) a_; qh_a0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) 0x3b0000U;
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; }
    { u32 a_ = (u32) (v0 + -17568) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) 0x3b0000U;
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    { u32 a_ = (u32) (v0 + -17552) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (sp + 240) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) s3 + 0x18U);
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) s3 + 0x1cU);
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
L_002959B8:;
    v0 = (s32) ((u32) sp + 0xc4U);
    f5.f = (*(volatile f32 *) (u32) v0);
    f6.f = (*(volatile f32 *) (u32) (sp + 192));
    v0 = (s32) ((u32) sp + 0xc8U);
    f4.f = (*(volatile f32 *) (u32) v0);
    (*(volatile f32 *) (u32) s3) = f6.f;
    (*(volatile f32 *) (u32) s1) = f5.f;
    v0 = (s32) 0x42b00000U;
    f3.i = (s32) v0;
    (*(volatile f32 *) (u32) s5) = f4.f;
    v0 = (s32) ((u32) sp + 0xccU);
    f2.f = (*(volatile f32 *) (u32) v0);
    v0 = (s32) ((u32) sp + 0xd0U);
    f1.f = (*(volatile f32 *) (u32) v0);
    (*(volatile f32 *) (u32) s6) = f2.f;
    v0 = (s32) ((u32) sp + 0xd4U);
    f0.f = (*(volatile f32 *) (u32) v0);
    (*(volatile f32 *) (u32) s7) = f1.f;
    v0 = (s32) ((u32) sp + 0xd8U);
    f1.f = (*(volatile f32 *) (u32) v0);
    (*(volatile f32 *) (u32) fp) = f0.f;
    v0 = (s32) ((u32) sp + 0xdcU);
    f0.f = (*(volatile f32 *) (u32) v0);
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    (*(volatile f32 *) (u32) v0) = f1.f;
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { s32 c_ = s4 < 0; (*(volatile f32 *) (u32) v0) = f0.f; if (c_) goto L_00295A34; }
    f0.i = (s32) s4;
    f2.f = (f32) f0.i; goto L_00295A50;
L_00295A34:;
    v1 = (s32) ((u32) s4 >> 1);
    v0 = s4 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00295A50:;
    f1.f = (*(volatile f32 *) (u32) s3);
    s0 = s4 & 0xff;
    f0.i = (s32) 0;
    v0 = (s32) ((u32) s0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v1 = (s32) 0x5a0000U;
    a0 = (s32) ((u32) v0 << 5);
    v1 = (s32) ((u32) v1 + 0x24c0U);
    v0 = s0 & 0x3;
    s2 = (s32) ((u32) v1 + (u32) a0);
    acc = f0.f + f1.f;
    f0.f = acc + f3.f * f2.f;
    { s32 c_ = s0 >= 0; (*(volatile f32 *) (u32) s3) = f0.f; if (c_) goto L_00295A94; }
    if (v0 == 0) goto L_00295A94;
    v0 = (s32) ((u32) v0 + 0xfffffffcU);
L_00295A94:;
    f12.i = (s32) 0;
    a1 = v0 & 0xff;
    a0 = s2;
    a2 = 255;
    a3 = 0;
    a4 = s3;
    a5 = 1; func_00296330(a0, a1, a2, a3, a4, a5);
    v0 = (*(volatile s32 *) (u32) (gp + -32420));
    f12.f = (*(volatile f32 *) (u32) v0); f0.f = func_00131B60(f12.f);
    a0 = (*(volatile s32 *) (u32) s2);
    f12.i = f0.i; func_0027B6B0(a0);
    v0 = (s32) ((u32) sp + 0xe4U);
    v1 = (s32) ((u32) s0 + 0x4U);
    f3.f = (*(volatile f32 *) (u32) v0);
    a1 = (s32) ((u32) s0 + 0x1U);
    v0 = (s32) 0x42c80000U;
    f2.i = (s32) v0;
    v0 = (s32) 0x43160000U;
    f0.i = (s32) v0;
    f2.f = f3.f - f2.f;
    v0 = (s32) ((u32) sp + 0xe8U);
    f1.f = (*(volatile f32 *) (u32) v0);
    v0 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) 0x5a0000U;
    v1 = (s32) ((u32) v1 << 5);
    v0 = (s32) ((u32) v0 + 0x24c0U);
    a0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) sp + 0xe4U);
    v1 = a1 & 0x3;
    (*(volatile f32 *) (u32) v0) = f2.f;
    f0.f = f1.f - f0.f;
    v0 = (s32) ((u32) sp + 0xe8U);
    { s32 c_ = a1 >= 0; (*(volatile f32 *) (u32) v0) = f0.f; if (c_) goto L_00295B38; }
    if (v1 == 0) goto L_00295B38;
    v1 = (s32) ((u32) v1 + 0xfffffffcU);
L_00295B38:;
    f12.i = (s32) 0;
    a1 = v1 & 0xff;
    a2 = 255;
    a3 = 0;
    a4 = s3;
    a5 = 1; func_00296330(a0, a1, a2, a3, a4, a5);
    v0 = (*(volatile s32 *) (u32) (gp + -32420));
    f12.f = (*(volatile f32 *) (u32) v0); f0.f = func_00131B60(f12.f);
    v0 = (s32) ((u32) s0 << 1);
    v1 = (s32) ((u32) v0 + (u32) s0);
    v0 = (s32) 0x5a0000U;
    v1 = (s32) ((u32) v1 << 5);
    v0 = (s32) ((u32) v0 + 0x24c0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) (v0 + 384));
    f12.i = f0.i; func_0027B6B0(a0);
    v1 = (s32) ((u32) s4 + 0x1U);
    s4 = v1 & 0xff;
    v1 = s4 < 4;
    if (v1 != 0) goto L_002959B8;
    return;
}
