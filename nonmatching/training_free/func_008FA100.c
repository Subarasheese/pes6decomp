/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001B97C0(s64);
s64 func_001B9890(s64);
f32 func_001D79A0(s64, s64);
s64 func_001D7A20(s64, s64, s64);
void func_001ED840(s64, s64);
void func_001ED880(s64, f32);
s64 func_001EDD00(s64, s64, s64, s64);
void func_001EF900(s64, s64);
s64 func_0020D0C0(s64, s64, s64, s64);
void func_0026CD50(s64);
void func_0026D130(s64, s64, f32, f32);
void func_0026D2D0(s64, f32, f32);
s64 func_0026D3B0(s64, s64, s64, s64, f32);
void func_00C74CC0(s64, s64, s64, s64);
void func_00C74D20(s64, s64, s64, s64);
void func_00C74D60(s64, s64, s64, s64);
void func_00C75440(s64, s64, s64, s64);

void func_008FA100(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 hi = 0, lo = 0;
    s64 frame[38];
    s64 sp = (s32) (u32) frame;

    v1 = (*(volatile s32 *) (u32) (gp + -19632));
    v0 = (*(volatile s32 *) (u32) (v1 + 488));
    (*(volatile u32 *) (u32) (v1 + 388)) = (u32) a0;
    v1 = (*(volatile s32 *) (u32) (gp + -19632));
    (*(volatile u32 *) (u32) (sp + 240)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (v1 + 392));
    at = a0 < v0;
    if (at == 0) { fp = (*(volatile s32 *) (u32) (v1 + 404)); goto L_008FA16C; }
    v0 = (s32) ((u32) a0 << 2);
    fp = (*(volatile s32 *) (u32) (v1 + 400));
    v0 = (s32) ((u32) v0 + (u32) a0);
    (*(volatile u32 *) (u32) (sp + 256)) = (u32) 0;
    v0 = (s32) ((u32) v0 << 1);
    s5 = (s32) ((u32) v0 + (u32) a0); goto L_008FA188;
L_008FA16C:;
    a0 = (s32) ((u32) a0 - (u32) v0);
    v0 = 1;
    (*(volatile u32 *) (u32) (sp + 256)) = (u32) v0;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 << 1);
    s5 = (s32) ((u32) v0 + (u32) a0);
L_008FA188:;
    v0 = (*(volatile s32 *) (u32) (sp + 240));
    v1 = 139;
    a4 = (s32) 0x590000U;
    a1 = (s32) 0x5a0000U;
    s7 = (s32) 0x930000U;
    a4 = (s32) ((u32) a4 + 0x1a90U);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a5 = lo; }
    a1 = (s32) ((u32) a1 + 0x2020U);
    s4 = 0;
    s6 = 0;
    s7 = (s32) ((u32) s7 + 0xffffdee0U);
    v1 = (s32) ((u32) v0 << 4);
    a3 = (s32) ((u32) v1 - (u32) v0);
    v0 = (s32) ((u32) a4 + (u32) a5);
    a0 = (s32) ((u32) a3 << 3);
    a2 = (s32) ((u32) a3 << 2);
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) a2 - (u32) a3);
    v1 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 << 3);
    a0 = (s32) ((u32) a0 - (u32) a3);
    v0 = (s32) ((u32) a1 + (u32) v0);
    v1 = (s32) ((u32) v1 + 0x2980U);
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) a0 << 8);
    v0 = (s32) ((u32) v1 + (u32) v0);
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) ((u32) v0 + 0x1U);
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
L_008FA200:;
    a0 = (*(volatile s32 *) (u32) (gp + -19632));
    v0 = (s32) ((u32) s4 + (u32) s5);
    at = v0 < fp;
    v1 = (s32) ((u32) a0 + (u32) s6);
    { s32 c_ = at == 0; s2 = (s32) ((u32) v1 + 0x204U); if (c_) goto L_008FA468; }
    v1 = (*(volatile s32 *) (u32) (sp + 256));
    if (v1 != 0) goto L_008FA240;
    v1 = (s32) ((u32) s5 + (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) s4);
    s3 = (*(volatile s8 *) (u32) (v1 + 408));
    v1 = (*(volatile s8 *) (u32) (v1 + 426));
    (*(volatile u32 *) (u32) (sp + 272)) = (u32) v1; goto L_008FA258;
L_008FA240:;
    v1 = (s32) ((u32) s5 + (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) s4);
    s3 = (*(volatile s8 *) (u32) (v1 + 444));
    v1 = (*(volatile s8 *) (u32) (v1 + 462));
    (*(volatile u32 *) (u32) (sp + 272)) = (u32) v1;
L_008FA258:;
    s1 = 0;
L_008FA260:;
    { u32 a_ = (u32) (sp + 224) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) ((u32) v1 + (u32) s1);
    v1 = (*(volatile u8 *) (u32) (v1 + 7));
    if (s3 != v1) goto L_008FA280;
    goto L_008FA298;
L_008FA280:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 32;
    if (v1 != 0) goto L_008FA260;
    s1 = -1;
