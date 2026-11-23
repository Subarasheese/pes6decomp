/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00292F00(s32);
void func_008B66C0(s32, s32, s32, s32);
s32 func_008BF080(s32);
void func_008C9A00(s32, s32, s32, s32);
void func_008C9A40(s32, s32, s32, s32);
void func_008C9DB0(s32, s32, f32, f32);
s32 func_008CB0C0(s32);
s32 func_008CD6A0(s32, s32, s32, s32);
void func_008E6350(s32, s32, s32, s32, s32, s32, s32, s32);
void func_008E6650(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_008E7010(s32, s32, s32, s32);
void func_008E72A0(s32, s32, s32, s32);

s32 func_008DE510(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    v0 = 2;
    { s32 c_ = a1 == v0; s0 = a0; if (c_) goto L_008DE72C; }
    v0 = 1;
    if (a1 == v0) { a1 = (*(volatile u8 *) (u32) (s0 + 25)); goto L_008DE5DC; }
    if (a1 == 0) { a0 = (s32) ((u32) s0 + 0xb0cU); goto L_008DE548; }
    v0 = 0; goto L_008DE75C;
L_008DE548:;
    a1 = 8; func_008C9DB0(a0, a1, f12.f, f13.f);
    v1 = (s32) 0x8e0000U;
    v0 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) v1 + 0xffffe810U);
    v0 = (s32) ((u32) v0 + 0xffffe770U);
    (*(volatile u32 *) (u32) (s0 + 2928)) = (u32) v1;
    a0 = (s32) ((u32) s0 + 0xb0cU);
    (*(volatile u32 *) (u32) (s0 + 2932)) = (u32) s0;
    (*(volatile u32 *) (u32) (s0 + 2944)) = (u32) v0;
    (*(volatile u32 *) (u32) (s0 + 2948)) = (u32) s0; func_008C9A40(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0xb0cU); v0 = func_008CB0C0(a0);
    a0 = v0 & 0xff;
    at = a0 < 11;
    if (at == 0) goto L_008DE758;
    v1 = (*(volatile u8 *) (u32) (s0 + 2374));
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (s32) ((u32) a0 + (u32) v0);
    a0 = (*(volatile u8 *) (u32) (v0 + 2546)); v0 = func_00292F00(a0);
    v1 = v0 & 0xff;
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffc390U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile u8 *) (u32) v0);
    a0 = s0; func_008B66C0(a0, a1, a2, a3);
    goto L_008DE758;
L_008DE5DC:;
    a0 = (s32) ((u32) s0 + 0xb0cU); v0 = func_008CD6A0(a0, a1, a2, a3);
    v1 = 8;
    if (v0 != v1) { a1 = (*(volatile u8 *) (u32) (s0 + 25)); goto L_008DE654; }
    a0 = (s32) ((u32) s0 + 0xb0cU); v0 = func_008CB0C0(a0);
    a0 = v0 & 0xff;
    at = a0 < 11;
    if (at == 0) goto L_008DE758;
    v1 = (*(volatile u8 *) (u32) (s0 + 2374));
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (s32) ((u32) a0 + (u32) v0);
    a0 = (*(volatile u8 *) (u32) (v0 + 2546)); v0 = func_00292F00(a0);
    v1 = v0 & 0xff;
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffc390U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile u8 *) (u32) v0);
    a0 = s0; func_008B66C0(a0, a1, a2, a3);
    goto L_008DE758;
L_008DE654:;
    a0 = (s32) ((u32) s0 + 0xb34U); v0 = func_008E7010(a0, a1, a2, a3);
    v1 = 3;
    if (v0 == v1) { v0 = (*(volatile u8 *) (u32) (s0 + 2870)); goto L_008DE69C; }
    v1 = 2;
    if (v0 == v1) { v0 = 39; goto L_008DE75C; }
    v1 = 1;
    if (v0 == v1) { a0 = (s32) ((u32) s0 + 0x129cU); goto L_008DE688; }
    goto L_008DE758;
L_008DE688:;
    a1 = (s32) ((u32) s0 + 0x208U); func_008E6650(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = 39;
    goto L_008DE75C;
L_008DE69C:;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile u8 *) (u32) (v0 + 2888)); v0 = func_008BF080(a0);
    s1 = v0;
    a0 = (s32) ((u32) s0 + 0xb0cU); v0 = func_008CB0C0(a0);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (s32) ((u32) s0 + 0x129cU);
    (*(volatile u8 *) (u32) (v0 + 5289)) = (u8) s1; func_008E6350(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s0 + 0xb0cU); v0 = func_008CB0C0(a0);
    a0 = v0 & 0xff;
    at = a0 < 11;
    if (at == 0) goto L_008DE758;
    v1 = (*(volatile u8 *) (u32) (s0 + 2374));
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (s32) ((u32) a0 + (u32) v0);
    a0 = (*(volatile u8 *) (u32) (v0 + 2546)); v0 = func_00292F00(a0);
    v1 = v0 & 0xff;
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffc390U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile u8 *) (u32) v0);
    a0 = s0; func_008B66C0(a0, a1, a2, a3);
    goto L_008DE758;
L_008DE72C:;
    a1 = 0; func_008B66C0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0xb0cU); func_008C9A00(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 2928)) = (u32) 0;
    a0 = (s32) ((u32) s0 + 0xb34U);
    (*(volatile u32 *) (u32) (s0 + 2932)) = (u32) 0;
    a1 = 4;
    (*(volatile u32 *) (u32) (s0 + 2944)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 2948)) = (u32) 0; func_008E72A0(a0, a1, a2, a3);
L_008DE758:;
    v0 = 0;
L_008DE75C:;
    return v0;
}
