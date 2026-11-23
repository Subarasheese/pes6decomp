/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B9250(s32, s32, s32, s32);
void func_001BAD60(void);
s32 func_001BB6F0(s32);

void func_001BA4A0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    s3 = a0;
    if (s3 == 0) goto L_001BA524;
    func_001BAD60();
    s0 = (*(volatile s32 *) (u32) (s3 + 12));
    s1 = (*(volatile s32 *) (u32) (s3 + 8));
    { s32 c_ = s0 <= 0; s2 = 0; if (c_) goto L_001BA520; }
L_001BA4DC:;
    v1 = (*(volatile s16 *) (u32) s1);
    v0 = (*(volatile s32 *) (u32) (s3 + 4));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s4 = (*(volatile s32 *) (u32) v0);
    a0 = s4; v0 = func_001BB6F0(a0);
    if (v0 <= 0) goto L_001BA510;
    a1 = (s32) 0x1c0000U;
    a0 = s4;
    a1 = (s32) ((u32) a1 + 0xffffa670U); func_001B9250(a0, a1, a2, a3);
L_001BA510:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < s0;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x2U); if (c_) goto L_001BA4DC; }
L_001BA520:;
    (*(volatile u32 *) (u32) (s3 + 12)) = (u32) 0;
L_001BA524:;
    return;
}
