/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Ball_Update(f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_00152130(s32, s32, s32, s32, s32);
void func_00284E60(s32, s32, s32, s32);
s32 func_009E1C90(s32);
void func_009E1CB0(s32, s32, s32, s32);
void func_009E1D30(s32, s32);
void func_00AD0A20(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00B637B0(s32, s32, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_00B63A60(s32, s32, s32, s32, s32, s32, f32, f32, f32);
void func_00B63BF0(s32, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_00BA91C0(s32, s32, s32, s32);
void func_00BA92A0(s32);
s32 func_00BF6270(void);

void func_00B63E10(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };
    s32 hi = 0, lo = 0;

    a0 = 3; v0 = func_009E1C90(a0);
    v1 = v0 & 0xff;
    at = (u64) v1 < (u64) (s64) 6;
    if (at == 0) goto L_00B64028;
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffffcfe0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xb63e4cU) goto L_00B63E4C; if (t_ == 0xb63e8cU) goto L_00B63E8C; if (t_ == 0xb63e9cU) goto L_00B63E9C; if (t_ == 0xb63eecU) goto L_00B63EEC; if (t_ == 0xb63efcU) goto L_00B63EFC; if (t_ == 0xb63ff0U) goto L_00B63FF0; }
L_00B63E4C:;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (gp + -19476)) = (u8) 0;
    (*(volatile u8 *) (u32) (v0 + 7604)) = (u8) 0;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + 7700)) = (u32) 0; v0 = func_00BF6270();
    a0 = v0; func_00BA92A0(a0);
    func_00AD0A20(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f);
    Pes6Ball_Update(f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f);
    a0 = 3; func_009E1CB0(a0, a1, a2, a3);
    goto L_00B63FF8;
L_00B63E8C:;
    func_00B63BF0(a0, a1, a2, a3, a4, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f);
    goto L_00B63FF8;
L_00B63E9C:;
    func_00AD0A20(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f);
    Pes6Ball_Update(f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f);
    v0 = (s32) 0x590000U;
    v1 = 60;
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    a0 = 1;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = lo;
    v0 = (s32) ((u32) v0 << 5);
    a1 = v0 & 0xff; v0 = func_00152130(a0, a1, a2, a3, a4);
    if (v0 == 0) goto L_00B64028;
    a0 = 3;
    a1 = a0; func_009E1D30(a0, a1);
    goto L_00B63FF8;
L_00B63EEC:;
    func_00B63A60(a0, a1, a2, a3, a4, a5, f12.f, f13.f, f14.f);
    goto L_00B63FF8;
L_00B63EFC:;
    func_00AD0A20(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f);
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = 3;
    v1 = (*(volatile u8 *) (u32) (v1 + 98));
    if (v1 != v0) goto L_00B63F7C;
    v0 = (s32) 0x590000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + 7704));
    if (a0 == v1) goto L_00B63F40;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi; goto L_00B63F44;
L_00B63F40:;
    a0 = 1;
L_00B63F44:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a3 = 0;
    a0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) (a0 + 28));
    a1 = (*(volatile u16 *) (u32) (a0 + 38));
    a2 = (s32) ((u32) v0 + 0x8U); func_00284E60(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = 2;
    (*(volatile u8 *) (u32) (v0 + 98)) = (u8) v1;
L_00B63F7C:;
    Pes6Ball_Update(f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f);
    v0 = (s32) 0x590000U;
    v1 = 60;
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    a0 = 0;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = lo;
    v0 = (s32) ((u32) v0 << 5);
    a1 = v0 & 0xff; v0 = func_00152130(a0, a1, a2, a3, a4);
    if (v0 != 0) goto L_00B64000;
L_00B63FB0:;
    v1 = (s32) 0x590000U;
    a0 = (s32) 0x590000U;
    a1 = (*(volatile s32 *) (u32) (v1 + 7700));
    v1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 + 0x1U);
    v1 = (*(volatile u8 *) (u32) (v1 + 7140));
    v1 = (s32) ((u32) v1 << 1);
    v1 = (u64) a1 < (u64) v1;
    { s32 c_ = v1 != 0; (*(volatile u32 *) (u32) (a0 + 7700)) = (u32) a1; if (c_) goto L_00B64028; }
    v0 = 2;
    a0 = 3;
    (*(volatile u8 *) (u32) (gp + -19476)) = (u8) v0; func_009E1CB0(a0, a1, a2, a3);
    goto L_00B63FF8;
L_00B63FF0:;
    func_00B637B0(a0, a1, a2, a3, a4, a5, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f);
L_00B63FF8:;
    goto L_00B6402C;
L_00B64000:;
    v0 = func_00BA91C0(a0, a1, a2, a3);
    if (v0 == 0) goto L_00B63FB0;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (a0 + 7140));
    a0 = (s32) ((u32) a0 << 1);
    (*(volatile u32 *) (u32) (v1 + 7700)) = (u32) a0; goto L_00B63FB0;
L_00B64028:;
L_00B6402C:;
    return;
}
