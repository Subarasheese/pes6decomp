/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Process_Create(s32, s32, s32, s32, s32);
s32 Pes6Process_GetWork(s32);
s32 func_001BBC50(s32, s32, s32, s32);
s32 func_002DEF50(s32, s32);
s32 func_002DF0A0(s32, s32, s32, f32, f32);
s32 func_002E1D10(s32, s32, s32, s32);

s32 func_002DF9D0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s1 = a1;
    if (s1 != 0) goto L_002DF9F8;
    v0 = 0; goto L_002DFC0C;
L_002DF9F8:;
    a0 = (s32) 0x2e0000U;
    a1 = (s32) 0x2e0000U;
    a2 = (s32) 0x2e0000U;
    a5 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) a0 + 0xfffffea0U);
    a1 = (s32) ((u32) a1 + 0xfffffec0U);
    a2 = (s32) ((u32) a2 + 0xfffffe90U);
    a3 = 116;
    a4 = 0;
    a5 = (s32) ((u32) a5 + 0xffffc5d8U); v0 = Pes6Process_Create(a0, a1, a2, a3, a4);
    s0 = v0;
    if (s0 != 0) { a0 = s0; goto L_002DFA38; }
    s0 = 0; goto L_002DFA80;
L_002DFA38:;
    v0 = func_001BBC50(a0, a1, a2, a3);
    a0 = s0; v0 = Pes6Process_GetWork(a0);
    (*(volatile u32 *) (u32) (v0 + 112)) = (u32) s0;
    at = s2 < 10;
    { s32 c_ = at != 0; s0 = v0; if (c_) goto L_002DFA60; }
    s2 = 9; goto L_002DFA70;
L_002DFA60:;
    if (s2 >= 0) goto L_002DFA70;
    s2 = 0; goto L_002DFA70;
L_002DFA70:;
    (*(volatile u32 *) (u32) s0) = (u32) s2;
    v0 = 1;
    (*(volatile u8 *) (u32) (s0 + 9)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 11)) = (u8) v0;
L_002DFA80:;
    v1 = (*(volatile s32 *) (u32) s0);
    v0 = 2;
    if (v1 != v0) { v0 = (*(volatile s32 *) (u32) s0); goto L_002DFA9C; }
    v0 = 1;
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) s0);
L_002DFA9C:;
    at = (u64) v0 < (u64) (s64) 10;
    if (at == 0) { a0 = s0; goto L_002DFBE4; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffc5f0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x2dfac4U) goto L_002DFAC4; if (t_ == 0x2dfaf4U) goto L_002DFAF4; if (t_ == 0x2dfb24U) goto L_002DFB24; if (t_ == 0x2dfb40U) goto L_002DFB40; if (t_ == 0x2dfb5cU) goto L_002DFB5C; if (t_ == 0x2dfb78U) goto L_002DFB78; if (t_ == 0x2dfb94U) goto L_002DFB94; if (t_ == 0x2dfbb0U) goto L_002DFBB0; if (t_ == 0x2dfbccU) goto L_002DFBCC; if (t_ == 0x2dfbe0U) goto L_002DFBE0; }
L_002DFAC4:;
    a0 = (s32) ((u32) s0 + 0x28U);
    a1 = 3;
    a2 = 1;
    a3 = s1; v0 = func_002E1D10(a0, a1, a2, a3);
    a3 = s1;
    a0 = (s32) ((u32) s0 + 0x4cU);
    a1 = 3;
    a2 = 2; v0 = func_002E1D10(a0, a1, a2, a3);
    goto L_002DFBE0;
L_002DFAF4:;
    a0 = (s32) ((u32) s0 + 0x28U);
    a1 = 3;
    a2 = 5;
    a3 = s1; v0 = func_002E1D10(a0, a1, a2, a3);
    a3 = s1;
    a0 = (s32) ((u32) s0 + 0x4cU);
    a1 = 3;
    a2 = 6; v0 = func_002E1D10(a0, a1, a2, a3);
    goto L_002DFBE0;
L_002DFB24:;
    a3 = s1;
    a0 = (s32) ((u32) s0 + 0x28U);
    a1 = 3;
    a2 = 9; v0 = func_002E1D10(a0, a1, a2, a3);
    goto L_002DFBE0;
L_002DFB40:;
    a3 = s1;
    a0 = (s32) ((u32) s0 + 0x28U);
    a1 = 3;
    a2 = 11; v0 = func_002E1D10(a0, a1, a2, a3);
    goto L_002DFBE0;
L_002DFB5C:;
    a3 = s1;
    a0 = (s32) ((u32) s0 + 0x28U);
    a1 = 3;
    a2 = 12; v0 = func_002E1D10(a0, a1, a2, a3);
    goto L_002DFBE0;
L_002DFB78:;
    a3 = s1;
    a0 = (s32) ((u32) s0 + 0x28U);
    a1 = 3;
    a2 = 13; v0 = func_002E1D10(a0, a1, a2, a3);
    goto L_002DFBE0;
L_002DFB94:;
    a3 = s1;
    a0 = (s32) ((u32) s0 + 0x28U);
    a1 = 3;
    a2 = 15; v0 = func_002E1D10(a0, a1, a2, a3);
    goto L_002DFBE0;
L_002DFBB0:;
    a3 = s1;
    a0 = (s32) ((u32) s0 + 0x28U);
    a1 = 3;
    a2 = 16; v0 = func_002E1D10(a0, a1, a2, a3);
    goto L_002DFBE0;
L_002DFBCC:;
    a3 = s1;
    a0 = (s32) ((u32) s0 + 0x28U);
    a1 = 3;
    a2 = 17; v0 = func_002E1D10(a0, a1, a2, a3);
L_002DFBE0:;
    a0 = s0;
L_002DFBE4:;
    a1 = (s32) ((u32) sp + 0x40U);
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 68)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 72)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) 0; v0 = func_002DF0A0(a0, a1, a2, f12.f, f13.f);
    a0 = s0;
    a1 = 255; v0 = func_002DEF50(a0, a1);
    v0 = s0;
L_002DFC0C:;
    return v0;
}