L_008FA298:;
    v1 = s4 ^ 0xa;
    v1 = (u64) v1 < (u64) (s64) 1;
    if (v1 != 0) { a1 = v1 ^ 0x1; goto L_008FA2B8; }
    v1 = (s32) ((u32) fp + 0xffffffffU);
    v1 = v1 ^ v0;
    v1 = (u64) v1 < (u64) (s64) 1;
    a1 = v1 ^ 0x1;
L_008FA2B8:;
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) a1 << 1);
    v0 = (s32) ((u32) v0 + 0xffffdf20U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    a0 = s2;
    v1 = (s32) ((u32) v1 << 2);
    a1 = (s32) ((u32) s2 + 0x8U);
    s0 = (s32) ((u32) v0 + (u32) v1);
    a2 = 0;
    v0 = (s32) 0x3b0000U;
    a4 = s0;
    a3 = (*(volatile s32 *) (u32) (v0 + -5732));
    a5 = 3; func_00C75440(a0, a1, a2, a3);
    v0 = (s32) 0x453c0000U;
    v0 = v0 | 0x2000;
    f12.i = (s32) v0;
    a0 = 1; v0 = func_0026D3B0(a0, a1, a2, a3, f12.f);
    (*(volatile u32 *) (u32) (s2 + 24)) = (u32) v0;
    a0 = v0;
    a1 = 3; func_001ED840(a0, a1);
    a1 = (*(volatile u16 *) (u32) (s0 + 2));
    v0 = (s32) ((u32) s0 + 0x2U);
    a0 = (*(volatile s32 *) (u32) (s2 + 4));
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } f0.f = func_001D79A0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s2 + 24));
    f12.i = f0.i; func_001ED880(a0, f12.f);
    a0 = (*(volatile s32 *) (u32) (sp + 240));
    a2 = (*(volatile s32 *) (u32) (s2 + 24));
    a1 = s3; v0 = func_0020D0C0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s2 + 16)) = (u32) v0;
    a0 = v0; func_0026CD50(a0);
    a0 = (*(volatile s32 *) (u32) (s2 + 16));
    a1 = 1; func_001EF900(a0, a1);
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
    a2 = (*(volatile u16 *) (u32) (s7 + 6));
    a0 = (*(volatile s32 *) (u32) (v0 + 496));
    a1 = (s32) ((u32) sp + 0x120U); v0 = func_001D7A20(a0, a1, a2);
    f12.f = (*(volatile f32 *) (u32) (sp + 288));
    f13.f = (*(volatile f32 *) (u32) (sp + 292));
    a0 = (*(volatile s32 *) (u32) (s2 + 4)); func_00C74CC0(a0, a1, a2, a3);
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = (*(volatile s32 *) (u32) (s2 + 4));
    a2 = (*(volatile u16 *) (u32) v0);
    a1 = (s32) ((u32) sp + 0x120U); v0 = func_001D7A20(a0, a1, a2);
    f12.f = (*(volatile f32 *) (u32) (sp + 288));
    f13.f = (*(volatile f32 *) (u32) (sp + 292));
    a0 = (*(volatile s32 *) (u32) (s2 + 16)); func_0026D2D0(a0, f12.f, f13.f);
    a1 = (*(volatile s32 *) (u32) (sp + 272));
    a0 = (s32) ((u32) s2 + 0x8U); func_00C74D60(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s2 + 24)); v0 = func_001EDD00(a0, a1, a2, a3);
    at = s1 < 11;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (s2 + 20)) = (u32) v0; if (c_) goto L_008FA3FC; }
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) ((u32) v0 << 1);
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile u8 *) (u32) (v0 + 28)); v0 = func_001B97C0(a0);
    s1 = v0; goto L_008FA42C;
L_008FA3FC:;
    v0 = (s32) ((u32) s3 << 4);
    v1 = (s32) ((u32) v0 - (u32) s3);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) v0 << 3);
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 105));
    v0 = (s64) ((u64) v0 << 56);
    a0 = (s64) ((u64) v0 >> 60); v0 = func_001B9890(a0);
    s1 = v0;
L_008FA42C:;
    a2 = (*(volatile u16 *) (u32) (s0 + 6));
    a0 = (*(volatile s32 *) (u32) (s2 + 4));
    a1 = (s32) ((u32) sp + 0x120U); v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s2 + 20));
    f12.f = (*(volatile f32 *) (u32) (sp + 288));
    f13.f = (*(volatile f32 *) (u32) (sp + 292));
    a1 = s1; func_0026D130(a0, a1, f12.f, f13.f);
    s4 = (s32) ((u32) s4 + 0x1U);
    s6 = (s32) ((u32) s6 + 0x1cU);
    v0 = s4 < 11;
    { s32 c_ = v0 != 0; s7 = (s32) ((u32) s7 + 0x4U); if (c_) goto L_008FA200; }
L_008FA468:;
    v0 = (*(volatile s32 *) (u32) (sp + 256));
    { s32 c_ = v0 == 0; v1 = (*(volatile s32 *) (u32) (gp + -19632)); if (c_) goto L_008FA480; }
    v0 = (s32) 0xb0000U;
    a1 = v0 | 0x1a; goto L_008FA488;
L_008FA480:;
    v0 = (s32) 0xb0000U;
    a1 = v0 | 0x19;
L_008FA488:;
    a0 = (s32) ((u32) v1 + 0x1fcU); func_00C74D20(a0, a1, a2, a3);
    return;
}
