/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00130BC0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };
    volatile union { f32 f; s32 i; } f20 = { 0 };

    s5 = a1;
    v1 = (*(volatile s32 *) (u32) (a1 + 4));
    f20.i = f12.i;
    a3 = v1 & 0x8;
    { s32 c_ = a3 != 0; a4 = v1 & 0x2; if (c_) goto L_00130D18; }
L_00130C08:;
    if (a4 == 0) goto L_00130C3C;
    if (a3 == 0) goto L_00130C20;
    s6 = 0; goto L_00130C28;
L_00130C20:;
    s6 = (s32) 0x130000U;
    s6 = (s32) ((u32) s6 + 0x12d0U);
L_00130C28:;
    s7 = (s32) 0x130000U;
    fp = (s32) 0x130000U;
    s7 = (s32) ((u32) s7 + 0xff0U);
    fp = (s32) ((u32) fp + 0xd80U); goto L_00130C64;
L_00130C3C:;
    if (a3 == 0) goto L_00130C4C;
    s6 = 0; goto L_00130C54;
L_00130C4C:;
    s6 = (s32) 0x130000U;
    s6 = (s32) ((u32) s6 + 0x1440U);
L_00130C54:;
    s7 = (s32) 0x130000U;
    fp = (s32) 0x130000U;
    s7 = (s32) ((u32) s7 + 0x1270U);
    fp = (s32) ((u32) fp + 0xee0U);
L_00130C64:;
    s4 = (*(volatile s32 *) (u32) a0);
    v1 = (*(volatile s32 *) (u32) (a2 + 4));
    a1 = (*(volatile s32 *) (u32) (s5 + 20));
    a0 = (*(volatile s32 *) (u32) (s5 + 24));
    s0 = (s32) ((u32) s5 + (u32) v1);
    s2 = (s32) ((u32) s5 + (u32) a1);
    { s32 c_ = s4 == 0; s1 = (s32) ((u32) s5 + (u32) a0); if (c_) goto L_00130D10; }
L_00130C84:;
    v1 = (*(volatile s32 *) (u32) s2);
    v0 = (*(volatile s32 *) (u32) s1);
    v1 = (s32) ((u32) s5 + (u32) v1);
    { s32 c_ = v0 == 0; a1 = (s32) ((u32) v1 + 0x4U); if (c_) goto L_00130D2C; }
    a2 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) ((u32) s5 + (u32) v0);
    s3 = (s32) ((u32) v0 + 0x4U);
    a0 = s4;
    { u32 t_ = (u32) s6; f12.i = f20.i; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    v0 = (*(volatile s8 *) (u32) (s4 + 259));
    v0 = v0 & 0x80;
    if (v0 == 0) goto L_00130CE0;
    a2 = (*(volatile u8 *) (u32) (s0 + 1));
    a1 = s3;
    a0 = s4;
    { u32 t_ = (u32) fp; f12.i = f20.i; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    goto L_00130CF8;
L_00130CE0:;
    a2 = (*(volatile u8 *) (u32) (s0 + 1));
    a1 = s3;
    a0 = s4;
    { u32 t_ = (u32) s7; f12.i = f20.i; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
L_00130CF8:;
    s4 = (*(volatile s32 *) (u32) (s4 + 260));
    s2 = (s32) ((u32) s2 + 0x4U);
    s1 = (s32) ((u32) s1 + 0x4U);
    { s32 c_ = s4 != 0; s0 = (s32) ((u32) s0 + 0x2U); if (c_) goto L_00130C84; }
L_00130D10:;
    goto L_00130D48;
L_00130D18:;
    a1 = (*(volatile s8 *) (u32) (a0 + 29));
    v1 = -128;
    v1 = a1 | v1;
    (*(volatile u8 *) (u32) (a0 + 29)) = (u8) v1; goto L_00130C08;
L_00130D2C:;
    a2 = (*(volatile u8 *) (u32) s0);
    a0 = s4;
    { u32 t_ = (u32) s6; f12.i = f20.i; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    (*(volatile u32 *) (u32) (s4 + 200)) = (u32) 0; goto L_00130CF8;
L_00130D48:;
    return v0;
}
