/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008FD960(s64, s64);
void func_008FE008(s64, s64, s64);

s64 func_008FFDB0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };
    s64 frame[42];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) ((u32) a3 + (u32) a4);
    a5 = v0;
    fp = 0;
    s7 = a0;
    s6 = (s32) ((u32) a2 << 3);
    s5 = 1;
    s2 = (s32) ((u32) sp + 0x30U);
    a2 = sp;
    s4 = (*(volatile s32 *) (u32) (s7 + 64));
    v1 = (*(volatile s32 *) (u32) (s4 + 96));
    (*(volatile u32 *) (u32) (sp + 36)) = (u32) a4;
    (*(volatile u32 *) (u32) (sp + 164)) = (u32) v1;
    a4 = 56;
    (*(volatile u32 *) (u32) (sp + 20)) = (u32) a1;
    (*(volatile u32 *) (u32) (sp + 16)) = (u32) a1;
    (*(volatile u32 *) (u32) (sp + 160)) = (u32) 0;
    (*(volatile u64 *) (u32) (sp + 8)) = (u64) 0;
    (*(volatile u32 *) (u32) (sp + 28)) = (u32) a3;
    (*(volatile u32 *) (u32) (sp + 168)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 32)) = (u32) v0;
    (*(volatile u64 *) (u32) sp) = (u64) 0;
    (*(volatile u32 *) (u32) (sp + 172)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 24)) = (u32) 0;
L_008FFE38:;
    a1 = (*(volatile s32 *) (u32) (a2 + 20));
    a3 = (*(volatile s32 *) (u32) (a2 + 24));
    v1 = (*(volatile u8 *) (u32) a1);
    a0 = (*(volatile s64 *) (u32) a2);
    v0 = (s32) ((u32) a4 - (u32) a3);
    v1 = (s64) ((u64) v1 << (v0 & 63));
    a1 = (s32) ((u32) a1 + 0x1U);
    a0 = a0 | v1;
    v0 = (u64) a1 < (u64) a5;
    (*(volatile u64 *) (u32) a2) = (u64) a0;
    { s32 c_ = v0 != 0; (*(volatile u32 *) (u32) (a2 + 20)) = (u32) a1; if (c_) goto L_008FFE70; }
    v0 = (*(volatile s32 *) (u32) (a2 + 28));
    (*(volatile u32 *) (u32) (a2 + 20)) = (u32) v0;
L_008FFE70:;
    v0 = (s32) ((u32) a3 + 0x8U);
    v1 = v0 < 57;
    { s32 c_ = v1 != 0; (*(volatile u32 *) (u32) (a2 + 24)) = (u32) v0; if (c_) goto L_008FFE38; }
    a0 = (*(volatile s32 *) (u32) (s4 + 100));
    s1 = sp;
    (*(volatile u64 *) (u32) (a2 + 8)) = (u64) 0;
    s3 = 0;
    { s32 c_ = a0 <= 0; a2 = a0; if (c_) goto L_008FFEEC; }
    a1 = (*(volatile s64 *) (u32) sp);
    v1 = (*(volatile s32 *) (u32) (sp + 164));
L_008FFEA0:;
    v0 = (s32) ((u32) s3 << 5);
    a0 = 0xbdff;
    a0 = (s64) ((u64) a0 << 24);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s64 *) (u32) v0);
    if (v1 != a0) goto L_008FFED0;
    v1 = (*(volatile s32 *) (u32) (v0 + 24));
    (*(volatile u32 *) (u32) (sp + 172)) = (u32) v1;
    fp = (*(volatile s32 *) (u32) (v0 + 16));
    v0 = (*(volatile s32 *) (u32) (v0 + 20));
    (*(volatile u32 *) (u32) (sp + 160)) = (u32) v0;
L_008FFED0:;
    { s32 c_ = fp != 0; s3 = (s32) ((u32) s3 + 0x1U); if (c_) goto L_008FFEF0; }
    v0 = s3 < a2;
    { s32 c_ = v0 != 0; v1 = (*(volatile s32 *) (u32) (sp + 164)); if (c_) goto L_008FFEA0; }
    goto L_008FFEF0;
L_008FFEEC:;
    a1 = (*(volatile s64 *) (u32) sp);
L_008FFEF0:;
    v1 = a1 >> 32;
    v0 = 442;
    { s32 c_ = v1 != v0; a0 = s1; if (c_) goto L_008FFF0C; }
