/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00255E70(s32);
void func_002D4C40(s32, s32, s32, s32, s32, s32, s32);
void func_00305E60(s32, s32);
s32 func_00992DF0(s32, s32, s32, s32);
s32 func_009E1C90(s32, s32, s32, s32);

s32 func_002FF8A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { 0 };
    volatile union { f32 f; s32 i; } f13 = { 0 };
    s32 fcc = 0;

    v0 = (s32) 0x590000U;
    v0 = (*(volatile s8 *) (u32) (v0 + 7605));
    { s32 c_ = v0 == 0; s2 = a0; if (c_) goto L_002FF8CC; }
    v0 = 0; goto L_002FF9E0;
L_002FF8CC:;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.i = (s32) 0;
    s1 = (*(volatile s32 *) (u32) (s2 + 24));
    f1.f = (*(volatile f32 *) (u32) (v0 + 16));
    fcc = f1.f < f0.f;
    { s32 c_ = fcc; s0 = 1; if (c_) goto L_002FF8EC; }
    s0 = 0;
L_002FF8EC:;
    a0 = 1; v0 = func_009E1C90(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 1;
    if (v1 == v0) goto L_002FF90C;
    v1 = 255; goto L_002FF970;
L_002FF90C:;
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 24360));
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_002FF924; }
    v1 = 255; goto L_002FF970;
L_002FF924:;
    f12.f = (*(volatile f32 *) (u32) (v0 + 16));
    f13.f = (*(volatile f32 *) (u32) (v0 + 24));
    a0 = s0 & 0xff; v0 = func_00992DF0(a0, a1, a2, a3);
    if (v0 == 0) { v1 = 255; goto L_002FF970; }
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7629));
    { s32 c_ = v1 >= 0; v0 = v1 & 0x1; if (c_) goto L_002FF958; }
    if (v0 == 0) { v0 = s0 ^ v0; goto L_002FF95C; }
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_002FF958:;
    v0 = s0 ^ v0;
L_002FF95C:;
    a0 = v0 & 0xff; v0 = func_00255E70(a0);
    if (v0 == 0) { v1 = 1; goto L_002FF970; }
    v1 = 0;
L_002FF970:;
    v0 = 255;
    { s32 c_ = v1 == v0; (*(volatile u32 *) (u32) (s1 + 36)) = (u32) v1; if (c_) goto L_002FF9DC; }
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x3b0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    v1 = (s32) ((u32) v1 + 0x4fd0U);
    v0 = (s32) ((u32) v0 << 1);
    (*(volatile u32 *) (u32) (s1 + 28)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s1 + 36));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0); func_002D4C40(a0, a1, a2, a3, a4, a5, a6);
    v1 = (*(volatile s32 *) (u32) (s1 + 36));
    v0 = (s32) 0x3b0000U;
    a1 = (s32) 0x300000U;
    v0 = (s32) ((u32) v0 + 0x4fd0U);
    a0 = s2;
    a1 = (s32) ((u32) a1 + 0xfffff6d0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (s1 + 40)) = (u32) v0; func_00305E60(a0, a1);
    v0 = 1; goto L_002FF9E0;
L_002FF9DC:;
    v0 = 0;
L_002FF9E0:;
    return v0;
}
