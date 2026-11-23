/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001EDC80(s32, s32);
void func_001EEE60(s32, s32);
s32 func_0020D080(s32, s32);
void func_0020E310(s32, s32);
s32 func_002D5410(void);
s32 func_002F9320(s32, s32);
s32 func_002F9370(s32);
s32 func_002F96F0(s32, s32);
void func_002FA170(s32, s32, s32, s32, s32, s32);

void func_00C6E580(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s4 = a1;
    s3 = a2;
    s2 = a3;
    v0 = func_002D5410();
    if (v0 != 0) { v1 = 10; goto L_00C6E5C0; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7121));
    v1 = 10;
L_00C6E5C0:;
    if (v0 == v1) { a0 = 0; goto L_00C6E628; }
    v1 = 2;
    if (v0 == v1) goto L_00C6E624;
    v1 = 9;
    if (v0 == v1) goto L_00C6E624;
    v1 = 8;
    if (v0 == v1) goto L_00C6E624;
    v1 = 4;
    if (v0 == v1) goto L_00C6E624;
    v1 = 3;
    if (v0 == v1) goto L_00C6E624;
    a0 = 1;
    if (v0 == a0) goto L_00C6E624;
    v1 = 12;
    if (v0 == v1) goto L_00C6E624;
    a1 = (s32) ((u32) sp + 0x6cU); goto L_00C6E638;
L_00C6E624:;
    a0 = 0;
L_00C6E628:;
    a1 = (s32) ((u32) sp + 0x6cU); func_0020E310(a0, a1);
    goto L_00C6E640;
L_00C6E638:;
    func_0020E310(a0, a1);
L_00C6E640:;
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -17472)); v0 = func_002F9370(a0);
    s1 = v0;
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -17472));
    a1 = 0; v0 = func_002F9320(a0, a1);
    a0 = v0;
    a1 = 0; v0 = func_002F96F0(a0, a1);
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -17452));
    v0 = (s32) 0xcd0000U;
    a1 = (*(volatile s32 *) (u32) (v0 + -17448)); v0 = func_0020D080(a0, a1);
    a1 = s4;
    a0 = s0;
    s4 = v0; v0 = func_001EDC80(a0, a1);
    s0 = v0;
    a0 = 1;
    a1 = (s32) ((u32) sp + 0x68U); func_0020E310(a0, a1);
    a1 = s4;
    a2 = s1;
    a3 = s3;
    a4 = s2;
    a0 = s0;
    a5 = 0; func_002FA170(a0, a1, a2, a3, a4, a5);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x68U); func_001EEE60(a0, a1);
    return;
}
