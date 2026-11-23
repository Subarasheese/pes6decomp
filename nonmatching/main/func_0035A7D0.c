/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00226710(void);
s32 func_002D5410(void);

s32 func_0035A7D0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    v0 = func_002D5410();
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 + 0x6570U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    if (v0 != 0) { ; goto L_0035A8C8; }
    s0 = 0; v0 = func_00226710();
    a2 = v0 & 0xff;
    a1 = 4;
    if (a2 == a1) { s0 = 7; goto L_0035A8B0; }
    a0 = 3;
    if (a2 == a0) { s0 = 6; goto L_0035A8B0; }
    v0 = 2;
    if (a2 == v0) { s0 = 5; goto L_0035A8B0; }
    v1 = 1;
    if (a2 == v1) { s0 = a1; goto L_0035A8B0; }
    v0 = 33;
    if (a2 == v0) { s0 = a0; goto L_0035A8B0; }
    v0 = 35;
    if (a2 == v0) { s0 = 2; goto L_0035A8B0; }
    v0 = 34;
    if (a2 == v0) goto L_0035A8AC;
    v0 = 32;
    if (a2 == v0) goto L_0035A8AC;
    v0 = 29;
    if (a2 == v0) { s0 = v1; goto L_0035A8B0; }
    v0 = 31;
    if (a2 == v0) { s0 = 0; goto L_0035A8B0; }
    v0 = 30;
    if (a2 == v0) goto L_0035A8A0;
    v0 = 28;
    if (a2 == v0) goto L_0035A8A0;
    goto L_0035A8B0;
L_0035A8A0:;
    s0 = 0;
    goto L_0035A8B0;
L_0035A8AC:;
    s0 = 2;
L_0035A8B0:;
    v0 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 + 0x65b0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
L_0035A8C8:;
    return v0;
}
