/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);
void func_00882D20(s32, s32, s32, s32);
s32 func_00882E20(s32, s32, s32, s32);
void memset(s32, s32, s32);

s32 func_00362850(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    v0 = (s32) 0x620000U;
    v1 = 2;
    s1 = (*(volatile s32 *) (u32) (v0 + -5088));
    { s32 c_ = s1 == v1; s2 = 0; if (c_) goto L_00362940; }
    v0 = 1;
    if (s1 == v0) goto L_003628E0;
    if (s1 == 0) goto L_00362898;
    s2 = v0; goto L_003629AC;
L_00362898:;
    v0 = (s32) 0x620000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5076));
    if (v0 == 0) { s2 = 1; goto L_003629AC; }
    v0 = (s32) 0x620000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5072));
    if (v0 == 0) goto L_003628D4;
    v1 = (s32) 0x620000U;
    v0 = (s32) 0x620000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -5080));
    v0 = (*(volatile s32 *) (u32) (v0 + -5084));
    v0 = v1 < v0;
    if (v0 != 0) { s1 = (s32) ((u32) s1 + 0x1U); goto L_003628E0; }
L_003628D4:;
    s2 = 1;
    goto L_003629AC;
L_003628E0:;
    v0 = (s32) 0x620000U;
    a0 = (s32) 0x620000U;
    a3 = (*(volatile s32 *) (u32) (v0 + -5080));
    v1 = (s32) 0x620000U;
    a0 = (s32) ((u32) a0 + 0xffffec38U);
    a1 = 0;
    v0 = (s32) 0x620000U;
    a4 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) (v0 + -5076));
    a3 = (s32) ((u32) a3 << 2);
    (*(volatile u32 *) (u32) (v1 + -5080)) = (u32) a4;
    v0 = (s32) ((u32) v0 + (u32) a3);
    s0 = (*(volatile s32 *) (u32) v0);
    a2 = 12; memset(a0, a1, a2);
    a0 = s0; v0 = func_001F08B0(a0);
    if (v0 != 0) goto L_00362934;
    v0 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 + 0x6ec8U);
L_00362934:;
    v1 = (s32) 0x620000U;
    s1 = (s32) ((u32) s1 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + -5060)) = (u32) v0;
L_00362940:;
    v0 = (s32) 0x620000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -5060));
    s0 = 0; v0 = func_00882E20(a0, a1, a2, a3);
    s3 = v0;
    if (s3 == 0) { v0 = 1; goto L_00362988; }
    func_00882D20(a0, a1, a2, a3);
    s0 = 1;
    if (s3 == s0) goto L_0036297C;
    v0 = (s32) 0x620000U;
    (*(volatile u32 *) (u32) (v0 + -5056)) = (u32) 0; goto L_00362984;
L_0036297C:;
    v0 = (s32) 0x620000U;
    (*(volatile u32 *) (u32) (v0 + -5056)) = (u32) s0;
L_00362984:;
    v0 = 1;
L_00362988:;
    if (s0 != v0) goto L_003629AC;
    v0 = (s32) 0x620000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5056));
    if (v0 != 0) { s1 = 0; goto L_003629AC; }
    v0 = (s32) 0x620000U;
    (*(volatile u32 *) (u32) (v0 + -5072)) = (u32) 0;
    s1 = 0;
L_003629AC:;
    v1 = (s32) 0x620000U;
    v0 = s2;
    (*(volatile u32 *) (u32) (v1 + -5088)) = (u32) s1;
    return v0;
}
