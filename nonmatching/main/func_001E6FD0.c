/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32);
s32 func_0014AB90(s32, s32, s32, s32);
s32 func_001E6D00(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_001E6FD0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    s4 = a0;
    if (s4 == 0) goto L_001E7078;
    a0 = (*(volatile s32 *) (u32) (s4 + 12));
    if (a0 == 0) { v0 = 0; goto L_001E70DC; }
    v1 = (*(volatile u8 *) (u32) (s4 + 24));
    at = 0 < v1;
    { s32 c_ = at == 0; a4 = 0; if (c_) goto L_001E7030; }
    a3 = (*(volatile s32 *) (u32) (s4 + 16));
L_001E7014:;
    v0 = (*(volatile s32 *) (u32) a3);
    if (a1 == v0) goto L_001E7030;
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = a4 < v1;
    { s32 c_ = v0 != 0; a3 = (s32) ((u32) a3 + 0x4U); if (c_) goto L_001E7014; }
L_001E7030:;
    if (a4 == v1) { v0 = 0; goto L_001E70DC; }
    v0 = (s32) ((u32) a4 >> 2);
    v1 = (*(volatile s32 *) (u32) (a0 + 8));
    s1 = (s32) ((u32) v0 << 2);
    s2 = (s32) ((u32) a4 << 2);
    v0 = (*(volatile s32 *) (u32) (s4 + 20));
    s0 = a4 & 0x3;
    v1 = (s32) ((u32) v1 + (u32) s2);
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v0 >> (s0 & 31));
    v0 = v0 & 0x1;
    { s32 c_ = v0 == 0; a0 = (*(volatile s32 *) (u32) v1); if (c_) goto L_001E7080; }
    v0 = 0;
L_001E7070:;
    goto L_001E70E0;
L_001E7078:;
    v0 = 0; goto L_001E70DC;
L_001E7080:;
    a1 = a2; v0 = func_0014AB90(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (v0 + 12));
    s3 = v0;
    a0 = s3;
    v0 = (*(volatile s32 *) (u32) (s4 + 16));
    v0 = (s32) ((u32) v0 + (u32) s2);
    (*(volatile u32 *) (u32) v0) = (u32) v1; v0 = func_001E6D00(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) { a0 = s3; goto L_001E70CC; }
    v1 = (*(volatile s32 *) (u32) (s4 + 20));
L_001E70B0:;
    v0 = 1;
    a1 = (s32) ((u32) v0 << (s0 & 31));
    a0 = (s32) ((u32) v1 + (u32) s1);
    v1 = (*(volatile s32 *) (u32) a0);
    v1 = v1 | a1;
    (*(volatile u32 *) (u32) a0) = (u32) v1; goto L_001E7070;
L_001E70CC:;
    Pes6Heap_Free(a0);
    v1 = (*(volatile s32 *) (u32) (s4 + 20)); goto L_001E70B0;
L_001E70DC:;
L_001E70E0:;
    return v0;
}
