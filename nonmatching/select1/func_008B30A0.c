/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
void func_001E6FD0(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_001E7100(s32);
s32 func_0021E000(s32);

void func_008B30A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    s2 = a0;
    s1 = a1;
    s0 = a2; v0 = func_0021E000(a0);
    a0 = v0; v0 = func_001E7100(a0);
    a0 = v0;
    a2 = s0;
    a1 = s1; func_001E6FD0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 1;
    a1 = 12; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) v0) = (u32) s2;
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) s1;
    a0 = (*(volatile s32 *) (u32) (gp + -20348));
    if (a0 != 0) goto L_008B3104;
    (*(volatile u32 *) (u32) (gp + -20348)) = (u32) v0; goto L_008B3118;
L_008B3104:;
    v1 = (*(volatile s32 *) (u32) (a0 + 8));
    if (v1 != 0) { a0 = v1; goto L_008B3104; }
    (*(volatile u32 *) (u32) (a0 + 8)) = (u32) v0;
L_008B3118:;
    return;
}
