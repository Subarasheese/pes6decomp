/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001BB370(s32);
s32 func_001BB3E0(s32);
s32 func_001BB850(s32);
void func_001BB920(s32, s32, s32, s32);

void func_001BB7A0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;

    v0 = (s32) 0x530000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -26028));
    s0 = (s32) 0x530000U;
    { s32 c_ = v0 > 0; s0 = (s32) ((u32) s0 + 0xffff9a50U); if (c_) goto L_001BB7D0; }
    a0 = s0; func_001BB920(a0, a1, a2, a3);
L_001BB7D0:;
    v0 = (s32) ((u32) s0 + 0x8U);
    { s32 c_ = v0 == 0; a0 = 0; if (c_) goto L_001BB7E0; }
    a0 = (*(volatile s32 *) (u32) (s0 + 12));
L_001BB7E0:;
    v0 = func_001BB370(a0);
    s2 = v0;
    if (s2 == 0) goto L_001BB830;
L_001BB7F4:;
    a0 = s2; v0 = func_001BB850(a0);
    { s32 c_ = v0 == 0; s1 = v0; if (c_) goto L_001BB814; }
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) v0; goto L_001BB830;
L_001BB814:;
    a0 = (s32) ((u32) s2 + 0x2f4U); v0 = func_001BB3E0(a0);
    a0 = v0; v0 = func_001BB370(a0);
    s2 = v0;
    if (s2 != 0) goto L_001BB7F4;
L_001BB830:;
    v0 = s1;
    return;
}
