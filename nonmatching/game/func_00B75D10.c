/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00B2A420(s32);
void func_00B78620(s32, s32, s32, s32);
s32 func_00BBB8C0(s32);

void func_00B75D10(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;

    s2 = a0;
    a0 = (*(volatile u8 *) (u32) a0);
    s1 = a1; v0 = func_00B2A420(a0);
    s0 = v0;
    a0 = s2; func_00B78620(a0, a1, a2, a3);
    if (s1 != 0) { a0 = 3; goto L_00B75DB0; }
    f0.f = (*(volatile f32 *) (u32) (s2 + 224));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00B75E1C;
    f0.f = (*(volatile f32 *) (u32) (s2 + 232));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x44280000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (fcc) goto L_00B75E1C;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v1 = 8;
    a0 = 5;
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; v0 = func_00BBB8C0(a0);
    v1 = (*(volatile s32 *) (u32) s0);
    (*(volatile u8 *) (u32) (v1 + 78)) = (u8) v0;
L_00B75DA8:;
    goto L_00B75EA8;
L_00B75DB0:;
    v0 = func_00BBB8C0(a0);
    a1 = 2;
    if (v0 == a1) goto L_00B75E00;
    v1 = 1;
    if (v0 == v1) { v1 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_00B75DF4; }
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_00B75DE0; }
    v1 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_00B75E04;
L_00B75DE0:;
    a0 = 255;
    (*(volatile u8 *) (u32) (v1 + 76)) = (u8) a1;
    v1 = (*(volatile s32 *) (u32) s0);
    (*(volatile u8 *) (u32) (v1 + 78)) = (u8) a0; goto L_00B75DA8;
L_00B75DF4:;
    a0 = 7;
    (*(volatile u8 *) (u32) (v1 + 76)) = (u8) a0; goto L_00B75DA8;
L_00B75E00:;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
L_00B75E04:;
    a1 = 10;
    a0 = 255;
    (*(volatile u8 *) (u32) (v1 + 76)) = (u8) a1;
    v1 = (*(volatile s32 *) (u32) s0);
    (*(volatile u8 *) (u32) (v1 + 78)) = (u8) a0; goto L_00B75DA8;
L_00B75E1C:;
    a0 = 100; v0 = func_00BBB8C0(a0);
    v1 = v0 < 70;
    if (v1 != 0) { a0 = 3; goto L_00B75E40; }
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = 38;
    (*(volatile u8 *) (u32) (v1 + 76)) = (u8) a0; goto L_00B75DA8;
L_00B75E40:;
    v0 = func_00BBB8C0(a0);
    v1 = 2;
    if (v0 == v1) goto L_00B75E98;
    v1 = 1;
    if (v0 == v1) { v1 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_00B75E8C; }
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_00B75E70; }
    v1 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_00B75E9C;
L_00B75E70:;
    v1 = 8;
    a0 = 5;
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; v0 = func_00BBB8C0(a0);
    v1 = (*(volatile s32 *) (u32) s0);
    (*(volatile u8 *) (u32) (v1 + 78)) = (u8) v0; goto L_00B75DA8;
L_00B75E8C:;
    a0 = 15;
    (*(volatile u8 *) (u32) (v1 + 76)) = (u8) a0; goto L_00B75DA8;
L_00B75E98:;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
L_00B75E9C:;
    a0 = 6;
    (*(volatile u8 *) (u32) (v1 + 76)) = (u8) a0; goto L_00B75DA8;
L_00B75EA8:;
    return;
}
