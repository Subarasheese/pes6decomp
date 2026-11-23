/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00623890(s32);
s32 func_00645860(s32);

s32 func_0064D540(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;

    v0 = 1;
    { s32 c_ = a0 == v0; v1 = 0; if (c_) goto L_0064D600; }
    v0 = -118;
    if (a0 == v0) { a0 = v1; goto L_0064D604; }
    v0 = -119;
    if (a0 == v0) { v1 = 27; goto L_0064D600; }
    v0 = -120;
    if (a0 == v0) { v1 = 28; goto L_0064D600; }
    v0 = -121;
    if (a0 == v0) goto L_0064D600;
    v0 = -122;
    if (a0 == v0) { v1 = 16; goto L_0064D600; }
    v0 = -123;
    if (a0 == v0) { v1 = 18; goto L_0064D600; }
    v0 = -124;
    if (a0 == v0) { v1 = 12; goto L_0064D600; }
    v0 = -125;
    if (a0 == v0) { v1 = 13; goto L_0064D600; }
    v0 = -126;
    if (a0 == v0) { v1 = 15; goto L_0064D600; }
    v0 = -127;
    if (a0 == v0) goto L_0064D5DC;
    if (a0 == 0) goto L_0064D600;
    goto L_0064D600;
L_0064D5DC:;
    if (a1 == 0) { v1 = 11; goto L_0064D600; }
    a0 = a1; v0 = func_00623890(a0);
    if (v0 != 0) goto L_0064D5FC;
    v1 = 14; goto L_0064D600;
L_0064D5FC:;
    v1 = 11;
L_0064D600:;
    a0 = v1;
L_0064D604:;
    v0 = func_00645860(a0);
    return v0;
}
