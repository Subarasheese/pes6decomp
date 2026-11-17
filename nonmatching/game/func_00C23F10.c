/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00905270(s32, s32, s32, s32);
s32 func_0090B8B0(s32, s32, s32, s32);
void func_00914430(s32, s32, s32, s32);
void func_00984160(s32, f32, f32);

s32 func_00C23F10(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;
    f32 acc = 0;

    v0 = (s32) 0x43000000U;
    a2 = (s32) 0x590000U;
    f3.i = (s32) v0;
    a2 = (s32) ((u32) a2 + 0x1e90U);
    v0 = (s32) 0xcb0000U;
    a3 = (*(volatile u8 *) (u32) (a0 + 19));
    f2.f = (*(volatile f32 *) (u32) (v0 + 21284));
    f0.i = (s32) 0;
    v1 = (s32) 0xcb0000U;
    s2 = a0;
    s1 = a1;
    a3 = a3 ^ 0x1;
    v0 = (s32) 0xcb0000U;
    a3 = (s32) ((u32) a3 << 2);
    a2 = (s32) ((u32) a2 + (u32) a3);
    f1.f = (*(volatile f32 *) (u32) a2);
    acc = f0.f + f1.f;
    f0.f = acc - f3.f * f2.f;
    (*(volatile f32 *) (u32) (v1 + 21276)) = f0.f;
    v1 = (*(volatile s16 *) (u32) (a1 + 46));
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (v0 + 21280)) = f0.f; v0 = func_00905270(a0, a1, a2, a3);
    if (v0 == 0) goto L_00C24018;
    f2.f = (*(volatile f32 *) (u32) (s2 + 232));
    v0 = (s32) 0xcb0000U;
    f0.i = (s32) f2.f;
    (*(volatile f32 *) (u32) (v0 + 21280)) = f2.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00C23FB0; }
L_00C23FB0:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x446a0000U;
    v0 = v0 | 0xc000;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00C24018;
    f0.i = (s32) 0;
    fcc = f2.f < f0.f;
    if (!fcc) { v0 = 1; goto L_00C23FF0; }
    v0 = -1;
L_00C23FF0:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x446a0000U;
    v1 = v0 | 0xc000;
    v0 = (s32) 0xcb0000U;
    f0.i = (s32) v1;
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (v0 + 21280)) = f0.f;
L_00C24018:;
    v0 = (s32) 0xcb0000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + 21276));
    f0.i = (s32) f2.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00C24034; }
L_00C24034:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x463c0000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00C2409C;
    f0.i = (s32) 0;
    fcc = f2.f < f0.f;
    if (!fcc) { v0 = 1; goto L_00C24074; }
    v0 = -1;
L_00C24074:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x463c0000U;
    v1 = v0 | 0x6400;
    v0 = (s32) 0xcb0000U;
    f0.i = (s32) v1;
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (v0 + 21276)) = f0.f;
L_00C2409C:;
    v0 = (*(volatile u8 *) (u32) (s2 + 16));
    at = v0 < 8;
    { s32 c_ = at == 0; s0 = 0; if (c_) goto L_00C24130; }
L_00C240AC:;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
L_00C240B0:;
    at = (u64) s0 < (u64) v0;
    if (at == 0) goto L_00C240E4;
    a0 = (*(volatile u8 *) (u32) (s2 + 18));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e67U);
    v0 = 1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 != v0) goto L_00C240E4;
    v0 = v0 & 0xff; goto L_00C240E8;
L_00C240E4:;
    v0 = 0;
L_00C240E8:;
    if (v0 != 0) { v0 = 1; goto L_00C2419C; }
    v1 = (*(volatile s32 *) (u32) (s2 + 272));
    v0 = (s32) 0x1000000U;
    v0 = (u64) v1 < (u64) v0;
    if (v0 != 0) goto L_00C24184;
    v0 = (*(volatile s32 *) (u32) (s1 + 40));
    if (v0 != 0) goto L_00C24184;
L_00C24110:;
    v0 = (s32) 0xcb0000U;
    f12.f = (*(volatile f32 *) (u32) (v0 + 21276));
    v0 = (s32) 0xcb0000U;
    f13.f = (*(volatile f32 *) (u32) (v0 + 21280));
    a0 = s2; func_00984160(a0, f12.f, f13.f);
    v0 = 3; goto L_00C2419C;
L_00C24130:;
    a0 = s2;
    a1 = 1; v0 = func_0090B8B0(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 2;
    if (v1 == v0) goto L_00C24178;
    v0 = 1;
    if (v1 == v0) goto L_00C24168;
    if (v1 == 0) goto L_00C240AC;
    v0 = (*(volatile s32 *) (u32) (s1 + 4)); goto L_00C240B0;
L_00C24168:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    s0 = (s32) ((u32) v0 >> 1); goto L_00C240AC;
L_00C24178:;
    v0 = (s32) 0x590000U;
    s0 = (*(volatile u8 *) (u32) (v0 + 7140)); goto L_00C240AC;
L_00C24184:;
    a2 = (s32) ((u32) s1 + 0x28U);
    a0 = s2;
    a1 = 1536; func_00914430(a0, a1, a2, a3);
    goto L_00C24110;
L_00C2419C:;
    return v0;
}
