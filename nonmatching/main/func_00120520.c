/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0010DF30(s32, s32, s32, s32);
s32 func_0010E138(s32, s32, s32, s32);

void func_00120520(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    s1 = (s32) ((u32) a1 + 0xffffffffU);
    if (s1 < 0) goto L_001205A8;
    v1 = (s32) ((u32) s1 << 2);
    v1 = (s32) ((u32) v1 + (u32) s1);
    v1 = (s32) ((u32) v1 << 2);
    s0 = (s32) ((u32) a0 + (u32) v1);
L_00120548:;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    if (v1 == 0) goto L_00120598;
L_00120558:;
    a0 = (*(volatile s32 *) (u32) (s0 + 16));
    a1 = 0;
    a2 = 0;
    a3 = (s32) ((u32) sp + 0x3cU); v0 = func_0010DF30(a0, a1, a2, a3);
    if (v0 < 0) goto L_00120558;
L_00120578:;
    a0 = (*(volatile s32 *) (u32) (s0 + 16)); v0 = func_0010E138(a0, a1, a2, a3);
    if (v0 < 0) goto L_00120578;
L_00120598:;
    s1 = (s32) ((u32) s1 + 0xffffffffU);
    { s32 c_ = s1 >= 0; s0 = (s32) ((u32) s0 + 0xffffffecU); if (c_) goto L_00120548; }
L_001205A8:;
    return;
}
