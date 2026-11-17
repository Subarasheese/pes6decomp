/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00154070(s64);
s64 func_001C80F0(s64);
s64 strcpy(s64, s64);

s64 func_001E6910(s64 a0, s64 a1) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    v1 = (s32) 0x530000U;
    v0 = (s32) 0x530000U;
    s1 = (*(volatile s32 *) (u32) (v1 + -20188));
    v1 = (*(volatile s32 *) (u32) (v0 + -20192));
    { s32 c_ = v1 == 0; s0 = a1; if (c_) goto L_001E6950; }
L_001E6938:;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    if (v0 == 0) goto L_001E6950;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x8U); if (c_) goto L_001E6938; }
L_001E6950:;
    if (v1 != 0) { v0 = (s64) ((u64) a0 << 33); goto L_001E6960; }
    v0 = 0; goto L_001E698C;
L_001E6960:;
    v0 = (s64) ((u64) v0 >> 33);
    a0 = s0;
    (*(volatile u32 *) (u32) s1) = (u32) v0; v0 = func_001C80F0(a0);
    a0 = (s32) ((u32) v0 + 0x1U); v0 = func_00154070(a0);
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (s1 + 4));
    a1 = s0; v0 = strcpy(a0, a1);
    v0 = 1;
L_001E698C:;
    return v0;
}
