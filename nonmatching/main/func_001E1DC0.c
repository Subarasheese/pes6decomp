/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Free(s32, s32);
s32 func_00153FD0(s32, s32, s32, s32);
s32 func_001540C0(void);

s32 func_001E1DC0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    v1 = (*(volatile u16 *) (u32) (a0 + 68));
    { s32 c_ = v1 == 0; s0 = a0; if (c_) goto L_001E1EF0; }
    a0 = (*(volatile s32 *) (u32) (s0 + 60));
    if (a0 == 0) goto L_001E1DF0;
    v0 = Pes6Heap_Free(a0, a1);
    (*(volatile u32 *) (u32) (s0 + 60)) = (u32) 0;
L_001E1DF0:;
    (*(volatile u16 *) (u32) (s0 + 64)) = (u16) 0;
    a2 = (s32) 0x70000000U;
    a4 = (*(volatile s32 *) (u32) (s0 + 8));
    a1 = 1;
L_001E1E00:;
    a0 = (*(volatile u16 *) (u32) (s0 + 64));
    a6 = 0;
    at = 0 < a0;
    { s32 c_ = at == 0; a5 = 0; if (c_) goto L_001E1E48; }
    v0 = (*(volatile s32 *) (u32) (a4 + 4));
    a3 = a2;
    v1 = (*(volatile s32 *) (u32) (v0 + 4));
L_001E1E20:;
    v0 = (*(volatile s32 *) (u32) a3);
    if (v1 != v0) goto L_001E1E38;
    a5 = a1; goto L_001E1E48;
L_001E1E38:;
    a6 = (s32) ((u32) a6 + 0x1U);
    v0 = a6 < a0;
    { s32 c_ = v0 != 0; a3 = (s32) ((u32) a3 + 0x4U); if (c_) goto L_001E1E20; }
L_001E1E48:;
    if (a5 == 0) goto L_001E1EC0;
L_001E1E50:;
    a4 = (*(volatile s32 *) (u32) a4);
    if (a4 != 0) goto L_001E1E00;
    v0 = func_001540C0();
    a1 = (*(volatile u16 *) (u32) (s0 + 64));
    a0 = v0;
    a2 = 4; v0 = func_00153FD0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 60)) = (u32) v0;
    v1 = (*(volatile u16 *) (u32) (s0 + 64));
    at = 0 < v1;
    { s32 c_ = at == 0; a1 = 0; if (c_) goto L_001E1EF0; }
    a3 = (s32) 0x70000000U;
    a2 = 0;
L_001E1E90:;
    v1 = (*(volatile s32 *) (u32) (s0 + 60));
    a1 = (s32) ((u32) a1 + 0x1U);
    a0 = (*(volatile s32 *) (u32) a3);
    v1 = (s32) ((u32) v1 + (u32) a2);
    (*(volatile u32 *) (u32) v1) = (u32) a0;
    a3 = (s32) ((u32) a3 + 0x4U);
    v1 = (*(volatile u16 *) (u32) (s0 + 64));
    v1 = a1 < v1;
    { s32 c_ = v1 != 0; a2 = (s32) ((u32) a2 + 0x4U); if (c_) goto L_001E1E90; }
    goto L_001E1EF0;
L_001E1EC0:;
    v0 = a0 & 0xffff;
    a0 = (*(volatile s32 *) (u32) (a4 + 4));
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x70000000U;
    v0 = (s32) ((u32) v1 + (u32) v0);
    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    (*(volatile u32 *) (u32) v0) = (u32) v1;
    v0 = (*(volatile u16 *) (u32) (s0 + 64));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u16 *) (u32) (s0 + 64)) = (u16) v0; goto L_001E1E50;
L_001E1EF0:;
    return v0;
}
