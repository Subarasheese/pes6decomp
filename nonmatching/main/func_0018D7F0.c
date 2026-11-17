/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0019EF00(s64, s64, s64, s64, s64, s64, s64, s64);
s64 func_0019FD20(s64);
s64 func_0019FD30(s64);
s64 func_001A03D0(s64, s64, s64, s64);
s64 func_001CF050(s64);
s64 func_001D3090(s64);
void memset(s64, s64, s64);

void func_0018D7F0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    u64 qh_a0 = 0;
    u64 qh_a1 = 0;
    u64 qh_a2 = 0;
    u64 qh_a3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s64 frame[30];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x390000U;
    v1 = (s32) ((u32) sp + 0xd8U);
    f3.f = (*(volatile f32 *) (u32) (v0 + 30104));
    v0 = (s32) 0x390000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + 30108));
    (*(volatile f32 *) (u32) (sp + 232)) = f3.f;
    v0 = (s32) 0x390000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 30112));
    (*(volatile f32 *) (u32) (sp + 236)) = f2.f;
    v0 = (s32) 0x390000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 30116));
    (*(volatile f32 *) (u32) (sp + 224)) = f1.f;
    v0 = 8;
    { s32 c_ = v1 == 0; (*(volatile f32 *) (u32) (sp + 228)) = f0.f; if (c_) goto L_0018D870; }
L_0018D854:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_0018D854;
L_0018D870:;
    a0 = 0; v0 = func_001A03D0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (sp + 216)) = (u32) v0;
    a0 = 1; v0 = func_001A03D0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (sp + 220)) = (u32) v0;
    s3 = (s32) 0x520000U;
    v0 = (s32) 0x370000U;
    s5 = 0;
    { u32 a_ = (u32) (v0 + 23344) & ~15U; a3 = *(volatile s64 *) a_; qh_a3 = *(volatile u64 *) (a_ + 8); }
    s3 = (s32) ((u32) s3 + 0x150U);
    s6 = (s32) ((u32) sp + 0xe8U);
    s7 = (s32) ((u32) sp + 0xe0U);
    v0 = (s32) 0x370000U;
    { u32 a_ = (u32) (sp + 144) & ~15U; *(volatile u64 *) a_ = (u64) a3; *(volatile u64 *) (a_ + 8) = qh_a3; }
    { u32 a_ = (u32) (v0 + 23360) & ~15U; a2 = *(volatile s64 *) a_; qh_a2 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) 0x370000U;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) a2; *(volatile u64 *) (a_ + 8) = qh_a2; }
    { u32 a_ = (u32) (v0 + 23376) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) 0x370000U;
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) a1; *(volatile u64 *) (a_ + 8) = qh_a1; }
    { u32 a_ = (u32) (v0 + 23392) & ~15U; a0 = *(volatile s64 *) a_; qh_a0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) 0xbe4c0000U;
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; }
    v1 = v0 | 0xcccd;
    v0 = (s32) 0x3e4c0000U;
    (*(volatile u32 *) (u32) (sp + 144)) = (u32) v1;
    v0 = v0 | 0xcccd;
    (*(volatile u32 *) (u32) (sp + 164)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 184)) = (u32) v0;
L_0018D8E8:;
    a0 = s3;
    a1 = 0;
    a2 = 96; memset(a0, a1, a2);
    a3 = (*(volatile s32 *) (u32) s6);
    a2 = (*(volatile s32 *) (u32) s7);
    { u32 a_ = (u32) (sp + 144) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (sp + 160) & ~15U; a0 = *(volatile s64 *) a_; qh_a0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (sp + 176) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u32 *) (u32) s3) = (u32) 0;
    (*(volatile u32 *) (u32) (s3 + 20)) = (u32) a3;
    (*(volatile u32 *) (u32) (s3 + 24)) = (u32) a2;
    { u32 a_ = (u32) (s3 + 32) & ~15U; *(volatile u64 *) a_ = (u64) a1; *(volatile u64 *) (a_ + 8) = qh_a1; }
    { u32 a_ = (u32) (s3 + 48) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; }
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (s3 + 64) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    { s32 c_ = s5 == 0; { u32 a_ = (u32) (s3 + 80) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } if (c_) goto L_0018D9B8; }
L_0018D930:;
    s4 = 0;
    s2 = (s32) ((u32) sp + 0xd8U);
    s1 = s3;
L_0018D940:;
    a0 = (*(volatile s32 *) (u32) s2);
    if (a0 == 0) goto L_0018D9E0;
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) a0; v0 = func_0019FD30(a0);
    a0 = v0; v0 = func_001CF050(a0);
    a0 = (*(volatile s32 *) (u32) s2);
    s0 = (s32) ((u32) v0 + 0x3b0U); v0 = func_0019FD20(a0);
    a0 = v0; v0 = func_001D3090(a0);
    v0 = (s32) ((u32) s0 + (u32) v0);
    (*(volatile u32 *) (u32) (s1 + 12)) = (u32) v0;
L_0018D978:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 2;
    s2 = (s32) ((u32) s2 + 0x4U);
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_0018D940; }
    s5 = (s32) ((u32) s5 + 0x1U);
    s3 = (s32) ((u32) s3 + 0x60U);
    v0 = s5 < 2;
    s6 = (s32) ((u32) s6 + 0x4U);
    { s32 c_ = v0 != 0; s7 = (s32) ((u32) s7 + 0x4U); if (c_) goto L_0018D8E8; }
    func_0019EF00(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (v1 + 320)) = (u32) 0; goto L_0018D9F0;
L_0018D9B8:;
    f0.f = (*(volatile f32 *) (u32) (s3 + 32));
    v0 = (s32) 0xbf800000U;
    f1.i = (s32) v0;
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (s3 + 32)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s3 + 72));
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (s3 + 72)) = f0.f; goto L_0018D930;
L_0018D9E0:;
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) 0;
    (*(volatile u32 *) (u32) (s1 + 12)) = (u32) 0; goto L_0018D978;
L_0018D9F0:;
    return;
}
