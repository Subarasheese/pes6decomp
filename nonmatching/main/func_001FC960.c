/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
void func_001FC9D0(s32);
void memset(s32, s32, s32);

void func_001FC960(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    a1 = 0;
    a2 = 8;
    s0 = a0;
    a0 = (s32) 0x530000U;
    a0 = (s32) ((u32) a0 + 0x3030U); memset(a0, a1, a2);
    v1 = (s32) 0x3e0000U;
    v0 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) v1 + 0x7338U);
    v0 = (s32) ((u32) v0 + 0x7300U);
    v1 = (s32) ((u32) v1 - (u32) v0);
    a1 = 16;
    v0 = (s32) 0x530000U;
    a0 = (s32) ((u32) v1 >> 2);
    (*(volatile u32 *) (u32) (v0 + 12336)) = (u32) a0; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    v1 = (s32) 0x530000U;
    a0 = s0;
    (*(volatile u32 *) (u32) (v1 + 12340)) = (u32) v0; func_001FC9D0(a0);
    return;
}
