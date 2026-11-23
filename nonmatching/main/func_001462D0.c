/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void memset(s64, s64, s64);

void func_001462D0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;

    a0 = (s32) 0x500000U;
    v0 = (s32) 0x510000U;
    a0 = (s32) ((u32) a0 + 0x7a90U);
    s0 = (*(volatile u8 *) (u32) (v0 + -28568));
    a1 = 0;
    a2 = 5600; memset(a0, a1, a2);
    if (s0 != 0) goto L_00146304;
    s0 = (s64) ((u64) 0 + (u64) (s64) 232);
L_00146304:;
    a0 = s0 & 0xff;
    v1 = (s32) 0x510000U;
    (*(volatile u32 *) (u32) (v1 + -28568)) = (u32) a0;
    a5 = (s32) 0x500000U;
    a5 = (s32) ((u32) a5 + 0x7a90U);
    a0 = (s32) 0xf0000U;
    a7 = 0;
    a6 = 0;
    v1 = (s32) 0x510000U;
    a4 = a5;
    a2 = a0 | 0x800;
L_00146330:;
    a1 = (s32) ((u32) a6 + 0xffffffe8U);
    a0 = (s32) ((u32) a6 + 0x18U);
    a3 = (s32) ((u32) a4 + (u32) a1);
    a1 = (s32) ((u32) a4 + (u32) a0);
    (*(volatile u32 *) (u32) a5) = (u32) a3;
    a0 = (s32) ((u32) a7 + 0xffffffffU);
    (*(volatile u32 *) (u32) (a5 + 4)) = (u32) a1;
    a0 = (s32) ((u32) a0 << 8);
    a1 = (s32) ((u32) a0 + (u32) a2);
    { s32 c_ = a1 >= 0; a0 = (s32) a1 >> 6; if (c_) goto L_00146364; }
    a0 = (s32) ((u32) a1 + 0x3fU);
    a0 = (s32) a0 >> 6;
L_00146364:;
    (*(volatile u16 *) (u32) (a5 + 12)) = (u16) a0;
    a7 = (s32) ((u32) a7 + 0x1U);
    a0 = (*(volatile s32 *) (u32) (v1 + -28568));
    a6 = (s32) ((u32) a6 + 0x18U);
    at = (u64) a0 < (u64) a7;
    { s32 c_ = at == 0; a5 = (s32) ((u32) a5 + 0x18U); if (c_) goto L_00146330; }
    v1 = (s32) ((u32) a0 << 1);
    a2 = (s32) 0x500000U;
    a0 = (s32) ((u32) v1 + (u32) a0);
    a2 = (s32) ((u32) a2 + 0x7a90U);
    a1 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x500000U;
    a0 = (s32) 0x500000U;
    a0 = (s32) ((u32) a0 + 0x7a94U);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a1 = (s32) ((u32) a2 + (u32) a1);
    (*(volatile u32 *) (u32) (v1 + 31376)) = (u32) a1;
    (*(volatile u32 *) (u32) a0) = (u32) a2;
    return;
}
