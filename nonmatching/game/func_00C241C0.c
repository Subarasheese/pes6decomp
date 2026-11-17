/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00984160(s32, f32, f32);
s32 func_009B33A0(s32, s32, s32);

s32 func_00C241C0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;
    f32 acc = 0;

    v0 = (s32) 0x45000000U;
    f3.i = (s32) v0;
    f0.i = (s32) 0;
    v0 = (s32) 0xcb0000U;
    v1 = (s32) 0xcb0000U;
    f1.f = (*(volatile f32 *) (u32) (a0 + 224));
    s1 = a1;
    f2.f = (*(volatile f32 *) (u32) (v0 + 21284));
    s2 = a0;
    acc = f0.f + f1.f;
    f0.f = acc - f3.f * f2.f;
    v0 = (s32) 0xcb0000U;
    (*(volatile f32 *) (u32) (v1 + 21276)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a0 + 232));
    (*(volatile f32 *) (u32) (v0 + 21280)) = f0.f;
    v0 = (*(volatile s16 *) (u32) (a1 + 12));
    a2 = (*(volatile s16 *) (u32) (a1 + 14));
    a1 = v0; v0 = func_009B33A0(a0, a1, a2);
    s0 = v0;
    v0 = (s32) 0xcb0000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + 21284));
    f1.f = (*(volatile f32 *) (u32) (s2 + 224));
    f0.f = (*(volatile f32 *) (u32) (s2 + 116));
    f1.f = f1.f * f2.f;
    f0.f = f0.f * f2.f;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00C24250;
    v0 = 1; goto L_00C24380;
L_00C24250:;
    v0 = (s32) 0xcb0000U;
    f12.f = (*(volatile f32 *) (u32) (v0 + 21276));
    v0 = (s32) 0xcb0000U;
    f13.f = (*(volatile f32 *) (u32) (v0 + 21280));
    a0 = s2; func_00984160(a0, f12.f, f13.f);
    a3 = (*(volatile u8 *) (u32) (s2 + 92));
    v1 = (s32) 0x43800000U;
    f1.i = (s32) v1;
    a0 = (s32) 0x590000U;
    a2 = 6400;
    a1 = 1;
    v0 = (s32) 0xcb0000U;
    a0 = (s32) ((u32) a0 + 0x1e90U);
    v1 = (s32) ((u32) a3 << 1);
    v1 = (s32) ((u32) v1 + (u32) a3);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a2 - (u32) v1);
    (*(volatile u32 *) (u32) (s2 + 144)) = (u32) v1;
    (*(volatile u8 *) (u32) (s2 + 513)) = (u8) a1;
    f3.f = (*(volatile f32 *) (u32) (v0 + 21284));
    f0.f = (*(volatile f32 *) (u32) (s2 + 224));
    v0 = (*(volatile u8 *) (u32) (s2 + 19));
    f0.f = f0.f * f3.f;
    v0 = v0 ^ 0x1;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) a0 + (u32) v0);
    f2.f = (*(volatile f32 *) (u32) v0);
    f2.f = f2.f * f3.f;
    f1.f = f2.f - f1.f;
    fcc = f0.f <= f1.f;
    if (!fcc) { v0 = 4; goto L_00C24364; }
L_00C242D4:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    at = (u64) v0 < (u64) v1;
    if (at != 0) { at = (s32) 0x90000U; goto L_00C2436C; }
L_00C242EC:;
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 >> 2);
    at = (u64) v0 < (u64) v1;
    if (at == 0) goto L_00C24340;
    v0 = (s32) 0xcb0000U;
    v1 = (*(volatile u8 *) (u32) (s2 + 19));
    f2.f = (*(volatile f32 *) (u32) (v0 + 21284));
    f0.f = (*(volatile f32 *) (u32) (s2 + 224));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e88U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f1.f = (*(volatile f32 *) (u32) v0);
    f0.f = f0.f * f2.f;
    f1.f = f1.f * f2.f;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00C24340;
    v0 = 1; goto L_00C24380;
L_00C24340:;
    v1 = (*(volatile u8 *) (u32) (s2 + 18));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e67U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) { v0 = 3; goto L_00C24380; }
    v0 = 1; goto L_00C24380;
L_00C24364:;
    (*(volatile u8 *) (u32) (s2 + 513)) = (u8) v0; goto L_00C242D4;
L_00C2436C:;
    at = at | 0x1;
    at = s0 < at;
    if (at != 0) goto L_00C242EC;
    v0 = 1;
L_00C24380:;
    return v0;
}
