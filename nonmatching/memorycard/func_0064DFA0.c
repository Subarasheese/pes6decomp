/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00622A20(s32);
s32 func_006231C0(s32);
void func_006376F0(void);
void func_00637BB0(void);

s32 func_0064DFA0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x660000U;
    s1 = (*(volatile s32 *) (u32) (v0 + -4248));
    { s32 c_ = a0 != 0; s2 = 0; if (c_) goto L_0064E134; }
    at = (s32) 0x110000U;
    s0 = (s32) ((u32) s1 + 0x140cU);
    at = at | 0xdc4c;
    s3 = 0;
    v0 = (s32) ((u32) s1 + (u32) at);
    (*(volatile u32 *) (u32) (sp + 112)) = (u32) s0;
    (*(volatile u32 *) (u32) (sp + 144)) = (u32) v0;
    at = (s32) 0x90000U;
    v0 = (s32) ((u32) s0 + 0x1130U);
    at = at | 0xf60c;
    (*(volatile u32 *) (u32) (sp + 116)) = (u32) v0;
    s4 = 0;
    v0 = (s32) ((u32) s0 + 0x23b8U);
    s5 = 0;
    (*(volatile u32 *) (u32) (sp + 120)) = (u32) v0;
    s1 = (s32) ((u32) sp + 0x70U);
    v0 = (s32) ((u32) s0 + 0x7ce4U);
    (*(volatile u32 *) (u32) (sp + 124)) = (u32) v0;
    v0 = (s32) ((u32) s0 + (u32) at);
    at = (s32) 0xb0000U;
    (*(volatile u32 *) (u32) (sp + 128)) = (u32) v0;
    at = at | 0x6358;
    v0 = (s32) ((u32) s0 + (u32) at);
    at = (s32) 0xb0000U;
    (*(volatile u32 *) (u32) (sp + 132)) = (u32) v0;
    at = at | 0x9384;
    v0 = (s32) ((u32) s0 + (u32) at);
    at = (s32) 0xd0000U;
    (*(volatile u32 *) (u32) (sp + 136)) = (u32) v0;
    at = at | 0xd310;
    v0 = (s32) ((u32) s0 + (u32) at);
    (*(volatile u32 *) (u32) (sp + 140)) = (u32) v0;
L_0064E050:;
    a0 = (*(volatile s32 *) (u32) s1); v0 = func_00622A20(a0);
    v1 = 1;
    if (v0 != v1) goto L_0064E070;
    v0 = (s32) ((u32) v1 << (s5 & 31));
    s3 = s3 | v0;
L_0064E070:;
    v1 = 1;
    v0 = (s32) ((u32) v1 << (s5 & 31));
    s4 = s4 | v0;
    s5 = (s32) ((u32) s5 + 0x1U);
    v0 = (u64) s5 < (u64) (s64) 9;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_0064E050; }
    if (s4 != s3) { a0 = (s32) ((u32) s0 + 0x500U); goto L_0064E09C; }
    s2 = v1;
    a0 = (s32) ((u32) s0 + 0x500U);
L_0064E09C:;
    a4 = 0;
L_0064E0A0:;
    a3 = 0;
    a2 = (s32) ((u32) a0 + 0x4U);
    a1 = 0;
L_0064E0B0:;
    v1 = (*(volatile u8 *) (u32) a2);
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = (u64) a1 < (u64) (s64) 152;
    a3 = (s32) ((u32) a3 + (u32) v1);
    a2 = (s32) ((u32) a2 + 0x1U);
    if (v0 != 0) goto L_0064E0B0;
    v0 = (*(volatile s32 *) (u32) a0);
    if (v0 == a3) { a4 = (s32) ((u32) a4 + 0x1U); goto L_0064E0E0; }
    v0 = 0; goto L_0064E0F0;
L_0064E0E0:;
    v0 = a4 < 20;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x9cU); if (c_) goto L_0064E0A0; }
    v0 = 1;
L_0064E0F0:;
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (sp + 112)); goto L_0064E100; }
    s2 = 0;
    v0 = (*(volatile s32 *) (u32) (sp + 112));
L_0064E100:;
    a0 = (*(volatile u8 *) (u32) (v0 + 10));
    s0 = (*(volatile u8 *) (u32) (v0 + 9)); v0 = func_006231C0(a0);
    v0 = v0 & 0xff;
    if (s0 == v0) goto L_0064E11C;
    s2 = 0;
L_0064E11C:;
    if (s2 == 0) { v0 = s2; goto L_0064E178; }
    func_00637BB0();
    goto L_0064E174;
L_0064E134:;
    a0 = (s32) ((u32) s1 + 0xcU); v0 = func_00622A20(a0);
    if (v0 == 0) { a0 = (*(volatile u8 *) (u32) (s1 + 22)); goto L_0064E14C; }
    s2 = 1;
    a0 = (*(volatile u8 *) (u32) (s1 + 22));
L_0064E14C:;
    s0 = (*(volatile u8 *) (u32) (s1 + 21)); v0 = func_006231C0(a0);
    v0 = v0 & 0xff;
    if (s0 == v0) goto L_0064E164;
    s2 = 0;
L_0064E164:;
    if (s2 == 0) goto L_0064E174;
    func_006376F0();
L_0064E174:;
    v0 = s2;
L_0064E178:;
    return v0;
}
