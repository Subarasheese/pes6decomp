/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


f32 func_00C11340(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };

    v0 = (u64) 0 < (u64) a0;
    { s32 c_ = v0 == 0; v1 = 0; if (c_) goto L_00C11350; }
    v0 = (u64) a1 < (u64) (s64) 8;
L_00C11350:;
    if (v0 == 0) goto L_00C1135C;
    v0 = (u64) a2 < (u64) (s64) 6;
L_00C1135C:;
    if (v0 == 0) goto L_00C113A0;
    v1 = (s32) ((u32) a1 << 1);
    v0 = (s32) a2 >> 1;
    v1 = (s32) ((u32) v1 + (u32) a1);
    { s32 c_ = a2 >= 0; v1 = (s32) ((u32) a0 + (u32) v1); if (c_) goto L_00C11380; }
    v0 = (s32) ((u32) a2 + 0x1U);
    v0 = (s32) v0 >> 1;
L_00C11380:;
    v1 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile u8 *) (u32) v1);
    v0 = a2 & 0x1;
    v1 = (s32) ((u32) v0 << 2);
    v0 = 4;
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) a0 >> (v0 & 31);
    v1 = v0 & 0xf;
L_00C113A0:;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i; return f0.f;
}
