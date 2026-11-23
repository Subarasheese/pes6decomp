/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001BAA20(s32);
s32 func_001BAF70(s32);
s32 func_001BAFB0(s32, s32, s32, s32);

s32 func_001BA670(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    v0 = func_001BAF70(a0);
    s0 = v0;
    a0 = s0; v0 = func_001BAFB0(a0, a1, a2, a3);
    v1 = 2;
    if (v0 == v1) { a0 = s0; goto L_001BA6C8; }
    v1 = 3;
    if (v0 == v1) { a0 = s0; goto L_001BA6B8; }
    if (v0 == 0) { s0 = 0; goto L_001BA6D0; }
    v1 = 1;
    s0 = 1; goto L_001BA6D0;
L_001BA6B8:;
    s0 = 1; func_001BAA20(a0);
    v0 = s0; goto L_001BA6D4;
L_001BA6C8:;
    s0 = 0; func_001BAA20(a0);
L_001BA6D0:;
    v0 = s0;
L_001BA6D4:;
    return v0;
}
