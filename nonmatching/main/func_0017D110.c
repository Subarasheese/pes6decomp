/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
s32 func_00133DA0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00141010(s32, s32);
s32 func_00141300(s32);
s32 func_00141370(s32);

void func_0017D110(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    v1 = (s32) ((u32) a1 << 3);
    v1 = (s32) ((u32) v1 - (u32) a1);
    v1 = (s32) ((u32) v1 << 2);
    s1 = a0;
    v0 = (*(volatile s32 *) (u32) (a0 + 24));
    s0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) a2;
    a0 = (*(volatile s32 *) (u32) (s0 + 4)); v0 = func_00141300(a0);
    a0 = 1;
    a1 = v0; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) v0;
    a1 = (*(volatile s32 *) (u32) (s0 + 8));
    a0 = (*(volatile s32 *) (u32) (s0 + 4)); func_00141010(a0, a1);
    v0 = (s32) ((u32) s1 + 0x90U);
    (*(volatile u32 *) (u32) (s0 + 20)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (s0 + 4)); v0 = func_00141370(a0);
    a0 = v0; v0 = func_00133DA0(a0, a1, a2, a3, a4, a5, a6, a7);
    (*(volatile u32 *) (u32) (s0 + 24)) = (u32) v0;
    return;
}
