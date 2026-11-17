/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00C236B0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;

    v1 = (s32) 0xcb0000U;
    a1 = 0;
    v1 = (s32) ((u32) v1 + 0x52a0U);
L_00C236BC:;
    v0 = (*(volatile s32 *) (u32) (v1 + 1724));
    if (v0 != 0) { a1 = (s32) ((u32) a1 + 0x1U); goto L_00C236E0; }
    v0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) a1 << 6);
    v0 = (s32) ((u32) v0 + 0x52a0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a3 = (s32) ((u32) v0 + 0x6bcU); goto L_00C236F0;
L_00C236E0:;
    v0 = a1 < 22;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x40U); if (c_) goto L_00C236BC; }
    a3 = 0;
L_00C236F0:;
    if (a3 == 0) { v0 = 0; goto L_00C237A0; }
    v0 = (s32) 0xcb0000U;
    v1 = (s32) 0x590000U;
    f3.f = (*(volatile f32 *) (u32) (v0 + 21284));
    a1 = (*(volatile u8 *) (u32) (a0 + 19));
    f0.f = (*(volatile f32 *) (u32) (a0 + 224));
    v1 = (s32) ((u32) v1 + 0x1e80U);
    f1.i = (s32) 0;
    v0 = (s32) 0x45000000U;
    f2.i = (s32) v0;
    f0.f = f0.f * f3.f;
    v0 = a1 ^ 0x1;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    acc = f1.f + f2.f;
    f1.f = (*(volatile f32 *) (u32) v0);
    f1.f = acc + f1.f * f3.f;
    fcc = f0.f <= f1.f;
    if (fcc) { a2 = (*(volatile u8 *) (u32) a0); goto L_00C23750; }
    v0 = 0; goto L_00C237A0;
L_00C23750:;
    a1 = 3;
    v1 = (s32) 0x590000U;
    v0 = 1;
    (*(volatile u8 *) (u32) (a3 + 16)) = (u8) a2;
    (*(volatile u32 *) (u32) a3) = (u32) a1;
    a1 = (*(volatile u8 *) (u32) (v1 + 7140));
    v1 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) ((u32) v1 << 1);
    (*(volatile u32 *) (u32) (a3 + 8)) = (u32) v1;
    f0.f = (*(volatile f32 *) (u32) (a0 + 224));
    f0.i = (s32) f0.f;
    v1 = f0.i;
    (*(volatile u16 *) (u32) (a3 + 12)) = (u16) v1;
    f0.f = (*(volatile f32 *) (u32) (a0 + 232));
    f0.i = (s32) f0.f;
    v1 = f0.i;
    (*(volatile u16 *) (u32) (a3 + 14)) = (u16) v1;
L_00C237A0:;
    return;
}
