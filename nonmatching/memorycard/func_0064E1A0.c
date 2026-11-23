/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00622950(s32, s32, s32);
void func_00637E10(void);

void func_0064E1A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x660000U;
    s1 = (*(volatile s32 *) (u32) (v0 + -4248));
    s0 = (s32) ((u32) s1 + 0x140cU); func_00637E10();
    v0 = (s32) ((u32) s0 + 0x1130U);
    at = (s32) 0x90000U;
    (*(volatile u32 *) (u32) (sp + 68)) = (u32) v0;
    at = at | 0xf60c;
    v0 = (s32) ((u32) s0 + 0x23b8U);
    a0 = s1;
    (*(volatile u32 *) (u32) (sp + 72)) = (u32) v0;
    a1 = 4844;
    v0 = (s32) ((u32) s0 + 0x7ce4U);
    a2 = 0;
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) v0;
    v0 = (s32) ((u32) s0 + (u32) at);
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) s0;
    at = (s32) 0xb0000U;
    (*(volatile u32 *) (u32) (sp + 80)) = (u32) v0;
    at = at | 0x6358;
    v0 = (s32) ((u32) s0 + (u32) at);
    at = (s32) 0xb0000U;
    (*(volatile u32 *) (u32) (sp + 84)) = (u32) v0;
    at = at | 0x9384;
    v0 = (s32) ((u32) s0 + (u32) at);
    at = (s32) 0xd0000U;
    (*(volatile u32 *) (u32) (sp + 88)) = (u32) v0;
    at = at | 0xd310;
    v0 = (s32) ((u32) s0 + (u32) at);
    at = (s32) 0x110000U;
    (*(volatile u32 *) (u32) (sp + 92)) = (u32) v0;
    at = at | 0xdc4c;
    v0 = (s32) ((u32) s1 + (u32) at);
    (*(volatile u32 *) (u32) (sp + 96)) = (u32) v0; func_00622950(a0, a1, a2);
    s2 = 0;
    s1 = (s32) ((u32) sp + 0x40U);
L_0064E248:;
    v0 = s2 < 9;
    { s32 c_ = v0 != 0; v1 = s2; if (c_) goto L_0064E258; }
    v1 = 0;
L_0064E258:;
    v0 = (s32) 0x660000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffba80U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = (*(volatile s32 *) (u32) v0);
    a2 = 0; func_00622950(a0, a1, a2);
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = (u64) s2 < (u64) (s64) 9;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_0064E248; }
    a2 = (s32) ((u32) s0 + 0x500U);
    a5 = 0;
L_0064E290:;
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    a4 = (s32) ((u32) a2 + 0x4U);
    a3 = 0;
L_0064E2A0:;
    a1 = (*(volatile u8 *) (u32) a4);
    a0 = (*(volatile s32 *) (u32) a2);
    a3 = (s32) ((u32) a3 + 0x1U);
    v1 = (u64) a3 < (u64) (s64) 152;
    a4 = (s32) ((u32) a4 + 0x1U);
    a0 = (s32) ((u32) a0 + (u32) a1);
    { s32 c_ = v1 != 0; (*(volatile u32 *) (u32) a2) = (u32) a0; if (c_) goto L_0064E2A0; }
    a5 = (s32) ((u32) a5 + 0x1U);
    v1 = a5 < 20;
    { s32 c_ = v1 != 0; a2 = (s32) ((u32) a2 + 0x9cU); if (c_) goto L_0064E290; }
    return;
}
