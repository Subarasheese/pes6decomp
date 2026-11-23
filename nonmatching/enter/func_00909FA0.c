/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F87E0(s32, s32);
s32 func_002FA990(void);
void func_002FA9A0(s32);
void func_002FA9B0(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_00909FA0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0;

    v0 = (s32) 0x930000U;
    v1 = (*(volatile s8 *) (u32) (v0 + -3860));
    v0 = 1;
    if (v1 == v0) goto L_00909FF0;
    if (a1 >= 0) { a1 = a1 & 0xff; goto L_00909FCC; }
    a1 = 32;
    a1 = a1 & 0xff;
L_00909FCC:;
    a0 = 0; v0 = func_001F87E0(a0, a1);
    if (v0 == 0) { v0 = 0; goto L_0090A038; }
    v1 = -1;
    v0 = (s32) 0x930000U;
    (*(volatile u8 *) (u32) (v0 + -3860)) = (u8) v1;
    v0 = 1; goto L_0090A038;
L_00909FF0:;
    if (a1 >= 0) { a0 = a1; goto L_0090A000; }
    a1 = 31;
    a0 = a1;
L_0090A000:;
    func_002FA9A0(a0);
    v0 = func_002FA990();
    if (v0 == 0) goto L_0090A034;
    func_002FA9B0(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = -1;
    v0 = (s32) 0x930000U;
    (*(volatile u8 *) (u32) (v0 + -3860)) = (u8) v1;
    v0 = 1; goto L_0090A038;
L_0090A034:;
    v0 = 0;
L_0090A038:;
    return v0;
}
