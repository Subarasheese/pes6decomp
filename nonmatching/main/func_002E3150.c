/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002E3A50(s32, s32, s32, s32);

void func_002E3150(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    s0 = a0;
    if (s0 == 0) { ; goto L_002E31EC; }
    if (a1 != 0) { s1 = (*(volatile s32 *) (u32) (s0 + 32)); goto L_002E318C; }
    goto L_002E31E8;
    s1 = (*(volatile s32 *) (u32) (s0 + 32));
L_002E318C:;
    at = s1 < a2;
    if (at == 0) goto L_002E31A0;
    s4 = 0; goto L_002E31B4;
L_002E31A0:;
    if (a2 >= 0) goto L_002E31AC;
    a2 = 0;
L_002E31AC:;
    s1 = a2;
    s4 = 0;
L_002E31B4:;
    if (s1 <= 0) goto L_002E31E8;
    s3 = a1;
    s2 = 0;
L_002E31C4:;
    v0 = (*(volatile s32 *) (u32) (s0 + 36));
    a1 = (*(volatile s32 *) (u32) s3);
    a0 = (s32) ((u32) v0 + (u32) s2); func_002E3A50(a0, a1, a2, a3);
    s4 = (s32) ((u32) s4 + 0x1U);
    s3 = (s32) ((u32) s3 + 0x4U);
    v1 = s4 < s1;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x14U); if (c_) goto L_002E31C4; }
L_002E31E8:;
L_002E31EC:;
    return;
}
