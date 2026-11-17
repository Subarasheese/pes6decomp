/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001040A0(s64, s64, s64, s64, f32);
s64 func_009B3070(s64, s64);

void func_00B347F0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    u64 qh_a0 = 0;
    u64 qh_a1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[28];
    s64 sp = (s32) (u32) frame;

    v1 = (s32) 0x43360000U;
    f0.i = (s32) a2;
    v1 = v1 | 0xb61;
    f0.f = (f32) f0.i;
    s4 = a0;
    s2 = a3;
    s3 = a1;
    a3 = (*(volatile s32 *) (u32) a0);
    v0 = (*(volatile s32 *) (u32) a1);
    f1.i = (s32) v1;
    f3.f = f1.f * f0.f;
    a2 = (*(volatile s32 *) (u32) (a3 + 4));
    a0 = -1;
    a1 = 1;
    v0 = (*(volatile u16 *) (u32) (v0 + 38));
    v1 = (*(volatile u8 *) (u32) (a2 + 45));
    if (v1 != 0) a1 = a0;
    f0.i = (s32) a1;
    { s32 c_ = v0 < 0; f4.f = (f32) f0.i; if (c_) goto L_00B3486C; }
    f0.i = (s32) v0;
    f2.f = (f32) f0.i; goto L_00B34888;
L_00B3486C:;
    v1 = (s32) ((u32) v0 >> 1);
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00B34888:;
    f1.i = (s32) 0;
    v0 = (s32) 0x4f000000U;
    f0.i = (s32) v0;
    acc = f1.f + f2.f;
    f1.f = acc + f3.f * f4.f;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_00B348BC; }
    f0.i = (s32) f1.f;
    v1 = f0.i;
    v1 = v1 & 0xffff; goto L_00B348D4;
L_00B348BC:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    v1 = v1 | v0;
    v1 = v1 & 0xffff;
L_00B348D4:;
    (*(volatile u16 *) (u32) (a3 + 38)) = (u16) v1;
    a2 = (s32) 0x42c80000U;
    a6 = (*(volatile s32 *) (u32) s4);
    f1.i = (s32) a2;
    a1 = (s32) 0x370000U;
    a0 = (s32) 0x370000U;
    v1 = (s32) 0x370000U;
    v0 = (s32) 0x370000U;
    f0.f = f1.f * f13.f;
    a4 = 1;
    a3 = -1;
    s0 = (s32) ((u32) sp + 0xd8U);
    s1 = (s32) ((u32) sp + 0xd0U);
    a2 = (s32) 0x3f800000U;
    a5 = (*(volatile u16 *) (u32) (a6 + 38));
    (*(volatile u16 *) (u32) (a6 + 40)) = (u16) a5;
    { u32 a_ = (u32) (a1 + 23344) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a0 + 23360) & ~15U; a0 = *(volatile s64 *) a_; qh_a0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (v1 + 23376) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (v0 + 23392) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) a1; *(volatile u64 *) (a_ + 8) = qh_a1; }
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; }
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    { u32 a_ = (u32) (sp + 144) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (*(volatile s32 *) (u32) s4);
    { u32 a_ = (u32) (sp + 96) & ~15U; *(volatile u64 *) a_ = (u64) a1; *(volatile u64 *) (a_ + 8) = qh_a1; }
    { u32 a_ = (u32) (sp + 112) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; }
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 45));
    if (v0 != 0) a4 = a3;
    (*(volatile u32 *) (u32) (sp + 220)) = (u32) a2;
    (*(volatile f32 *) (u32) s0) = f0.f;
    (*(volatile u32 *) (u32) (sp + 212)) = (u32) 0;
    f0.i = (s32) a4;
    f0.f = (f32) f0.i;
    f0.f = f12.f * f0.f;
    f0.f = f1.f * f0.f;
    (*(volatile f32 *) (u32) s1) = f0.f;
    v0 = (*(volatile s32 *) (u32) s3);
    a1 = (*(volatile u16 *) (u32) (v0 + 38));
    at = a1 < 16385;
    { s32 c_ = at != 0; { u32 a_ = (u32) (sp + 128) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; } if (c_) goto L_00B34A70; }
    at = 0xc000;
    at = a1 < at;
    if (at == 0) goto L_00B34A70;
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
L_00B349EC:;
    v0 = (s32) 0x3c8e0000U;
    a0 = (s32) ((u32) sp + 0xa0U);
    v0 = v0 | 0xfa35;
    a1 = a0;
    f0.i = (s32) v0;
    f12.f = f1.f * f0.f; func_001040A0(a0, a1, a2, a3, f12.f);
    f1.f = (*(volatile f32 *) (u32) s0);
    { s32 c_ = s2 != 0; f2.f = (*(volatile f32 *) (u32) s1); if (c_) goto L_00B34A40; }
    a0 = (*(volatile s32 *) (u32) s3);
    v1 = (*(volatile s32 *) (u32) s4);
    f0.f = (*(volatile f32 *) (u32) (a0 + 224));
    f0.f = f0.f + f2.f;
    (*(volatile f32 *) (u32) (v1 + 224)) = f0.f;
    a0 = (*(volatile s32 *) (u32) s3);
    v1 = (*(volatile s32 *) (u32) s4);
    f0.f = (*(volatile f32 *) (u32) (a0 + 232));
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (v1 + 232)) = f0.f; goto L_00B34A68;
L_00B34A40:;
    a0 = (*(volatile s32 *) (u32) s3);
    v1 = (*(volatile s32 *) (u32) s4);
    f0.f = (*(volatile f32 *) (u32) (a0 + 108));
    f0.f = f0.f + f2.f;
    (*(volatile f32 *) (u32) (v1 + 224)) = f0.f;
    a0 = (*(volatile s32 *) (u32) s3);
    v1 = (*(volatile s32 *) (u32) s4);
    f0.f = (*(volatile f32 *) (u32) (a0 + 112));
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (v1 + 232)) = f0.f;
L_00B34A68:;
    goto L_00B34AC0;
L_00B34A70:;
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
    f1.f = (f32) f0.i; goto L_00B349EC;
L_00B34AC0:;
    return;
}
