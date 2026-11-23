/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021E4B0(s32, s32, s32);
void func_00362160(s32, s32);
s32 func_00362410(s32);
void memset(s32, s32, s32);
void strncpy(s32, s32, s32);

void func_003624F0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, a3 = 0, s0 = 0, s1 = 0;

    s1 = a0;
    { s32 c_ = s1 == 0; s0 = a1; if (c_) goto L_00362564; }
    a1 = 0;
    a2 = 410; memset(a0, a1, a2);
    a0 = s0; v0 = func_00362410(a0);
    (*(volatile u16 *) (u32) s1) = (u16) v0;
    s0 = v0 & 0xffff;
    v0 = 0xffff;
    if (s0 == v0) { a0 = s0; goto L_0036255C; }
    a0 = s0;
    a1 = 0;
    a2 = 0;
    a3 = s0; v0 = func_0021E4B0(a0, a1, a2);
    a1 = v0;
    a0 = (s32) ((u32) s1 + 0x2U);
    a2 = 48; strncpy(a0, a1, a2);
    a0 = s0;
L_0036255C:;
    a1 = (s32) ((u32) s1 + 0x34U); func_00362160(a0, a1);
L_00362564:;
    return;
}
