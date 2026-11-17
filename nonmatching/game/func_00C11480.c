/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00C11480(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    if (a0 == 0) goto L_00C11578;
    v1 = (s32) 0x46520000U;
    v0 = (s32) 0x46d20000U;
    a1 = v1 | 0x6400;
    f1.i = (s32) a1;
    v1 = v0 | 0x6400;
    f0.i = (s32) v1;
    v0 = (s32) 0x41000000U;
    f1.f = f1.f + f12.f;
    f1.f = f1.f / f0.f;
    f0.i = (s32) v0;
    f0.f = f0.f * f1.f;
    f0.i = (s32) f0.f;
    a2 = f0.i;
    if (a2 <= 0) { a2 = 0; goto L_00C114D4; }
L_00C114D4:;
    at = a2 < 7;
    if (at == 0) { a2 = 7; goto L_00C114E0; }
L_00C114E0:;
    v1 = (s32) 0x46080000U;
    v0 = (s32) 0x46880000U;
    a1 = v1 | 0x6400;
    f1.i = (s32) a1;
    v1 = v0 | 0x6400;
    f0.i = (s32) v1;
    v0 = (s32) 0x40c00000U;
    f1.f = f1.f + f13.f;
    f1.f = f1.f / f0.f;
    f0.i = (s32) v0;
    f0.f = f0.f * f1.f;
    f0.i = (s32) f0.f;
    a1 = f0.i;
    if (a1 <= 0) { a1 = 0; goto L_00C11524; }
L_00C11524:;
    at = a1 < 5;
    if (at == 0) { a1 = 5; goto L_00C11530; }
L_00C11530:;
    v1 = (s32) ((u32) a2 << 1);
    v0 = (s32) a1 >> 1;
    v1 = (s32) ((u32) v1 + (u32) a2);
    { s32 c_ = a1 >= 0; v1 = (s32) ((u32) a0 + (u32) v1); if (c_) goto L_00C1154C; }
    v0 = (s32) ((u32) a1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_00C1154C:;
    s0 = (s32) ((u32) v1 + (u32) v0);
    v0 = a1 & 0x1;
    a0 = (*(volatile u8 *) (u32) s0);
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x33e8U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; a1 = 1; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    (*(volatile u8 *) (u32) s0) = (u8) v0;
L_00C11578:;
    return v0;
}
