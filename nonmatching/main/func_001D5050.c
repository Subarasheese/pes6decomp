/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s64);
s64 func_0014AB90(s64, s64, s64, s64);
s64 func_00153FD0(s64, s64, s64, s64);
s64 func_00153FE0(s64, s64);
void func_001CDAD0(s64);
s64 func_001D51F0(s64, s64, s64, s64);

void func_001D5050(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s64 gp = 0x3ef370;

    s5 = a2;
    s4 = a1;
    { s32 c_ = s4 == 0; s1 = a0; if (c_) goto L_001D51C4; }
    a0 = (*(volatile s32 *) (u32) (gp + -23092));
    if (a0 == 0) goto L_001D50C4;
L_001D5090:;
    v1 = (*(volatile s32 *) (u32) (a0 + 8));
    if (v1 != s1) goto L_001D50A4;
    goto L_001D50B4;
L_001D50A4:;
    a0 = (*(volatile s32 *) (u32) (a0 + 4));
    if (a0 != 0) goto L_001D5090;
    a0 = 0;
L_001D50B4:;
    if (a0 == 0) goto L_001D50CC;
    goto L_001D51C8;
L_001D50C4:;
    a0 = 0; goto L_001D50B4;
L_001D50CC:;
    a0 = s4; func_001CDAD0(a0);
    a0 = s5;
    a1 = 20; v0 = func_00153FE0(a0, a1);
    (*(volatile u32 *) (u32) (v0 + 8)) = (u32) s1;
    s0 = v0;
    v1 = (*(volatile s32 *) (u32) s4);
    a0 = s5;
    (*(volatile u32 *) (u32) (v0 + 12)) = (u32) v1;
    a1 = (*(volatile s32 *) (u32) (v0 + 12));
    a2 = 4; v0 = func_00153FD0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 12));
    at = 0 < v0;
    { s32 c_ = at == 0; s3 = 0; if (c_) goto L_001D5188; }
    s6 = (s64) ((u64) s1 << 40);
    s2 = 0;
    s6 = (s64) ((u64) s6 >> 40);
    s1 = 0;
L_001D5124:;
    v0 = (*(volatile s32 *) (u32) (s4 + 4));
    v0 = (s32) ((u32) v0 + (u32) s2);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s5; v0 = func_0014AB90(a0, a1, a2, a3);
    a0 = s1 | s6;
    a1 = v0;
    a2 = s5; v0 = func_001D51F0(a0, a1, a2, a3);
    a1 = (*(volatile s32 *) (u32) (s0 + 16));
    v1 = (s32) 0x1000000U;
    s1 = (s32) ((u32) s1 + (u32) v1);
    a0 = 1;
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = (s32) ((u32) a1 + (u32) s2);
    (*(volatile u32 *) (u32) v1) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 16));
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u8 *) (u32) (v0 + 40)) = (u8) a0;
    v0 = (*(volatile s32 *) (u32) (s0 + 12));
    v0 = s3 < v0;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_001D5124; }
L_001D5188:;
    a0 = s4; Pes6Heap_Free(a0);
    v1 = (*(volatile s32 *) (u32) (gp + -23092));
    if (v1 == 0) goto L_001D51B8;
    v1 = (*(volatile s32 *) (u32) (gp + -23088));
    (*(volatile u32 *) (u32) (v1 + 4)) = (u32) s0;
    v1 = (*(volatile s32 *) (u32) (gp + -23088));
    (*(volatile u32 *) (u32) s0) = (u32) v1;
L_001D51AC:;
    (*(volatile u32 *) (u32) (gp + -23088)) = (u32) s0;
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) 0; goto L_001D51C4;
L_001D51B8:;
    (*(volatile u32 *) (u32) (gp + -23092)) = (u32) s0;
    (*(volatile u32 *) (u32) s0) = (u32) 0; goto L_001D51AC;
L_001D51C4:;
L_001D51C8:;
    return;
}
