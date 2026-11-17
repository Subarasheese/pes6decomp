/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_009042C0(s32, s32, s32, s32);
void func_00912D50(s32, s32, s32, s32);
void func_009842D0(s32, s32, s32, s32, f32, f32);
s32 func_0098ED30(s32);
s32 func_00C5FC80(s32);
void func_00C6A440(s32, s32, s32, s32);

void func_00C677D0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    f32 acc = 0;

    v0 = (s32) 0xcb0000U;
    v1 = (*(volatile u8 *) (u32) a0);
    v0 = (*(volatile u8 *) (u32) (v0 + 21251));
    { s32 c_ = v0 != v1; s0 = a0; if (c_) goto L_00C67810; }
    v0 = func_00C5FC80(a0);
    if (v0 == 0) { a0 = s0; goto L_00C67820; }
    goto L_00C679AC;
L_00C67810:;
    func_00C6A440(a0, a1, a2, a3);
    goto L_00C679A8;
L_00C67820:;
    a1 = 0; func_00912D50(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (s0 + 478));
    if (v0 == 0) { v0 = 1; goto L_00C679A0; }
L_00C67834:;
    v1 = (*(volatile u8 *) (u32) (s0 + 478));
    v0 = 1;
    if (v1 == v0) { a0 = (*(volatile u8 *) (u32) s0); goto L_00C6784C; }
    goto L_00C67980;
L_00C6784C:;
    v0 = func_0098ED30(a0);
    v1 = v0 & 0xff;
    v0 = 5;
    if (v1 == v0) goto L_00C67908;
    v0 = 4;
    if (v1 == v0) goto L_00C678E0;
    v0 = 3;
    if (v1 == v0) goto L_00C678B8;
    v0 = 2;
    if (v1 == v0) goto L_00C67890;
    v1 = (s32) 0x43000000U; goto L_00C67928;
L_00C67890:;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) 0x40000000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 21280));
    f1.i = (s32) v0;
    v0 = (s32) 0xcb0000U;
    f0.f = f0.f / f1.f;
    (*(volatile f32 *) (u32) (v0 + 21280)) = f0.f; goto L_00C67924;
L_00C678B8:;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) 0x40800000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 21280));
    f1.i = (s32) v0;
    v0 = (s32) 0xcb0000U;
    f0.f = f0.f / f1.f;
    (*(volatile f32 *) (u32) (v0 + 21280)) = f0.f; goto L_00C67924;
L_00C678E0:;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) 0x40c00000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 21280));
    f1.i = (s32) v0;
    v0 = (s32) 0xcb0000U;
    f0.f = f0.f / f1.f;
    (*(volatile f32 *) (u32) (v0 + 21280)) = f0.f; goto L_00C67924;
L_00C67908:;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) 0x41000000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 21280));
    f1.i = (s32) v0;
    v0 = (s32) 0xcb0000U;
    f0.f = f0.f / f1.f;
    (*(volatile f32 *) (u32) (v0 + 21280)) = f0.f;
L_00C67924:;
    v1 = (s32) 0x43000000U;
L_00C67928:;
    v0 = (s32) 0xcb0000U;
    f21.i = (s32) v1;
    a1 = 50;
    f20.f = (*(volatile f32 *) (u32) (v0 + 21284));
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = v1 ^ 0x1;
    a0 = v0 & 0xff; f0.f = func_009042C0(a0, a1, a2, a3);
    f1.i = (s32) 0;
    a0 = (s32) 0xcb0000U;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) 0xcb0000U;
    acc = f1.f + f0.f;
    f0.f = acc - f21.f * f20.f;
    (*(volatile f32 *) (u32) (a0 + 21276)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 21280));
    v1 = (*(volatile s16 *) (u32) (s0 + 464));
    f1.i = (s32) v1;
    f1.f = (f32) f1.i;
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (v0 + 21280)) = f0.f;
L_00C67980:;
    v0 = (s32) 0xcb0000U;
    f12.f = (*(volatile f32 *) (u32) (v0 + 21276));
    v0 = (s32) 0xcb0000U;
    f13.f = (*(volatile f32 *) (u32) (v0 + 21280));
    a0 = s0; func_009842D0(a0, a1, a2, a3, f12.f, f13.f);
    goto L_00C679A8;
L_00C679A0:;
    (*(volatile u8 *) (u32) (s0 + 478)) = (u8) v0; goto L_00C67834;
L_00C679A8:;
L_00C679AC:;
    return;
}
