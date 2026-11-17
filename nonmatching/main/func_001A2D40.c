/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Free(s32, s32);
s32 func_0014AAB0(s32, s32, s32, s32);
s32 func_00153FE0(s32, s32);
s32 func_001CDAD0(s32);

s32 func_001A2D40(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    v0 = (s32) 0x520000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 896));
    s0 = (s32) ((u32) v0 + 0x20U);
    a0 = s0; v0 = func_001CDAD0(a0);
    v0 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + -191));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    s1 = (s32) ((u32) v0 + 0x20U);
    a0 = s1; v0 = func_001CDAD0(a0);
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    s0 = (s32) ((u32) s1 + 0x4U);
    v0 = (s32) 0x520000U;
    s1 = (*(volatile s32 *) (u32) v1);
    a1 = (*(volatile s32 *) (u32) (s1 + 8));
    a0 = (*(volatile s16 *) (u32) (v0 + -80)); v0 = func_00153FE0(a0, a1);
    s2 = v0;
    a0 = s1;
    a1 = s2; v0 = func_0014AAB0(a0, a1, a2, a3);
    a0 = s2; v0 = func_001CDAD0(a0);
    v1 = (s32) 0x520000U;
    v0 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (v1 + -128)) = (u32) s2;
    v1 = (*(volatile s32 *) (u32) s0);
    s0 = (*(volatile s32 *) (u32) (v1 + 4));
    a1 = (*(volatile s32 *) (u32) (s0 + 8));
    a0 = (*(volatile s16 *) (u32) (v0 + -80)); v0 = func_00153FE0(a0, a1);
    s1 = v0;
    a0 = s0;
    a1 = s1; v0 = func_0014AAB0(a0, a1, a2, a3);
    v0 = (s32) 0x520000U;
    v1 = (s32) 0x520000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 896));
    (*(volatile u32 *) (u32) (v1 + -124)) = (u32) s1; v0 = Pes6Heap_Free(a0, a1);
    v1 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (v1 + 896)) = (u32) 0;
    return v0;
}
