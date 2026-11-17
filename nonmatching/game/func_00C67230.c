/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_009042C0(s32, s32, s32, s32);
s32 func_00916F00(s32, s32, s32, s32);
void func_009842D0(s32, s32, s32, s32, f32, f32);
void func_00C6A440(s32, s32, s32, s32);

void func_00C67230(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;

    v0 = (*(volatile u8 *) (u32) (a0 + 478));
    { s32 c_ = v0 != 0; s0 = a0; if (c_) goto L_00C67284; }
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) 0xcb0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 21284));
    f0.i = (s32) 0;
    f2.f = (*(volatile f32 *) (u32) (v1 + 24));
    f1.f = f2.f * f1.f;
    fcc = f1.f < f0.f;
    if (!fcc) { v0 = 2; goto L_00C67280; }
    v0 = 1;
    (*(volatile u8 *) (u32) (s0 + 478)) = (u8) v0; goto L_00C67284;
L_00C67280:;
    (*(volatile u8 *) (u32) (s0 + 478)) = (u8) v0;
L_00C67284:;
    v1 = (*(volatile u8 *) (u32) (s0 + 478));
    v0 = 3;
    if (v1 == v0) { a0 = s0; goto L_00C673D8; }
    v0 = 2;
    if (v1 == v0) { v1 = (s32) 0x43000000U; goto L_00C67310; }
    v0 = 1;
    if (v1 == v0) { v1 = (s32) 0x43000000U; goto L_00C672B4; }
    goto L_00C67368;
L_00C672B4:;
    v0 = (s32) 0xcb0000U;
    f21.i = (s32) v1;
    a1 = 50;
    f20.f = (*(volatile f32 *) (u32) (v0 + 21284));
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = v1 ^ 0x1;
    a0 = v0 & 0xff; f0.f = func_009042C0(a0, a1, a2, a3);
    f1.i = (s32) 0;
    v0 = (s32) 0x443a0000U;
    a1 = v0 | 0xc000;
    a0 = (s32) 0xcb0000U;
    acc = f1.f + f0.f;
    v1 = (s32) 0xcb0000U;
    f0.f = acc - f21.f * f20.f;
    v0 = (s32) 0xcb0000U;
    (*(volatile f32 *) (u32) (a0 + 21276)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 21284));
    f1.i = (s32) a1;
    f0.f = f1.f * f0.f;
    (*(volatile f32 *) (u32) (v0 + 21280)) = f0.f; goto L_00C67368;
L_00C67310:;
    v0 = (s32) 0xcb0000U;
    f21.i = (s32) v1;
    a1 = 50;
    f20.f = (*(volatile f32 *) (u32) (v0 + 21284));
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = v1 ^ 0x1;
    a0 = v0 & 0xff; f0.f = func_009042C0(a0, a1, a2, a3);
    f1.i = (s32) 0;
    v0 = (s32) 0xc43a0000U;
    a1 = v0 | 0xc000;
    a0 = (s32) 0xcb0000U;
    acc = f1.f + f0.f;
    v1 = (s32) 0xcb0000U;
    f0.f = acc - f21.f * f20.f;
    v0 = (s32) 0xcb0000U;
    (*(volatile f32 *) (u32) (a0 + 21276)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 21284));
    f1.i = (s32) a1;
    f0.f = f1.f * f0.f;
    (*(volatile f32 *) (u32) (v0 + 21280)) = f0.f;
L_00C67368:;
    v0 = (s32) 0xcb0000U;
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    f3.f = (*(volatile f32 *) (u32) (v0 + 21284));
    f0.f = (*(volatile f32 *) (u32) (s0 + 224));
    v1 = v1 ^ 0x1;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0x1e90U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f2.f = (*(volatile f32 *) (u32) v0);
    f1.f = f0.f * f3.f;
    f0.f = f2.f * f3.f;
    fcc = f1.f <= f0.f;
    if (!fcc) { v1 = (s32) 0x43800000U; goto L_00C673E8; }
L_00C673A4:;
    a0 = s0; v0 = func_00916F00(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (v0 == 0) { v0 = 3; goto L_00C67408; }
L_00C673B8:;
    v0 = (s32) 0xcb0000U;
    f12.f = (*(volatile f32 *) (u32) (v0 + 21276));
    v0 = (s32) 0xcb0000U;
    f13.f = (*(volatile f32 *) (u32) (v0 + 21280));
    a0 = s0; func_009842D0(a0, a1, a2, a3, f12.f, f13.f);
    goto L_00C67414;
L_00C673D8:;
    func_00C6A440(a0, a1, a2, a3);
    goto L_00C67410;
L_00C673E8:;
    v0 = (s32) 0xcb0000U;
    f0.i = (s32) 0;
    f1.i = (s32) v1;
    acc = f0.f + f2.f;
    f0.f = acc - f1.f * f3.f;
    (*(volatile f32 *) (u32) (v0 + 21276)) = f0.f; goto L_00C673A4;
L_00C67408:;
    (*(volatile u8 *) (u32) (s0 + 478)) = (u8) v0; goto L_00C673B8;
L_00C67410:;
L_00C67414:;
    return;
}
