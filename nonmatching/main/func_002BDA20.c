/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002BC690(s32, s32, s32, s32);
void func_00C102E0(s32, s32, s32, s32);
void func_00C10BF0(s32, s32, s32, s32);
void func_00C12760(s32, s32, s32, s32);
void func_00C13A20(s32, s32, s32, s32);
void func_00C13ED0(s32, s32, s32, s32);
void func_00C150D0(s32, s32, s32, s32);
void func_00C16890(s32, s32, s32, s32);
void func_00C16E80(s32, s32, s32, s32);
void func_00C17080(s32, s32, s32, s32);
void func_00C17160(s32, s32, s32, s32);
void func_00C17340(s32, s32, s32, s32);
void func_00C18240(s32, s32, s32, s32);
void func_00C18610(s32, s32, s32, s32);
void func_00C18760(s32, s32, s32, s32);
void func_00C18A80(s32, s32, s32, s32);
void func_00C18F50(s32, s32, s32, s32);
void func_00C224D0(s32, s32, s32, s32);
void func_00C32C80(s32, s32, s32, s32);
void func_00C549C0(s32, s32, s32, s32);
void func_00C5A0C0(s32, s32, s32, s32);
void func_00C5A170(s32, s32, s32, s32);
void func_00C5A7B0(s32, s32, s32, s32);
void memset(s32, s32, s32);

void func_002BDA20(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v1 = (*(volatile s32 *) (u32) (gp + -22052));
    { s32 c_ = v1 == 0; s0 = a0; if (c_) goto L_002BDA44; }
L_002BDA3C:;
    goto L_002BDB58;
L_002BDA44:;
    a0 = (s32) ((u32) gp + 0xffffa9d8U);
    a1 = 0;
    (*(volatile u32 *) (u32) (gp + -22052)) = (u32) a0;
    a2 = 4; memset(a0, a1, a2);
    func_00C18F50(a0, a1, a2, a3);
    func_00C102E0(a0, a1, a2, a3);
    func_00C18A80(a0, a1, a2, a3);
    func_00C18240(a0, a1, a2, a3);
    func_00C17340(a0, a1, a2, a3);
    func_00C16890(a0, a1, a2, a3);
    func_00C18610(a0, a1, a2, a3);
    func_00C13ED0(a0, a1, a2, a3);
    func_00C150D0(a0, a1, a2, a3);
    func_00C13A20(a0, a1, a2, a3);
    func_00C12760(a0, a1, a2, a3);
    func_00C549C0(a0, a1, a2, a3);
    func_00C10BF0(a0, a1, a2, a3);
    func_00C224D0(a0, a1, a2, a3);
    func_00C32C80(a0, a1, a2, a3);
    func_00C5A7B0(a0, a1, a2, a3);
    func_00C5A0C0(a0, a1, a2, a3);
    a0 = s0; func_002BC690(a0, a1, a2, a3);
    a0 = 0; func_00C18760(a0, a1, a2, a3);
    s1 = (s32) ((u32) sp + 0x31U);
    a1 = 0;
    a0 = s1;
    (*(volatile u8 *) (u32) (sp + 48)) = (u8) 0; func_00C17080(a0, a1, a2, a3);
    s0 = (s32) ((u32) sp + 0x3cU);
    a1 = 0;
    a0 = s0; func_00C16E80(a0, a1, a2, a3);
    a0 = 1;
    a1 = (s32) ((u32) sp + 0x30U); func_00C17160(a0, a1, a2, a3);
    a1 = 1;
    a0 = s1;
    (*(volatile u8 *) (u32) (sp + 48)) = (u8) a1; func_00C17080(a0, a1, a2, a3);
    a0 = s0;
    a1 = 1; func_00C16E80(a0, a1, a2, a3);
    a0 = 1;
    a1 = (s32) ((u32) sp + 0x30U); func_00C17160(a0, a1, a2, a3);
    func_00C5A170(a0, a1, a2, a3);
    goto L_002BDA3C;
L_002BDB58:;
    return;
}
