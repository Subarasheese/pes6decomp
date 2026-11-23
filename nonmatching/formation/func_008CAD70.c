/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008C98A0(s64, s64, s64);
s64 func_008CBFF0(s64, s64, s64, s64, s64, s64, s64, s64, f32);
void func_008D1CC0(s64, s64, s64, s64);
s64 func_008D1D20(s64);
void func_008D1D30(s64, s64, s64, s64);
void func_008D1E30(s64, s64, s64, s64);
s64 func_008D1E40(s64);
s64 func_008D1EC0(s64);
s64 func_008D1ED0(s64);
s64 func_008D1EE0(s64);
s64 func_008D1F00(s64);
void func_008D20A0(s64, s64, s64);
void func_008D2100(s64, s64, s64);
void func_008D2130(s64, s64);
void func_008D2500(s64, s64, s64, s64, f32, f32);
s64 func_008E7560(s64, s64, s64, s64);

void func_008CAD70(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };
    s64 frame[14];
    s64 sp = (s32) (u32) frame;

    s4 = a2;
    s3 = a3;
    s2 = 0;
    s1 = a0;
    { s32 c_ = s1 == 0; s0 = a1; if (c_) goto L_008CB0A0; }
    a0 = (s32) ((u32) s1 + 0x480U); v0 = func_008D1EE0(a0);
    v1 = v0 & 0xff;
    v0 = (s64) ((u64) s0 << 48);
    v0 = v0 >> 48;
    v0 = v0 < v1;
    if (v0 != 0) { v1 = (*(volatile u8 *) (u32) (s1 + 1148)); goto L_008CADD4; }
    v0 = (s32) ((u32) v1 + 0xffffffffU);
    s0 = (s64) ((u64) v0 << 48);
    s0 = s0 >> 48;
    v1 = (*(volatile u8 *) (u32) (s1 + 1148));
L_008CADD4:;
    v0 = (s64) ((u64) s0 << 48);
    v0 = v0 >> 48;
    at = v0 < v1;
    if (at == 0) goto L_008CADF0;
    s0 = (s64) ((u64) v1 << 48);
    s0 = s0 >> 48;
L_008CADF0:;
    if (s3 != 0) { v0 = (*(volatile s32 *) (u32) (s1 + 264)); goto L_008CAE24; }
    a0 = (s32) ((u32) s1 + 0x480U); v0 = func_008D1D20(a0);
    if (v0 == 0) goto L_008CAE20;
    a0 = (s32) ((u32) s1 + 0x480U); v0 = func_008D1E40(a0);
    v1 = (s64) ((u64) s0 << 48);
    v1 = v1 >> 48;
    if (v1 == v0) { ; goto L_008CB0A4; }
L_008CAE20:;
    v0 = (*(volatile s32 *) (u32) (s1 + 264));
L_008CAE24:;
    if (v0 == 0) goto L_008CAE3C;
    a0 = (*(volatile s32 *) (u32) (s1 + 268));
    a1 = (s64) ((u64) s0 << 48);
    { u32 t_ = (u32) v0; a1 = a1 >> 48; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
L_008CAE3C:;
    if (s4 == 0) goto L_008CAE8C;
    a0 = (s32) ((u32) s1 + 0x480U); v0 = func_008D1F00(a0);
    v1 = (s64) ((u64) s0 << 48);
    a0 = (s32) ((u32) s1 + 0x480U);
    v1 = v1 >> 48;
    v0 = (s32) ((u32) v1 - (u32) v0);
    s3 = (s64) ((u64) v0 << 48);
    s3 = s3 >> 48; v0 = func_008D1ED0(a0);
    v0 = v0 & 0xff;
    v0 = s3 < v0;
    if (v0 != 0) goto L_008CAE80;
    s2 = 1; goto L_008CAE8C;
L_008CAE80:;
    if (s3 >= 0) goto L_008CAE8C;
    s2 = 1;
L_008CAE8C:;
    if (s2 == 0) { a0 = (s32) ((u32) s1 + 0x480U); goto L_008CAF4C; }
    a0 = (s32) ((u32) s1 + 0x480U);
    a1 = 1; func_008D2130(a0, a1);
    a0 = (s32) ((u32) s1 + 0x480U); v0 = func_008D1EC0(a0);
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_008CAEBC; }
    f0.i = (s32) v0;
    f2.f = (f32) f0.i; goto L_008CAED4;
