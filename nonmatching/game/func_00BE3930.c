/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009B33A0(s32, s32, s32);
s32 func_00B35C60(s32);
void func_00B83FF0(s32, s32, s32, f32, f32, f32, f32, f32);
void func_00BD3BA0(s32, s32, s32);
void func_00BD3BE0(s32, s32);
void func_00BD3CF0(s32, s32, s32, s32, f32, f32);
void func_00BD4040(s32, s32);

void func_00BE3930(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    s32 fcc = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    v0 = func_00B35C60(a0);
    s0 = v0 & 0xff;
    a0 = s1;
    a1 = 4; func_00BD4040(a0, a1);
    a0 = s1;
    a1 = 4;
    a2 = 1; func_00BD3BA0(a0, a1, a2);
    a0 = s1;
    a1 = 5;
    a2 = 1; func_00BD3BA0(a0, a1, a2);
    v0 = (s32) 0xcc0000U;
    v1 = (s32) 0xcc0000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + -13608));
    f0.i = (s32) 0;
    v0 = (s32) 0xcc0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -13604));
    (*(volatile f32 *) (u32) (v1 + -13568)) = f2.f;
    fcc = f1.f < f0.f;
    v0 = (s32) 0xcc0000U;
    { s32 c_ = !fcc; (*(volatile f32 *) (u32) (v0 + -13564)) = f1.f; if (c_) goto L_00BE39B4; }
    v1 = 16384;
    v0 = (s32) 0xcc0000U;
    (*(volatile u16 *) (u32) (v0 + -13570)) = (u16) v1; goto L_00BE39C0;
L_00BE39B4:;
    v1 = 0xc000;
    v0 = (s32) 0xcc0000U;
    (*(volatile u16 *) (u32) (v0 + -13570)) = (u16) v1;
L_00BE39C0:;
    v0 = (s32) 0x42c80000U;
    a1 = s0;
    f16.i = (s32) v0;
    v0 = (s32) 0xcc0000U;
    f12.f = (*(volatile f32 *) (u32) (v0 + -13568));
    v0 = (s32) 0xcc0000U;
    f13.f = (*(volatile f32 *) (u32) (v0 + -13564));
    v0 = (s32) 0xcc0000U;
    a0 = (*(volatile u16 *) (u32) (v0 + -13570));
    v0 = (s32) 0xcc0000U;
    f14.f = (*(volatile f32 *) (u32) (v0 + -13104));
    v0 = (s32) 0xcc0000U;
    f15.f = (*(volatile f32 *) (u32) (v0 + -13072));
    a2 = (s32) ((u32) sp + 0x38U); func_00B83FF0(a0, a1, a2, f12.f, f13.f, f14.f, f15.f, f16.f);
    f0.f = (*(volatile f32 *) (u32) (sp + 56));
    v0 = (*(volatile s32 *) (u32) s1);
    (*(volatile f32 *) (u32) (v0 + 108)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (sp + 60));
    v0 = (*(volatile s32 *) (u32) s1);
    (*(volatile f32 *) (u32) (v0 + 112)) = f0.f;
    a0 = (*(volatile s32 *) (u32) s1);
    f1.f = (*(volatile f32 *) (u32) (a0 + 108));
    f0.f = (*(volatile f32 *) (u32) (a0 + 112));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    v0 = func_009B33A0(a0, a1, a2);
    at = (s32) 0x1900000U;
    at = (u64) v0 < (u64) at;
    if (at == 0) goto L_00BE3A64;
    a0 = s1;
    a1 = 3; func_00BD3BE0(a0, a1);
    a0 = s1;
    a1 = 5;
    a2 = 0; func_00BD3BA0(a0, a1, a2);
L_00BE3A64:;
    v0 = (*(volatile s32 *) (u32) s1);
    f12.f = (*(volatile f32 *) (u32) (v0 + 108));
    f13.f = (*(volatile f32 *) (u32) (v0 + 112));
    a0 = s1; func_00BD3CF0(a0, a1, a2, a3, f12.f, f13.f);
    v1 = (*(volatile s32 *) (u32) s1);
    a0 = 186;
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a0;
    v1 = (*(volatile s32 *) (u32) s1);
    (*(volatile u8 *) (u32) (v1 + 78)) = (u8) 0;
    return;
}
