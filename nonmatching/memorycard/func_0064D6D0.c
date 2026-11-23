/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00221140(void);
s32 func_00221150(void);
s32 func_002212E0(void);
s32 func_002212F0(void);

void func_0064D6D0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    v0 = func_002212F0();
    s2 = v0; v0 = func_002212E0();
    s1 = v0; v0 = func_00221150();
    s0 = v0; v0 = func_00221140();
    a2 = v0;
    a1 = 126;
L_0064D708:;
    a0 = (*(volatile s32 *) (u32) s2);
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    v1 = (*(volatile s32 *) (u32) (s2 + 4));
    (*(volatile u32 *) (u32) s1) = (u32) a0;
    s2 = (s32) ((u32) s2 + 0x8U);
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) v1;
    { s32 c_ = a1 > 0; s1 = (s32) ((u32) s1 + 0x8U); if (c_) goto L_0064D708; }
    a0 = 65;
L_0064D72C:;
    v1 = (*(volatile s32 *) (u32) s0);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    (*(volatile u32 *) (u32) a2) = (u32) v1;
    s0 = (s32) ((u32) s0 + 0x4U);
    a2 = (s32) ((u32) a2 + 0x4U);
    if (a0 > 0) goto L_0064D72C;
    return;
}
