/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00912D50(s32, s32, s32, s32);
s32 func_00916990(s32, s32, s32, s32);
void func_009842D0(s32, s32, s32, s32, f32, f32);
void func_00C6A440(s32, s32, s32, s32);

void func_00C67430(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    f32 acc = 0;

    a1 = 0;
    s0 = a0; func_00912D50(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (s0 + 478));
    if (v0 == 0) { v0 = 1; goto L_00C67498; }
L_00C67454:;
    v1 = (*(volatile u8 *) (u32) (s0 + 478));
    v0 = 1;
    if (v1 == v0) { a2 = (*(volatile u8 *) (u32) (s0 + 19)); goto L_00C674A0; }
L_00C67464:;
    v0 = (s32) 0xcb0000U;
    f12.f = (*(volatile f32 *) (u32) (v0 + 21276));
    v0 = (s32) 0xcb0000U;
    f13.f = (*(volatile f32 *) (u32) (v0 + 21280));
    a0 = s0; func_009842D0(a0, a1, a2, a3, f12.f, f13.f);
    a0 = s0; v0 = func_00916990(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    if (v1 == 0) { a0 = s0; goto L_00C674FC; }
L_00C67490:;
    goto L_00C6750C;
L_00C67498:;
    (*(volatile u8 *) (u32) (s0 + 478)) = (u8) v0; goto L_00C67454;
L_00C674A0:;
    a1 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) 0x40000000U;
    f3.i = (s32) v0;
    a1 = (s32) ((u32) a1 + 0x1e90U);
    f1.i = (s32) 0;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) 0x40400000U;
    f0.i = (s32) v0;
    a2 = a2 ^ 0x1;
    a2 = (s32) ((u32) a2 << 2);
    v0 = (s32) 0xcb0000U;
    f2.f = (*(volatile f32 *) (u32) (a0 + 16));
    a1 = (s32) ((u32) a1 + (u32) a2);
    f4.f = (*(volatile f32 *) (u32) a1);
    acc = f1.f + f2.f;
    (*(volatile u32 *) (u32) (v0 + 21280)) = (u32) 0;
    f1.f = acc + f3.f * f4.f;
    f0.f = f1.f / f0.f;
    (*(volatile f32 *) (u32) (v1 + 21276)) = f0.f; goto L_00C67464;
L_00C674FC:;
    func_00C6A440(a0, a1, a2, a3);
    goto L_00C67490;
L_00C6750C:;
    return;
}
