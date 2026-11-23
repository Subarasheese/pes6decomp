/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001D79A0(s32, s32);
s32 func_001D7A20(s32, s32, s32);
void func_001ED880(s32, f32);
void func_001EDA30(s32, s32);
s32 func_001EDD00(s32, s32, s32, s32);
s32 func_001EE0D0(s32, s32, s32, s32);
void func_001EEE60(s32, s32);
void func_001EF370(s32, s32);
s32 func_002EDE60(s32);

void func_00629850(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    f0.f = (*(volatile f32 *) (u32) (gp + -31940));
    (*(volatile f32 *) (u32) (sp + 76)) = f0.f;
    v0 = (*(volatile s32 *) (u32) (a0 + 352));
    { s32 c_ = v0 != 0; s0 = a0; if (c_) goto L_006298A8; }
    v0 = func_001EE0D0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 352)) = (u32) v0;
    a0 = v0;
    a1 = 0; func_001EDA30(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = 2; f0.f = func_001D79A0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 352));
    f12.i = f0.i; func_001ED880(a0, f12.f);
L_006298A8:;
    v0 = (*(volatile s32 *) (u32) (s0 + 356));
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_006298D0; }
    a0 = (*(volatile s32 *) (u32) (s0 + 352)); v0 = func_001EDD00(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 356)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (s0 + 352)); v0 = func_001EDD00(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 360)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
L_006298D0:;
    a1 = (s32) ((u32) sp + 0x30U);
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a2 = 2; v0 = func_001D7A20(a0, a1, a2);
    a0 = 0; v0 = func_002EDE60(a0);
    if (v0 == 0) { a0 = 1; goto L_00629A0C; }
    a0 = 0; v0 = func_002EDE60(a0);
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_0062990C; }
    f0.i = (s32) v0;
    f3.f = (f32) f0.i; goto L_00629924;
L_0062990C:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f3.f = (f32) f0.i;
    f3.f = f3.f + f3.f;
L_00629924:;
    f2.f = (*(volatile f32 *) (u32) (sp + 56));
    v0 = (s32) 0x40000000U;
    f1.i = (s32) v0;
    a1 = (s32) ((u32) sp + 0x30U);
    v0 = (s32) 0x42c80000U;
    f2.f = f2.f * f3.f;
    f1.f = f1.f * f2.f;
    f0.i = (s32) v0;
    f0.f = f1.f / f0.f;
    (*(volatile f32 *) (u32) (sp + 56)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 356)); func_001EF370(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 356));
    a1 = (s32) ((u32) sp + 0x4cU); func_001EEE60(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 48));
    a0 = 1;
    f0.f = (*(volatile f32 *) (u32) (sp + 56));
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (sp + 48)) = f0.f; v0 = func_002EDE60(a0);
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_00629994; }
    f0.i = (s32) v0;
    f1.f = (f32) f0.i; goto L_006299AC;
L_00629994:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_006299AC:;
    f0.f = (*(volatile f32 *) (u32) (sp + 56));
    a0 = 0;
    f20.f = f0.f * f1.f; v0 = func_002EDE60(a0);
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_006299D0; }
    f0.i = (s32) v0;
    f1.f = (f32) f0.i; goto L_006299E8;
L_006299D0:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_006299E8:;
    v0 = (s32) 0x40000000U;
    f0.i = (s32) v0;
    f0.f = f0.f * f1.f;
    f0.f = f20.f / f0.f;
    (*(volatile f32 *) (u32) (sp + 56)) = f0.f; goto L_00629A5C;
L_00629A0C:;
    v0 = func_002EDE60(a0);
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_00629A28; }
    f0.i = (s32) v0;
    f2.f = (f32) f0.i; goto L_00629A40;
L_00629A28:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00629A40:;
    f1.f = (*(volatile f32 *) (u32) (sp + 56));
    v0 = (s32) 0x42c80000U;
    f0.i = (s32) v0;
    f1.f = f1.f * f2.f;
    f0.f = f1.f / f0.f;
    (*(volatile f32 *) (u32) (sp + 56)) = f0.f;
L_00629A5C:;
    a0 = (*(volatile s32 *) (u32) (s0 + 360));
    a1 = (s32) ((u32) sp + 0x30U); func_001EF370(a0, a1);
    v0 = 255;
    (*(volatile u8 *) (u32) (sp + 78)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 76)) = (u8) v0;
    a0 = (*(volatile s32 *) (u32) (s0 + 360));
    a1 = (s32) ((u32) sp + 0x4cU); func_001EEE60(a0, a1);
    return;
}
