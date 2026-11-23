/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32);
s32 func_00153FE0(s32, s32);
void func_001CDAD0(s32);
void memcpy(s32, s32, s32);

void func_001A8DF0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    v0 = (s32) 0x3b0000U;
    s2 = a0;
    s1 = (*(volatile s32 *) (u32) a0);
    a0 = (*(volatile u8 *) (u32) (v0 + -1006));
    a1 = (*(volatile s32 *) (u32) (s2 + 72)); v0 = func_00153FE0(a0, a1);
    a1 = (*(volatile s32 *) (u32) (s2 + 68));
    s0 = v0;
    a2 = (*(volatile s32 *) (u32) (s2 + 72));
    a0 = s0; memcpy(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s2 + 68)); Pes6Heap_Free(a0);
    a0 = s0; func_001CDAD0(a0);
    v1 = (*(volatile s32 *) (u32) s0);
    at = 0 < v1;
    { s32 c_ = at == 0; a3 = 0; if (c_) goto L_001A8E90; }
    v1 = (s32) 0x520000U;
    a1 = (s32) ((u32) s1 << 2);
    v1 = (s32) ((u32) v1 + 0x1d00U);
    a2 = 0;
    a0 = (s32) ((u32) s0 + 0x4U);
    a1 = (s32) ((u32) v1 + (u32) a1);
L_001A8E68:;
    v1 = (*(volatile s32 *) (u32) a0);
    a3 = (s32) ((u32) a3 + 0x1U);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (*(volatile s32 *) (u32) v1);
    a2 = (s32) ((u32) a2 + 0x4U);
    (*(volatile u32 *) (u32) a1) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) s0);
    v1 = a3 < v1;
    { s32 c_ = v1 != 0; a1 = (s32) ((u32) a1 + 0x4U); if (c_) goto L_001A8E68; }
L_001A8E90:;
    return;
}
