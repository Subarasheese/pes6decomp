/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


f32 func_00C76ED0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };

    v0 = (s32) 0xcd0000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -16892));
    a1 = (*(volatile u8 *) (u32) (v1 + 17));
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v1 + 18));
    v0 = (s32) ((u32) v0 + 0x2998U);
    v1 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) v1 - (u32) a1);
    v1 = (s32) ((u32) a0 << 4);
    a0 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) v1 - (u32) a1);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 8);
    a0 = (s32) ((u32) a1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    if (v0 != 0) goto L_00C76F30;
    f0.i = (s32) 0;
    goto L_00C76F54;
L_00C76F30:;
    f0.i = (s32) v0;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x2a58U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) a0 + (u32) v0);
    f1.f = (*(volatile f32 *) (u32) v0);
    f0.f = (f32) f0.i;
    f1.f = (f32) f1.i;
    f0.f = f1.f / f0.f;
L_00C76F54:;
    return f0.f;
}
