/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32);
s32 func_00153FD0(s32, s32, s32, s32);
s32 func_001540C0(void);

void func_001EC570(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    a1 = (*(volatile s32 *) (u32) a0);
    v1 = (*(volatile s32 *) (u32) (a0 + 12));
    { s32 c_ = a1 == v1; s1 = a0; if (c_) goto L_001EC5C8; }
    (*(volatile u32 *) (u32) (s1 + 12)) = (u32) a1;
    a2 = 48;
    a1 = (*(volatile s32 *) (u32) s1);
    v1 = (s32) a1 >> 1;
    v1 = (s32) ((u32) a1 + (u32) v1);
    a0 = (s32) ((u32) v1 + 0x1U);
L_001EC5A8:;
    v1 = (s32) a2 >> 1;
    s0 = (s32) ((u32) v1 + 0x2U);
    at = s0 < a0;
    if (at == 0) { v1 = (*(volatile s32 *) (u32) (s1 + 16)); goto L_001EC5D0; }
    a2 = (s32) ((u32) a2 + 0x30U); goto L_001EC5A8;
L_001EC5C8:;
    goto L_001EC634;
L_001EC5D0:;
    if (v1 == s0) { v1 = (*(volatile s32 *) (u32) (s1 + 20)); goto L_001EC624; }
    a0 = (*(volatile s32 *) (u32) (s1 + 20));
    if (a0 == 0) goto L_001EC5EC;
    Pes6Heap_Free(a0);
L_001EC5EC:;
    v0 = func_001540C0();
    a0 = v0;
    a1 = s0;
    a2 = 4; v0 = func_00153FD0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s1 + 20)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) s1);
    v1 = (*(volatile s32 *) (u32) (s1 + 20));
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) (s1 + 24)) = (u32) v1;
    (*(volatile u32 *) (u32) (s1 + 16)) = (u32) s0; goto L_001EC630;
L_001EC624:;
    a0 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) (s1 + 24)) = (u32) v1;
L_001EC630:;
L_001EC634:;
    return;
}
