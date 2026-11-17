/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32, s32);
s32 func_0014AAB0(s32, s32, s32, s32);
s32 func_00153FE0(s32, s32);
s32 func_00154070(s32);
void func_001CDAD0(s32);
void memcpy(s32, s32, s32);

void func_001A2F50(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    v0 = (s32) 0x520000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 892));
    s1 = (s32) ((u32) v0 + 0x20U);
    a0 = s1; func_001CDAD0(a0);
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    s0 = (s32) ((u32) s1 + 0x4U);
    v0 = (s32) 0x520000U;
    s1 = (*(volatile s32 *) (u32) (v1 + 8));
    a1 = (*(volatile s32 *) (u32) (s1 + 8));
    a0 = (*(volatile s16 *) (u32) (v0 + -80)); v0 = func_00153FE0(a0, a1);
    s2 = v0;
    a0 = s1;
    a1 = s2; v0 = func_0014AAB0(a0, a1, a2, a3);
    a0 = s2; func_001CDAD0(a0);
    v0 = (s32) 0x520000U;
    v1 = (s32) 0x520000U;
    a0 = (*(volatile s16 *) (u32) (v0 + -80));
    (*(volatile u32 *) (u32) (v1 + -144)) = (u32) s2;
    v0 = (*(volatile s32 *) (u32) s0);
    s1 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = (*(volatile s32 *) (u32) (s1 + 8)); v0 = func_00153FE0(a0, a1);
    s2 = v0;
    a0 = s1;
    a1 = s2; v0 = func_0014AAB0(a0, a1, a2, a3);
    a0 = s2; func_001CDAD0(a0);
    v0 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (v0 + -148)) = (u32) s2;
    v0 = (*(volatile s32 *) (u32) s0);
    s1 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (s1 + 8)); v0 = func_00154070(a0);
    s2 = v0;
    a0 = s1;
    a1 = s2; v0 = func_0014AAB0(a0, a1, a2, a3);
    a0 = s2; func_001CDAD0(a0);
    v0 = (s32) 0x520000U;
    v1 = 1;
    (*(volatile u32 *) (u32) (v0 + -152)) = (u32) s2;
    v0 = (s32) 0x520000U;
    (*(volatile u16 *) (u32) (v0 + 886)) = (u16) v1;
    v0 = (s32) 0x520000U;
    a0 = (*(volatile s16 *) (u32) (v0 + -80));
    v0 = (*(volatile s32 *) (u32) s0);
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (*(volatile s32 *) (u32) (s1 + 8)); v0 = func_00153FE0(a0, a1);
    s2 = v0;
    a0 = s1;
    a1 = s2; v0 = func_0014AAB0(a0, a1, a2, a3);
    a0 = s2; func_001CDAD0(a0);
    v1 = (s32) 0x520000U;
    v0 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (v1 + -140)) = (u32) s2;
    v1 = (*(volatile s32 *) (u32) s0);
    a0 = (*(volatile s16 *) (u32) (v0 + -80));
    s0 = (*(volatile s32 *) (u32) (v1 + 16));
    s2 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = s2; v0 = func_00153FE0(a0, a1);
    s1 = v0;
    a1 = (s32) ((u32) s0 + 0x20U);
    a2 = s2;
    a0 = s1; memcpy(a0, a1, a2);
    a0 = s1; func_001CDAD0(a0);
    v0 = (s32) 0x520000U;
    v1 = (s32) 0x520000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 892));
    (*(volatile u32 *) (u32) (v1 + -136)) = (u32) s1; Pes6Heap_Free(a0, a1);
    v1 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (v1 + 892)) = (u32) 0;
    return;
}
