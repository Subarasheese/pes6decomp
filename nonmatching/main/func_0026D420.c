/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32);
s32 func_0017F850(s32, s32, s32, s32);
void memcpy(s32, s32, s32);

void func_0026D420(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    v0 = (s32) 0x10000U;
    s0 = a0;
    a0 = v0 | 0x3a; v0 = func_0017F850(a0, a1, a2, a3);
    a2 = v0;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -10224));
    a1 = (*(volatile s32 *) (u32) (s0 + 68)); memcpy(a0, a1, a2);
    v0 = (s32) 0x590000U;
    a1 = (s32) 0x590000U;
    a3 = (*(volatile s32 *) (u32) (v0 + -10224));
    a0 = (s32) 0x590000U;
    a2 = 1;
    v1 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (a1 + -10216)) = (u32) a3;
    v0 = (s32) 0x590000U;
    a1 = (s32) ((u32) a3 + 0xcU);
    (*(volatile u32 *) (u32) (a0 + -10212)) = (u32) a1;
    a0 = (*(volatile u16 *) (u32) (a3 + 8));
    (*(volatile u8 *) (u32) (v0 + -10220)) = (u8) a2;
    v0 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) a3 + (u32) v0);
    v0 = (s32) ((u32) v0 + 0xcU);
    (*(volatile u32 *) (u32) (v1 + -10208)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (s0 + 68)); Pes6Heap_Free(a0);
    return;
}
