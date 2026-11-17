/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00207390(s32, s32);
void func_00209A00(s32, s32, s32);
s32 func_00B2A420(s32);
s32 func_00BB1310(s32, s32, s32, s32);
void func_00C37130(s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00C373B0(s32, s32, s32, f32, f32);
s32 func_00C375E0(s32);
s32 func_00C37640(s32);
s32 func_00C37790(s32, s32);
s32 func_00C37850(s32);

void func_00C38EE0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s32 fcc = 0;
    f32 acc = 0;

    s2 = a0;
    v0 = (*(volatile s32 *) (u32) (a0 + 4));
    a0 = (*(volatile u8 *) (u32) (v0 + 84)); v0 = func_00C375E0(a0);
    s0 = v0;
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    a0 = (*(volatile u8 *) (u32) (v0 + 84));
    a1 = s2; v0 = func_00C37790(a0, a1);
    s1 = v0;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = (*(volatile u8 *) (u32) (s0 + 2));
    a0 = (s32) ((u32) s1 << 2);
    a0 = (s32) ((u32) a0 + (u32) s1);
    a0 = (s32) ((u32) a0 << 2);
    s0 = (s32) ((u32) v1 + (u32) a0);
    { s32 c_ = v0 == 0; a1 = (*(volatile u16 *) (u32) s0); if (c_) goto L_00C38F48; }
    a0 = a1 & 0xffff; v0 = func_00BB1310(a0, a1, a2, a3);
    a1 = v0 & 0xffff;
L_00C38F48:;
    v0 = (*(volatile s32 *) (u32) s2);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a2 = 0; func_00209A00(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) s2);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = 10; func_00207390(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    a0 = (*(volatile u8 *) (u32) (v0 + 84)); v0 = func_00C37640(a0);
    v1 = (*(volatile s32 *) (u32) s2);
    a0 = 255;
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    (*(volatile u8 *) (u32) (v1 + 45)) = (u8) v0;
    v1 = (*(volatile s32 *) (u32) s2);
    { s32 c_ = s1 == 0; (*(volatile u8 *) (u32) (v1 + 102)) = (u8) a0; if (c_) goto L_00C3909C; }
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    a0 = (*(volatile u8 *) (u32) (v0 + 84)); v0 = func_00C37850(a0);
    a0 = v0; v0 = func_00B2A420(a0);
    a3 = (*(volatile s32 *) (u32) v0);
    a1 = 1;
    v1 = (*(volatile s16 *) (u32) (s0 + 12));
    a0 = -1;
    a2 = (*(volatile s32 *) (u32) (a3 + 4));
    v0 = (s32) 0x43360000U;
    f1.i = (s32) v1;
    v0 = v0 | 0xb61;
    f0.i = (s32) v0;
    f1.f = (f32) f1.i;
    v0 = (*(volatile u16 *) (u32) (a3 + 38));
    v1 = (*(volatile u8 *) (u32) (a2 + 45));
    f3.f = f0.f * f1.f;
    if (v1 != 0) a1 = a0;
    f0.i = (s32) a1;
    { s32 c_ = v0 < 0; f4.f = (f32) f0.i; if (c_) goto L_00C38FF8; }
    f0.i = (s32) v0;
    f2.f = (f32) f0.i; goto L_00C39014;
L_00C38FF8:;
    v1 = (s32) ((u32) v0 >> 1);
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00C39014:;
    f1.i = (s32) 0;
    v0 = (s32) 0x4f000000U;
    f0.i = (s32) v0;
    acc = f1.f + f2.f;
    f1.f = acc + f3.f * f4.f;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_00C39048; }
    f0.i = (s32) f1.f;
    v1 = f0.i;
    v1 = v1 & 0xffff; goto L_00C39060;
L_00C39048:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    v1 = v1 | v0;
    v1 = v1 & 0xffff;
L_00C39060:;
    v0 = (*(volatile s32 *) (u32) s2);
    a1 = s1;
    (*(volatile u16 *) (u32) (v0 + 38)) = (u16) v1;
    a0 = (*(volatile s32 *) (u32) (s2 + 4));
    v1 = (*(volatile u16 *) (u32) (s0 + 14));
    v0 = (*(volatile u16 *) (u32) (s0 + 16));
    a0 = (*(volatile u8 *) (u32) (a0 + 84));
    a2 = (s32) ((u32) v1 + (u32) v0); func_00C373B0(a0, a1, a2, f12.f, f13.f);
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    a1 = s1;
    a3 = (*(volatile u16 *) (u32) (s0 + 16));
    a0 = (*(volatile u8 *) (u32) (v0 + 84));
    a2 = 0; func_00C37130(a0, a1, a2, a3, a4, f12.f, f13.f, f14.f, f15.f);
L_00C3909C:;
    return;
}
