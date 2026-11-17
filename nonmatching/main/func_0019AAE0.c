/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00153FE0(s32, s32);
s32 func_0019A080(s32, s32, s32, s32, f32, f32, f32);

s32 func_0019AAE0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14) {
    s32 v0 = 0, v1 = 0;
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    union { f32 f; s32 i; } f14 = { fa14 };

    v1 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 704));
    if (v1 != 0) goto L_0019AB54;
    v0 = (s32) 0x520000U;
    a0 = (*(volatile s16 *) (u32) (v0 + -78));
    a1 = 2576; v0 = func_00153FE0(a0, a1);
    v1 = (s32) 0x520000U;
    a0 = 67;
    (*(volatile u32 *) (u32) (v1 + 704)) = (u32) v0;
    a2 = 24;
    (*(volatile u16 *) (u32) (v0 + 4)) = (u16) a0;
    v1 = (s32) 0x520000U;
    v0 = (s32) 0x520000U;
    a0 = 1;
    a1 = (*(volatile s32 *) (u32) (v0 + 704));
    (*(volatile u16 *) (u32) (a1 + 6)) = (u16) a2;
    v0 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 704));
    (*(volatile u32 *) (u32) (v1 + 16)) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) (v0 + 704));
    (*(volatile u32 *) (u32) v0) = (u32) a0; v0 = func_0019A080(a0, a1, a2, a3, f12.f, f13.f, f14.f);
    v1 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 704));
    (*(volatile u32 *) (u32) v1) = (u32) 0;
L_0019AB54:;
    return v0;
}
