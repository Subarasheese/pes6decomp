/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002211E0(void);
void func_008B2F30(s32, s32, s32, s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

void func_0093EA70(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    v0 = 32;
    v1 = (s32) ((u32) sp + 0x10U);
    if (v1 == 0) goto L_0093EAA0;
L_0093EA84:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_0093EA84;
L_0093EAA0:;
    v0 = func_002211E0();
    a2 = (*(volatile s32 *) (u32) (v0 + 64));
    a1 = (s32) 0x960000U;
    a0 = (s32) ((u32) sp + 0x10U);
    a1 = (s32) ((u32) a1 + 0x6780U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x540000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -15596));
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = (s32) ((u32) sp + 0x10U); func_008B2F30(a0, a1, a2, a3);
    return;
}
