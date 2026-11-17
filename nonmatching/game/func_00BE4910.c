/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00207D10(s32);
void func_00208610(s32, s32, s32);
void func_00B2ACF0(s32, s32, s32, s32);
void func_00B35120(s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00B35340(s32, s32, s32, s32, f32, f32, f32, f32);
void func_00B364D0(s32);

void func_00BE4910(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s32 fcc = 0;

    s0 = a0; func_00B2ACF0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) s0);
    v0 = (s32) 0xcc0000U;
    v0 = (*(volatile u16 *) (u32) (v0 + -12944));
    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    { s32 c_ = v0 < 0; f1.f = (*(volatile f32 *) (u32) (v1 + 56)); if (c_) goto L_00BE4948; }
    f0.i = (s32) v0;
    f0.f = (f32) f0.i; goto L_00BE4964;
L_00BE4948:;
    v1 = (s32) ((u32) v0 >> 1);
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_00BE4964:;
    fcc = f1.f < f0.f;
    if (fcc) goto L_00BE49E0;
    f1.f = (*(volatile f32 *) (u32) (a0 + 232));
    v1 = (s32) ((u32) a0 + 0xe8U);
    f2.i = f1.i & 0x7FFFFFFF;
    v0 = (s32) 0x444d0000U;
    v0 = v0 | 0xc000;
    f0.i = (s32) v0;
    fcc = f2.f <= f0.f;
    if (fcc) goto L_00BE49D8;
    f0.i = (s32) 0;
    fcc = f1.f <= f0.f;
    if (fcc) { v0 = (s32) 0x40800000U; goto L_00BE49C8; }
    f1.f = (*(volatile f32 *) (u32) v1);
    v0 = (s32) 0x40800000U;
    f0.i = (s32) v0;
    f0.f = f1.f - f0.f;
    (*(volatile f32 *) (u32) v1) = f0.f; goto L_00BE49D8;
L_00BE49C8:;
    f0.i = (s32) v0;
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) v1) = f0.f;
L_00BE49D8:;
    a0 = s0; func_00B35120(a0, a1, a2, a3, a4, f12.f, f13.f, f14.f, f15.f);
L_00BE49E0:;
    v0 = (*(volatile s32 *) (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); v0 = func_00207D10(a0);
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) s0); goto L_00BE4A04; }
L_00BE49F4:;
    a0 = s0; func_00B35340(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_00BE4A4C;
L_00BE4A04:;
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); func_00208610(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) s0);
    a1 = 2;
    v0 = (s32) 0xcc0000U;
    v1 = 170;
    a0 = 3;
    (*(volatile u32 *) (u32) (a2 + 108)) = (u32) 0;
    a2 = (*(volatile s32 *) (u32) s0);
    (*(volatile u32 *) (u32) (a2 + 112)) = (u32) 0;
    a2 = (*(volatile s32 *) (u32) s0);
    (*(volatile u8 *) (u32) (a2 + 78)) = (u8) 0;
    (*(volatile u8 *) (u32) (v0 + -12927)) = (u8) a1;
    v0 = (*(volatile s32 *) (u32) s0);
    (*(volatile u16 *) (u32) (v0 + 24)) = (u16) v1; func_00B364D0(a0);
    goto L_00BE49F4;
L_00BE4A4C:;
    return;
}
