/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0025F830(s32);

void func_00257FC0(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -12512));
    s0 = a0;
    a0 = 1;
    if (v1 != a0) goto L_00258040;
    v1 = (s32) 0x590000U;
    s1 = s0 & 0xff;
    v1 = (*(volatile u8 *) (u32) (v1 + -12483));
    if (v1 != s1) goto L_00258004;
    goto L_00258044;
L_00258004:;
    a0 = (s32) ((u32) sp + 0x3cU); func_0025F830(a0);
    a1 = (*(volatile u8 *) (u32) (sp + 61));
    at = a1 < s1;
    if (at != 0) goto L_0025802C;
    v1 = (*(volatile u8 *) (u32) (sp + 60));
    at = s1 < v1;
    if (at == 0) v1 = s0;
    a1 = v1 & 0xff;
L_0025802C:;
    v1 = (s32) 0x590000U;
    a0 = 2;
    (*(volatile u8 *) (u32) (v1 + -12482)) = (u8) a1;
    v1 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v1 + -12512)) = (u32) a0;
L_00258040:;
L_00258044:;
    return;
}
