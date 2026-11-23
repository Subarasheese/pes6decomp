/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008B3A70(s32);
void func_008B66C0(s32, s32, s32, s32);
void func_008C9340(s32, s32);
s32 func_008C9350(s32);
void func_008C9360(s32, s32, f32, f32);
s32 func_008C9600(s32, s32, s32, s32, f32, f32);
void func_008C97C0(s32, s32, s32, s32);
void func_008C9800(s32, s32, s32, s32, f32);
void func_008C9A00(s32, s32, s32, s32);
void func_008C9A40(s32, s32, s32, s32);
void func_008C9DB0(s32, s32, f32, f32);
void func_008CAA00(s32, s32, s32, s32);
s32 func_008CB0C0(s32);
void func_008DCBA0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_008DCD20(s32, s32, s32, s32, f32);
void func_008E5200(s32, s32, s32, s32, s32, s32, s32, s32);
void func_008E54F0(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_008E7010(s32, s32, s32, s32);
void func_008E72A0(s32, s32, s32, s32);

s32 func_008DD960(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    v0 = 2;
    { s32 c_ = a1 == v0; s0 = a0; if (c_) goto L_008DDB60; }
    v1 = 1;
    if (a1 == v1) { v0 = (*(volatile u8 *) (u32) (s0 + 22)); goto L_008DDA10; }
    if (a1 == 0) { a0 = (s32) ((u32) s0 + 0xb0cU); goto L_008DD994; }
    v0 = 0; goto L_008DDB98;
L_008DD994:;
    a1 = 14; func_008C9DB0(a0, a1, f12.f, f13.f);
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = 0; func_008CAA00(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0xb0cU); v0 = func_008CB0C0(a0);
    a1 = (*(volatile u8 *) (u32) s0);
    a0 = (s32) ((u32) s0 + 0x2b0cU); func_008C9800(a0, a1, a2, a3, f12.f);
    v0 = (*(volatile s32 *) (u32) (s0 + 12832));
    a0 = (s32) ((u32) s0 + 0x2b0cU);
    a1 = (s32) ((u32) v0 + 0x208U); func_008C9360(a0, a1, f12.f, f13.f);
    a0 = (s32) ((u32) s0 + 0x2168U); func_008DCD20(a0, a1, a2, a3, f12.f);
    a0 = (s32) ((u32) s0 + 0x129cU);
    a1 = 7; func_008E5200(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s0; func_008B3A70(a0);
    a0 = (s32) ((u32) s0 + 0x2b0cU); v0 = func_008C9350(a0);
    a1 = v0;
    a0 = (s32) ((u32) s0 + 0x129cU); func_008E54F0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s0;
    a1 = 29; func_008B66C0(a0, a1, a2, a3);
    goto L_008DDB94;
L_008DDA10:;
    if (v0 == v1) { a1 = (*(volatile u8 *) (u32) (s0 + 25)); goto L_008DDADC; }
    if (v0 == 0) { v0 = (*(volatile u8 *) (u32) (s0 + 28)); goto L_008DDA28; }
    goto L_008DDB94;
L_008DDA28:;
    if (v0 == 0) { a1 = (*(volatile u8 *) (u32) (s0 + 25)); goto L_008DDA3C; }
    func_008B3A70(a0);
    a1 = (*(volatile u8 *) (u32) (s0 + 25));
L_008DDA3C:;
    a0 = (s32) ((u32) s0 + 0x2b0cU); v0 = func_008C9600(a0, a1, a2, a3, f12.f, f13.f);
    v1 = 3;
    if (v0 == v1) { a0 = s0; goto L_008DDAB8; }
    v1 = 1;
    if (v0 == v1) { v0 = 39; goto L_008DDB98; }
    v1 = 2;
    if (v0 == v1) { a0 = (s32) ((u32) s0 + 0xb0cU); goto L_008DDA70; }
    goto L_008DDB94;
L_008DDA70:;
    a1 = 6; func_008C9DB0(a0, a1, f12.f, f13.f);
    a0 = (s32) ((u32) s0 + 0x2b0cU);
    a1 = 0; func_008C9340(a0, a1);
    v1 = (s32) 0x8e0000U;
    v0 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) v1 + 0xffffdc60U);
    v0 = (s32) ((u32) v0 + 0xffffdbb0U);
    (*(volatile u32 *) (u32) (s0 + 2928)) = (u32) v1;
    a0 = (s32) ((u32) s0 + 0xb0cU);
    (*(volatile u32 *) (u32) (s0 + 2932)) = (u32) s0;
    (*(volatile u32 *) (u32) (s0 + 2944)) = (u32) v0;
    (*(volatile u32 *) (u32) (s0 + 2948)) = (u32) s0; func_008C9A40(a0, a1, a2, a3);
    v0 = 1;
    (*(volatile u8 *) (u32) (s0 + 22)) = (u8) v0; goto L_008DDB94;
L_008DDAB8:;
    func_008B3A70(a0);
    a0 = (s32) ((u32) s0 + 0x2b0cU); v0 = func_008C9350(a0);
    a0 = (s32) ((u32) s0 + 0x129cU);
    a1 = v0; func_008E54F0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008DDB94;
L_008DDADC:;
    a0 = (s32) ((u32) s0 + 0xb34U); v0 = func_008E7010(a0, a1, a2, a3);
    v1 = 1;
    if (v0 == v1) { a0 = (s32) ((u32) s0 + 0xb0cU); goto L_008DDB2C; }
    v1 = 2;
    if (v0 == v1) { a0 = (s32) ((u32) s0 + 0x129cU); goto L_008DDB04; }
    goto L_008DDB94;
L_008DDB04:;
    a1 = 6; func_008E5200(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s0 + 0xb0cU); func_008C9A00(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 2928)) = (u32) 0;
    v0 = 39;
    (*(volatile u32 *) (u32) (s0 + 2932)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 2944)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 2948)) = (u32) 0; goto L_008DDB98;
L_008DDB2C:;
    a1 = 14; func_008C9DB0(a0, a1, f12.f, f13.f);
    a0 = (s32) ((u32) s0 + 0xb0cU); func_008C9A00(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 2928)) = (u32) 0;
    a0 = (s32) ((u32) s0 + 0x2b0cU);
    (*(volatile u32 *) (u32) (s0 + 2932)) = (u32) 0;
    a1 = 1;
    (*(volatile u32 *) (u32) (s0 + 2944)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 2948)) = (u32) 0; func_008C9340(a0, a1);
    (*(volatile u8 *) (u32) (s0 + 22)) = (u8) 0; goto L_008DDB94;
L_008DDB60:;
    a0 = (s32) ((u32) s0 + 0x2168U); func_008DCBA0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s0 + 0x2b0cU); func_008C97C0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0xb34U);
    a1 = 2; func_008E72A0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x129cU);
    a1 = 255; func_008E54F0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s0;
    a1 = 0; func_008B66C0(a0, a1, a2, a3);
L_008DDB94:;
    v0 = 0;
L_008DDB98:;
    return v0;
}
