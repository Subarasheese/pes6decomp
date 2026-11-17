/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001ED8B0(s32, s32);
void func_001EDA50(s32, s32);
s32 func_001EDC80(s32, s32);
void func_001EF370(s32, s32);
void func_001EF860(s32, s32);
void func_001F3D80(s32, s32, s32);

void func_002E21E0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    v0 = (*(volatile u8 *) (u32) a0);
    f20.f = (*(volatile f32 *) (u32) (a1 + 4));
    f21.f = (*(volatile f32 *) (u32) a1);
    { s32 c_ = v0 == 0; s0 = a1; if (c_) goto L_002E225C; }
    (*(volatile f32 *) (u32) (s1 + 4)) = f21.f;
    (*(volatile f32 *) (u32) (s1 + 8)) = f20.f;
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = v0 & 0x100;
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) (s1 + 28)); goto L_002E2240; }
    a0 = (*(volatile s32 *) (u32) (s1 + 28));
    a1 = (s32) ((u32) s1 + 0x4U);
    a2 = 0; func_001F3D80(a0, a1, a2);
    v0 = (s32) 0x7f7f0000U; goto L_002E2260;
L_002E2240:;
    a1 = (s32) ((u32) sp + 0x40U); func_001ED8B0(a0, a1);
    (*(volatile f32 *) (u32) (sp + 64)) = f21.f;
    (*(volatile f32 *) (u32) (sp + 68)) = f20.f;
    a0 = (*(volatile s32 *) (u32) (s1 + 28));
    a1 = (s32) ((u32) sp + 0x40U); func_001EDA50(a0, a1);
L_002E225C:;
    v0 = (s32) 0x7f7f0000U;
L_002E2260:;
    v0 = v0 | 0xffff;
    f2.f = (*(volatile f32 *) (u32) (s0 + 8));
    f0.i = (s32) v0;
    fcc = f2.f <= f0.f;
    if (fcc) { a0 = (*(volatile u8 *) (u32) s1); goto L_002E2284; }
    (*(volatile f32 *) (u32) (s1 + 12)) = f0.f; goto L_002E22BC;
L_002E2284:;
    v0 = (s32) 0x40000000U;
    v1 = (s32) 0x3b0000U;
    f1.i = (s32) v0;
    v1 = (s32) ((u32) v1 + 0x33a0U);
    v0 = (s32) ((u32) a0 << 3);
    v0 = (s32) ((u32) v1 + (u32) v0);
    f0.f = (*(volatile f32 *) (u32) v0);
    f0.f = f1.f * f0.f;
    fcc = f2.f < f0.f;
    if (!fcc) { f0.i = f2.i; goto L_002E22B8; }
    goto L_002E22B8;
L_002E22B8:;
    (*(volatile f32 *) (u32) (s1 + 12)) = f0.f;
L_002E22BC:;
    v0 = (s32) 0x7f7f0000U;
    f2.f = (*(volatile f32 *) (u32) (s0 + 12));
    v0 = v0 | 0xffff;
    f0.i = (s32) v0;
    fcc = f2.f <= f0.f;
    if (fcc) { a0 = (*(volatile u8 *) (u32) s1); goto L_002E22E4; }
    (*(volatile f32 *) (u32) (s1 + 16)) = f0.f; goto L_002E231C;
L_002E22E4:;
    v0 = (s32) 0x40000000U;
    v1 = (s32) 0x3b0000U;
    f1.i = (s32) v0;
    v1 = (s32) ((u32) v1 + 0x33a4U);
    v0 = (s32) ((u32) a0 << 3);
    v0 = (s32) ((u32) v1 + (u32) v0);
    f0.f = (*(volatile f32 *) (u32) v0);
    f0.f = f1.f * f0.f;
    fcc = f2.f < f0.f;
    if (!fcc) { f0.i = f2.i; goto L_002E2318; }
    goto L_002E2318;
L_002E2318:;
    (*(volatile f32 *) (u32) (s1 + 16)) = f0.f;
L_002E231C:;
    v1 = (s32) 0x3b0000U;
    a1 = (*(volatile s32 *) (u32) s1);
    v1 = (s32) ((u32) v1 + 0x33a0U);
    v0 = a1 & 0xff;
    (*(volatile u32 *) (u32) (sp + 108)) = (u32) 0;
    a0 = (s32) ((u32) v0 << 3);
    (*(volatile u32 *) (u32) (sp + 104)) = (u32) 0;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = a1 & 0x100;
    f1.f = (*(volatile f32 *) (u32) v1);
    (*(volatile u32 *) (u32) (sp + 84)) = (u32) 0;
    f0.f = (*(volatile f32 *) (u32) (v1 + 4));
    (*(volatile u32 *) (u32) (sp + 80)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 120)) = f1.f;
    { s32 c_ = v0 == 0; (*(volatile f32 *) (u32) (sp + 124)) = f0.f; if (c_) goto L_002E2374; }
    v0 = (*(volatile s32 *) (u32) (s1 + 28));
    a0 = (*(volatile s32 *) (u32) (v0 + 72));
    a1 = 0; v0 = func_001EDC80(a0, a1);
    f0.f = (*(volatile f32 *) (u32) (s1 + 12)); goto L_002E2384;
L_002E2374:;
    a0 = (*(volatile s32 *) (u32) (s1 + 28));
    a1 = 0; v0 = func_001EDC80(a0, a1);
    f0.f = (*(volatile f32 *) (u32) (s1 + 12));
L_002E2384:;
    a0 = v0;
    f20.f = (*(volatile f32 *) (u32) (sp + 124));
    a1 = (s32) ((u32) sp + 0x50U);
    (*(volatile f32 *) (u32) (sp + 88)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 92)) = f20.f; func_001EF370(a0, a1);
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = v0 & 0x100;
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) (s1 + 28)); goto L_002E23C4; }
    v0 = (*(volatile s32 *) (u32) (s1 + 28));
    a0 = (*(volatile s32 *) (u32) (v0 + 72));
    a1 = 1; v0 = func_001EDC80(a0, a1);
    s0 = v0; goto L_002E23D0;
L_002E23C4:;
    a1 = 1; v0 = func_001EDC80(a0, a1);
    s0 = v0;
L_002E23D0:;
    (*(volatile u32 *) (u32) (sp + 96)) = (u32) 0;
    a0 = s0;
    f0.f = (*(volatile f32 *) (u32) (s1 + 16));
    a1 = (s32) ((u32) sp + 0x60U);
    f0.f = f0.f - f20.f;
    (*(volatile f32 *) (u32) (sp + 100)) = f0.f; func_001EF860(a0, a1);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x50U); func_001EF370(a0, a1);
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = v0 & 0x100;
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) (s1 + 28)); goto L_002E2420; }
    v0 = (*(volatile s32 *) (u32) (s1 + 28));
    a0 = (*(volatile s32 *) (u32) (v0 + 72));
    a1 = 2; v0 = func_001EDC80(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (s1 + 16)); goto L_002E242C;
L_002E2420:;
    a1 = 2; v0 = func_001EDC80(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (s1 + 16));
L_002E242C:;
    v1 = (s32) 0x40000000U;
    f0.i = (s32) 0;
    a0 = v0;
    f2.i = (s32) v1;
    a1 = (s32) ((u32) sp + 0x50U);
    acc = f0.f + f1.f;
    f0.f = acc - f2.f * f20.f;
    (*(volatile f32 *) (u32) (sp + 92)) = f0.f; func_001EF370(a0, a1);
    return;
}
