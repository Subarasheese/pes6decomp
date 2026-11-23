/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32);
s32 func_00154070(s32);
void memset(s32, s32, s32);

void func_001D9D60(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    v0 = (s32) 0x530000U;
    s1 = a0;
    a0 = (*(volatile s32 *) (u32) (v0 + -21648));
    { s32 c_ = a0 == 0; s0 = a1; if (c_) goto L_001D9D94; }
    Pes6Heap_Free(a0);
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + -21648)) = (u32) 0;
L_001D9D94:;
    a0 = (s32) 0x530000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffab70U);
    a2 = 20; memset(a0, a1, a2);
    a0 = (s32) ((u32) s1 << 2); v0 = func_00154070(a0);
    v1 = (s32) 0x530000U;
    at = 0 < s1;
    a5 = 0;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (v1 + -21648)) = (u32) v0; if (c_) goto L_001D9E20; }
    a4 = 0;
    a3 = 27000;
    v1 = (s32) 0x530000U;
    a0 = (s32) 0x530000U;
    a2 = -1;
L_001D9DD8:;
    a1 = (*(volatile s32 *) (u32) s0);
    if (a1 != a2) goto L_001D9DF8;
    a1 = (*(volatile s32 *) (u32) (a0 + -21648));
    a1 = (s32) ((u32) a1 + (u32) a4);
    (*(volatile u32 *) (u32) a1) = (u32) 0; goto L_001D9E08;
L_001D9DF8:;
    a1 = (*(volatile s32 *) (u32) (v1 + -21648));
    a1 = (s32) ((u32) a1 + (u32) a4);
    (*(volatile u32 *) (u32) a1) = (u32) a3;
    a3 = (s32) ((u32) a3 + 0x226U);
L_001D9E08:;
    a5 = (s32) ((u32) a5 + 0x1U);
    a1 = a5 < s1;
    s0 = (s32) ((u32) s0 + 0x8U);
    { s32 c_ = a1 != 0; a4 = (s32) ((u32) a4 + 0x4U); if (c_) goto L_001D9DD8; }
L_001D9E20:;
    return;
}
