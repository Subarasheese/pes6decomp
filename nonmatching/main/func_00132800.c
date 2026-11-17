/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00103BB8(s64, s64, s64);
s64 func_00103CD0(s64, s64);
s64 func_0012BBD0(s64, s64);

s64 func_00132800(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    u64 qh_v1 = 0;
    u64 qh_a2 = 0;
    u64 qh_a3 = 0;
    u64 qh_a4 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    s64 frame[26];
    s64 sp = (s32) (u32) frame;

    a5 = a0;
    if (a0 == 0) goto L_00132850;
L_00132820:;
    { u32 a_ = (u32) (a1 + 0) & ~15U; a4 = *(volatile s64 *) a_; qh_a4 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a1 + 16) & ~15U; a3 = *(volatile s64 *) a_; qh_a3 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a1 + 32) & ~15U; a2 = *(volatile s64 *) a_; qh_a2 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a1 + 48) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a5 + 0) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; }
    { u32 a_ = (u32) (a5 + 16) & ~15U; *(volatile u64 *) a_ = (u64) a3; *(volatile u64 *) (a_ + 8) = qh_a3; }
    { u32 a_ = (u32) (a5 + 32) & ~15U; *(volatile u64 *) a_ = (u64) a2; *(volatile u64 *) (a_ + 8) = qh_a2; }
    { u32 a_ = (u32) (a5 + 48) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    a5 = (*(volatile s32 *) (u32) (a5 + 260));
    { s32 c_ = a5 != 0; a1 = (s32) ((u32) a1 + 0x40U); if (c_) goto L_00132820; }
L_00132850:;
    { s32 c_ = a0 == 0; s3 = a0; if (c_) goto L_001328F0; }
    s2 = (s32) ((u32) sp + 0x80U);
    s1 = (s32) ((u32) sp + 0x84U);
    s0 = (s32) ((u32) sp + 0x88U);
L_00132864:;
    a1 = (*(volatile s32 *) (u32) (s3 + 264));
    if (a1 == 0) { a0 = (s32) ((u32) s3 + 0x80U); goto L_001328F8; }
    a0 = (s32) ((u32) sp + 0x90U); v0 = func_00103CD0(a0, a1);
    a0 = (s32) ((u32) sp + 0x50U);
    a1 = (s32) ((u32) sp + 0x90U);
    a2 = s3; v0 = func_00103BB8(a0, a1, a2);
    a0 = (s32) ((u32) s3 + 0x80U);
    a1 = (s32) ((u32) sp + 0x50U); v0 = func_0012BBD0(a0, a1);
    f0.f = (*(volatile f32 *) (u32) s2);
    v1 = (s32) 0x3f800000U;
    (*(volatile f32 *) (u32) (s3 + 160)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) s1);
    (*(volatile f32 *) (u32) (s3 + 164)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) s0);
    (*(volatile f32 *) (u32) (s3 + 168)) = f0.f;
    (*(volatile u32 *) (u32) (s3 + 172)) = (u32) v1;
L_001328B8:;
    f3.f = (*(volatile f32 *) (u32) (s3 + 128));
    f2.f = (*(volatile f32 *) (u32) (s3 + 132));
    f1.f = (*(volatile f32 *) (u32) (s3 + 136));
    f0.f = (*(volatile f32 *) (u32) (s3 + 140));
    (*(volatile f32 *) (u32) (s3 + 80)) = f3.f;
    (*(volatile f32 *) (u32) (s3 + 84)) = f2.f;
    (*(volatile f32 *) (u32) (s3 + 88)) = f1.f;
    (*(volatile f32 *) (u32) (s3 + 92)) = f0.f;
    { u32 a_ = (u32) (s3 + 160) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (s3 + 64) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    s3 = (*(volatile s32 *) (u32) (s3 + 260));
    if (s3 != 0) goto L_00132864;
L_001328F0:;
    goto L_00132928;
L_001328F8:;
    a1 = s3; v0 = func_0012BBD0(a0, a1);
    f0.f = (*(volatile f32 *) (u32) (s3 + 48));
    v1 = (s32) 0x3f800000U;
    (*(volatile f32 *) (u32) (s3 + 160)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s3 + 52));
    (*(volatile f32 *) (u32) (s3 + 164)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s3 + 56));
    (*(volatile f32 *) (u32) (s3 + 168)) = f0.f;
    (*(volatile u32 *) (u32) (s3 + 172)) = (u32) v1; goto L_001328B8;
L_00132928:;
    return v0;
}
