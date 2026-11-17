/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_0011D468(s64, s64, s64, s64, s64, f32);
s64 func_001520F0(void);
s64 func_001C0160(s64);
void func_001D76B0(s64, s64);
void func_001D7D60(s64, s64);
void func_001D7D80(s64, s64, s64, s64);
void func_001DF420(s64, s64);

void Pes6NowLoading_PhaseShown(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, f32 fa12) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;
    f32 acc = 0;

    v1 = (*(volatile s32 *) (u32) (a0 + 44));
    v0 = (*(volatile s32 *) (u32) (a0 + 120));
    s0 = (*(volatile s32 *) (u32) (a0 + 40));
    v1 = (s32) ((u32) v1 + (u32) v0);
    v0 = v1 < 255;
    { s32 c_ = v0 != 0; s1 = a0; if (c_) goto L_001BEAC0; }
    v1 = 255;
L_001BEAC0:;
    (*(volatile u32 *) (u32) (s1 + 44)) = (u32) v1;
    a0 = (*(volatile s32 *) (u32) (s1 + 56));
    a1 = v1 & 0xff; func_001D76B0(a0, a1);
    v0 = func_001520F0();
    if (v0 != 0) goto L_001BEAF8;
    a0 = (*(volatile u8 *) (u32) (s1 + 136));
    v0 = -3;
    v1 = (s64) ((u64) 0 + (u64) (s64) 2);
    v0 = a0 & v0;
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) (s1 + 136)) = (u8) v0;
L_001BEAF8:;
    v0 = func_001C0160(a0);
    if (v0 == 0) { a0 = (*(volatile u8 *) (u32) (s1 + 136)); goto L_001BEB14; }
    v1 = 5;
    (*(volatile u32 *) (u32) (s1 + 36)) = (u32) v1;
    a0 = (*(volatile u8 *) (u32) (s1 + 136));
L_001BEB14:;
    v1 = (s64) ((u64) a0 << 62);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 == 0) { (*(volatile u32 *) (u32) (s1 + 40)) = (u32) s0; goto L_001BEB6C; }
    v0 = -2;
    v1 = 0 & 0x1;
    v0 = a0 & v0;
    v0 = v0 | v1;
    a0 = (s32) ((u32) v1 << 1);
    (*(volatile u8 *) (u32) (s1 + 136)) = (u8) v0;
    v1 = -3;
    a2 = (*(volatile u8 *) (u32) (s1 + 136));
    v0 = 6;
    v1 = a2 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (s1 + 136)) = (u8) v1;
    (*(volatile u32 *) (u32) (s1 + 124)) = (u32) 0;
    (*(volatile u32 *) (u32) (s1 + 36)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (s1 + 52));
    a1 = 0; func_001D7D60(a0, a1);
    (*(volatile u32 *) (u32) (s1 + 40)) = (u32) s0;
L_001BEB6C:;
    s0 = (*(volatile s32 *) (u32) (s1 + 68));
    if (s0 == 0) { a0 = (*(volatile s32 *) (u32) (s1 + 64)); goto L_001BEC70; }
    v0 = (*(volatile u8 *) (u32) (s1 + 80));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_001BEB90; }
    f0.i = (s32) v0;
    f1.f = (f32) f0.i; goto L_001BEBA8;
L_001BEB90:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_001BEBA8:;
    v0 = (s32) 0x424c0000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (fcc) { v0 = (*(volatile u8 *) (u32) (s1 + 80)); goto L_001BEC58; }
    v0 = (s32) 0x3dcc0000U;
    v0 = v0 | 0x40de;
    f1.f = (*(volatile f32 *) (u32) (s1 + 76));
    f0.i = (s32) v0;
    f12.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (s1 + 76)) = f12.f; f0.f = func_0011D468(a0, a1, a2, a3, a4, f12.f);
    v0 = (s32) 0x42cc0000U;
    v1 = (s32) 0x43190000U;
    f4.i = (s32) v0;
    v0 = (s32) 0x4f000000U;
    f3.i = (s32) v1;
    f2.i = (s32) 0;
    acc = f2.f + f3.f;
    f1.i = (s32) v0;
    f0.f = acc + f4.f * f0.f;
    fcc = f1.f <= f0.f;
    if (fcc) { f0.f = f0.f - f1.f; goto L_001BEC28; }
    f0.i = (s32) f0.f;
    v1 = f0.i;
    v1 = v1 & 0xff; goto L_001BEC40;
L_001BEC28:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    v1 = v1 | v0;
    v1 = v1 & 0xff;
L_001BEC40:;
    (*(volatile u8 *) (u32) (s1 + 80)) = (u8) v1;
    a1 = (*(volatile u8 *) (u32) (s1 + 80));
    a0 = (*(volatile s32 *) (u32) (s0 + 12)); func_001DF420(a0, a1);
    goto L_001BEC6C;
L_001BEC58:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (s1 + 80)) = (u8) v0;
    a1 = (*(volatile u8 *) (u32) (s1 + 80));
    a0 = (*(volatile s32 *) (u32) (s0 + 12)); func_001DF420(a0, a1);
L_001BEC6C:;
    a0 = (*(volatile s32 *) (u32) (s1 + 64));
L_001BEC70:;
    if (a0 == 0) { ; goto L_001BECB4; }
    v1 = (*(volatile s32 *) (u32) (gp + -23104));
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 2; if (c_) goto L_001BEC8C; }
    v0 = (s32) ((u32) v1 + 0x3U);
    v0 = (s32) v0 >> 2;
L_001BEC8C:;
    a1 = (s64) ((u64) v0 << 48);
    a1 = a1 >> 48; func_001D7D80(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -23104));
    v1 = (s32) ((u32) v1 + 0x1U);
    at = v1 < 81;
    { s32 c_ = at != 0; (*(volatile u32 *) (u32) (gp + -23104)) = (u32) v1; if (c_) goto L_001BECB0; }
    (*(volatile u32 *) (u32) (gp + -23104)) = (u32) 0;
L_001BECB0:;
L_001BECB4:;
    return;
}
