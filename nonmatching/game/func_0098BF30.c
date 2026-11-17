/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002AE670(s32);
void func_00912530(s32, s32, s32, s32);
void func_009842D0(s32, s32, s32, s32, f32, f32);
void func_00C6A440(s32, s32, s32, s32);

void func_0098BF30(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    f32 acc = 0;

    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e67U);
    v0 = 1;
    a1 = (*(volatile u8 *) (u32) (a0 + 18));
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile u8 *) (u32) v1);
    { s32 c_ = v1 != v0; s0 = a0; if (c_) goto L_0098C03C; }
    v0 = (*(volatile u8 *) (u32) (s0 + 475));
    if (v0 == 0) goto L_0098BFBC;
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 21399));
    if (v0 != 0) goto L_0098BFCC;
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = (*(volatile s32 *) (u32) (gp + -31080));
    v1 = v1 ^ 0x1;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) goto L_0098BFCC;
    a1 = 0; func_00912530(a0, a1, a2, a3);
    v0 = (s32) 0xcb0000U;
    f12.f = (*(volatile f32 *) (u32) (v0 + 21276));
    v0 = (s32) 0xcb0000U;
    f13.f = (*(volatile f32 *) (u32) (v0 + 21280));
    a0 = s0; func_009842D0(a0, a1, a2, a3, f12.f, f13.f);
L_0098BFB4:;
    goto L_0098C04C;
L_0098BFBC:;
    func_00C6A440(a0, a1, a2, a3);
    goto L_0098BFB4;
L_0098BFCC:;
    a0 = 64; v0 = func_002AE670(a0);
    f0.i = (s32) v0;
    a0 = 64;
    f1.f = (*(volatile f32 *) (u32) (s0 + 224));
    f3.f = (f32) f0.i;
    v0 = (s32) 0xcb0000U;
    f0.i = (s32) 0;
    f2.f = (*(volatile f32 *) (u32) (s0 + 240));
    acc = f0.f + f1.f;
    f0.f = acc + f2.f * f3.f;
    (*(volatile f32 *) (u32) (v0 + 21276)) = f0.f; v0 = func_002AE670(a0);
    f0.i = (s32) v0;
    v1 = (s32) 0xcb0000U;
    f1.f = (*(volatile f32 *) (u32) (s0 + 232));
    a0 = s0;
    f3.f = (f32) f0.i;
    v0 = (s32) 0xcb0000U;
    f0.i = (s32) 0;
    f2.f = (*(volatile f32 *) (u32) (s0 + 248));
    acc = f0.f + f1.f;
    f12.f = (*(volatile f32 *) (u32) (v0 + 21276));
    f13.f = acc + f2.f * f3.f;
    (*(volatile f32 *) (u32) (v1 + 21280)) = f13.f; func_009842D0(a0, a1, a2, a3, f12.f, f13.f);
    goto L_0098BFB4;
L_0098C03C:;
    func_00C6A440(a0, a1, a2, a3);
    goto L_0098BFB4;
L_0098C04C:;
    return;
}
