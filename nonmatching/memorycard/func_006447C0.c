/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00645860(s32);
void func_00656020(s32, s32);

void func_006447C0(s32 a0, s32 a1) {
    s32 v0 = 0, s0 = 0, s1 = 0;

    v0 = -120;
    s1 = a1;
    { s32 c_ = a0 == v0; s0 = 1; if (c_) goto L_0064490C; }
    v0 = -122;
    if (a0 == v0) { a0 = 16; goto L_006448F0; }
    v0 = -118;
    if (a0 == v0) goto L_006448EC;
    v0 = -123;
    if (a0 == v0) { a0 = 18; goto L_006448D0; }
    v0 = -124;
    if (a0 == v0) { a0 = 12; goto L_006448B4; }
    v0 = -125;
    if (a0 == v0) { a0 = 13; goto L_00644898; }
    v0 = -126;
    if (a0 == v0) { a0 = 15; goto L_0064487C; }
    v0 = -127;
    if (a0 == v0) { a0 = 11; goto L_00644860; }
    v0 = -119;
    if (a0 == v0) { s0 = 0; goto L_00644920; }
    v0 = -121;
    if (a0 == v0) goto L_00644854;
    if (a0 == 0) goto L_00644854;
L_00644854:;
    s0 = 0;
    goto L_00644920;
L_00644860:;
    v0 = func_00645860(a0);
    a0 = v0;
    a1 = s1; func_00656020(a0, a1);
    goto L_00644920;
L_0064487C:;
    v0 = func_00645860(a0);
    a0 = v0;
    a1 = s1; func_00656020(a0, a1);
    goto L_00644920;
L_00644898:;
    v0 = func_00645860(a0);
    a0 = v0;
    a1 = s1; func_00656020(a0, a1);
    goto L_00644920;
L_006448B4:;
    v0 = func_00645860(a0);
    a0 = v0;
    a1 = s1; func_00656020(a0, a1);
    goto L_00644920;
L_006448D0:;
    v0 = func_00645860(a0);
    a0 = v0;
    a1 = s1; func_00656020(a0, a1);
    goto L_00644920;
L_006448EC:;
    a0 = 16;
L_006448F0:;
    v0 = func_00645860(a0);
    a0 = v0;
    a1 = s1; func_00656020(a0, a1);
    goto L_00644920;
L_0064490C:;
    a0 = 37; v0 = func_00645860(a0);
    a0 = v0;
    a1 = s1; func_00656020(a0, a1);
L_00644920:;
    v0 = s0;
    return;
}
