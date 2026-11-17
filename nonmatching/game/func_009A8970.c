/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);

void func_009A8970(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f6 = { 0 };
    volatile union { f32 f; s32 i; } f7 = { 0 };
    volatile union { f32 f; s32 i; } f8 = { 0 };
    volatile union { f32 f; s32 i; } f9 = { 0 };
    volatile union { f32 f; s32 i; } f10 = { 0 };
    volatile union { f32 f; s32 i; } f11 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[38];
    s64 sp = (s32) (u32) frame;

    v1 = (s32) 0xcb0000U;
    f4.f = (*(volatile f32 *) (u32) (v1 + -23680));
    a2 = (s64) ((u64) a2 << 56);
    a2 = a2 >> 56;
    a4 = (s32) ((u32) sp + 0x114U);
    a3 = (s32) ((u32) sp + 0x118U);
    s5 = a0;
    v1 = (s32) 0xcb0000U;
    f2.f = (*(volatile f32 *) (u32) (v1 + -23676));
    a0 = -1;
    f5.f = (*(volatile f32 *) (u32) a1);
    f3.f = (*(volatile f32 *) (u32) (a1 + 4));
    v1 = (s32) 0xcb0000U;
    f1.f = (*(volatile f32 *) (u32) (a1 + 8));
    f0.f = (*(volatile f32 *) (u32) (v1 + -23672));
    f4.f = f5.f - f4.f;
    f2.f = f3.f - f2.f;
    f0.f = f1.f - f0.f;
    (*(volatile f32 *) (u32) (sp + 272)) = f4.f;
    (*(volatile f32 *) (u32) a4) = f2.f;
    { s32 c_ = a2 == a0; (*(volatile f32 *) (u32) a3) = f0.f; if (c_) goto L_009A8A50; }
L_009A89F8:;
    v1 = (s32) ((u32) s5 + 0x24U);
    s4 = 0;
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    s3 = s5;
    v1 = (s32) ((u32) s5 + 0x14U);
    s2 = (s32) ((u32) s5 + 0x2cU);
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    s1 = (s32) ((u32) s5 + 0x30U);
    v1 = (s32) ((u32) s5 + 0x18U);
    fp = (s32) ((u32) s5 + 0x20U);
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
L_009A8A24:;
    s0 = (*(volatile s32 *) (u32) s3);
    v1 = (*(volatile u8 *) (u32) (s0 + 28));
    if (v1 != 0) { f3.f = (*(volatile f32 *) (u32) (s0 + 8)); goto L_009A8A80; }
L_009A8A38:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = s4 < 4;
    { s32 c_ = v1 != 0; s3 = (s32) ((u32) s3 + 0x4U); if (c_) goto L_009A8A24; }
    goto L_009A8C40;
L_009A8A50:;
    f1.f = (*(volatile f32 *) (u32) (sp + 276));
    v1 = (s32) 0xbf800000U;
    f0.f = (*(volatile f32 *) (u32) (sp + 280));
    f3.i = (s32) v1;
    f2.f = f4.f * f3.f;
    f1.f = f1.f * f3.f;
    f0.f = f0.f * f3.f;
    (*(volatile f32 *) (u32) (sp + 272)) = f2.f;
    (*(volatile f32 *) (u32) a4) = f1.f;
    (*(volatile f32 *) (u32) a3) = f0.f; goto L_009A89F8;
L_009A8A80:;
    v0 = (s32) ((u32) sp + 0xf4U);
    f2.f = (*(volatile f32 *) (u32) s2);
    s6 = (s32) ((u32) s0 + 0x8U);
    f5.f = (*(volatile f32 *) (u32) (s0 + 4));
    s7 = (s32) ((u32) s0 + 0xcU);
    f4.f = (*(volatile f32 *) (u32) (s5 + 40));
    f1.f = (*(volatile f32 *) (u32) (s0 + 12));
    f0.f = (*(volatile f32 *) (u32) s1);
    f2.f = f3.f - f2.f;
    f4.f = f5.f - f4.f;
    (*(volatile f32 *) (u32) v0) = f2.f;
    acc = f2.f * f2.f;
    v0 = (s32) ((u32) sp + 0xf8U);
    f0.f = f1.f - f0.f;
    acc = acc + f4.f * f4.f;
    (*(volatile f32 *) (u32) (sp + 240)) = f4.f;
    (*(volatile f32 *) (u32) v0) = f0.f;
    f12.f = acc + f0.f * f0.f; f0.f = func_001CD9E0();
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    f20.i = f0.i;
    f3.f = (*(volatile f32 *) (u32) fp);
    f2.f = (*(volatile f32 *) (u32) s2);
    f5.f = (*(volatile f32 *) (u32) (s5 + 28));
    f4.f = (*(volatile f32 *) (u32) (s5 + 40));
    f0.f = (*(volatile f32 *) (u32) s1);
    f1.f = (*(volatile f32 *) (u32) v0);
    f2.f = f3.f - f2.f;
    f4.f = f5.f - f4.f;
    v0 = (s32) ((u32) sp + 0xe4U);
    (*(volatile f32 *) (u32) v0) = f2.f;
    acc = f2.f * f2.f;
    v0 = (s32) ((u32) sp + 0xe8U);
    f0.f = f1.f - f0.f;
    acc = acc + f4.f * f4.f;
    (*(volatile f32 *) (u32) (sp + 224)) = f4.f;
    (*(volatile f32 *) (u32) v0) = f0.f;
    f12.f = acc + f0.f * f0.f; f0.f = func_001CD9E0();
    v1 = (s32) 0x3e870000U;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = v1 | 0xae14;
    v1 = (s32) 0x3f590000U;
    v1 = v1 | 0x999a;
    f7.i = (s32) v1;
    f9.f = f20.f * f0.f;
    v1 = (s32) ((u32) sp + 0xe8U);
    f16.f = (*(volatile f32 *) (u32) v1);
    f14.f = (*(volatile f32 *) (u32) (sp + 224));
    f13.f = (*(volatile f32 *) (u32) (sp + 240));
    f6.f = (*(volatile f32 *) (u32) (s5 + 16));
    f11.i = (s32) 0;
    f8.i = (s32) a1;
    v1 = (s32) ((u32) sp + 0xf8U);
    f15.f = (*(volatile f32 *) (u32) v1);
    f3.f = (*(volatile f32 *) (u32) (s0 + 4));
    f2.f = (*(volatile f32 *) (u32) s6);
    f0.f = (*(volatile f32 *) (u32) s7);
    f1.f = (*(volatile f32 *) (u32) (sp + 272));
    v1 = (s32) ((u32) sp + 0xe4U);
    f12.f = (*(volatile f32 *) (u32) v1);
    v1 = (s32) ((u32) sp + 0xf4U);
    f10.f = (*(volatile f32 *) (u32) v1);
    acc = f12.f * f10.f;
    { u32 a_ = (u32) (sp + 192) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    acc = acc + f14.f * f13.f;
    f10.f = acc + f16.f * f15.f;
    f9.f = f10.f / f9.f;
    f5.f = (*(volatile f32 *) (u32) v1);
    acc = f11.f + f7.f;
    f7.f = acc + f8.f * f9.f;
    f6.f = f6.f * f7.f;
    { u32 a_ = (u32) (sp + 176) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    f8.f = f6.f + f3.f;
    f4.f = (*(volatile f32 *) (u32) v1);
    f5.f = f5.f * f7.f;
    f3.f = f4.f * f7.f;
    v1 = (s32) ((u32) sp + 0x124U);
    f7.f = f5.f + f2.f;
    f6.f = f3.f + f0.f;
    (*(volatile f32 *) (u32) v1) = f7.f;
    v1 = (s32) ((u32) sp + 0x128U);
    (*(volatile f32 *) (u32) v1) = f6.f;
    v1 = (s32) ((u32) sp + 0x118U);
    f2.f = (*(volatile f32 *) (u32) v1);
    f4.f = (*(volatile f32 *) (u32) (a0 + 4));
    f5.f = (*(volatile f32 *) (u32) a0);
    f3.f = (*(volatile f32 *) (u32) (a0 + 8));
    (*(volatile f32 *) (u32) (sp + 288)) = f8.f;
    v1 = (s32) ((u32) sp + 0x114U);
    f0.f = (*(volatile f32 *) (u32) v1);
    f4.f = f7.f - f4.f;
    f5.f = f8.f - f5.f;
    v1 = (s32) ((u32) sp + 0x104U);
    acc = f0.f * f4.f;
    (*(volatile f32 *) (u32) v1) = f4.f;
    f3.f = f6.f - f3.f;
    v1 = (s32) ((u32) sp + 0x108U);
    acc = acc + f1.f * f5.f;
    f0.f = acc + f2.f * f3.f;
    fcc = f0.f < f11.f;
    (*(volatile f32 *) (u32) (sp + 256)) = f5.f;
    { s32 c_ = fcc; (*(volatile f32 *) (u32) v1) = f3.f; if (c_) goto L_009A8A38; }
    f1.f = (*(volatile f32 *) (u32) (sp + 292));
    f0.f = (*(volatile f32 *) (u32) (sp + 296));
    (*(volatile f32 *) (u32) a0) = f8.f;
    (*(volatile f32 *) (u32) (a0 + 4)) = f1.f;
    (*(volatile f32 *) (u32) (a0 + 8)) = f0.f;
    (*(volatile u8 *) (u32) (s0 + 29)) = (u8) 0; goto L_009A8A38;
L_009A8C40:;
    return;
}
