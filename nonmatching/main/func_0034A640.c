/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Ball_CopyPosition(s32);

s32 func_0034A640(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    v0 = (*(volatile u8 *) (u32) (a1 + 8));
    { s32 c_ = v0 == 0; s0 = a0; if (c_) goto L_0034A66C; }
    v1 = (s32) 0x350000U;
    v0 = 1;
    v1 = (s32) ((u32) v1 + 0xffffa6c0U);
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) v1; goto L_0034A6A8;
L_0034A66C:;
    a0 = (s32) ((u32) sp + 0x20U); Pes6Ball_CopyPosition(a0);
    v0 = (s32) 0xc3190000U;
    v0 = v0 | 0x999a;
    f1.f = (*(volatile f32 *) (u32) (sp + 36));
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) { v0 = 0; goto L_0034A6A8; }
    v1 = (s32) 0x350000U;
    v0 = 1;
    v1 = (s32) ((u32) v1 + 0xffffa6c0U);
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) v1;
    (*(volatile u8 *) (u32) (s0 + 10)) = (u8) 0;
L_0034A6A8:;
    return v0;
}
