/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00952A50(s32);

void func_00C04F80(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };

    v0 = 6;
    if (a1 != v0) goto L_00C050B4;
L_00C04F94:;
    v1 = (s32) 0xcb0000U;
    a3 = 0;
    v1 = (s32) ((u32) v1 + 0x52a0U);
L_00C04FA0:;
    v0 = (*(volatile s32 *) (u32) (v1 + 1084));
    if (v0 != 0) { a3 = (s32) ((u32) a3 + 0x1U); goto L_00C04FC4; }
    v0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) a3 << 6);
    v0 = (s32) ((u32) v0 + 0x52a0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = (s32) ((u32) v0 + 0x43cU); goto L_00C04FD4;
L_00C04FC4:;
    v0 = a3 < 10;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x40U); if (c_) goto L_00C04FA0; }
    s0 = 0;
L_00C04FD4:;
    if (s0 == 0) { v0 = 0; goto L_00C050C8; }
    v0 = (*(volatile u8 *) (u32) a0);
    at = (u64) a1 < (u64) (s64) 7;
    { s32 c_ = at == 0; (*(volatile u8 *) (u32) (s0 + 8)) = (u8) v0; if (c_) goto L_00C05020; }
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + 0x31a0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xc05008U) goto L_00C05008; if (t_ == 0xc05020U) goto L_00C05020; if (t_ == 0xc05034U) goto L_00C05034; }
L_00C05008:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7140));
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (s0 + 12)) = (u32) v0; goto L_00C0504C;
L_00C05020:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    v0 = (s32) ((u32) v0 << 1);
    (*(volatile u32 *) (u32) (s0 + 12)) = (u32) v0; goto L_00C0504C;
L_00C05034:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    (*(volatile u32 *) (u32) (s0 + 12)) = (u32) v0;
    v0 = (*(volatile u8 *) (u32) (s0 + 9));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (s0 + 9)) = (u8) v0;
L_00C0504C:;
    v0 = a2 & 0xffff;
    v1 = 1;
    v0 = (s32) ((u32) v0 + 0x1000U);
    (*(volatile u32 *) (u32) s0) = (u32) v1;
    (*(volatile u32 *) (u32) (s0 + 36)) = (u32) a1;
    v0 = v0 & 0xe000;
    (*(volatile u16 *) (u32) (s0 + 40)) = (u16) v0;
    a1 = v0 & 0xffff;
    (*(volatile u8 *) (u32) (s0 + 42)) = (u8) v1;
    v0 = 0xffff;
    f0.f = (*(volatile f32 *) (u32) (a0 + 224));
    f0.i = (s32) f0.f;
    v1 = f0.i;
    (*(volatile u16 *) (u32) (s0 + 4)) = (u16) v1;
    f0.f = (*(volatile f32 *) (u32) (a0 + 232));
    f0.i = (s32) f0.f;
    a0 = a1;
    v1 = f0.i;
    (*(volatile u16 *) (u32) (s0 + 6)) = (u16) v1;
    (*(volatile u16 *) (u32) (s0 + 52)) = (u16) v0; v0 = func_00952A50(a0);
    (*(volatile u8 *) (u32) (s0 + 54)) = (u8) v0;
    v0 = 1; goto L_00C050C8;
L_00C050B4:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (v0 != 0) goto L_00C04F94;
    v0 = 0;
L_00C050C8:;
    return;
}
