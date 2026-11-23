/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00AFBAB0(s32, s32, s32, s32);

s32 func_00914890(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 hi = 0, lo = 0;

    s1 = a0;
    s0 = a1; v0 = func_00AFBAB0(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_009148D4; }
    a0 = s1; v0 = func_00AFBAB0(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_009148D4:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = s0 & 0xff;
    a0 = (s32) ((u32) v0 + (u32) a0);
    a1 = 0;
    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 << 6);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    a0 = (s32) ((u32) v0 + (u32) a0);
L_009148F4:;
    v0 = (*(volatile u8 *) (u32) (a0 + 16));
    if (v0 != v1) { a1 = (s32) ((u32) a1 + 0x1U); goto L_00914908; }
    v0 = (*(volatile u8 *) (u32) a0); goto L_00914918;
L_00914908:;
    v0 = a1 < 11;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x240U); if (c_) goto L_009148F4; }
    v0 = 0;
L_00914918:;
    return v0;
}
