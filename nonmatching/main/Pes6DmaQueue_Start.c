/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00102228(s32, s32, s32, s32, s32, s32, s32, s32);

s32 Pes6DmaQueue_Start(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s0 = (*(volatile s32 *) (u32) a0);
    { s32 c_ = s0 == 0; s1 = a0; if (c_) goto L_00145368; }
L_0014521C:;
    v1 = (*(volatile u8 *) (u32) (s0 + 4));
    at = (u64) v1 < (u64) (s64) 7;
    if (at == 0) goto L_00145330;
    a0 = (s32) 0x3c0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0x69b0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x145248U) goto L_00145248; if (t_ == 0x145298U) goto L_00145298; if (t_ == 0x1452a0U) goto L_001452A0; if (t_ == 0x1452e8U) goto L_001452E8; if (t_ == 0x1452fcU) goto L_001452FC; if (t_ == 0x145318U) goto L_00145318; if (t_ == 0x145330U) goto L_00145330; }
L_00145248:;
    a2 = (*(volatile u8 *) (u32) (s0 + 5));
    a0 = (s32) 0x500000U;
    v1 = (*(volatile u8 *) (u32) (s0 + 6));
    a0 = (s32) ((u32) a0 + 0xf80U);
    v0 = -65;
    a1 = (s32) ((u32) a2 << 1);
    a1 = (s32) ((u32) a1 + (u32) a2);
    v1 = v1 & 0x1;
    a1 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 << 6);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile s32 *) (u32) (a0 + 8200));
    a1 = (*(volatile u8 *) (u32) a0);
    v0 = a1 & v0;
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) a0) = (u8) v0;
    a1 = (*(volatile s32 *) (u32) (s0 + 8)); v0 = func_00102228(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_00145368;
L_00145298:;
    goto L_00145368;
L_001452A0:;
    a2 = (*(volatile s32 *) (u32) (s0 + 8));
    v1 = (s32) 0x500000U;
    v1 = (s32) ((u32) v1 + 0xf80U);
    a1 = (*(volatile u8 *) (u32) (a2 + 5));
    a0 = (s32) ((u32) a1 << 1);
    (*(volatile u32 *) (u32) (a2 + 8)) = (u32) 0;
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (s32) ((u32) v1 + 0x2000U);
    v1 = (*(volatile s32 *) (u32) (v1 + 8192));
    if (a2 != v1) goto L_00145330;
    v0 = Pes6DmaQueue_Start(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_00145330;
L_001452E8:;
    v1 = (*(volatile s32 *) (u32) (s0 + 8));
    if (v1 == 0) goto L_00145330;
    goto L_00145368;
L_001452FC:;
    v1 = (*(volatile s32 *) (u32) (s0 + 8));
    if (v1 == 0) goto L_00145330;
    { u32 t_ = (u32) v1; a0 = (*(volatile s32 *) (u32) (s0 + 12)); v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    goto L_00145330;
L_00145318:;
    v1 = (*(volatile s32 *) (u32) (s0 + 8));
    if (v1 == 0) goto L_00145330;
    { u32 t_ = (u32) v1; a0 = (*(volatile s32 *) (u32) (s0 + 12)); v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
L_00145330:;
    v1 = (*(volatile s32 *) (u32) s0);
    (*(volatile u32 *) (u32) s1) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) s1);
    if (v1 == 0) { (*(volatile u32 *) (u32) (s1 + 4)) = (u32) 0; goto L_00145348; }
L_00145348:;
    v1 = (s32) 0x500000U;
    a0 = (*(volatile s32 *) (u32) (v1 + 12328));
    v1 = (s32) 0x500000U;
    (*(volatile u32 *) (u32) s0) = (u32) a0;
    (*(volatile u32 *) (u32) (v1 + 12328)) = (u32) s0;
    s0 = (*(volatile s32 *) (u32) s1);
    if (s0 != 0) goto L_0014521C;
L_00145368:;
    return v0;
}
