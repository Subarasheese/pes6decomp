/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001A4740(s64, s64, s64, s64);
f32 func_001A4790(s64);
f32 func_002A84C0(s64, s64);

f32 func_002A82B0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    u64 qh_a1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f12 = { 0 };

    s0 = a1;
    if (s0 == 0) goto L_002A8494;
    v0 = a0 & 0xff;
    v0 = v0 & 0xf;
    at = (u64) v0 < (u64) (s64) 6;
    if (at == 0) goto L_002A8488;
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffa190U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x2a8300U) goto L_002A8300; if (t_ == 0x2a8310U) goto L_002A8310; if (t_ == 0x2a8334U) goto L_002A8334; }
L_002A8300:;
    f0.f = func_002A84C0(a0, a1);
    goto L_002A84A8;
L_002A8310:;
    v0 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v0 + 7474)) = (u8) a0;
    a0 = (s32) 0x5e0000U;
    a0 = (s32) ((u32) a0 + 0x1e00U); v0 = func_001A4740(a0, a1, a2, a3);
    a0 = s0; f0.f = func_001A4790(a0);
    goto L_002A84A4;
L_002A8334:;
    v0 = (s32) 0x5e0000U;
    a2 = (s32) 0x5e0000U;
    s2 = (*(volatile u8 *) (u32) (v0 + 6576));
    v1 = (s32) 0x5e0000U;
    a3 = (*(volatile u8 *) (u32) s0);
    a1 = (s32) 0x5e0000U;
    a2 = (s32) ((u32) a2 + 0x1970U);
    v0 = (s32) 0x5e0000U;
    (*(volatile u16 *) (u32) (v1 + 7472)) = (u16) a3;
    s1 = (*(volatile u16 *) (u32) (v0 + 7472));
    s0 = (s32) ((u32) a2 + (u32) s1);
    v0 = (*(volatile u8 *) (u32) s0);
    { s32 c_ = v0 == s2; (*(volatile u8 *) (u32) (a1 + 7474)) = (u8) a0; if (c_) goto L_002A83CC; }
    v1 = (s32) ((u32) s1 << 2);
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + (u32) s1);
    v0 = (s32) ((u32) v0 + 0xffffbdc0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a5 = (*(volatile s32 *) (u32) v0);
    if (a5 == 0) goto L_002A8420;
    v0 = (s32) 0x5e0000U;
    a1 = (s32) 0x5e0000U;
    v1 = (s32) ((u32) s1 << 4);
    v0 = (s32) ((u32) v0 + 0x16c0U);
    a0 = (s32) ((u32) v0 + (u32) v1);
    a2 = (s32) 0x5e0000U;
    v0 = (s32) 0xc0000000U;
    a1 = (s32) ((u32) a1 + 0x1d90U);
    f12.i = (s32) v0;
    a2 = (s32) ((u32) a2 + 0x1da0U);
    a3 = s1;
    { u32 t_ = (u32) a5; a4 = s2; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    goto L_002A8420;
L_002A83CC:;
    v1 = (s32) ((u32) s1 << 2);
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + (u32) s1);
    v0 = (s32) ((u32) v0 + 0xffffbdc0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a5 = (*(volatile s32 *) (u32) v0);
    if (a5 == 0) goto L_002A8420;
    v0 = (s32) 0x5e0000U;
    a1 = (s32) 0x5e0000U;
    a2 = (s32) 0x5e0000U;
    v1 = (s32) ((u32) s1 << 4);
    v0 = (s32) ((u32) v0 + 0x16c0U);
    a1 = (s32) ((u32) a1 + 0x1d90U);
    f12.i = (s32) 0;
    a0 = (s32) ((u32) v0 + (u32) v1);
    a2 = (s32) ((u32) a2 + 0x1da0U);
    a3 = s1;
    { u32 t_ = (u32) a5; a4 = s2; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
L_002A8420:;
    v0 = (s32) 0x5e0000U;
    a0 = (s32) ((u32) s1 << 4);
    v0 = (s32) ((u32) v0 + 0x16c0U);
    (*(volatile u8 *) (u32) s0) = (u8) s2;
    a1 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) 0x5e0000U;
    v0 = (s32) 0x5e0000U;
    { u32 a_ = (u32) (a1 + 0) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u32 *) (u32) (v0 + 7488)) = (u32) 0;
    a0 = (s32) 0x3f800000U;
    v0 = (s32) 0x5e0000U;
    (*(volatile u32 *) (u32) (v0 + 7492)) = (u32) 0;
    v0 = (s32) 0x5e0000U;
    (*(volatile u32 *) (u32) (v0 + 7496)) = (u32) 0;
    v0 = (s32) 0x5e0000U;
    (*(volatile u32 *) (u32) (v0 + 7500)) = (u32) a0;
    v0 = (s32) 0x44ab0000U;
    a0 = v0 | 0xe000;
    v0 = (s32) 0x5e0000U;
    (*(volatile u32 *) (u32) (v0 + 7616)) = (u32) a0;
    v0 = (s32) 0x5e0000U;
    (*(volatile u32 *) (u32) (v0 + 7668)) = (u32) 0;
    v0 = (s32) 0x45610000U;
    f0.i = (s32) v0;
    { u32 a_ = (u32) (v1 + 7552) & ~15U; *(volatile u64 *) a_ = (u64) a1; *(volatile u64 *) (a_ + 8) = qh_a1; } goto L_002A84A4;
L_002A8488:;
    v0 = (s32) 0x5e0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 7992)); goto L_002A84A4;
L_002A8494:;
    v0 = (s32) 0x5e0000U;
    v1 = (s32) 0x5e0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 7992));
    (*(volatile u8 *) (u32) (v1 + 7474)) = (u8) a0;
L_002A84A4:;
L_002A84A8:;
    return f0.f;
}
