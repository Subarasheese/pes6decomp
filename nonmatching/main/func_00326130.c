/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00311A50(s32, s32, s32);

s32 func_00326130(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s1 = a1;
    a0 = (s32) ((u32) sp + 0x4fU);
    a1 = (s32) ((u32) sp + 0x4eU);
    v0 = func_00311A50(a0, a1, a2);
    a0 = (*(volatile u8 *) (u32) (sp + 78));
    a1 = (s32) 0x590000U;
    a2 = (*(volatile u8 *) (u32) (sp + 79));
    a1 = (s32) ((u32) a1 + 0x2980U);
    v0 = 0;
    v1 = (s32) ((u32) a0 << 4);
    a0 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) a2 << 10);
    a4 = (s32) ((u32) s1 + (u32) v1);
    v1 = (s32) ((u32) a2 << 4);
    a5 = a4;
    a3 = (s32) ((u32) v1 - (u32) a2);
    a2 = (s32) ((u32) a3 << 3);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 - (u32) a0);
    a2 = (s32) ((u32) a2 - (u32) a3);
    a0 = (s32) ((u32) a2 << 8);
    v1 = (s32) ((u32) v1 << 3);
    a0 = (s32) ((u32) a1 + (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile u16 *) (u32) (v1 + 70));
L_003261AC:;
    v1 = (*(volatile u16 *) (u32) (a5 + 200));
    if (v1 != a0) { v0 = (s32) ((u32) v0 + 0x1U); goto L_003261D8; }
    if (a0 == 0) goto L_003261D4;
    v0 = (s32) ((u32) v0 << 5);
    v1 = 1;
    v0 = (s32) ((u32) a4 + (u32) v0);
    s0 = (s32) ((u32) v0 + 0xc8U); goto L_003261E8;
L_003261D4:;
    v0 = (s32) ((u32) v0 + 0x1U);
L_003261D8:;
    v1 = v0 < 32;
    { s32 c_ = v1 != 0; a5 = (s32) ((u32) a5 + 0x20U); if (c_) goto L_003261AC; }
    v1 = 0;
L_003261E8:;
    if (v1 == 0) { v0 = 255; goto L_003261FC; }
    v0 = (*(volatile s16 *) (u32) (s0 + 6));
    (*(volatile u16 *) (u32) s2) = (u16) v0; goto L_00326200;
L_003261FC:;
    (*(volatile u16 *) (u32) s2) = (u16) v0;
L_00326200:;
    v0 = 1;
    return v0;
}
