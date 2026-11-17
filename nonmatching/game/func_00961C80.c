/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00C04830(s64, s64, s64);

s64 func_00961C80(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, a4 = 0, a5 = 0;

    a2 = a2 & 0xff;
    v1 = 80;
    if (a2 == v1) goto L_00961CF0;
    v1 = 64;
    if (a2 == v1) { a2 = a1; goto L_00961CE0; }
    v1 = 16;
    if (a2 == v1) goto L_00961CCC;
    v1 = 2;
    if (a2 == v1) goto L_00961CCC;
    a5 = 1;
    if (a2 == a5) goto L_00961CCC;
    a4 = (*(u8 *) (u32) (a0 + 19)); goto L_00961D04;
L_00961CCC:;
    a2 = a1;
    a1 = 0; v0 = func_00C04830(a0, a1, a2);
    goto L_00961D34;
L_00961CE0:;
    a1 = 1; v0 = func_00C04830(a0, a1, a2);
    goto L_00961D30;
L_00961CF0:;
    a2 = a1;
    a1 = 2; v0 = func_00C04830(a0, a1, a2);
    goto L_00961D30;
L_00961D04:;
    a2 = (s32) 0xcb0000U;
    a2 = (s32) ((u32) a2 + 0x56a9U);
    v1 = (s32) 0xcb0000U;
    a1 = a1 & 0xff;
    v1 = (s32) ((u32) v1 + 0x539cU);
    a2 = (s32) ((u32) a2 + (u32) a4);
    (*(u8 *) (u32) a2) = (u8) a3;
    (*(u32 *) (u32) (a0 + 488)) = (u32) a1;
    a0 = (*(u8 *) (u32) (a0 + 19));
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(u8 *) (u32) v1) = (u8) a5;
L_00961D30:;
L_00961D34:;
    return v0;
}
