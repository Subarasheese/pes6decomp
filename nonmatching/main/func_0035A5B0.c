/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
s32 func_0021E000(s32);

void func_0035A5B0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;

    v1 = (s32) 0x3b0000U;
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + 0x7b14U);
    v0 = (s32) ((u32) v0 + 0x7b10U);
    a1 = 12;
    a0 = (*(volatile s32 *) (u32) (gp + -21428));
    a0 = (*(volatile s32 *) (u32) (a0 + 4));
    a0 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) a0);
    s0 = (*(volatile s32 *) (u32) v1);
    s4 = (*(volatile s32 *) (u32) v0);
    a0 = s0; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    s3 = v0;
    { s32 c_ = s0 <= 0; s2 = 0; if (c_) goto L_0035A650; }
    s1 = s3;
L_0035A614:;
    v0 = (*(volatile s32 *) (u32) (s4 + 8));
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (s4 + 4)); goto L_0035A628; }
    { u32 t_ = (u32) v0; ; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
L_0035A628:;
    a0 = (*(volatile s32 *) (u32) s4);
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < s0;
    (*(volatile u32 *) (u32) s1) = (u32) a0;
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) v0;
    v0 = (*(volatile s8 *) (u32) (s4 + 12));
    (*(volatile u8 *) (u32) (s1 + 8)) = (u8) v0;
    s4 = (s32) ((u32) s4 + 0x10U);
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0xcU); if (c_) goto L_0035A614; }
L_0035A650:;
    v0 = (*(volatile s32 *) (u32) (gp + -21428));
    (*(volatile u32 *) (u32) (v0 + 8)) = (u32) s3;
    v0 = (*(volatile s32 *) (u32) (gp + -21428));
    (*(volatile u32 *) (u32) (v0 + 12)) = (u32) s0;
    a0 = (*(volatile s32 *) (u32) (s3 + 16)); v0 = func_0021E000(a0);
    v1 = (*(volatile s32 *) (u32) (gp + -21428));
    (*(volatile u32 *) (u32) (v1 + 32)) = (u32) v0;
    return;
}
