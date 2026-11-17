/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00915200(s32, s32, s32, s32);
void func_00C23330(s32);
void func_00C234C0(s32);
void func_00C23600(s32);
s32 func_00C5FC80(s32);
s32 func_00C65F40(s32, s32, f32, f32);
void func_00C6A440(s32, s32, s32, s32);

void func_00C65E50(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;

    s0 = a0; v0 = func_00C5FC80(a0);
    if (v0 != 0) goto L_00C65F2C;
    a0 = (*(volatile s16 *) (u32) (s0 + 20));
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = (s32) ((u32) v0 + 0x1e90U);
    f0.f = (*(volatile f32 *) (u32) (s0 + 224));
    f1.i = (s32) a0;
    v1 = v1 ^ 0x1;
    f2.f = (f32) f1.i;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f1.f = (*(volatile f32 *) (u32) v0);
    f0.f = f0.f * f2.f;
    f1.f = f1.f * f2.f;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00C65F00;
    a0 = s0; func_00C23330(a0);
    a0 = s0; goto L_00C65F04;
L_00C65EBC:;
    a0 = s0; v0 = func_00915200(a0, a1, a2, a3);
    if (v0 == 0) goto L_00C65EDC;
    a0 = s0; func_00C23600(a0);
    goto L_00C65EE4;
L_00C65EDC:;
    a0 = s0; func_00C234C0(a0);
L_00C65EE4:;
    v1 = (s32) 0xcb0000U;
    a0 = (*(volatile u8 *) (u32) s0);
    v1 = (*(volatile u8 *) (u32) (v1 + 21172));
    if (a0 != v1) goto L_00C65F1C;
L_00C65EF8:;
    goto L_00C65F30;
L_00C65F00:;
    a0 = s0;
L_00C65F04:;
    a1 = 2; v0 = func_00C65F40(a0, a1, f12.f, f13.f);
    if (v0 == 0) goto L_00C65EDC;
    goto L_00C65EBC;
L_00C65F1C:;
    a0 = s0; func_00C6A440(a0, a1, a2, a3);
    goto L_00C65EF8;
L_00C65F2C:;
L_00C65F30:;
    return;
}
