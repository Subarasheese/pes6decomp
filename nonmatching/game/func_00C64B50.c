/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00912530(s32, s32, s32, s32);
void func_00912D50(s32, s32, s32, s32);
f32 func_00983610(f32, f32, f32);
void func_009842D0(s32, s32, s32, s32, f32, f32);
void func_00C6A440(s32, s32, s32, s32);

void func_00C64B50(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    v1 = 2;
    a1 = (*(volatile u8 *) (u32) (a0 + 478));
    { s32 c_ = a1 == v1; s1 = a0; if (c_) goto L_00C64C88; }
    v1 = 1;
    if (a1 == v1) goto L_00C64B94;
    if (a1 == 0) { v0 = (*(volatile u8 *) (u32) (s1 + 478)); goto L_00C64B8C; }
    goto L_00C64C90;
L_00C64B8C:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (s1 + 478)) = (u8) v0;
L_00C64B94:;
    v1 = (*(volatile s32 *) (u32) (s1 + 480));
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00C64BB0; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00C64BB0:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    a0 = (*(volatile u8 *) (u32) (s1 + 18));
    a1 = (s32) ((u32) v1 << 6);
    v1 = (s32) 0x590000U;
    s0 = (s32) ((u32) v0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0x1e67U);
    v0 = 1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) { a0 = s0; goto L_00C64C98; }
    a0 = s0;
    a1 = 0; func_00912D50(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) s0);
    at = (s32) 0x900000U;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (*(volatile s32 *) (u32) (v0 + 344));
    at = (u64) v0 < (u64) at;
    if (at == 0) goto L_00C64C1C;
    v0 = 2;
    (*(volatile u8 *) (u32) (s1 + 478)) = (u8) v0;
L_00C64C1C:;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) 0xcb0000U;
    f2.f = (*(volatile f32 *) (u32) (v1 + 21276));
    f1.f = (*(volatile f32 *) (u32) (v0 + 21284));
    f0.i = (s32) 0;
    f1.f = f2.f * f1.f;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00C64C4C;
    v0 = (s32) 0xcb0000U;
    (*(volatile f32 *) (u32) (v0 + 21276)) = f0.f;
L_00C64C4C:;
    v0 = (s32) 0x40000000U;
    v1 = (s32) 0xcb0000U;
    f1.i = (s32) v0;
    a0 = s1;
    v0 = (s32) 0xcb0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 21280));
    f13.f = f0.f / f1.f;
    v0 = (s32) 0xcb0000U;
    f12.f = (*(volatile f32 *) (u32) (v0 + 21276));
    (*(volatile f32 *) (u32) (v1 + 21280)) = f13.f; func_009842D0(a0, a1, a2, a3, f12.f, f13.f);
    goto L_00C64C90;
L_00C64C88:;
    func_00C6A440(a0, a1, a2, a3);
L_00C64C90:;
    goto L_00C64D2C;
L_00C64C98:;
    a1 = 0; func_00912530(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (s0 + 16));
    at = v0 < 8;
    if (at != 0) goto L_00C64CF4;
L_00C64CB0:;
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) 0x400000U;
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) s1);
    v1 = (*(volatile s32 *) (u32) (v1 + 344));
    v0 = (u64) v1 < (u64) v0;
    if (v0 != 0) goto L_00C64CE8;
    v0 = (*(volatile s32 *) (u32) (s1 + 28));
    if (v0 != 0) goto L_00C64C1C;
    v0 = (*(volatile s32 *) (u32) (s0 + 28));
    if (v0 != 0) goto L_00C64C1C;
L_00C64CE8:;
    v0 = 2;
    (*(volatile u8 *) (u32) (s1 + 478)) = (u8) v0; goto L_00C64C1C;
L_00C64CF4:;
    v0 = (s32) 0xcb0000U;
    a0 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (s1 + 19));
    f12.f = (*(volatile f32 *) (u32) (v0 + 21276));
    v1 = (s32) 0x40a00000U;
    a0 = (s32) ((u32) a0 + 0x1e90U);
    f14.i = (s32) v1;
    v0 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) a0 + (u32) v0);
    f13.f = (*(volatile f32 *) (u32) v0); f0.f = func_00983610(f12.f, f13.f, f14.f);
    v0 = (s32) 0xcb0000U;
    (*(volatile f32 *) (u32) (v0 + 21276)) = f0.f; goto L_00C64CB0;
L_00C64D2C:;
    return;
}
