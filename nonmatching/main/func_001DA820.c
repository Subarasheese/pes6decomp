/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001540C0(void);
s64 func_0017F9A0(s64, s64, s64, s64, s64);
s64 func_001DA460(s64);

s64 func_001DA820(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 frame[16];
    s64 sp = (s32) (u32) frame;

    s0 = a0; v0 = func_001540C0();
    a3 = (s32) ((u32) sp + 0x74U);
    a0 = (s32) ((u32) sp + 0x50U);
    (*(volatile u32 *) (u32) (sp + 112)) = (u32) v0;
    v1 = 20;
    (*(volatile u32 *) (u32) a3) = (u32) v0;
    { s32 c_ = a0 == 0; (*(volatile u32 *) (u32) (sp + 124)) = (u32) s0; if (c_) goto L_001DA870; }
L_001DA854:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_001DA854;
L_001DA870:;
    v1 = (s32) ((u32) sp + 0x70U);
    if (v1 == 0) goto L_001DA920;
    v1 = (s32) 0x530000U;
    a2 = (*(volatile s32 *) (u32) (v1 + -21596));
    if (a2 == 0) goto L_001DA9F4;
    v1 = (s32) 0x530000U;
    a1 = (s64) ((u64) s0 << 32);
    a0 = (*(volatile s32 *) (u32) (v1 + -21588));
    a1 = a1 >> 32;
    { s32 c_ = a0 == 0; a4 = 0; if (c_) goto L_001DA8D8; }
    if (a1 < 0) goto L_001DA8D8;
    v1 = (s32) 0x530000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -21616));
    at = a1 < v1;
    if (at == 0) goto L_001DA8D8;
    v1 = (s32) ((u32) a1 << 3);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) ((u32) v1 << 2);
    a4 = (s32) ((u32) a0 + (u32) v1);
L_001DA8D8:;
    v1 = (*(volatile s32 *) (u32) a4);
    if (v1 != 0) goto L_001DA9F4;
    v1 = (*(volatile s32 *) (u32) a3);
    v0 = (s32) ((u32) a1 << 3);
    a0 = (*(volatile s32 *) (u32) (sp + 112));
    v0 = (s32) ((u32) a2 + (u32) v0);
    a1 = (s32) 0x1e0000U;
    a2 = (s32) ((u32) sp + 0x7cU);
    a1 = (s32) ((u32) a1 + 0xffffab60U);
    a4 = (s32) ((u32) sp + 0x50U);
    (*(volatile u32 *) (u32) (sp + 96)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 92)) = (u32) a0;
    a0 = (*(volatile s32 *) (u32) v0);
    a3 = 4; v0 = func_0017F9A0(a0, a1, a2, a3, a4);
L_001DA918:;
    goto L_001DA9F8;
L_001DA920:;
    s1 = (s64) ((u64) s0 << 32);
    s1 = s1 >> 32; v0 = func_001540C0();
    s0 = (s32) ((u32) sp + 0x6cU);
    a0 = (s32) ((u32) sp + 0x30U);
    (*(volatile u32 *) (u32) (sp + 104)) = (u32) v0;
    v1 = 20;
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    { s32 c_ = a0 == 0; (*(volatile u32 *) (u32) (sp + 120)) = (u32) s1; if (c_) goto L_001DA964; }
L_001DA948:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_001DA948;
L_001DA964:;
    v1 = (s32) ((u32) sp + 0x68U);
    if (v1 == 0) goto L_001DA9E0;
    v1 = (s32) 0x530000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -21596));
    if (v1 == 0) goto L_001DA9F4;
    a0 = (s64) ((u64) s1 << 32);
    a0 = a0 >> 32; v0 = func_001DA460(a0);
    v1 = (*(volatile s32 *) (u32) v0);
    if (v1 != 0) goto L_001DA9F4;
    v0 = (s32) 0x530000U;
    v1 = (*(volatile s32 *) (u32) (sp + 120));
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = (s32) 0x1e0000U;
    a5 = (*(volatile s32 *) (u32) (sp + 104));
    a1 = (s32) ((u32) a1 + 0xffffab60U);
    v0 = (*(volatile s32 *) (u32) (v0 + -21596));
    a2 = (s32) ((u32) sp + 0x78U);
    a3 = 4;
    v1 = (s32) ((u32) v1 << 3);
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) a0;
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) a5;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a4 = (s32) ((u32) sp + 0x30U); v0 = func_0017F9A0(a0, a1, a2, a3, a4);
    goto L_001DA918;
L_001DA9E0:;
    a0 = (s64) ((u64) s1 << 32);
    a0 = a0 >> 32; v0 = func_001DA820(a0, a1, a2, a3, a4, a5);
    goto L_001DA918;
L_001DA9F4:;
L_001DA9F8:;
    return v0;
}
