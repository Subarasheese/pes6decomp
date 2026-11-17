/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Job_SetField4(s32, s32);
s32 func_0030DBA0(void);
s32 func_0030F240(s32);
s32 func_0030F380(void);
s32 func_00332FA0(s32, s32, s32, s32, s32, s32, s32);
s32 func_00333600(s32);

s32 func_00313020(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, s0 = 0;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    s0 = a0;
    a0 = 3; v0 = func_00333600(a0);
    if (v0 == 0) goto L_00313048;
    v0 = 0; goto L_0031308C;
L_00313048:;
    v0 = func_0030F380();
    if (v0 == 0) goto L_00313060;
    v0 = 0; goto L_0031308C;
L_00313060:;
    v0 = func_0030DBA0();
    if (v0 != 0) { a0 = (s32) ((u32) sp + 0x2fU); goto L_00313078; }
    v0 = 0; goto L_0031308C;
L_00313078:;
    v0 = func_0030F240(a0);
    if (v0 == 0) { v0 = 0; goto L_0031308C; }
    v0 = 1;
L_0031308C:;
    if (v0 != 0) goto L_003130B4;
    a1 = (s32) 0x310000U;
    a2 = (s32) 0x3e0000U;
    a0 = s0;
    a1 = (s32) ((u32) a1 + 0x2fe0U);
    a2 = (s32) ((u32) a2 + 0x1500U); Pes6Job_SetField4(a0, a1);
    v0 = 0; goto L_003130E8;
L_003130B4:;
    v0 = func_00332FA0(a0, a1, a2, a3, a4, a5, a6);
    if (v0 == 0) goto L_003130CC;
    v0 = 0; goto L_003130E8;
L_003130CC:;
    a1 = (s32) 0x310000U;
    a2 = (s32) 0x3e0000U;
    a0 = s0;
    a1 = (s32) ((u32) a1 + 0x3880U);
    a2 = (s32) ((u32) a2 + 0x1500U); Pes6Job_SetField4(a0, a1);
    v0 = 1;
L_003130E8:;
    return v0;
}
