/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0017FA50(s32, s32, s32, s32, s32);

s32 func_0017F9A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    if (a4 == 0) goto L_0017F9BC;
    v0 = func_0017FA50(a0, a1, a2, a3, a4);
    goto L_0017F9F0;
L_0017F9BC:;
    v1 = (s32) ((u32) sp + 0x10U);
    { s32 c_ = v1 == 0; v0 = 20; if (c_) goto L_0017F9E4; }
L_0017F9C8:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_0017F9C8;
L_0017F9E4:;
    a4 = (s32) ((u32) sp + 0x10U); v0 = func_0017FA50(a0, a1, a2, a3, a4);
L_0017F9F0:;
    return v0;
}
