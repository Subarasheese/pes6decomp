/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D5EE0(s32, s32);
s32 func_001DA550(s32, s32);
s32 func_001DD3C0(s32);
s32 func_001DD680(s32, s32, s32, s32, s32);
s32 func_001E75A0(s32, s32);
s32 func_001F04F0(s32, s32);
s32 func_001F7C90(s32, s32);
s32 func_0021DF90(s32);
s32 func_0021E000(s32);

s32 func_001B94C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s3 = a1;
    s2 = 0;
    if (s3 <= 0) goto L_001B95E0;
    s0 = a0;
L_001B94E8:;
    s1 = (*(volatile s32 *) (u32) (s0 + 4));
    (*(volatile u32 *) (u32) (sp + 88)) = (u32) 0;
    v1 = (*(volatile s8 *) (u32) (s0 + 8));
    (*(volatile u32 *) (u32) (sp + 92)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) s0);
    at = (u64) v1 < (u64) (s64) 6;
    if (at == 0) goto L_001B95D0;
    a0 = (s32) 0x3d0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0x15a0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x1b9528U) goto L_001B9528; if (t_ == 0x1b9550U) goto L_001B9550; if (t_ == 0x1b9570U) goto L_001B9570; if (t_ == 0x1b9588U) goto L_001B9588; if (t_ == 0x1b95a8U) goto L_001B95A8; if (t_ == 0x1b95c0U) goto L_001B95C0; }
L_001B9528:;
    a0 = s1; v0 = func_001DD3C0(a0);
    if (v0 != 0) goto L_001B95D0;
    a0 = s1;
    a1 = (s32) ((u32) sp + 0x58U); v0 = func_001DD680(a0, a1, a2, a3, a4);
    goto L_001B95D0;
L_001B9550:;
    a0 = s1; v0 = func_0021E000(a0);
    a0 = v0;
    a1 = (s32) ((u32) sp + 0x58U); v0 = func_001E75A0(a0, a1);
    goto L_001B95D0;
L_001B9570:;
    a0 = s1;
    a1 = (s32) ((u32) sp + 0x58U); v0 = func_001DA550(a0, a1);
    goto L_001B95D0;
L_001B9588:;
    a0 = s1; v0 = func_0021DF90(a0);
    a0 = v0;
    a1 = (s32) ((u32) sp + 0x58U); v0 = func_001F04F0(a0, a1);
    goto L_001B95D0;
L_001B95A8:;
    a0 = s1;
    a1 = (s32) ((u32) sp + 0x58U); v0 = func_001D5EE0(a0, a1);
    goto L_001B95D0;
L_001B95C0:;
    a0 = s1;
    a1 = (s32) ((u32) sp + 0x58U); v0 = func_001F7C90(a0, a1);
L_001B95D0:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < s3;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0xcU); if (c_) goto L_001B94E8; }
L_001B95E0:;
    return v0;
}
