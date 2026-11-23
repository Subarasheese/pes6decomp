/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001DFAD0(s32, s32, s32, s32, s32);
s32 func_001EB1D0(s32, s32, s32, s32);
s32 func_001EC0F0(void);
void func_001EC4C0(s32, s32, s32);
s32 func_001EC540(s32, s32, s32, s32);

s32 func_001DF940(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, s0 = 0;

    if (a2 == 0) goto L_001DF9A8;
    v0 = func_001DFAD0(a0, a1, a2, a3, a4);
    s0 = v0;
    if (s0 == 0) goto L_001DF9A0;
    v0 = func_001EC0F0();
    (*(volatile u8 *) (u32) (s0 + 119)) = (u8) v0; v0 = func_001EC540(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 88)) = (u32) v0;
    a2 = (s32) 0x1e0000U;
    a0 = (*(volatile s32 *) (u32) (s0 + 88));
    a1 = s0;
    a2 = (s32) ((u32) a2 + 0xffffea50U); func_001EC4C0(a0, a1, a2);
    a1 = (s32) 0x1e0000U;
    a0 = s0;
    a1 = (s32) ((u32) a1 + 0x1be0U); v0 = func_001EB1D0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 92)) = (u32) v0;
L_001DF9A0:;
    v0 = s0; goto L_001DF9AC;
L_001DF9A8:;
    v0 = 0;
L_001DF9AC:;
    return v0;
}
