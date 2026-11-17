/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0013B7F0(void);
s32 func_00152130(s32, s32, s32, s32, s32);
void func_00BCA720(s32);

s32 func_00BCB420(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { 0 };
    f32 acc = 0;

    v0 = (s32) 0xcc0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -11502));
    if (v0 == 0) { a0 = 0; goto L_00BCB504; }
    v0 = (*(volatile s32 *) (u32) (gp + -19424));
    v0 = (s32) ((u32) v0 + 0x1U);
    at = (u64) v0 < (u64) (s64) 30;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (gp + -19424)) = (u32) v0; if (c_) goto L_00BCB520; }
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_00BCB460; }
    f0.i = (s32) v0;
    f2.f = (f32) f0.i; goto L_00BCB478;
L_00BCB460:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00BCB478:;
    v1 = (s32) 0x41f00000U;
    v0 = (s32) 0x3f800000U;
    f0.i = (s32) v1;
    f1.i = (s32) v0;
    f2.f = f2.f / f0.f;
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f12.f = acc - f2.f * f2.f; func_0013B7F0();
L_00BCB4A4:;
    v0 = (*(volatile u8 *) (u32) (gp + -19404));
    if (v0 != 0) goto L_00BCB540;
    v0 = (s32) 0xcc0000U;
    v1 = 1;
    v0 = (*(volatile u8 *) (u32) (v0 + -11503));
    (*(volatile u8 *) (u32) (gp + -19404)) = (u8) v1;
    v1 = 6;
    a0 = (s32) ((u32) v0 + 0x1U);
    if (a0 == v1) goto L_00BCB538;
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0xcc0000U;
    v0 = (s32) ((u32) v0 + 0xffffd394U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    if (v0 == 0) goto L_00BCB538;
    if (v0 == 0) goto L_00BCB540;
    func_00BCA720(a0);
    v0 = 1; goto L_00BCB544;
L_00BCB504:;
    a1 = 16; v0 = func_00152130(a0, a1, a2, a3, a4);
    if (v0 == 0) { v0 = 0; goto L_00BCB544; }
    v0 = 9;
    (*(volatile u32 *) (u32) (gp + -19440)) = (u32) v0; goto L_00BCB4A4;
L_00BCB520:;
    f12.i = (s32) 0;
    func_0013B7F0();
    v0 = 9;
    (*(volatile u32 *) (u32) (gp + -19440)) = (u32) v0; goto L_00BCB4A4;
L_00BCB538:;
    a0 = 0; func_00BCA720(a0);
L_00BCB540:;
    v0 = 1;
L_00BCB544:;
    return v0;
}
