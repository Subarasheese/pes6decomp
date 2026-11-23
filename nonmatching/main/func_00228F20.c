/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6SaveData_IsUnavailable(void);
s64 func_00225940(s64);

s64 func_00228F20(s64 a0) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;

    s0 = a0; v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) { v0 = (*(volatile s32 *) (u32) (gp + -31684)); goto L_00228F4C; }
    s1 = 0; goto L_00228F58;
L_00228F4C:;
    if (v0 == 0) { s1 = 0; goto L_00228F58; }
    s1 = (s32) ((u32) v0 + 0x7980U);
L_00228F58:;
    v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) goto L_00228F74;
    s1 = 0; goto L_00228F80;
L_00228F74:;
    if (s1 != 0) goto L_00228F80;
    s1 = 0;
L_00228F80:;
    v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) goto L_00228F9C;
    s0 = (s64) ((u64) 0 + (u64) (s64) 255); goto L_00228FC4;
L_00228F9C:;
    if (s1 != 0) { v1 = s0 & 0xff; goto L_00228FAC; }
    s0 = (s64) ((u64) 0 + (u64) (s64) 255); goto L_00228FC4;
L_00228FAC:;
    v0 = v1 < 113;
    if (v0 != 0) { v0 = (s32) ((u32) s1 + (u32) v1); goto L_00228FC0; }
    s0 = (s64) ((u64) 0 + (u64) (s64) 255); goto L_00228FC4;
L_00228FC0:;
    s0 = (*(volatile u8 *) (u32) v0);
L_00228FC4:;
    v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) { v0 = s0 & 0xff; goto L_00228FE0; }
    v0 = 0; goto L_00228FFC;
L_00228FE0:;
    v0 = v0 < 80;
    if (v0 != 0) { a0 = s0; goto L_00228FF4; }
    v0 = 0; goto L_00228FFC;
L_00228FF4:;
    v0 = func_00225940(a0);
L_00228FFC:;
    return v0;
}