L_008FFF00:;
    a1 = s2; func_008FD960(a0, a1);
    a1 = (*(volatile s64 *) (u32) s1);
L_008FFF0C:;
    v1 = (s64) ((u64) a1 >> 40);
    v0 = 1;
    if (v1 != v0) { a0 = (*(volatile s32 *) (u32) (s1 + 8)); goto L_00900144; }
    v1 = a1 >> 32;
    v0 = 442;
    { s32 c_ = v1 == v0; v0 = 441; if (c_) goto L_00900140; }
    { s32 c_ = v1 == v0; a0 = (*(volatile s32 *) (u32) (s1 + 8)); if (c_) goto L_00900144; }
    v0 = a0 < s6;
L_008FFF38:;
    { s32 c_ = v0 == 0; v0 = s6 < a0; if (c_) goto L_00900148; }
    { s32 c_ = s5 == 0; a0 = s4; if (c_) goto L_00900148; }
    a1 = s1;
    a2 = (s32) ((u32) s2 + 0x18U); func_008FE008(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s1 + 8));
    v0 = s6 < a0;
    if (v0 != 0) { a1 = (*(volatile s64 *) (u32) s1); goto L_00900114; }
    a0 = (*(volatile s32 *) (u32) (s4 + 100));
    s3 = 0;
    { s32 c_ = a0 <= 0; a2 = a0; if (c_) goto L_00900050; }
    a1 = (*(volatile s64 *) (u32) (s2 + 24));
    v1 = (*(volatile s32 *) (u32) (sp + 164));
L_008FFF80:;
    v0 = (s32) ((u32) s3 << 5);
    a3 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s64 *) (u32) (a3 + 8));
    v0 = (*(volatile s64 *) (u32) a3);
    v1 = a1 & v1;
    if (v0 != v1) { s3 = (s32) ((u32) s3 + 0x1U); goto L_00900044; }
    v1 = (*(volatile s32 *) (u32) (s2 + 64));
    a1 = 6;
    a0 = (*(volatile s32 *) (u32) (s1 + 16));
    v0 = (*(volatile s32 *) (u32) (s1 + 32));
    v1 = (s32) v1 >> 3;
    a0 = (s32) ((u32) a0 + (u32) v1);
    v0 = (u64) a0 < (u64) v0;
    { s32 c_ = v0 != 0; (*(volatile u32 *) (u32) (sp + 128)) = (u32) a1; if (c_) goto L_008FFFC8; }
    v0 = (*(volatile s32 *) (u32) (s1 + 36));
    a0 = (s32) ((u32) a0 - (u32) v0);
L_008FFFC8:;
    (*(volatile u32 *) (u32) (sp + 132)) = (u32) a0;
    v0 = (*(volatile s32 *) (u32) (s2 + 56));
    a0 = (*(volatile s32 *) (u32) (s1 + 16));
    v0 = (s32) v0 >> 3;
    v1 = (*(volatile s32 *) (u32) (s1 + 32));
    a1 = (s32) ((u32) a0 + (u32) v0);
    v1 = (u64) a1 < (u64) v1;
    if (v1 != 0) { v0 = (*(volatile s64 *) (u32) (s2 + 40)); goto L_008FFFF8; }
    v0 = (*(volatile s32 *) (u32) (s1 + 36));
    a1 = (s32) ((u32) a1 - (u32) v0);
    v0 = (*(volatile s64 *) (u32) (s2 + 40));
