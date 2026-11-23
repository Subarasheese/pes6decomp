/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
void func_002D3490(s32, s32, s32, s32);
s32 func_00B03A80(s32, s32, s32, s32);

s32 func_00366700(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;

    v0 = func_00B03A80(a0, a1, a2, a3);
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (v0 + 36)); goto L_00366720; }
    v0 = 0; goto L_0036674C;
L_00366720:;
    v1 = 1;
    if (a0 != v1) { (*(volatile u32 *) (u32) (v0 + 36)) = (u32) v1; goto L_00366734; }
    v0 = 0; goto L_0036674C;
L_00366734:;
    v0 = (s32) 0x84020000U;
    a0 = v0 | 0x8400; SD_call(a0);
    a0 = 82; func_002D3490(a0, a1, a2, a3);
    v0 = 0;
L_0036674C:;
    return v0;
}
