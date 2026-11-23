/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6HeapZone_Close(s32);
s32 func_00154080(s32);
void func_001540B0(s32, s32);
s32 func_001A5BB0(s32);
void func_001A5E00(s32, s32, s32, s32);
s32 func_0026B250(s32, s32, s32, s32);

s32 func_008FF1E0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;

    v0 = func_0026B250(a0, a1, a2, a3);
    v1 = 3;
    if (v0 == v1) { a0 = 3; goto L_008FF21C; }
    v0 = func_0026B250(a0, a1, a2, a3);
    v1 = 4;
    if (v0 == v1) goto L_008FF218;
    v0 = 1; goto L_008FF2B4;
L_008FF218:;
    a0 = 3;
L_008FF21C:;
    v0 = func_001A5BB0(a0);
    if (v0 == 0) goto L_008FF234;
    v0 = 1; goto L_008FF2B4;
L_008FF234:;
    v0 = (s32) 0x3b0000U;
    v1 = 1;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (*(volatile s32 *) (u32) (v0 + 24));
    if (v0 == v1) { a0 = 10; goto L_008FF27C; }
    if (v0 == 0) { a0 = 10; goto L_008FF25C; }
    v0 = 0; goto L_008FF2B4;
L_008FF25C:;
    a1 = 0; func_001540B0(a0, a1);
    v0 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (*(volatile s32 *) (u32) (v1 + 24));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + 24)) = (u32) v0; goto L_008FF2B0;
L_008FF27C:;
    v0 = func_00154080(a0);
    if (v0 != 0) goto L_008FF2B0;
    a0 = 10; Pes6HeapZone_Close(a0);
    a0 = 3; func_001A5E00(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (*(volatile s32 *) (u32) (v1 + 24));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + 24)) = (u32) v0;
L_008FF2B0:;
    v0 = 0;
L_008FF2B4:;
    return v0;
}
