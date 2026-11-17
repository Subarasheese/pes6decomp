/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);

s32 func_001D6440(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    s0 = a0;
    if (s0 == 0) { v0 = 0; goto L_001D64A0; }
    a0 = 40;
    a1 = 1; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (s0 + 20));
    if (v1 == 0) { (*(volatile u32 *) (u32) (s0 + 20)) = (u32) v0; goto L_001D6498; }
    v1 = (*(volatile s32 *) (u32) (s0 + 24));
    (*(volatile u32 *) (u32) (v1 + 32)) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) (s0 + 24));
    (*(volatile u32 *) (u32) (v0 + 28)) = (u32) v1;
L_001D6480:;
    (*(volatile u32 *) (u32) (s0 + 24)) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) (s0 + 16));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) v1;
    (*(volatile u32 *) (u32) (v0 + 16)) = (u32) s0; goto L_001D64A0;
L_001D6498:;
    (*(volatile u32 *) (u32) (v0 + 28)) = (u32) 0; goto L_001D6480;
L_001D64A0:;
    return v0;
}
