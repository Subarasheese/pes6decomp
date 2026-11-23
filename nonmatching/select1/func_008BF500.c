/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001B6A30(s32, s32, s32, s32);
s32 func_001BE550(s32, s32);
void func_0023B040(s32, s32, s32, s32);
void func_0023EA10(s32, s32, s32, s32);
s32 func_0023F330(void);
void func_008BF250(void);
void func_008C0470(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_0093D740(s32, s32, s32, s32);

s32 func_008BF500(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    a0 = 0;
    s0 = (s32) 0x540000U;
    s0 = (s32) ((u32) s0 + 0xffffc300U); func_0023EA10(a0, a1, a2, a3);
    v0 = (s32) 0x510000U;
    v1 = 4;
    v0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (v0 != v1) goto L_008BF584;
    v1 = (*(volatile s8 *) (u32) (s0 + 9));
    v0 = 2;
    if (v1 != v0) goto L_008BF564;
    v0 = func_0023F330();
    a0 = 0;
    a1 = v0; v0 = func_001BE550(a0, a1);
    if (v0 != 0) goto L_008BF59C;
    v0 = 0; goto L_008BF5CC;
L_008BF564:;
    v0 = func_0023F330();
    a0 = v0; v0 = func_001B6A30(a0, a1, a2, a3);
    if (v0 != 0) goto L_008BF59C;
    v0 = 0; goto L_008BF5CC;
L_008BF584:;
    v0 = func_0093D740(a0, a1, a2, a3);
    if (v0 != 0) goto L_008BF59C;
    v0 = 0; goto L_008BF5CC;
L_008BF59C:;
    a0 = (s32) 0x8e0000U;
    a0 = (s32) ((u32) a0 + 0x49b0U); func_008C0470(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (*(volatile s8 *) (u32) (s0 + 9));
    v0 = 2;
    if (v1 != v0) goto L_008BF5C0;
    func_008BF250();
L_008BF5C0:;
    func_0023B040(a0, a1, a2, a3);
    v0 = 1;
L_008BF5CC:;
    return v0;
}
