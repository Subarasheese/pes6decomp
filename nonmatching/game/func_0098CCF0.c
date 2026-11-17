/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00903010(s64, s64, s64, s64);
void func_00912530(s64, s64, s64, s64);
s64 func_00915660(s64, s64, s64, s64);
void func_00983260(s64, s64, s64, s64);
f32 func_009835C0(f32, f32, f32);
void func_009842D0(s64, s64, s64, s64, f32, f32);
s64 func_0098F7E0(s64);
s64 func_009B3070(s64, s64);
s64 func_00A09950(s64);
void func_00C6A440(s64, s64, s64, s64);

void func_0098CCF0(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13, f32 fa14) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    f32 acc = 0;

    v0 = 10;
    v1 = (*(volatile s32 *) (u32) (gp + -31080));
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    { s32 c_ = v1 == v0; s0 = a0; if (c_) goto L_0098CE04; }
L_0098CD10:;
    v1 = (*(volatile u8 *) (u32) (s0 + 18));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e67U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == 0) { a0 = s0; goto L_0098CE3C; }
L_0098CD2C:;
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e4fU);
    a0 = (*(volatile u8 *) (u32) s0);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (a0 != v0) { v0 = 0; goto L_0098CD54; }
    v0 = (s64) ((u64) 0 + (u64) (s64) 1);
L_0098CD54:;
    if (v0 != 0) { a0 = s0; goto L_0098CE54; }
    v1 = (*(volatile u8 *) (u32) (s0 + 478));
    v0 = 1;
    if (v1 == v0) goto L_0098CD74;
    if (v1 == 0) { v0 = 100; goto L_0098CE64; }
L_0098CD74:;
    a0 = s0;
    a1 = 0; func_00912530(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (s0 + 477));
    v0 = 44;
    if (v1 == v0) goto L_0098CE78;
    a0 = s0; func_00903010(a0, a1, a2, a3);
    a0 = s0;
    a1 = 43; v0 = func_00915660(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 2;
    if (v1 == v0) { a0 = s0; goto L_0098CDD8; }
    v0 = 1;
    if (v1 == v0) { a0 = s0; goto L_0098CDC8; }
    goto L_0098CDE4;
L_0098CDC8:;
    func_00C6A440(a0, a1, a2, a3);
    goto L_0098CDE4;
L_0098CDD8:;
    a1 = 44; func_00983260(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 480)) = (u32) 0;
L_0098CDE4:;
    v0 = (s32) 0xcb0000U;
    f12.f = (*(volatile f32 *) (u32) (v0 + 21276));
    v0 = (s32) 0xcb0000U;
    f13.f = (*(volatile f32 *) (u32) (v0 + 21280));
    a0 = s0; func_009842D0(a0, a1, a2, a3, f12.f, f13.f);
    goto L_0098CF28;
L_0098CE04:;
    v0 = func_0098F7E0(a0);
    if (v0 == 0) goto L_0098CD10;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    a1 = (*(volatile u16 *) (u32) (v0 + 88));
    a0 = (*(volatile u16 *) (u32) (s0 + 280)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 12288;
    if (at == 0) goto L_0098CD10;
    v0 = 0; goto L_0098CD54;
L_0098CE3C:;
    v0 = func_00A09950(a0);
    if (v0 != 0) goto L_0098CD2C;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_0098CD54;
L_0098CE54:;
    func_00C6A440(a0, a1, a2, a3);
    goto L_0098CF24;
L_0098CE64:;
    (*(volatile u32 *) (u32) (s0 + 488)) = (u32) v0;
    v0 = (*(volatile u8 *) (u32) (s0 + 478));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (s0 + 478)) = (u8) v0; goto L_0098CD74;
L_0098CE78:;
    v0 = (s32) 0xcb0000U;
    v1 = (s32) 0x44800000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + 21284));
    a0 = (*(volatile u8 *) (u32) (s0 + 19));
    f3.i = (s32) v1;
    f0.i = (s32) 0;
    v1 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0x530eU);
    v0 = (s32) 0x42c80000U;
    f14.i = (s32) v0;
    v0 = (s32) 0xcb0000U;
    f12.f = (*(volatile f32 *) (u32) (v0 + 21276));
    v0 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s16 *) (u32) v0);
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    acc = f0.f + f1.f;
    f13.f = acc + f3.f * f2.f; f0.f = func_009835C0(f12.f, f13.f, f14.f);
    v0 = (s32) 0xcb0000U;
    a0 = s0;
    (*(volatile f32 *) (u32) (v0 + 21276)) = f0.f;
    a1 = 44; v0 = func_00915660(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 2;
    if (v1 == v0) { a0 = s0; goto L_0098CF14; }
    v0 = 1;
    if (v1 == v0) { a0 = s0; goto L_0098CF04; }
    goto L_0098CDE4;
L_0098CF04:;
    func_00C6A440(a0, a1, a2, a3);
    goto L_0098CDE4;
L_0098CF14:;
    a1 = 43; func_00983260(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 480)) = (u32) 0; goto L_0098CDE4;
L_0098CF24:;
L_0098CF28:;
    return;
}
