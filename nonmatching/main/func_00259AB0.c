/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0025F8F0(s32, s32);

s32 func_00259AB0(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0;
    s64 frame[4];
    s32 sp = (s32) (u32) frame;

    a0 = (s32) ((u32) sp + 0x1cU);
    a1 = (s32) ((u32) sp + 0x18U); func_0025F8F0(a0, a1);
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) (sp + 28));
    a1 = (*(volatile s16 *) (u32) (v0 + -12428));
    v0 = a1 < v1;
    if (v0 != 0) goto L_00259B20;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) (sp + 30));
    a0 = (*(volatile s16 *) (u32) (v0 + -12426));
    v0 = a0 < v1;
    if (v0 != 0) goto L_00259B20;
    v0 = (*(volatile s16 *) (u32) (sp + 24));
    at = v0 < a1;
    if (at != 0) goto L_00259B20;
    v0 = (*(volatile s16 *) (u32) (sp + 26));
    at = v0 < a0;
    if (at != 0) goto L_00259B20;
    v0 = 1;
L_00259B18:;
    goto L_00259B28;
L_00259B20:;
    v0 = 0; goto L_00259B18;
L_00259B28:;
    return v0;
}
