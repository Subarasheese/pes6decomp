/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00207920(s32);
void func_00209540(s32, s32, s32);
s32 func_00BBB990(s32, s32);
s32 func_00BBB9C0(s32, s32);
void func_00BD3BE0(s32, s32);
s32 func_00BD44E0(s32, s32);
void func_00BD48A0(s32, f32, f32);

s32 func_00BD60B0(s32 a0, s32 a1, s32 a2, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;

    s1 = a0;
    v0 = (*(volatile s32 *) (u32) (a0 + 4));
    a1 = (*(volatile u8 *) (u32) (v0 + 12));
    s0 = 0; v0 = func_00BD44E0(a0, a1);
    v1 = 1;
    if (v0 == v1) { a1 = (*(volatile s32 *) (u32) (s1 + 4)); goto L_00BD60F0; }
    s2 = (*(volatile s32 *) (u32) s1); goto L_00BD6130;
L_00BD60F0:;
    v0 = 7;
    v1 = (*(volatile u8 *) (u32) (a1 + 13));
    if (v1 != v0) { v0 = 4; goto L_00BD610C; }
L_00BD6100:;
    s0 = 1;
L_00BD6104:;
    v0 = s0; goto L_00BD6268;
L_00BD610C:;
    (*(volatile u8 *) (u32) (a1 + 18)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    a1 = (*(volatile u8 *) (u32) (v0 + 13));
    a0 = s1; func_00BD3BE0(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    v1 = 1;
    (*(volatile u8 *) (u32) (v0 + 18)) = (u8) v1; goto L_00BD6100;
L_00BD6130:;
    a0 = (*(volatile u16 *) (u32) (s2 + 40));
    a1 = 1280; v0 = func_00BBB990(a0, a1);
    f1.i = (s32) v0;
    a0 = (*(volatile u16 *) (u32) (s2 + 40));
    f0.f = (*(volatile f32 *) (u32) (s2 + 224));
    a1 = 1280;
    f1.f = (f32) f1.i;
    f20.f = f0.f + f1.f; v0 = func_00BBB9C0(a0, a1);
    f0.i = (s32) v0;
    v0 = (*(volatile s32 *) (u32) s1);
    f1.f = (f32) f0.i;
    f0.f = (*(volatile f32 *) (u32) (v0 + 232));
    f13.f = f0.f + f1.f;
    f1.i = f20.i & 0x7FFFFFFF;
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00BD61BC;
    f0.i = (s32) 0;
    fcc = f20.f <= f0.f;
    if (fcc) { v0 = (s32) 0xc64a0000U; goto L_00BD61B4; }
    v0 = (s32) 0x464a0000U;
    v0 = v0 | 0x6400;
    f20.i = (s32) v0;
    goto L_00BD61BC;
L_00BD61B4:;
    v0 = v0 | 0x6400;
    f20.i = (s32) v0;
L_00BD61BC:;
    f1.i = f13.i & 0x7FFFFFFF;
    v0 = (s32) 0x46080000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00BD620C;
    f0.i = (s32) 0;
    fcc = f13.f <= f0.f;
    if (fcc) { v0 = (s32) 0xc6000000U; goto L_00BD6204; }
    v0 = (s32) 0x46000000U;
    v0 = v0 | 0x6400;
    f13.i = (s32) v0;
    goto L_00BD620C;
L_00BD6204:;
    v0 = v0 | 0x6400;
    f13.i = (s32) v0;
L_00BD620C:;
    f12.i = f20.i;
    a0 = s1; func_00BD48A0(a0, f12.f, f13.f);
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = 1117;
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    v1 = (*(volatile u16 *) (u32) (a0 + 48));
    if (v1 == v0) goto L_00BD6238;
    goto L_00BD6104;
L_00BD6238:;
    v0 = func_00207920(a0);
    at = v0 < 6029;
    if (at == 0) goto L_00BD6104;
    v0 = (*(volatile s32 *) (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = (*(volatile u16 *) (u32) (a0 + 48));
    a2 = 6029; func_00209540(a0, a1, a2);
    goto L_00BD6104;
L_00BD6268:;
    return v0;
}
