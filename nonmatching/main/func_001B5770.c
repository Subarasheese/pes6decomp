/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s64);
s64 func_00154070(s64);
s64 func_001C80F0(s64);
s64 strcmp(s64, s64);
void strcpy(s64, s64);

void func_001B5770(s64 a0, s64 a1) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s2 = a0;
    s0 = (s32) 0x520000U;
    s0 = (s32) ((u32) s0 + 0x2910U);
    a1 = (*(volatile s32 *) (u32) (s0 + 40));
    { s32 c_ = a1 == 0; s1 = 1; if (c_) goto L_001B57B0; }
    v0 = strcmp(a0, a1);
    if (v0 != 0) goto L_001B57B0;
    s1 = 0;
L_001B57B0:;
    if (s1 == 0) { ; goto L_001B5814; }
    a0 = s2; v0 = func_001C80F0(a0);
    a0 = (s32) ((u32) v0 + 0x1U); v0 = func_00154070(a0);
    s1 = v0;
    a1 = s2;
    a0 = s1; strcpy(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 40)); Pes6Heap_Free(a0);
    v1 = (*(volatile u8 *) (u32) (s0 + 60));
    a0 = -5;
    a1 = (s64) ((u64) 0 + (u64) (s64) 4);
    (*(volatile u32 *) (u32) (s0 + 40)) = (u32) s1;
    (*(volatile u32 *) (u32) (s0 + 44)) = (u32) s2;
    v1 = v1 & a0;
    v1 = v1 | a1;
    (*(volatile u8 *) (u32) (s0 + 60)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (s0 + 60));
    v1 = v1 & a0;
    v1 = v1 | a1;
    (*(volatile u8 *) (u32) (s0 + 60)) = (u8) v1;
L_001B5814:;
    return;
}
