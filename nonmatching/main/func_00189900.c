/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001819A0(s32, s32, s32, f32);

void func_00189900(s32 a0, s32 a1, s32 a2, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    f32 acc = 0;

    v1 = (s32) 0x520000U;
    s1 = 0;
    s2 = (*(volatile s32 *) (u32) (v1 + 236));
    v1 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 232));
    v1 = (*(volatile u8 *) (u32) (v1 + 1));
    at = 0 < v1;
    { s32 c_ = at == 0; s0 = 10300; if (c_) goto L_00189968; }
L_0018993C:;
    v1 = (*(volatile u8 *) (u32) (s2 + 2));
    if (v1 != 0) { v0 = (*(volatile u8 *) (u32) (s2 + 1)); goto L_00189970; }
L_00189948:;
    v1 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 232));
    s1 = (s32) ((u32) s1 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x4U);
    v1 = (*(volatile u8 *) (u32) (v1 + 1));
    v1 = s1 < v1;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x1U); if (c_) goto L_0018993C; }
L_00189968:;
    goto L_001899E8;
L_00189970:;
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_00189984; }
    f0.i = (s32) v0;
    f3.f = (f32) f0.i; goto L_0018999C;
L_00189984:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f3.f = (f32) f0.i;
    f3.f = f3.f + f3.f;
L_0018999C:;
    v0 = (s32) 0x520000U;
    v1 = (s32) 0x3e800000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 228));
    a0 = 21;
    f0.i = (s32) 0;
    a1 = s0;
    f2.i = (s32) v1;
    a2 = 1;
    acc = f0.f + f1.f;
    f20.f = acc + f2.f * f3.f;
    f12.i = f20.i; func_001819A0(a0, a1, a2, f12.f);
    f12.i = f20.i;
    a0 = 3;
    a1 = s0;
    a2 = 1; func_001819A0(a0, a1, a2, f12.f);
    goto L_00189948;
L_001899E8:;
    return;
}