L_008FFFF8:;
    a0 = (*(volatile s32 *) (u32) (s2 + 60));
    (*(volatile u64 *) (u32) (sp + 144)) = (u64) v0;
    (*(volatile u32 *) (u32) (sp + 136)) = (u32) a1;
    v1 = (*(volatile s64 *) (u32) (s2 + 48));
    (*(volatile u32 *) (u32) (sp + 140)) = (u32) a0;
    (*(volatile u64 *) (u32) (sp + 152)) = (u64) v1;
    v0 = (*(volatile s32 *) (u32) (a3 + 24));
    s0 = gp;
    gp = v0;
    a2 = (*(volatile s32 *) (u32) (a3 + 20));
    a0 = s7;
    v0 = (*(volatile s32 *) (u32) (a3 + 16));
    { u32 t_ = (u32) v0; a1 = (s32) ((u32) sp + 0x80U); v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    s5 = v0;
    v0 = gp;
    gp = s0;
    a0 = (*(volatile s32 *) (u32) (s4 + 100)); goto L_00900050;
L_00900044:;
    v0 = s3 < a2;
    { s32 c_ = v0 != 0; v1 = (*(volatile s32 *) (u32) (sp + 164)); if (c_) goto L_008FFF80; }
L_00900050:;
    if (s3 != a0) goto L_009000F8;
    { s32 c_ = fp == 0; a1 = 6; if (c_) goto L_009000F8; }
    v1 = (*(volatile s32 *) (u32) (s2 + 64));
    a0 = (*(volatile s32 *) (u32) (s1 + 16));
    v0 = (*(volatile s32 *) (u32) (s1 + 32));
    v1 = (s32) v1 >> 3;
    a0 = (s32) ((u32) a0 + (u32) v1);
    v0 = (u64) a0 < (u64) v0;
    { s32 c_ = v0 != 0; (*(volatile u32 *) (u32) (sp + 128)) = (u32) a1; if (c_) goto L_00900088; }
    v0 = (*(volatile s32 *) (u32) (s1 + 36));
    a0 = (s32) ((u32) a0 - (u32) v0);
L_00900088:;
    (*(volatile u32 *) (u32) (sp + 132)) = (u32) a0;
    v0 = (*(volatile s32 *) (u32) (s2 + 56));
    a0 = (*(volatile s32 *) (u32) (s1 + 16));
    v0 = (s32) v0 >> 3;
    v1 = (*(volatile s32 *) (u32) (s1 + 32));
    a0 = (s32) ((u32) a0 + (u32) v0);
    v1 = (u64) a0 < (u64) v1;
    if (v1 != 0) { v0 = (*(volatile s64 *) (u32) (s2 + 40)); goto L_009000B8; }
    v0 = (*(volatile s32 *) (u32) (s1 + 36));
    a0 = (s32) ((u32) a0 - (u32) v0);
    v0 = (*(volatile s64 *) (u32) (s2 + 40));
L_009000B8:;
    v1 = (*(volatile s32 *) (u32) (s2 + 60));
    (*(volatile u64 *) (u32) (sp + 144)) = (u64) v0;
    (*(volatile u32 *) (u32) (sp + 136)) = (u32) a0;
    v0 = (*(volatile s64 *) (u32) (s2 + 48));
    (*(volatile u32 *) (u32) (sp + 140)) = (u32) v1;
    (*(volatile u64 *) (u32) (sp + 152)) = (u64) v0;
    v0 = (*(volatile s32 *) (u32) (sp + 172));
    s0 = gp;
    gp = v0;
    a2 = (*(volatile s32 *) (u32) (sp + 160));
    a0 = s7;
    { u32 t_ = (u32) fp; a1 = (s32) ((u32) sp + 0x80U); v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    s5 = v0;
    v0 = gp;
    gp = s0;
L_009000F8:;
    { s32 c_ = s5 == 0; a0 = (*(volatile s32 *) (u32) (s1 + 8)); if (c_) goto L_00900110; }
    v0 = (*(volatile s64 *) (u32) (s1 + 8));
    v0 = (s64) ((u64) v0 << 29);
    v0 = v0 >> 32;
    (*(volatile u32 *) (u32) (sp + 168)) = (u32) v0;
L_00900110:;
    a1 = (*(volatile s64 *) (u32) s1);
L_00900114:;
    v1 = 1;
    v0 = (s64) ((u64) a1 >> 40);
    { s32 c_ = v0 != v1; v0 = 442; if (c_) goto L_00900144; }
    v1 = a1 >> 32;
    { s32 c_ = v1 == v0; v0 = 441; if (c_) goto L_00900144; }
    { s32 c_ = v1 != v0; v0 = a0 < s6; if (c_) goto L_008FFF38; }
    v0 = s6 < a0; goto L_00900148;
L_00900140:;
    a0 = (*(volatile s32 *) (u32) (s1 + 8));
L_00900144:;
    v0 = s6 < a0;
L_00900148:;
    { s32 c_ = v0 != 0; v0 = 442; if (c_) goto L_0090015C; }
    v1 = a1 >> 32;
    { s32 c_ = v1 == v0; a0 = s1; if (c_) goto L_008FFF00; }
L_0090015C:;
    v0 = (*(volatile s32 *) (u32) (sp + 168));
    return v0;
}
