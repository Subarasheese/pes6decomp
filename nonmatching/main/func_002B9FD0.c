/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002ABE20(s32, s32);

s32 func_002B9FD0(s32 a0, s32 a1) {
    s32 v0 = 0, s0 = 0, s1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f12 = { 0 };

    s1 = 0;
    s0 = a0;
L_002B9FE8:;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    if (v0 != 0) { f1.f = (*(volatile f32 *) (u32) (s0 + 8)); goto L_002BA014; }
L_002B9FF8:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 2;
    s0 = (s32) ((u32) s0 + 0x8U);
    if (v0 != 0) goto L_002B9FE8;
    v0 = 0; goto L_002BA048;
L_002BA014:;
    a1 = v0 & 0xff;
    v0 = (s32) 0x3a830000U;
    a0 = (s32) 0x5e0000U;
    v0 = v0 | 0x126f;
    a0 = (s32) ((u32) a0 + 0x2fd4U);
    f0.i = (s32) v0;
    f1.f = (f32) f1.i;
    f12.f = f0.f * f1.f; v0 = func_002ABE20(a0, a1);
    goto L_002B9FF8;
L_002BA048:;
    return v0;
}
