/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021CA90(s32, s32, s32, s32, s32);
void func_0021CD70(s32, s32);

s32 func_00216610(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    a3 = 16;
    a1 = (s32) ((u32) sp + 0x4cU);
    a2 = (s32) ((u32) sp + 0x48U);
    s2 = a0;
    a0 = 1;
    a4 = s2;
    v0 = func_0021CA90(a0, a1, a2, a3, a4);
    s1 = v0;
    v0 = -126;
    if (s1 != v0) goto L_00216774;
    v0 = (s32) 0x540000U;
    a0 = (*(volatile s16 *) (u32) (s2 + 12));
    a1 = (*(volatile s32 *) (u32) (v0 + -32252));
    a4 = 0;
    v1 = (*(volatile s16 *) (u32) (s2 + 14));
    (*(volatile u16 *) (u32) (sp + 68)) = (u16) a0;
    at = 0 < a1;
    { s32 c_ = at == 0; (*(volatile u16 *) (u32) (sp + 70)) = (u16) v1; if (c_) goto L_0021667C; }
    v0 = (s32) 0x540000U;
    a4 = (*(volatile s32 *) (u32) (v0 + -32256));
L_0021667C:;
    v0 = (s32) 0x540000U;
    a0 = 0;
    v0 = (*(volatile s32 *) (u32) (v0 + -32256));
    { s32 c_ = v0 == 0; a2 = 0; if (c_) goto L_0021677C; }
    a2 = a1; goto L_0021677C;
L_00216698:;
    v1 = (*(volatile s16 *) (u32) v1);
    if (v1 == v0) goto L_002166E0;
    at = 0 < a2;
    { s32 c_ = at == 0; a3 = 0; if (c_) goto L_002166E0; }
L_002166B0:;
    v0 = (*(volatile s16 *) (u32) (a4 + 2));
    if (v0 != v1) goto L_002166D0;
    v0 = (*(volatile s16 *) (u32) a4);
    if (v0 != a1) goto L_002166D0;
    a0 = a4; goto L_002166E0;
L_002166D0:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < a2;
    { s32 c_ = v0 != 0; a4 = (s32) ((u32) a4 + 0x10U); if (c_) goto L_002166B0; }
L_002166E0:;
    v0 = (*(volatile s32 *) (u32) (sp + 72));
    if (v0 == 0) { s0 = 1; goto L_00216794; }
    a1 = (*(volatile s32 *) (u32) (sp + 72));
    { s32 c_ = a1 <= 0; v0 = a1; if (c_) goto L_0021679C; }
    v0 = 0; goto L_0021679C;
L_00216700:;
    v0 = (s32) ((u32) 0 - (u32) v0);
    v1 = (s32) 0x3b0000U;
    a2 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff95f0U);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v0 = -125;
    s0 = (*(volatile s32 *) (u32) v1);
    if (s0 == v0) goto L_002167B0;
    v0 = -124;
    if (s0 == v0) goto L_002167B0;
    v0 = -127;
    if (s0 == v0) goto L_002167B0;
L_0021673C:;
    if (s0 == 0) goto L_00216774;
    v0 = -122;
    { s32 c_ = s0 != v0; (*(volatile u32 *) (u32) (s2 + 32)) = (u32) s0; if (c_) goto L_00216774; }
    v0 = (s32) 0x530000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 31568));
    if (v0 != 0) goto L_00216774;
    v1 = 1;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + 31568)) = (u32) v1;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + 31572)) = (u32) s0;
L_00216774:;
    v0 = s1; goto L_002167C0;
L_0021677C:;
    a1 = (*(volatile s16 *) (u32) (sp + 68));
    v0 = -1;
    if (a1 == v0) goto L_002166E0;
    v1 = (s32) ((u32) sp + 0x46U); goto L_00216698;
L_00216794:;
    (*(volatile u16 *) (u32) (a0 + 6)) = (u16) s0; goto L_0021673C;
L_0021679C:;
    at = a1 < -10;
    if (at == 0) goto L_00216700;
    v0 = -10; goto L_00216700;
L_002167B0:;
    func_0021CD70(a0, a1);
    goto L_0021673C;
L_002167C0:;
    return v0;
}
