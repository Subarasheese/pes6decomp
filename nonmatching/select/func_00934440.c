/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0017F8A0(s32);
s32 func_001FC770(s32);

s32 func_00934440(s32 a0) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) 0x510000U;
    v1 = (*(volatile s32 *) (u32) (v0 + 4048));
    s0 = (*(volatile s32 *) (u32) (gp + -18724));
    v0 = 4;
    { s32 c_ = v1 == v0; s1 = a0; if (c_) goto L_00934470; }
    v0 = 1; goto L_009344D8;
L_00934470:;
    v0 = func_0017F8A0(a0);
    if (v0 != 0) goto L_00934488;
    v0 = 0; goto L_009344D8;
L_00934488:;
    if (s0 != 0) { v1 = (*(volatile s32 *) (u32) s0); goto L_00934498; }
    v0 = 1; goto L_009344D8;
L_00934498:;
    v0 = 7;
    if (v1 != v0) { v0 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_009344BC; }
    a0 = (*(volatile s32 *) (u32) (s0 + 4)); v0 = func_001FC770(a0);
    if (s1 != v0) { s0 = (*(volatile s32 *) (u32) (s0 + 28)); goto L_00934488; }
    v0 = 0; goto L_009344D8;
L_009344BC:;
    if (v0 != s1) goto L_009344CC;
    v0 = 0; goto L_009344D8;
L_009344CC:;
    s0 = (*(volatile s32 *) (u32) (s0 + 28));
    goto L_00934488;
L_009344D8:;
    return v0;
}
