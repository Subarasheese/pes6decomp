/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_0011D670(f32, f32);
s64 func_00129C20(s64, s64, s64, s64);
void func_001CEA60(s64, s64, s64, s64);
void func_001CEAB0(void);
void func_001CEB90(void);
void func_001CEC30(void);
void func_001CEC60(s64);
void func_001CEC70(void);
void func_001CECC0(s64);
void func_001D3650(s64, s64, s64, s64);
s64 func_00295300(void);

void func_002B7F40(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, f32 fa12, f32 fa13) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    u64 qh_a2 = 0;
    u64 qh_a3 = 0;
    u64 qh_a4 = 0;
    u64 qh_a5 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };
    volatile union { f32 f; s32 i; } f23 = { 0 };
    volatile union { f32 f; s32 i; } f24 = { 0 };
    volatile union { f32 f; s32 i; } f25 = { 0 };
    volatile union { f32 f; s32 i; } f26 = { 0 };
    volatile union { f32 f; s32 i; } f27 = { 0 };
    volatile union { f32 f; s32 i; } f28 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[22];
    s64 sp = (s32) (u32) frame;

    s2 = (s32) 0x590000U;
    s2 = (s32) ((u32) s2 + 0xffffe5b0U);
    v0 = func_00295300();
    if (v0 == 0) goto L_002B8260;
    a0 = 0xa0e8; func_001CECC0(a0);
    func_001CEB90();
    v0 = (s32) 0x3b0000U;
    a0 = (*(volatile s64 *) (u32) (v0 + -16064)); func_001CEC60(a0);
    func_001CEC30();
    func_001CEAB0();
    a0 = 9970; func_001CEA60(a0, a1, a2, a3);
    v0 = (s32) 0x3f800000U;
    s4 = 0;
    f26.i = (s32) v0;
    s1 = (s32) ((u32) sp + 0xa4U);
    f22.i = (s32) 0;
    s5 = (s32) ((u32) sp + 0xa8U);
    v0 = (s32) 0x3f7e0000U;
    v1 = v0 | 0xb852;
    v0 = (s32) 0x3ba30000U;
    v0 = v0 | 0xd700;
    f24.i = (s32) v0;
    f25.i = (s32) v1;
    v0 = (s32) 0x41a00000U;
    f23.i = (s32) v0;
    v0 = (s32) 0x40a00000U;
    f21.i = (s32) v0;
    v0 = (s32) 0x41200000U;
    f20.i = (s32) v0;
L_002B8014:;
    s0 = (*(volatile s32 *) (u32) (s2 + 560));
    if (s0 == 0) goto L_002B8248;
    v1 = (*(volatile s32 *) (u32) (s2 + 4));
    v0 = (*(volatile u8 *) (u32) (v1 + 44));
    if (v0 == 0) goto L_002B8248;
    a0 = (*(volatile s32 *) (u32) v1);
    v0 = 2;
    v1 = (*(volatile u8 *) (u32) (a0 + 1));
    if (v1 != v0) goto L_002B8248;
    v0 = (*(volatile u8 *) (u32) (a0 + 3));
    if (v0 != 0) goto L_002B8248;
    f1.f = (*(volatile f32 *) (u32) (gp + -22064));
    f0.f = (*(volatile f32 *) (u32) s0);
    f12.i = f25.i;
    f27.f = f1.f - f0.f;
    f13.f = f26.f + f27.f; f0.f = func_0011D670(f12.f, f13.f);
    f0.f = f26.f - f0.f;
    f28.f = f0.f / f24.f;
    v0 = func_00129C20(a0, a1, a2, a3);
    { u32 a_ = (u32) (v0 + 16) & ~15U; a5 = *(volatile s64 *) a_; qh_a5 = *(volatile u64 *) (a_ + 8); }
    a1 = (s32) 0x400000U;
    { u32 a_ = (u32) (v0 + 32) & ~15U; a4 = *(volatile s64 *) a_; qh_a4 = *(volatile u64 *) (a_ + 8); }
    a0 = (s32) 0x400000U;
    { u32 a_ = (u32) (v0 + 48) & ~15U; a3 = *(volatile s64 *) a_; qh_a3 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) 0x400000U;
    { u32 a_ = (u32) (v0 + 0) & ~15U; a2 = *(volatile s64 *) a_; qh_a2 = *(volatile u64 *) (a_ + 8); }
    s3 = 0;
    v0 = (s32) 0x400000U;
    { u32 a_ = (u32) (a1 + -20384) & ~15U; *(volatile u64 *) a_ = (u64) a2; *(volatile u64 *) (a_ + 8) = qh_a2; }
    { u32 a_ = (u32) (a0 + -20368) & ~15U; *(volatile u64 *) a_ = (u64) a5; *(volatile u64 *) (a_ + 8) = qh_a5; }
    { u32 a_ = (u32) (v1 + -20352) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; }
    { u32 a_ = (u32) (v0 + -20336) & ~15U; *(volatile u64 *) a_ = (u64) a3; *(volatile u64 *) (a_ + 8) = qh_a3; }
