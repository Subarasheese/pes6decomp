/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_002DB790(s32 a0) {
    s32 v0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    f32 acc = 0;

    if (a0 != 0) { v0 = (*(volatile u8 *) (u32) (a0 + 20)); goto L_002DB7A4; }
    f0.i = (s32) 0;
    goto L_002DB7FC;
L_002DB7A4:;
    if (v0 != 0) { v0 = (*(volatile s16 *) (u32) (a0 + 26)); goto L_002DB7D8; }
    v0 = (*(volatile s16 *) (u32) (a0 + 26));
    f1.f = (*(volatile f32 *) (u32) (a0 + 32));
    f0.i = (s32) 0;
    f2.f = (*(volatile f32 *) (u32) (a0 + 8));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    acc = f0.f + f1.f;
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    f0.f = acc + f2.f * f0.f; goto L_002DB7FC;
L_002DB7D8:;
    f1.f = (*(volatile f32 *) (u32) (a0 + 32));
    f0.i = (s32) 0;
    f2.f = (*(volatile f32 *) (u32) (a0 + 8));
    v0 = (s32) ((u32) v0 + 0x1U);
    acc = f0.f + f1.f;
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    f0.f = acc + f2.f * f0.f;
L_002DB7FC:;
    return v0;
}
