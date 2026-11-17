/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00290B80(s32, s32);
s32 func_0090B8B0(s32, s32, s32, s32);
void func_00914430(s32, s32, s32, s32);
void func_00984160(s32, f32, f32);

s32 func_00C25B20(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;
    f32 acc = 0;

    v1 = (s32) 0x5a0000U;
    v0 = (s32) 0x5a0000U;
    v1 = (s32) ((u32) v1 + 0x216fU);
    s2 = a0;
    s1 = a1;
    a1 = (*(volatile u8 *) (u32) (a0 + 18));
    v0 = (s32) ((u32) v0 + 0x2183U);
    a0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    a1 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) v1 + 0x21U);
    a0 = v0 & 0xff; v0 = func_00290B80(a0, a1);
    v1 = v0 & 0xff;
    a3 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) 0xc61c0000U;
    f1.i = (s32) v1;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    a4 = 4;
    f1.f = (f32) f1.i;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) 0xcb0000U;
    a0 = s2;
    a1 = 1536;
    a2 = (s32) ((u32) s1 + 0x28U);
    f1.f = f0.f + f1.f;
    f0.f = (*(volatile f32 *) (u32) (a3 + 21284));
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (v1 + 21276)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s2 + 232));
    (*(volatile f32 *) (u32) (v0 + 21280)) = f0.f;
    (*(volatile u8 *) (u32) (s2 + 513)) = (u8) a4; func_00914430(a0, a1, a2, a3);
    v0 = (s32) 0xcb0000U;
    f12.f = (*(volatile f32 *) (u32) (v0 + 21276));
    v0 = (s32) 0xcb0000U;
    f13.f = (*(volatile f32 *) (u32) (v0 + 21280));
    a0 = s2; func_00984160(a0, f12.f, f13.f);
    v0 = (s32) 0xcb0000U;
    v1 = (s32) 0x44000000U;
    f4.f = (*(volatile f32 *) (u32) (v0 + 21284));
    f3.f = (*(volatile f32 *) (u32) (s2 + 224));
    f2.i = (s32) v1;
    f1.i = (s32) 0;
    acc = f1.f + f2.f;
    v0 = (s32) 0xcb0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 21276));
    f1.f = acc + f3.f * f4.f;
    f0.f = f0.f * f4.f;
    fcc = f0.f < f1.f;
    if (fcc) { v0 = 1; goto L_00C25CDC; }
    v0 = (*(volatile u8 *) (u32) (s2 + 16));
    at = v0 < 8;
    { s32 c_ = at == 0; s0 = 0; if (c_) goto L_00C25C88; }
L_00C25C3C:;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
L_00C25C40:;
    at = (u64) s0 < (u64) v0;
    if (at == 0) goto L_00C25C74;
    a0 = (*(volatile u8 *) (u32) (s2 + 18));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e67U);
    v0 = 1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 != v0) goto L_00C25C74;
    v0 = v0 & 0xff; goto L_00C25C78;
L_00C25C74:;
    v0 = 0;
L_00C25C78:;
    if (v0 == 0) { v0 = 3; goto L_00C25CDC; }
    v0 = 1; goto L_00C25CDC;
L_00C25C88:;
    a0 = s2;
    a1 = 1; v0 = func_0090B8B0(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 2;
    if (v1 == v0) goto L_00C25CD0;
    v0 = 1;
    if (v1 == v0) goto L_00C25CC0;
    if (v1 == 0) goto L_00C25C3C;
    v0 = (*(volatile s32 *) (u32) (s1 + 4)); goto L_00C25C40;
L_00C25CC0:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    s0 = (s32) ((u32) v0 >> 1); goto L_00C25C3C;
L_00C25CD0:;
    v0 = (s32) 0x590000U;
    s0 = (*(volatile u8 *) (u32) (v0 + 7140)); goto L_00C25C3C;
L_00C25CDC:;
    return v0;
}
