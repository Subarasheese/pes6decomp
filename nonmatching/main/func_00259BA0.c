/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0025FFF0(s32);

s32 func_00259BA0(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;
    s64 frame[4];
    s32 sp = (s32) (u32) frame;

    a0 = (s32) ((u32) sp + 0x1cU); func_0025FFF0(a0);
    v0 = (s32) 0x590000U;
    a0 = (*(volatile s16 *) (u32) (v0 + -12428));
    if (a0 < 0) goto L_00259BFC;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) (v0 + -12426));
    if (v1 < 0) goto L_00259BFC;
    v0 = (*(volatile s16 *) (u32) (sp + 28));
    at = a0 < v0;
    if (at == 0) goto L_00259BFC;
    v0 = (*(volatile s16 *) (u32) (sp + 30));
    at = v1 < v0;
    if (at == 0) goto L_00259BFC;
    v0 = 1;
L_00259BF4:;
    goto L_00259C04;
L_00259BFC:;
    v0 = 0; goto L_00259BF4;
L_00259C04:;
    return v0;
}
