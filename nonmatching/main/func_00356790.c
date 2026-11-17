/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009E1C90(s32, s32, s32, s32);
s32 func_00C01090(s32, s32, s32, s32);

s32 func_00356790(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s1 = a0;
    a0 = 1; v0 = func_009E1C90(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 12;
    if (v1 != v0) { v1 = 3; goto L_0035685C; }
    a0 = 20;
    s2 = 0; v0 = func_00C01090(a0, a1, a2, a3);
    s2 = s2 | v0;
    a0 = 21; v0 = func_00C01090(a0, a1, a2, a3);
    s2 = s2 | v0;
    a0 = 22; v0 = func_00C01090(a0, a1, a2, a3);
    s2 = s2 | v0;
    a0 = 23; v0 = func_00C01090(a0, a1, a2, a3);
    v0 = s2 | v0;
    if (v0 == 0) { a0 = 24; goto L_00356804; }
    s0 = 1; goto L_00356868;
L_00356804:;
    s2 = 0; v0 = func_00C01090(a0, a1, a2, a3);
    s2 = s2 | v0;
    a0 = 25; v0 = func_00C01090(a0, a1, a2, a3);
    s2 = s2 | v0;
    a0 = 26; v0 = func_00C01090(a0, a1, a2, a3);
    s2 = s2 | v0;
    a0 = 27; v0 = func_00C01090(a0, a1, a2, a3);
    s2 = s2 | v0;
    a0 = 28; v0 = func_00C01090(a0, a1, a2, a3);
    s2 = s2 | v0;
    a0 = 29; v0 = func_00C01090(a0, a1, a2, a3);
    v0 = s2 | v0;
    if (v0 == 0) { (*(volatile u32 *) (u32) s1) = (u32) s0; goto L_0035686C; }
    s0 = 2; goto L_00356868;
L_0035685C:;
    v0 = 0;
    (*(volatile u32 *) (u32) s1) = (u32) v1; goto L_00356870;
L_00356868:;
    (*(volatile u32 *) (u32) s1) = (u32) s0;
L_0035686C:;
    v0 = 1;
L_00356870:;
    return v0;
}
