/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001540C0(void);
s32 func_0017F9A0(s32, s32, s32, s32, s32);

s32 func_001E7370(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s64 frame[28];
    s32 sp = (s32) (u32) frame;

    a5 = a1;
    v1 = (s32) ((u32) sp + 0x80U);
    v0 = 20;
    { s32 c_ = v1 == 0; s0 = a0; if (c_) goto L_001E73AC; }
L_001E7390:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_001E7390;
L_001E73AC:;
    if (a5 == 0) goto L_001E73E8;
    v0 = (*(volatile s32 *) (u32) a5);
    a1 = (s32) 0x1e0000U;
    a0 = s0;
    a1 = (s32) ((u32) a1 + 0x7980U);
    a2 = (s32) ((u32) a5 + 0x8U);
    a3 = 4;
    a4 = (s32) ((u32) sp + 0x80U);
    (*(volatile u32 *) (u32) (sp + 140)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (a5 + 4));
    (*(volatile u32 *) (u32) (sp + 144)) = (u32) v0; v0 = func_0017F9A0(a0, a1, a2, a3, a4);
    goto L_001E7594;
L_001E73E8:;
    v0 = func_001540C0();
    a0 = (s32) ((u32) sp + 0xd4U);
    a2 = (s32) ((u32) sp + 0xd8U);
    (*(volatile u32 *) (u32) (sp + 208)) = (u32) v0;
    v1 = (s32) ((u32) sp + 0x60U);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    (*(volatile u32 *) (u32) a2) = (u32) v0;
    { s32 c_ = v1 == 0; v0 = 20; if (c_) goto L_001E742C; }
L_001E7410:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_001E7410;
L_001E742C:;
    v0 = (s32) ((u32) sp + 0xd0U);
    if (v0 == 0) goto L_001E7468;
    v0 = (*(volatile s32 *) (u32) a0);
    a1 = (s32) 0x1e0000U;
    v1 = (*(volatile s32 *) (u32) (sp + 208));
    a1 = (s32) ((u32) a1 + 0x7980U);
    a3 = 4;
    a4 = (s32) ((u32) sp + 0x60U);
    a0 = s0;
    (*(volatile u32 *) (u32) (sp + 112)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 108)) = (u32) v1; v0 = func_0017F9A0(a0, a1, a2, a3, a4);
L_001E7460:;
    goto L_001E7590;
L_001E7468:;
    v0 = func_001540C0();
    a0 = (s32) ((u32) sp + 0xc4U);
    a2 = (s32) ((u32) sp + 0xc8U);
    (*(volatile u32 *) (u32) (sp + 192)) = (u32) v0;
    v1 = (s32) ((u32) sp + 0x40U);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    (*(volatile u32 *) (u32) a2) = (u32) v0;
    { s32 c_ = v1 == 0; v0 = 20; if (c_) goto L_001E74AC; }
L_001E7490:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_001E7490;
L_001E74AC:;
    v0 = (s32) ((u32) sp + 0xc0U);
    if (v0 == 0) goto L_001E74E8;
    v0 = (*(volatile s32 *) (u32) a0);
    a1 = (s32) 0x1e0000U;
    v1 = (*(volatile s32 *) (u32) (sp + 192));
    a1 = (s32) ((u32) a1 + 0x7980U);
    a3 = 4;
    a4 = (s32) ((u32) sp + 0x40U);
    a0 = s0;
    (*(volatile u32 *) (u32) (sp + 80)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) v1; v0 = func_0017F9A0(a0, a1, a2, a3, a4);
    goto L_001E7460;
L_001E74E8:;
    v0 = func_001540C0();
    a0 = (s32) ((u32) sp + 0xb4U);
    a2 = (s32) ((u32) sp + 0xb8U);
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) v0;
    v1 = (s32) ((u32) sp + 0x20U);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    (*(volatile u32 *) (u32) a2) = (u32) v0;
    { s32 c_ = v1 == 0; v0 = 20; if (c_) goto L_001E752C; }
L_001E7510:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_001E7510;
L_001E752C:;
    v0 = (s32) ((u32) sp + 0xb0U);
    if (v0 == 0) goto L_001E7568;
    v0 = (*(volatile s32 *) (u32) a0);
    a1 = (s32) 0x1e0000U;
    v1 = (*(volatile s32 *) (u32) (sp + 176));
    a1 = (s32) ((u32) a1 + 0x7980U);
    a3 = 4;
    a4 = (s32) ((u32) sp + 0x20U);
    a0 = s0;
    (*(volatile u32 *) (u32) (sp + 48)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 44)) = (u32) v1; v0 = func_0017F9A0(a0, a1, a2, a3, a4);
    goto L_001E7460;
L_001E7568:;
    v0 = func_001540C0();
    a0 = s0;
    (*(volatile u32 *) (u32) (sp + 160)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 164)) = (u32) v0;
    a1 = (s32) ((u32) sp + 0xa0U);
    (*(volatile u32 *) (u32) (sp + 168)) = (u32) v0; v0 = func_001E7370(a0, a1, a2, a3, a4, a5);
    goto L_001E7460;
L_001E7590:;
L_001E7594:;
    return v0;
}
