/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0030EA70(s64, s64, s64, s64);
s64 func_00311EF0(s64, s64, s64, s64);
s64 func_00BD9AA0(s64, s64, s64, s64);
s64 func_00C22520(s64, s64, s64, s64);
s64 func_00C7EF80(s64, s64, s64, s64);

s64 func_00354820(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;
    s64 frame[8];
    s64 sp = (s32) (u32) frame;

    s1 = a0;
    s0 = a1; v0 = func_00BD9AA0(a0, a1, a2, a3);
    if (v0 == 0) { a0 = 0; goto L_00354870; }
    v0 = func_00C22520(a0, a1, a2, a3);
    if (v0 != 0) { a0 = (s32) ((u32) sp + 0x3fU); goto L_0035485C; }
    v0 = 0; goto L_0035492C;
L_0035485C:;
    v0 = func_00311EF0(a0, a1, a2, a3);
    v0 = 2;
    (*(volatile u32 *) (u32) (gp + -21448)) = (u32) v0; goto L_003548AC;
L_00354870:;
    v0 = func_00C7EF80(a0, a1, a2, a3);
    if (v0 == 0) { a0 = 1; goto L_00354890; }
    v0 = 1;
    (*(volatile u8 *) (u32) (sp + 63)) = (u8) 0;
    (*(volatile u32 *) (u32) (gp + -21448)) = (u32) v0; goto L_003548AC;
L_00354890:;
    v0 = func_00C7EF80(a0, a1, a2, a3);
    if (v0 == 0) { v0 = 0; goto L_0035492C; }
    v0 = 1;
    (*(volatile u8 *) (u32) (sp + 63)) = (u8) v0;
    (*(volatile u32 *) (u32) (gp + -21448)) = (u32) v0;
L_003548AC:;
    v1 = (s64) ((u64) v0 << 32);
    v1 = v1 >> 32;
    v0 = 3;
    if (v1 == v0) { v0 = 0; goto L_0035492C; }
    v1 = (s32) 0x350000U;
    v0 = (s32) 0x80000000U;
    v1 = (s32) ((u32) v1 + 0x3bd0U);
    v0 = v0 | 0x28;
    (*(volatile u32 *) (u32) s0) = (u32) v1;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    v1 = (s32) ((u32) gp + 0xffffac34U);
    a1 = (*(volatile u8 *) (u32) (gp + -21440));
    v0 = (s32) ((u32) gp + 0xffffac35U);
    a0 = (*(volatile u8 *) (u32) (sp + 63));
    (*(volatile u8 *) (u32) (gp + -21439)) = (u8) a1;
    (*(volatile u8 *) (u32) (gp + -21440)) = (u8) a0;
    a0 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    (*(volatile u8 *) (u32) v0) = (u8) v1; v0 = func_0030EA70(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (sp + 63));
    a0 = (s32) ((u32) gp + 0xffffac34U);
    v1 = (*(volatile u8 *) (u32) (gp + -21444));
    a1 = (s32) ((u32) a1 << 1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) a0) = (u8) v0;
    (*(volatile u8 *) (u32) (gp + -21444)) = (u8) v1;
    v0 = 1;
L_0035492C:;
    return v0;
}
