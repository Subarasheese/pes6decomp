/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001540C0(void);
s64 func_0017F9A0(s64, s64, s64, s64, s64);
s64 func_001DE160(s64);
s64 func_001F4380(s64);

s64 func_001DD910(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 frame[16];
    s64 sp = (s32) (u32) frame;

    s1 = a0;
    v0 = func_001540C0();
    s0 = (s32) ((u32) sp + 0x74U);
    (*(volatile u32 *) (u32) (sp + 112)) = (u32) v0;
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    v1 = (s32) ((u32) sp + 0x50U);
    (*(volatile u32 *) (u32) (sp + 124)) = (u32) s1;
    { s32 c_ = v1 == 0; v0 = 20; if (c_) goto L_001DD960; }
L_001DD944:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_001DD944;
L_001DD960:;
    s1 = (s64) ((u64) s1 << 32);
    s1 = s1 >> 32;
    a0 = s1; v0 = func_001F4380(a0);
    if (v0 == 0) goto L_001DD97C;
    s1 = (*(volatile s32 *) (u32) v0);
L_001DD97C:;
    v1 = (s32) 0x530000U;
    a1 = (s32) ((u32) s1 << 4);
    a0 = (*(volatile s32 *) (u32) (v1 + -20968));
    v1 = (s32) ((u32) sp + 0x70U);
    { s32 c_ = v1 == 0; a0 = (s32) ((u32) a0 + (u32) a1); if (c_) goto L_001DD9F8; }
    v1 = (*(volatile s32 *) (u32) a0);
    if (v1 != 0) goto L_001DDAC4;
    v1 = (s32) 0x530000U;
    a5 = (*(volatile s32 *) (u32) (v1 + -20972));
    if (a5 == 0) goto L_001DDAC4;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = (s32) 0x1e0000U;
    v1 = (*(volatile s32 *) (u32) (sp + 124));
    a1 = (s32) ((u32) a1 + 0xffffdd40U);
    a0 = (*(volatile s32 *) (u32) (sp + 112));
    a2 = (s32) ((u32) sp + 0x7cU);
    a3 = 4;
    (*(volatile u32 *) (u32) (sp + 96)) = (u32) v0;
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (sp + 92)) = (u32) a0;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) a5 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a4 = (s32) ((u32) sp + 0x50U); v0 = func_0017F9A0(a0, a1, a2, a3, a4);
L_001DD9F0:;
    goto L_001DDAC8;
L_001DD9F8:;
    s1 = (*(volatile s32 *) (u32) (sp + 124)); v0 = func_001540C0();
    s0 = (s32) ((u32) sp + 0x6cU);
    (*(volatile u32 *) (u32) (sp + 104)) = (u32) v0;
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    v1 = (s32) ((u32) sp + 0x30U);
    (*(volatile u32 *) (u32) (sp + 120)) = (u32) s1;
    { s32 c_ = v1 == 0; v0 = 20; if (c_) goto L_001DDA38; }
L_001DDA1C:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_001DDA1C;
L_001DDA38:;
    a0 = (s64) ((u64) s1 << 32);
    a0 = a0 >> 32; v0 = func_001DE160(a0);
    v1 = (s32) ((u32) sp + 0x68U);
    if (v1 == 0) goto L_001DDAB4;
    v1 = (*(volatile s32 *) (u32) v0);
    if (v1 != 0) goto L_001DDAC4;
    v1 = (s32) 0x530000U;
    a5 = (*(volatile s32 *) (u32) (v1 + -20972));
    if (a5 == 0) goto L_001DDAC4;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = (s32) 0x1e0000U;
    v1 = (*(volatile s32 *) (u32) (sp + 120));
    a1 = (s32) ((u32) a1 + 0xffffdd40U);
    a0 = (*(volatile s32 *) (u32) (sp + 104));
    a2 = (s32) ((u32) sp + 0x78U);
    a3 = 4;
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) v0;
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) a0;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) a5 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a4 = (s32) ((u32) sp + 0x30U); v0 = func_0017F9A0(a0, a1, a2, a3, a4);
    goto L_001DD9F0;
L_001DDAB4:;
    a0 = (*(volatile s32 *) (u32) (sp + 120)); v0 = func_001DD910(a0, a1, a2, a3, a4, a5);
    goto L_001DD9F0;
L_001DDAC4:;
L_001DDAC8:;
    return v0;
}
