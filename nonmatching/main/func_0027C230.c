/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0017F9A0(s32, s32, s32, s32, s32);
s32 func_0027CB60(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_002A6D80(s32, s32);

s32 func_0027C230(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) ((u32) sp + 0x30U);
    s1 = a0;
    s0 = a1;
    a0 = (s32) 0x5a0000U;
    v0 = (s32) ((u32) s0 << 3);
    a0 = (s32) ((u32) a0 + 0xfffffbf0U);
    a1 = (s32) ((u32) v0 + (u32) s0);
    a1 = (s32) ((u32) a1 << 3);
    v0 = 20;
    a1 = (s32) ((u32) a1 - (u32) s0);
    a1 = (s32) ((u32) a1 << 3);
    a0 = (s32) ((u32) a0 + (u32) a1);
    { s32 c_ = v1 == 0; (*(volatile u32 *) (u32) (sp + 76)) = (u32) a0; if (c_) goto L_0027C294; }
L_0027C278:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_0027C278;
L_0027C294:;
    a0 = s0; v0 = func_0027CB60(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (*(volatile s32 *) (u32) (sp + 76));
    at = (u64) s0 < (u64) (s64) 7;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) v1) = (u32) s1; if (c_) goto L_0027C3FC; }
    a0 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) s0 << 2);
    a0 = (s32) ((u32) a0 + 0xffff9cb0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x27c2c8U) goto L_0027C2C8; if (t_ == 0x27c308U) goto L_0027C308; if (t_ == 0x27c318U) goto L_0027C318; if (t_ == 0x27c358U) goto L_0027C358; }
L_0027C2C8:;
    v1 = (*(volatile s8 *) (u32) (gp + -32256));
    v0 = 11;
    if (v1 == v0) goto L_0027C394;
    v0 = (*(volatile s8 *) (u32) (gp + -32260));
    a1 = (s32) 0x280000U;
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) v1;
    a0 = s1;
    a1 = (s32) ((u32) a1 + 0xffffc6f0U);
    a2 = (s32) ((u32) sp + 0x4cU);
    a3 = 4;
    a4 = (s32) ((u32) sp + 0x30U);
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) v0; v0 = func_0017F9A0(a0, a1, a2, a3, a4);
    goto L_0027C38C;
L_0027C308:;
    v0 = (*(volatile s32 *) (u32) (sp + 76));
    a0 = 1;
    a1 = (s32) ((u32) v0 + 0x8U); v0 = func_002A6D80(a0, a1);
L_0027C318:;
    v1 = (*(volatile s8 *) (u32) (gp + -32256));
    v0 = 11;
    if (v1 == v0) goto L_0027C3C8;
    v0 = (*(volatile s8 *) (u32) (gp + -32260));
    a1 = (s32) 0x280000U;
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) v1;
    a0 = s1;
    a1 = (s32) ((u32) a1 + 0xffffc470U);
    a2 = (s32) ((u32) sp + 0x4cU);
    a3 = 4;
    a4 = (s32) ((u32) sp + 0x30U);
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) v0; v0 = func_0017F9A0(a0, a1, a2, a3, a4);
    goto L_0027C38C;
L_0027C358:;
    v0 = (*(volatile s32 *) (u32) (sp + 76));
    a0 = 0;
    a1 = (s32) ((u32) v0 + 0x8U); v0 = func_002A6D80(a0, a1);
    v0 = 1;
    a1 = (s32) 0x280000U;
    a0 = s1;
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) v0;
    a1 = (s32) ((u32) a1 + 0xffffc470U);
    a2 = (s32) ((u32) sp + 0x4cU);
    a3 = 4;
    a4 = (s32) ((u32) sp + 0x30U); v0 = func_0017F9A0(a0, a1, a2, a3, a4);
L_0027C38C:;
    goto L_0027C400;
L_0027C394:;
    v0 = 1;
    a1 = (s32) 0x280000U;
    (*(volatile u32 *) (u32) (sp + 48)) = (u32) v0;
    a0 = s1;
    v0 = (*(volatile s8 *) (u32) (gp + -32260));
    a1 = (s32) ((u32) a1 + 0xffffc690U);
    a2 = (s32) ((u32) sp + 0x4cU);
    a3 = 4;
    a4 = (s32) ((u32) sp + 0x30U);
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) v0; v0 = func_0017F9A0(a0, a1, a2, a3, a4);
    goto L_0027C38C;
L_0027C3C8:;
    v0 = 1;
    a1 = (s32) 0x280000U;
    (*(volatile u32 *) (u32) (sp + 48)) = (u32) v0;
    a0 = s1;
    v0 = (*(volatile s8 *) (u32) (gp + -32260));
    a1 = (s32) ((u32) a1 + 0xffffc410U);
    a2 = (s32) ((u32) sp + 0x4cU);
    a3 = 4;
    a4 = (s32) ((u32) sp + 0x30U);
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) v0; v0 = func_0017F9A0(a0, a1, a2, a3, a4);
    goto L_0027C38C;
L_0027C3FC:;
L_0027C400:;
    return v0;
}