L_008CAEBC:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_008CAED4:;
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x43b40000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7664));
    f1.i = (s32) v1;
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_008CAEF8; }
    f0.i = (s32) v0;
    f0.f = (f32) f0.i; goto L_008CAF10;
L_008CAEF8:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_008CAF10:;
    f0.f = f1.f / f0.f;
    a1 = s0 & 0xff;
    a0 = (s32) ((u32) s1 + 0x480U);
    f0.f = f2.f / f0.f;
    f0.i = (s32) f0.f;
    a2 = f0.i;
    func_008D1E30(a0, a1, a2, a3);
    a0 = s1; v0 = func_008CBFF0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f);
    a0 = (s32) ((u32) s1 + 0x480U); goto L_008CB078;
L_008CAF4C:;
    func_008D2500(a0, a1, a2, a3, f12.f, f13.f);
    a0 = (s32) ((u32) s1 + 0x480U); v0 = func_008D1F00(a0);
    s3 = v0;
    a0 = (s32) ((u32) s1 + 0x480U);
    s4 = -1; v0 = func_008D1ED0(a0);
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0x1U);
    at = v0 < 0;
    if (at != 0) goto L_008CB048;
    s2 = (s32) ((u32) s4 + (u32) s3);
L_008CAF84:;
    a0 = s1;
    a1 = s2;
    a2 = (s32) ((u32) sp + 0x6cU); func_008C98A0(a0, a1, a2);
    a2 = (s32) ((u32) s4 + 0x1U);
    a0 = (s32) ((u32) s1 + 0x480U);
    a1 = (s32) ((u32) sp + 0x6cU); func_008D2100(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (s1 + 1140));
    { s32 c_ = a2 == 0; a3 = 0; if (c_) goto L_008CB018; }
    if (s2 < 0) goto L_008CB018;
    v0 = (*(volatile u8 *) (u32) (a2 + 33));
    at = s2 < v0;
    if (at == 0) goto L_008CB018;
    a1 = (*(volatile u8 *) (u32) (a2 + 842));
    { s32 c_ = a1 <= 0; a4 = 0; if (c_) goto L_008CB018; }
    v0 = (s32) ((u32) a2 + (u32) s2);
    v1 = 1;
    a0 = (*(volatile u8 *) (u32) (v0 + 1));
L_008CAFE0:;
    v0 = (*(volatile u8 *) (u32) (a2 + 828));
    if (v0 != a0) goto L_008CAFF8;
    a3 = v1; goto L_008CB008;
L_008CAFF8:;
    v0 = (*(volatile u8 *) (u32) (a2 + 829));
    if (v0 != a0) goto L_008CB008;
    a3 = v1;
L_008CB008:;
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = a4 < a1;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x2U); if (c_) goto L_008CAFE0; }
L_008CB018:;
    a2 = a3 & 0xff;
    a1 = (s32) ((u32) s4 + 0x1U);
    a0 = (s32) ((u32) s1 + 0x480U); func_008D20A0(a0, a1, a2);
    a0 = (s32) ((u32) s1 + 0x480U);
    s4 = (s32) ((u32) s4 + 0x1U); v0 = func_008D1ED0(a0);
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0x1U);
    v0 = s4 < v0;
    if (v0 != 0) { s2 = (s32) ((u32) s4 + (u32) s3); goto L_008CAF84; }
L_008CB048:;
    a1 = s0 & 0xff;
    a0 = (s32) ((u32) s1 + 0x480U);
    a2 = 1; func_008D1E30(a0, a1, a2, a3);
    a0 = (s32) ((u32) s1 + 0x480U); func_008D1D30(a0, a1, a2, a3);
    a0 = (s32) ((u32) s1 + 0x480U);
    a1 = 0; func_008D2130(a0, a1);
    a0 = s1; v0 = func_008CBFF0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f);
    a0 = (s32) ((u32) s1 + 0x480U);
L_008CB078:;
    v0 = func_008D1E40(a0);
    a0 = (s32) ((u32) s1 + 0x28U);
    a1 = v0; v0 = func_008E7560(a0, a1, a2, a3);
    if (v0 == 0) goto L_008CB0A0;
    a0 = (s32) ((u32) s1 + 0x480U);
    a1 = 0; func_008D1CC0(a0, a1, a2, a3);
L_008CB0A0:;
L_008CB0A4:;
    return;
}
