/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001B4D20(s32, s32, s32, s32);
s32 func_002CADF0(s32);
s32 func_0035A690(s32, s32, s32, s32);

s32 func_00342F70(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    v0 = (s32) 0x5f0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 16772));
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0x60a8U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    if (v0 == 0) goto L_00342FB0;
    { u32 t_ = (u32) v0; ; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
L_00342FB0:;
    v0 = (s32) 0x5f0000U;
    v1 = (s32) 0x5f0000U;
    s0 = 0;
    (*(volatile u32 *) (u32) (v0 + 16776)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + 16772)) = (u32) 0;
    v0 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v1 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x60a0U);
    v0 = (s32) 0x5f0000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) (v0 + 16780));
    v0 = (*(volatile s32 *) (u32) v1);
    if (v0 == 0) goto L_00342FF8;
    { u32 t_ = (u32) v0; ; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
L_00342FF8:;
    v1 = (s32) 0x5f0000U;
    v0 = (s32) 0x5f0000U;
    (*(volatile u32 *) (u32) (v1 + 16772)) = (u32) s0;
    v1 = (s32) ((u32) s0 << 2);
    (*(volatile u32 *) (u32) (v0 + 16776)) = (u32) 0;
    v1 = (s32) ((u32) v1 + (u32) s0);
    v0 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0x60a4U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    if (v0 == 0) goto L_0034307C;
    { u32 t_ = (u32) v0; ; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    v1 = 1;
    if (v0 != v1) goto L_0034307C;
    v0 = (s32) 0x5f0000U;
    v1 = (s32) 0x3e0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 16772));
    v1 = (s32) ((u32) v1 + 0x60a8U);
    v0 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    if (v0 == 0) goto L_00343074;
    { u32 t_ = (u32) v0; ; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
L_00343074:;
    v0 = (s32) 0x5f0000U;
    (*(volatile u32 *) (u32) (v0 + 16772)) = (u32) 0;
L_0034307C:;
    v0 = (s32) 0x5f0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 16784));
    if (a0 == 0) goto L_0034309C;
    v0 = func_001B4D20(a0, a1, a2, a3);
    v0 = (s32) 0x5f0000U;
    (*(volatile u32 *) (u32) (v0 + 16784)) = (u32) 0;
L_0034309C:;
    v0 = func_0035A690(a0, a1, a2, a3);
    v0 = func_002CADF0(a0);
    return v0;
}