L_002B80B8:;
    v0 = (s32) ((u32) s3 << 2);
    v0 = (s32) ((u32) v0 + (u32) s3);
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    f2.f = f27.f - f0.f;
    fcc = f2.f < f23.f;
    if (!fcc) goto L_002B8100;
    f0.f = (*(volatile f32 *) (u32) (gp + -32140));
    f0.f = f23.f * f0.f;
    f0.f = f0.f * f2.f;
    f1.f = f0.f / f23.f;
    goto L_002B8110;
L_002B8100:;
    f1.f = (*(volatile f32 *) (u32) (gp + -32140));
    f0.f = f2.f - f23.f;
    acc = f23.f * f1.f;
    f1.f = acc - f1.f * f0.f;
L_002B8110:;
    fcc = f1.f < f22.f;
    if (fcc) goto L_002B8238;
    v0 = (s32) 0x4f000000U;
    f0.i = (s32) v0;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_002B8144; }
    f0.i = (s32) f1.f;
    v1 = f0.i;
    v1 = v1 & 0xff; goto L_002B815C;
L_002B8144:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    v1 = v1 | v0;
    v1 = v1 & 0xff;
L_002B815C:;
    f0.f = (*(volatile f32 *) (u32) (gp + -32144));
    f1.f = f21.f + f2.f;
    f0.f = f0.f * f1.f;
    fcc = f0.f < f22.f;
    { s32 c_ = fcc; (*(volatile u8 *) (u32) (gp + -32133)) = (u8) v1; if (c_) goto L_002B8238; }
    fcc = f0.f <= f20.f;
    if (fcc) goto L_002B8188;
    f0.i = f20.i;
L_002B8188:;
    v0 = (s32) 0x3b0000U;
    (*(volatile f32 *) (u32) (v0 + -15980)) = f0.f;
    v1 = (s32) ((u32) sp + 0xa0U);
    v0 = (s32) 0x3b0000U;
    (*(volatile f32 *) (u32) (v0 + -15984)) = f0.f;
    v0 = (s32) ((u32) s3 << 4);
    v0 = (s32) ((u32) s0 + (u32) v0);
    __asm__ volatile("lqc2 $vf4, 80(%0)" : : "r"((u32) v0) : "memory");
    v0 = f28.i;
    __asm__ volatile("qmtc2.ni %0, $vf5" : : "r"((s32) v0));
    __asm__ volatile("vmulx.xyzw $vf6, $vf4, $vf5x");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) v1) : "memory");
    a0 = (s32) ((u32) s3 << 2);
    v0 = (s32) 0x3b0000U;
    a2 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0xffffc1b0U);
    a1 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + (u32) a0);
    a3 = (s32) ((u32) s0 + (u32) a0);
    f5.f = (*(volatile f32 *) (u32) (s0 + 64));
    a0 = (s32) 0x3b0000U;
    f4.f = (*(volatile f32 *) (u32) (sp + 160));
    v1 = (s32) 0x3b0000U;
    f2.f = (*(volatile f32 *) (u32) v0);
    a0 = (s32) ((u32) a0 + 0xffffc180U);
    f3.f = (*(volatile f32 *) (u32) s1);
    f1.f = (*(volatile f32 *) (u32) s5);
    f0.i = (s32) 0;
    f4.f = f5.f + f4.f;
    v0 = (s32) 0x3b0000U;
    (*(volatile f32 *) (u32) (a2 + -16000)) = f4.f;
    f4.f = (*(volatile f32 *) (u32) (s0 + 68));
    f3.f = f4.f + f3.f;
    (*(volatile f32 *) (u32) (a1 + -15996)) = f3.f;
    f3.f = (*(volatile f32 *) (u32) (s0 + 72));
    f1.f = f3.f + f1.f;
    (*(volatile f32 *) (u32) (v1 + -15992)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (a3 + 160));
    acc = f0.f + f1.f;
    f0.f = acc + f27.f * f2.f;
    (*(volatile f32 *) (u32) (v0 + -15976)) = f0.f; func_001D3650(a0, a1, a2, a3);
L_002B8238:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 5;
    if (v0 != 0) goto L_002B80B8;
L_002B8248:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 23;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x240U); if (c_) goto L_002B8014; }
    func_001CEC70();
L_002B8260:;
    return;
}
