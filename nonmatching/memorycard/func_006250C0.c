/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_006250C0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;

    v0 = 1;
    if (a0 == v0) { v0 = a0; goto L_0062518C; }
    v0 = -122;
    if (a0 == v0) { v0 = 16; goto L_00625180; }
    v0 = -120;
    if (a0 == v0) { v0 = 37; goto L_00625170; }
    v0 = -119;
    if (a0 == v0) { v1 = 49; goto L_00625160; }
    v0 = -124;
    if (a0 == v0) { v0 = 53; goto L_00625154; }
    v0 = -125;
    if (a0 == v0) { v0 = 13; goto L_00625148; }
    v0 = -126;
    if (a0 == v0) { v1 = 15; goto L_00625138; }
    v0 = -127;
    if (a0 == v0) { v1 = 11; goto L_00625128; }
    goto L_0062517C;
L_00625128:;
    v0 = 52;
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    (*(volatile u8 *) (u32) a2) = (u8) v0; goto L_00625188;
L_00625138:;
    v0 = 52;
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    (*(volatile u8 *) (u32) a2) = (u8) v0; goto L_00625188;
L_00625148:;
    (*(volatile u8 *) (u32) a1) = (u8) v0;
    (*(volatile u8 *) (u32) a2) = (u8) 0; goto L_00625188;
L_00625154:;
    (*(volatile u8 *) (u32) a1) = (u8) v0;
    (*(volatile u8 *) (u32) a2) = (u8) 0; goto L_00625188;
L_00625160:;
    v0 = 52;
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    (*(volatile u8 *) (u32) a2) = (u8) v0; goto L_00625188;
L_00625170:;
    (*(volatile u8 *) (u32) a1) = (u8) v0;
    (*(volatile u8 *) (u32) a2) = (u8) 0; goto L_00625188;
L_0062517C:;
    v0 = 16;
L_00625180:;
    (*(volatile u8 *) (u32) a1) = (u8) v0;
    (*(volatile u8 *) (u32) a2) = (u8) 0;
L_00625188:;
    v0 = a0;
L_0062518C:;
    return;
}
