/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001040A0(s64, s64, s64, s64, f32);
s64 func_009B3070(s64, s64);

void func_00B345F0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, f32 fa12, f32 fa13, f32 fa14) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    u64 qh_a2 = 0;
    u64 qh_a3 = 0;
    u64 qh_a4 = 0;
    u64 qh_a5 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 hi = 0, lo = 0;
    s64 frame[26];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x370000U;
    a1 = 1;
    v1 = -1;
    s2 = a0;
    s1 = (s32) ((u32) sp + 0xc0U);
    s0 = (s32) ((u32) sp + 0xc8U);
    { u32 a_ = (u32) (v0 + 23344) & ~15U; a5 = *(volatile s64 *) a_; qh_a5 = *(volatile u64 *) (a_ + 8); }
    f20.i = f13.i;
    v0 = (s32) 0x370000U;
    { u32 a_ = (u32) (sp + 144) & ~15U; *(volatile u64 *) a_ = (u64) a5; *(volatile u64 *) (a_ + 8) = qh_a5; }
    { u32 a_ = (u32) (v0 + 23360) & ~15U; a4 = *(volatile s64 *) a_; qh_a4 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (sp + 80) & ~15U; *(volatile u64 *) a_ = (u64) a5; *(volatile u64 *) (a_ + 8) = qh_a5; }
    v0 = (s32) 0x370000U;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; }
    { u32 a_ = (u32) (v0 + 23376) & ~15U; a3 = *(volatile s64 *) a_; qh_a3 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (sp + 96) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; }
    v0 = (s32) 0x370000U;
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) a3; *(volatile u64 *) (a_ + 8) = qh_a3; }
    { u32 a_ = (u32) (v0 + 23392) & ~15U; a2 = *(volatile s64 *) a_; qh_a2 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (sp + 128) & ~15U; *(volatile u64 *) a_ = (u64) a2; *(volatile u64 *) (a_ + 8) = qh_a2; }
    v0 = (s32) 0x42c80000U;
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) a2; *(volatile u64 *) (a_ + 8) = qh_a2; }
    f1.i = (s32) v0;
    a2 = (*(volatile s32 *) (u32) a0);
    f0.f = f1.f * f14.f;
    v0 = (s32) 0x3f800000U;
    a2 = (*(volatile s32 *) (u32) (a2 + 4));
    a2 = (*(volatile u8 *) (u32) (a2 + 45));
    if (a2 != 0) a1 = v1;
    (*(volatile u32 *) (u32) (sp + 204)) = (u32) v0;
    (*(volatile f32 *) (u32) s0) = f0.f;
    (*(volatile u32 *) (u32) (sp + 196)) = (u32) 0;
    f0.i = (s32) a1;
    f0.f = (f32) f0.i;
    f0.f = f12.f * f0.f;
    f0.f = f1.f * f0.f;
    (*(volatile f32 *) (u32) s1) = f0.f;
    v0 = (*(volatile s32 *) (u32) a0);
    a1 = (*(volatile u16 *) (u32) (v0 + 38));
    at = a1 < 16385;
    { s32 c_ = at != 0; { u32 a_ = (u32) (sp + 112) & ~15U; *(volatile u64 *) a_ = (u64) a3; *(volatile u64 *) (a_ + 8) = qh_a3; } if (c_) goto L_00B34780; }
    at = 0xc000;
    at = a1 < at;
    if (at == 0) goto L_00B34780;
    a0 = 0xc000; v0 = func_009B3070(a0, a1);
    a0 = v0 & 0xffff;
    v1 = (s32) ((u32) a0 << 4);
    v0 = (s32) 0x80000000U;
    a0 = (s32) ((u32) v1 - (u32) a0);
    v0 = v0 | 0x1;
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 - (u32) a0);
    a0 = (s32) ((u32) v1 << 3);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) a0 >> 31);
    v0 = hi;
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) v0 >> 15;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) 0 - (u32) v0);
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
L_00B34718:;
    v0 = (s32) 0x3c8e0000U;
    a0 = (s32) ((u32) sp + 0x90U);
    v0 = v0 | 0xfa35;
    a1 = a0;
    f0.i = (s32) v0;
    f12.f = f1.f * f0.f; func_001040A0(a0, a1, a2, a3, f12.f);
    v1 = (s32) 0x42c80000U;
    a1 = (*(volatile s32 *) (u32) s2);
    f1.i = (s32) v1;
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.i = f20.i ^ (s32) 0x80000000U;
    f0.f = f1.f * f0.f;
    f2.f = (*(volatile f32 *) (u32) s1);
    f1.f = (*(volatile f32 *) (u32) (a1 + 224));
    f3.f = (*(volatile f32 *) (u32) s0);
    f1.f = f1.f + f2.f;
    (*(volatile f32 *) (u32) (a0 + 16)) = f1.f;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile f32 *) (u32) (v1 + 20)) = f0.f;
    a0 = (*(volatile s32 *) (u32) s2);
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (a0 + 232));
    f0.f = f0.f + f3.f;
    (*(volatile f32 *) (u32) (v1 + 24)) = f0.f; goto L_00B347D0;
L_00B34780:;
    a0 = 0xc000; v0 = func_009B3070(a0, a1);
    a0 = v0 & 0xffff;
    v1 = (s32) ((u32) a0 << 4);
    v0 = (s32) 0x80000000U;
    a0 = (s32) ((u32) v1 - (u32) a0);
    v0 = v0 | 0x1;
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 - (u32) a0);
    a0 = (s32) ((u32) v1 << 3);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) a0 >> 31);
    v0 = hi;
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) v0 >> 15;
    v0 = (s32) ((u32) v0 + (u32) v1);
    f0.i = (s32) v0;
    f1.f = (f32) f0.i; goto L_00B34718;
L_00B347D0:;
    return;
}
