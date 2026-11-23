/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00105160(void);
s32 func_001064A0(s32, s32);
void memclr(s32, s32);

s32 func_0012AE10(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = a1;
    s2 = a2;
    s1 = a5;
    s0 = a3;
    a0 = (s32) ((u32) sp + 0x60U);
    a1 = 48; memclr(a0, a1);
    v0 = (s32) ((u32) gp + 0x0U);
    a0 = (s32) ((u32) sp + 0x60U);
    (*(volatile u32 *) (u32) (sp + 112)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 100)) = (u32) s4;
    (*(volatile u32 *) (u32) (sp + 104)) = (u32) s3;
    (*(volatile u32 *) (u32) (sp + 108)) = (u32) s2;
    (*(volatile u32 *) (u32) (sp + 116)) = (u32) s0; v0 = func_00105160();
    s0 = v0;
    a1 = s1;
    a0 = s0; v0 = func_001064A0(a0, a1);
    v0 = s0;
    return v0;
}
