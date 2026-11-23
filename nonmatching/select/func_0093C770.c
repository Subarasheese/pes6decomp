/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s64);
void func_00140FE0(void);
void func_00141010(s64, s64);
s64 func_00141300(s64);
s64 func_00154070(s64);
void func_001CDAD0(s64);

void func_0093C770(s64 a0, s64 a1, s64 a2) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;

    a1 = (s32) 0x960000U;
    a2 = 0;
    a1 = (s32) ((u32) a1 + 0x7ca0U);
    v1 = (*(volatile s32 *) (u32) (a0 + 68));
    (*(volatile u32 *) (u32) (gp + -18452)) = (u32) v1;
L_0093C798:;
    (*(volatile u32 *) (u32) (a1 + 4)) = (u32) 0;
    a2 = (s32) ((u32) a2 + 0x6U);
    (*(volatile u32 *) (u32) (a1 + 12)) = (u32) 0;
    a0 = (u64) a2 < (u64) (s64) 13;
    (*(volatile u32 *) (u32) (a1 + 20)) = (u32) 0;
    (*(volatile u32 *) (u32) (a1 + 28)) = (u32) 0;
    (*(volatile u32 *) (u32) (a1 + 36)) = (u32) 0;
    (*(volatile u32 *) (u32) (a1 + 44)) = (u32) 0;
    { s32 c_ = a0 != 0; a1 = (s32) ((u32) a1 + 0x30U); if (c_) goto L_0093C798; }
    a1 = (s32) 0x960000U;
    a0 = (s64) ((u64) v1 << 32);
    a2 = (s32) ((u32) a2 << 3);
    a1 = (s32) ((u32) a1 + 0x7ca4U);
    a1 = (s32) ((u32) a1 + (u32) a2);
    a0 = a0 >> 32;
    (*(volatile u32 *) (u32) a1) = (u32) 0;
    v1 = 19;
    a1 = (*(volatile s32 *) (u32) a0);
    if (a1 == v1) goto L_0093C844;
    if (a0 == 0) { ; goto L_0093C900; }
    s0 = (s32) 0x960000U;
    s1 = 0;
    s0 = (s32) ((u32) s0 + 0x7ca0U);
L_0093C800:;
    a1 = (*(volatile s32 *) (u32) (s0 + 4));
    if (a1 == 0) goto L_0093C820;
    a0 = (*(volatile s32 *) (u32) s0); func_00140FE0();
    a0 = (*(volatile s32 *) (u32) (s0 + 4)); Pes6Heap_Free(a0);
L_0093C820:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = (u64) s1 < (u64) (s64) 19;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x8U); if (c_) goto L_0093C800; }
    a0 = (*(volatile s32 *) (u32) (gp + -18452)); Pes6Heap_Free(a0);
    (*(volatile u32 *) (u32) (gp + -18452)) = (u32) 0;
    goto L_0093C8FC;
L_0093C844:;
    func_001CDAD0(a0);
    s1 = (s32) 0x960000U;
    s0 = 0;
    s2 = 0;
    s1 = (s32) ((u32) s1 + 0x7ca0U);
L_0093C85C:;
    v0 = (*(volatile s32 *) (u32) (gp + -18452));
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    v0 = (s32) ((u32) v0 + (u32) s2);
    a0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) s1) = (u32) a0; v0 = func_00141300(a0);
    a0 = v0; v0 = func_00154070(a0);
    { s32 c_ = v0 != 0; (*(volatile u32 *) (u32) (s1 + 4)) = (u32) v0; if (c_) goto L_0093C8DC; }
    v1 = (*(volatile s32 *) (u32) (gp + -18452));
    if (v1 == 0) goto L_0093C8FC;
    s0 = (s32) 0x960000U;
    s1 = 0;
    s0 = (s32) ((u32) s0 + 0x7ca0U);
L_0093C89C:;
    a1 = (*(volatile s32 *) (u32) (s0 + 4));
    if (a1 == 0) goto L_0093C8B8;
    a0 = (*(volatile s32 *) (u32) s0); func_00140FE0();
    a0 = (*(volatile s32 *) (u32) (s0 + 4)); Pes6Heap_Free(a0);
L_0093C8B8:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = (u64) s1 < (u64) (s64) 19;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x8U); if (c_) goto L_0093C89C; }
    a0 = (*(volatile s32 *) (u32) (gp + -18452)); Pes6Heap_Free(a0);
    (*(volatile u32 *) (u32) (gp + -18452)) = (u32) 0;
    goto L_0093C8FC;
L_0093C8DC:;
    a1 = (*(volatile s32 *) (u32) (s1 + 4));
    a0 = (*(volatile s32 *) (u32) s1); func_00141010(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x4U);
    v1 = (u64) s0 < (u64) (s64) 19;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x8U); if (c_) goto L_0093C85C; }
L_0093C8FC:;
L_0093C900:;
    return;
}
