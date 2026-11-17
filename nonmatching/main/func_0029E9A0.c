/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001AFD70(s32);
s32 func_00207360(s32);
s32 func_0027A770(void);
s32 func_002B8690(s32, s32, s32, s32);

s32 func_0029E9A0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, s0 = 0, s1 = 0;

    v0 = (s32) 0x5e0000U;
    s1 = 0;
    (*(volatile u32 *) (u32) (v0 + 7456)) = (u32) 0;
    s0 = (s32) 0x590000U;
    v0 = (s32) 0x5e0000U;
    s0 = (s32) ((u32) s0 + 0xffffe5b0U);
    (*(volatile u8 *) (u32) (v0 + 8496)) = (u8) 0;
    v0 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v0 + 8497)) = (u8) 0;
    v0 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v0 + 8498)) = (u8) 0;
    v0 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v0 + 8499)) = (u8) 0;
    v0 = (s32) 0x5e0000U;
    (*(volatile u32 *) (u32) (v0 + 8608)) = (u32) 0;
    v0 = (s32) 0x5e0000U;
    (*(volatile u32 *) (u32) (v0 + 8712)) = (u32) 0;
    v0 = (s32) 0x5e0000U;
    (*(volatile u32 *) (u32) (v0 + 6624)) = (u32) 0;
L_0029E9FC:;
    a0 = (*(volatile s32 *) (u32) (s0 + 4)); v0 = func_00207360(a0);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001AFD70(a0);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 23;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x240U); if (c_) goto L_0029E9FC; }
    v0 = func_002B8690(a0, a1, a2, a3);
    v0 = func_0027A770();
    return v0;
}
