/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00C4F240(s32, s32, s32, s32);
void func_00C4F9B0(s32, s32, s32, s32);
void func_00C4FF80(void);
void func_00C4FFA0(s32, s32);
void func_00C57BC0(s32, s32, s32, s32);
void func_00C57C90(s32, s32, s32, s32);
void func_00C590B0(s32, s32, s32, s32);

void func_00C221A0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v1 = -1;
    s2 = a0;
    s1 = a1;
    { s32 c_ = s1 == v1; s0 = a2; if (c_) goto L_00C22270; }
    if (s0 == v1) goto L_00C22270;
    func_00C4F240(a0, a1, a2, a3);
    a0 = s1;
    a1 = s0; func_00C4FFA0(a0, a1);
    s1 = (s32) ((u32) sp + 0x48U);
    s0 = (s32) ((u32) sp + 0x44U);
L_00C221EC:;
    a0 = (s32) ((u32) sp + 0x40U); func_00C4F9B0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) s1);
    at = (u64) v0 < (u64) (s64) 12;
    if (at == 0) goto L_00C22268;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x3750U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xc221ecU) goto L_00C221EC; if (t_ == 0xc22220U) goto L_00C22220; if (t_ == 0xc22238U) goto L_00C22238; if (t_ == 0xc22250U) goto L_00C22250; if (t_ == 0xc22268U) goto L_00C22268; }
L_00C22220:;
    a1 = (*(volatile s32 *) (u32) s0);
    a0 = s2; func_00C57C90(a0, a1, a2, a3);
    goto L_00C221EC;
L_00C22238:;
    a1 = (*(volatile s32 *) (u32) (sp + 64));
    a2 = (*(volatile s32 *) (u32) s0);
    a0 = s2; func_00C590B0(a0, a1, a2, a3);
    goto L_00C221EC;
L_00C22250:;
    a1 = (*(volatile s32 *) (u32) (sp + 64));
    a2 = (*(volatile s32 *) (u32) s0);
    a0 = s2; func_00C57BC0(a0, a1, a2, a3);
    goto L_00C221EC;
L_00C22268:;
    func_00C4FF80();
L_00C22270:;
    return;
}
