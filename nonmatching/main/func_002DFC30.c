/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Process_Create(s32, s32, s32, s32, s32);
s32 Pes6Process_GetWork(s32);
void func_001BBC50(s32, s32, s32, s32);
void func_002DEF50(s32, s32);
void func_002DF0A0(s32, s32);
void func_002E1870(s32, s32);
void func_002E19F0(s32, f32);
void func_002E1EB0(s32, s32, s32, s32);

s32 func_002DFC30(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    a1 = (s32) 0x2e0000U;
    a2 = (s32) 0x2e0000U;
    a5 = (s32) 0x3e0000U;
    s1 = a0;
    a1 = (s32) ((u32) a1 + 0xfffffec0U);
    a0 = (s32) 0x2e0000U;
    a2 = (s32) ((u32) a2 + 0xfffffe90U);
    a0 = (s32) ((u32) a0 + 0xfffffea0U);
    a3 = 116;
    a4 = 0;
    a5 = (s32) ((u32) a5 + 0xffffc5d8U);
    v0 = Pes6Process_Create(a0, a1, a2, a3, a4);
    s0 = v0;
    if (s0 != 0) { a0 = s0; goto L_002DFC84; }
    s0 = 0; goto L_002DFCCC;
L_002DFC84:;
    func_001BBC50(a0, a1, a2, a3);
    a0 = s0; v0 = Pes6Process_GetWork(a0);
    (*(volatile u32 *) (u32) (v0 + 112)) = (u32) s0;
    at = s1 < 10;
    { s32 c_ = at != 0; s0 = v0; if (c_) goto L_002DFCAC; }
    s1 = 9; goto L_002DFCBC;
L_002DFCAC:;
    if (s1 >= 0) goto L_002DFCBC;
    s1 = 0; goto L_002DFCBC;
L_002DFCBC:;
    (*(volatile u32 *) (u32) s0) = (u32) s1;
    v0 = 1;
    (*(volatile u8 *) (u32) (s0 + 9)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 11)) = (u8) v0;
L_002DFCCC:;
    v1 = (*(volatile s32 *) (u32) s0);
    v0 = 2;
    if (v1 != v0) { v0 = (*(volatile s32 *) (u32) s0); goto L_002DFCE8; }
    v0 = 1;
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) s0);
L_002DFCE8:;
    at = (u64) v0 < (u64) (s64) 10;
    if (at == 0) { a0 = s0; goto L_002DFE30; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffc620U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x2dfd10U) goto L_002DFD10; if (t_ == 0x2dfd38U) goto L_002DFD38; if (t_ == 0x2dfd60U) goto L_002DFD60; if (t_ == 0x2dfd78U) goto L_002DFD78; if (t_ == 0x2dfd90U) goto L_002DFD90; if (t_ == 0x2dfda8U) goto L_002DFDA8; if (t_ == 0x2dfdc0U) goto L_002DFDC0; if (t_ == 0x2dfe04U) goto L_002DFE04; if (t_ == 0x2dfe1cU) goto L_002DFE1C; if (t_ == 0x2dfe2cU) goto L_002DFE2C; }
L_002DFD10:;
    a0 = (s32) ((u32) s0 + 0x28U);
    a1 = 3;
    a2 = 1; func_002E1EB0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x4cU);
    a1 = 3;
    a2 = 2; func_002E1EB0(a0, a1, a2, a3);
    goto L_002DFE2C;
L_002DFD38:;
    a0 = (s32) ((u32) s0 + 0x28U);
    a1 = 3;
    a2 = 5; func_002E1EB0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x4cU);
    a1 = 3;
    a2 = 6; func_002E1EB0(a0, a1, a2, a3);
    goto L_002DFE2C;
L_002DFD60:;
    a0 = (s32) ((u32) s0 + 0x28U);
    a1 = 3;
    a2 = 9; func_002E1EB0(a0, a1, a2, a3);
    goto L_002DFE2C;
L_002DFD78:;
    a0 = (s32) ((u32) s0 + 0x28U);
    a1 = 3;
    a2 = 11; func_002E1EB0(a0, a1, a2, a3);
    goto L_002DFE2C;
L_002DFD90:;
    a0 = (s32) ((u32) s0 + 0x28U);
    a1 = 3;
    a2 = 12; func_002E1EB0(a0, a1, a2, a3);
    goto L_002DFE2C;
L_002DFDA8:;
    a0 = (s32) ((u32) s0 + 0x28U);
    a1 = 3;
    a2 = 13; func_002E1EB0(a0, a1, a2, a3);
    goto L_002DFE2C;
L_002DFDC0:;
    v0 = (*(volatile u8 *) (u32) (gp + -32066));
    a0 = (s32) ((u32) s0 + 0x28U);
    a3 = (*(volatile u8 *) (u32) (gp + -32068));
    a1 = 3;
    v1 = (*(volatile u8 *) (u32) (gp + -32067));
    a2 = 15;
    (*(volatile u8 *) (u32) (sp + 78)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (gp + -32065));
    (*(volatile u8 *) (u32) (sp + 76)) = (u8) a3;
    (*(volatile u8 *) (u32) (sp + 77)) = (u8) v1;
    (*(volatile u8 *) (u32) (sp + 79)) = (u8) v0; func_002E1EB0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x28U);
    a1 = (s32) ((u32) sp + 0x4cU); func_002E1870(a0, a1);
    goto L_002DFE2C;
L_002DFE04:;
    a0 = (s32) ((u32) s0 + 0x28U);
    a1 = 3;
    a2 = 16; func_002E1EB0(a0, a1, a2, a3);
    goto L_002DFE2C;
L_002DFE1C:;
    a0 = (s32) ((u32) s0 + 0x28U);
    a1 = 3;
    a2 = 17; func_002E1EB0(a0, a1, a2, a3);
L_002DFE2C:;
    a0 = s0;
L_002DFE30:;
    a1 = (s32) ((u32) sp + 0x30U);
    (*(volatile u32 *) (u32) (sp + 48)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 52)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 56)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) 0; func_002DF0A0(a0, a1);
    a0 = s0;
    a1 = 255; func_002DEF50(a0, a1);
    if (s0 == 0) { v0 = s0; goto L_002DFE7C; }
    f12.i = (s32) 0;
    a0 = (s32) ((u32) s0 + 0x28U); func_002E19F0(a0, f12.f);
    v0 = (s32) 0xbf800000U;
    f12.i = (s32) v0;
    a0 = (s32) ((u32) s0 + 0x4cU); func_002E19F0(a0, f12.f);
    v0 = s0;
L_002DFE7C:;
    return v0;
}
