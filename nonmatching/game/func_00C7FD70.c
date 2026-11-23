/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0020E310(s32, s32);
s32 func_002D5410(void);
void func_00C7FE60(s32, s32, s32, s32, s32);

void func_00C7FD70(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s2 = a1;
    s1 = a2;
    s0 = a3; v0 = func_002D5410();
    if (v0 != 0) { v1 = 10; goto L_00C7FDA8; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7121));
    v1 = 10;
L_00C7FDA8:;
    if (v0 == v1) { a0 = 0; goto L_00C7FE10; }
    v1 = 2;
    if (v0 == v1) goto L_00C7FE0C;
    v1 = 9;
    if (v0 == v1) goto L_00C7FE0C;
    v1 = 8;
    if (v0 == v1) goto L_00C7FE0C;
    v1 = 4;
    if (v0 == v1) goto L_00C7FE0C;
    v1 = 3;
    if (v0 == v1) goto L_00C7FE0C;
    a0 = 1;
    if (v0 == a0) goto L_00C7FE0C;
    v1 = 12;
    if (v0 == v1) goto L_00C7FE0C;
    a1 = (s32) ((u32) sp + 0x4cU); goto L_00C7FE20;
L_00C7FE0C:;
    a0 = 0;
L_00C7FE10:;
    a1 = (s32) ((u32) sp + 0x4cU); func_0020E310(a0, a1);
    a0 = s2; goto L_00C7FE2C;
L_00C7FE20:;
    func_0020E310(a0, a1);
    a0 = s2;
L_00C7FE2C:;
    a1 = s1;
    a2 = s0;
    a3 = 0;
    a4 = (s32) ((u32) sp + 0x4cU); func_00C7FE60(a0, a1, a2, a3, a4);
    return;
}
