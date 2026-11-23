/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001CDA50(s32);
s32 func_0026DA40(s32);
void func_0026E280(s32, s32, s32, s32);

void func_002D34A0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    v1 = 75;
    s0 = a0;
    if (s0 == v1) { ; goto L_002D354C; }
    v1 = 66;
    if (s0 == v1) goto L_002D3548;
    v1 = 61;
    if (s0 == v1) goto L_002D3548;
    v1 = 60;
    if (s0 == v1) goto L_002D3548;
    v1 = 48;
    if (s0 == v1) goto L_002D3548;
    v1 = 37;
    if (s0 == v1) goto L_002D3548;
    a0 = 0; v0 = func_001CDA50(a0);
    a1 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) s0 << 2);
    v1 = (s32) ((u32) v0 + (u32) s0);
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + 0x1300U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) a1 + (u32) v0);
    s0 = (*(volatile s32 *) (u32) v0);
    a0 = 3; v0 = func_0026DA40(a0);
    if (v0 != 0) goto L_002D3548;
    a1 = 3;
    a0 = s0;
    a2 = a1;
    a3 = 0; func_0026E280(a0, a1, a2, a3);
L_002D3548:;
L_002D354C:;
    return;
}
