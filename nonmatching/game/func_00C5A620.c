/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00C17E10(s32, s32);

s32 func_00C5A620(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 hi = 0, lo = 0;

    v1 = a0 & 0xff;
    v0 = 255;
    f20.i = (s32) 0;
    if (v1 == v0) goto L_00C5A6B4;
    if (v1 == v0) { a0 = 1; goto L_00C5A658; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00C5A658:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile u8 *) (u32) (s0 + 17));
    a0 = (*(volatile u8 *) (u32) (s0 + 18)); v0 = func_00C17E10(a0, a1);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) goto L_00C5A6B4;
    a1 = (*(volatile u8 *) (u32) (s0 + 18));
    v0 = (s32) ((u32) v1 << 3);
    v1 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) v1 + 0xffffba24U);
    a0 = (s32) ((u32) a1 << 3);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 4);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f20.f = (*(volatile f32 *) (u32) v0);
L_00C5A6B4:;
    f0.i = (s32) f20.f;
    v0 = f0.i;
    return v0;
}
