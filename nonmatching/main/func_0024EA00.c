/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Player_GetParams(s32, s32, s32, s32);
s32 func_00210DF0(void);
s32 func_0024E920(s32, s32, s32, s32);
s32 func_00970870(s32, s32, s32, s32);

s32 func_0024EA00(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s2 = a0;
    s1 = a1;
    v0 = s2 & 0xffff;
    v1 = s1 & 0xffff;
    if (v0 != v1) goto L_0024EA30;
    v0 = 0; goto L_0024EAA8;
L_0024EA30:;
    if (v0 != 0) goto L_0024EA40;
    v0 = 0; goto L_0024EAA8;
L_0024EA40:;
    if (v1 != 0) goto L_0024EA50;
    v0 = 0; goto L_0024EAA8;
L_0024EA50:;
    v0 = func_00210DF0();
    v1 = 2;
    if (v0 != v1) { a0 = s2; goto L_0024EA80; }
    a0 = s2; v0 = func_00970870(a0, a1, a2, a3);
    s0 = v0;
    a0 = s1; v0 = func_00970870(a0, a1, a2, a3);
    a0 = s2; goto L_0024EA98;
L_0024EA80:;
    v0 = Pes6Player_GetParams(a0, a1, a2, a3);
    s0 = v0;
    a0 = s1; v0 = Pes6Player_GetParams(a0, a1, a2, a3);
    a0 = s2;
L_0024EA98:;
    a1 = s0;
    a2 = s1;
    a3 = v0; v0 = func_0024E920(a0, a1, a2, a3);
L_0024EAA8:;
    return v0;
}
