/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Heap_Alloc(s64, s64, s64, s64);
s64 func_001D4ED0(s64);
s64 func_001D5A10(s64);
s64 func_001D7A20(s64, s64, s64);
void func_001D7C20(s64, s64, s64, s64);
void func_001D7D60(s64, s64);
void func_001D7D80(s64, s64, s64, s64);
void func_001D7E40(s64, s64, s64, s64);
s64 func_001D7F90(s64, s64, s64, s64);
void func_002E4400(s64, s64, s64, s64);
s64 func_002E45B0(s64, s64, s64, s64);

void func_00629580(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[10];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x10000U;
    s2 = a0;
    a0 = v0 | 0x384;
    v0 = func_001D5A10(a0);
    (*(volatile u32 *) (u32) s2) = (u32) v0;
    a0 = v0; v0 = func_001D4ED0(a0);
    (*(volatile u32 *) (u32) (s2 + 8)) = (u32) v0;
    a0 = v0;
    a1 = 4; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s2 + 4)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s2 + 8));
    { s32 c_ = v0 <= 0; s1 = 0; if (c_) goto L_00629650; }
    s0 = 0;
L_006295D4:;
    a0 = (*(volatile s32 *) (u32) s2); v0 = func_001D7F90(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (s2 + 4));
    v1 = (s32) ((u32) v1 + (u32) s0);
    (*(volatile u32 *) (u32) v1) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; func_001D7E40(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_001D7D80(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_001D7D60(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 1; func_001D7C20(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s2 + 8));
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < v0;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_006295D4; }
L_00629650:;
    s0 = 0;
    s1 = s2;
L_00629658:;
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    a1 = (s64) ((u64) s0 << 48);
    a0 = (*(volatile s32 *) (u32) (v0 + 24));
    a1 = a1 >> 48; func_001D7D80(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    a1 = (s32) ((u32) sp + 0x40U);
    a0 = (*(volatile s32 *) (u32) (v0 + 24));
    a2 = 6; v0 = func_001D7A20(a0, a1, a2);
    a0 = 10;
    a1 = (s32) ((u32) sp + 0x40U); v0 = func_002E45B0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s1 + 332)) = (u32) v0;
    a0 = v0;
    a1 = 0; func_002E4400(a0, a1, a2, a3);
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 2;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00629658; }
    return;
}
