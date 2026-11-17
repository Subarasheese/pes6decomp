/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6SaveData_IsUnavailable(void);

s32 func_00229010(s32 a0) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    s0 = a0; v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) { v0 = (*(volatile s32 *) (u32) (gp + -31684)); goto L_0022903C; }
    s1 = 0; goto L_00229048;
L_0022903C:;
    if (v0 == 0) { s1 = 0; goto L_00229048; }
    s1 = (s32) ((u32) v0 + 0x7980U);
L_00229048:;
    v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) goto L_00229064;
    s1 = 0; goto L_00229070;
L_00229064:;
    if (s1 != 0) goto L_00229070;
    s1 = 0;
L_00229070:;
    v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) goto L_0022908C;
    v0 = 255; goto L_002290B4;
L_0022908C:;
    if (s1 != 0) { v1 = s0 & 0xff; goto L_0022909C; }
    v0 = 255; goto L_002290B4;
L_0022909C:;
    v0 = v1 < 113;
    if (v0 != 0) { v0 = (s32) ((u32) s1 + (u32) v1); goto L_002290B0; }
    v0 = 255; goto L_002290B4;
L_002290B0:;
    v0 = (*(volatile u8 *) (u32) v0);
L_002290B4:;
    return v0;
}
