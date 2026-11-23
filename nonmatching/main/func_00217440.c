/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021CA90(s32, s32, s32, s32, s32);
void func_0021CD70(s32, s32);

s32 func_00217440(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    a0 = (*(volatile s32 *) (u32) (gp + -22888));
    { s32 c_ = a0 == 0; s2 = a1; if (c_) goto L_002175C0; }
    v1 = (*(volatile s32 *) (u32) (gp + -22892));
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) a0 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    if (a0 == 0) goto L_002175B0;
L_00217488:;
    v0 = -1;
    if (a0 == v0) goto L_002175C0;
    a0 = 1;
    a1 = (s32) ((u32) sp + 0x5cU);
    a2 = (s32) ((u32) sp + 0x58U);
    a3 = 4;
    a4 = s2; v0 = func_0021CA90(a0, a1, a2, a3, a4);
    s1 = v0;
    v0 = -126;
    if (s1 != v0) goto L_002175A8;
    v0 = (s32) 0x540000U;
    a0 = (*(volatile s16 *) (u32) (s2 + 12));
    a1 = (*(volatile s32 *) (u32) (v0 + -32252));
    a4 = 0;
    v1 = (*(volatile s16 *) (u32) (s2 + 14));
    (*(volatile u16 *) (u32) (sp + 84)) = (u16) a0;
    at = 0 < a1;
    { s32 c_ = at == 0; (*(volatile u16 *) (u32) (sp + 86)) = (u16) v1; if (c_) goto L_002174E8; }
    v0 = (s32) 0x540000U;
    a4 = (*(volatile s32 *) (u32) (v0 + -32256));
L_002174E8:;
    v0 = (s32) 0x540000U;
    a0 = 0;
    v0 = (*(volatile s32 *) (u32) (v0 + -32256));
    { s32 c_ = v0 == 0; a2 = 0; if (c_) goto L_002175C8; }
    a2 = a1; goto L_002175C8;
    v1 = (s32) ((u32) sp + 0x56U);
L_00217508:;
    v1 = (*(volatile s16 *) (u32) v1);
    if (v1 == v0) goto L_00217550;
    at = 0 < a2;
    { s32 c_ = at == 0; a3 = 0; if (c_) goto L_00217550; }
L_00217520:;
    v0 = (*(volatile s16 *) (u32) (a4 + 2));
    if (v0 != v1) goto L_00217540;
    v0 = (*(volatile s16 *) (u32) a4);
    if (v0 != a1) goto L_00217540;
    a0 = a4; goto L_00217550;
L_00217540:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < a2;
    { s32 c_ = v0 != 0; a4 = (s32) ((u32) a4 + 0x10U); if (c_) goto L_00217520; }
L_00217550:;
    a1 = (*(volatile s32 *) (u32) (sp + 88));
    { s32 c_ = a1 < 0; s0 = 0; if (c_) goto L_002175E0; }
L_0021755C:;
    if (s0 == 0) goto L_002175A8;
    (*(volatile u32 *) (u32) (s2 + 32)) = (u32) s0;
    a4 = 0;
    a2 = (*(volatile s32 *) (u32) (s2 + 168));
    a0 = (*(volatile s32 *) (u32) (s2 + 172));
    v1 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = v1 == a0; a3 = 0; if (c_) goto L_0021767C; }
    a1 = a2;
L_00217584:;
    a1 = (s32) ((u32) a1 + 0x4U);
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != a0) goto L_00217584;
    goto L_0021767C;
L_002175A8:;
    v0 = s1; goto L_002176AC;
L_002175B0:;
    v1 = (*(volatile s32 *) (u32) (s2 + 212));
    v0 = 2;
    if (v1 == v0) goto L_00217488;
L_002175C0:;
    s1 = -126; goto L_002175A8;
L_002175C8:;
    a1 = (*(volatile s16 *) (u32) (sp + 84));
    v0 = -1;
    if (a1 == v0) goto L_00217550;
    v1 = (s32) ((u32) sp + 0x56U); goto L_00217508;
L_002175E0:;
    { s32 c_ = a1 <= 0; v0 = a1; if (c_) goto L_00217658; }
    v0 = 0; goto L_00217658;
    v0 = -10;
L_002175F4:;
    v0 = (s32) ((u32) 0 - (u32) v0);
    v1 = (s32) 0x3b0000U;
    a2 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff9540U);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v0 = -125;
    s0 = (*(volatile s32 *) (u32) v1);
    if (s0 == v0) goto L_0021766C;
    v0 = -124;
    if (s0 == v0) goto L_0021766C;
    v0 = -127;
    if (s0 == v0) goto L_0021766C;
L_00217630:;
    v0 = (s32) 0x530000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 31568));
    if (v0 != 0) goto L_0021755C;
    v1 = 1;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + 31568)) = (u32) v1;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + 31572)) = (u32) s0; goto L_0021755C;
L_00217658:;
    at = a1 < -10;
    if (at == 0) goto L_002175F4;
    v0 = -10; goto L_002175F4;
L_0021766C:;
    func_0021CD70(a0, a1);
    goto L_00217630;
L_0021767C:;
    if (v1 == s3) goto L_002176A0;
L_00217684:;
    a2 = (s32) ((u32) a2 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != s3) goto L_00217684;
L_002176A0:;
    s1 = (s32) ((u32) a3 - (u32) a4);
    goto L_002175A8;
L_002176AC:;
    return v0;
}
