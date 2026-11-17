/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0030D990(s32);
s32 func_00310400(s32, s32, s32, s32);
void func_003119B0(s32, s32);
s32 func_003258F0(s32, s32);

s32 func_0031BD50(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s0 = a1 & 0xff;
    a1 = s0; v0 = func_003258F0(a0, a1);
    v1 = 53;
    if (v0 == v1) { a1 = s0; goto L_0031BD84; }
    v0 = 0; goto L_0031BE08;
L_0031BD84:;
    a0 = (s32) ((u32) sp + 0x4fU); func_003119B0(a0, a1);
    s0 = 0;
    s1 = 0;
    s2 = 0;
L_0031BD98:;
    a0 = (*(volatile u8 *) (u32) (sp + 79)); v0 = func_0030D990(a0);
    v1 = 1;
    if (v0 != v1) goto L_0031BDD0;
    a0 = (*(volatile u8 *) (u32) (sp + 79));
    s2 = (s32) ((u32) s2 + 0x1U); v0 = func_00310400(a0, a1, a2, a3);
    v1 = v0 & 0xffff;
    v0 = 1222;
    if (v1 != v0) goto L_0031BDD0;
    s0 = 1;
L_0031BDD0:;
    v1 = (*(volatile u8 *) (u32) (sp + 79));
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 11;
    v1 = (s32) ((u32) v1 + 0x1U);
    { s32 c_ = v0 != 0; (*(volatile u8 *) (u32) (sp + 79)) = (u8) v1; if (c_) goto L_0031BD98; }
    v0 = 3;
    if (s2 == v0) { v0 = 1; goto L_0031BE08; }
    if (s0 != 0) goto L_0031BE04;
    v0 = 0; goto L_0031BE08;
L_0031BE04:;
    v0 = 1;
L_0031BE08:;
    return v0;
}
