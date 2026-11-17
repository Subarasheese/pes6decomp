/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001ED8B0(s32, s32);
void func_001EDA50(s32, s32);
s32 func_001EDC80(s32, s32);
void func_001EF370(s32, s32);
void func_001F3D80(s32, s32, s32);

void func_002E2030(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 fcc = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    v0 = (*(volatile u8 *) (u32) a0);
    f20.f = (*(volatile f32 *) (u32) (a1 + 4));
    f21.f = (*(volatile f32 *) (u32) a1);
    { s32 c_ = v0 == 0; s0 = a1; if (c_) goto L_002E20AC; }
    (*(volatile f32 *) (u32) (s1 + 4)) = f21.f;
    (*(volatile f32 *) (u32) (s1 + 8)) = f20.f;
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = v0 & 0x100;
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) (s1 + 28)); goto L_002E2090; }
    a0 = (*(volatile s32 *) (u32) (s1 + 28));
    a1 = (s32) ((u32) s1 + 0x4U);
    a2 = 0; func_001F3D80(a0, a1, a2);
    v0 = (s32) 0x7f7f0000U; goto L_002E20B0;
L_002E2090:;
    a1 = (s32) ((u32) sp + 0x40U); func_001ED8B0(a0, a1);
    (*(volatile f32 *) (u32) (sp + 64)) = f21.f;
    (*(volatile f32 *) (u32) (sp + 68)) = f20.f;
    a0 = (*(volatile s32 *) (u32) (s1 + 28));
    a1 = (s32) ((u32) sp + 0x40U); func_001EDA50(a0, a1);
L_002E20AC:;
    v0 = (s32) 0x7f7f0000U;
L_002E20B0:;
    v0 = v0 | 0xffff;
    f2.f = (*(volatile f32 *) (u32) (s0 + 8));
    f0.i = (s32) v0;
    fcc = f2.f <= f0.f;
    if (fcc) { a0 = (*(volatile u8 *) (u32) s1); goto L_002E20D4; }
    (*(volatile f32 *) (u32) (s1 + 12)) = f0.f; goto L_002E210C;
L_002E20D4:;
    v0 = (s32) 0x40000000U;
    v1 = (s32) 0x3b0000U;
    f1.i = (s32) v0;
    v1 = (s32) ((u32) v1 + 0x33a0U);
    v0 = (s32) ((u32) a0 << 3);
    v0 = (s32) ((u32) v1 + (u32) v0);
    f0.f = (*(volatile f32 *) (u32) v0);
    f0.f = f1.f * f0.f;
    fcc = f2.f < f0.f;
    if (!fcc) { f0.i = f2.i; goto L_002E2108; }
    goto L_002E2108;
L_002E2108:;
    (*(volatile f32 *) (u32) (s1 + 12)) = f0.f;
L_002E210C:;
    v0 = (s32) 0x7f7f0000U;
    f2.f = (*(volatile f32 *) (u32) (s0 + 12));
    v0 = v0 | 0xffff;
    f0.i = (s32) v0;
    fcc = f2.f <= f0.f;
    if (fcc) { a0 = (*(volatile u8 *) (u32) s1); goto L_002E2134; }
    (*(volatile f32 *) (u32) (s1 + 16)) = f0.f; goto L_002E216C;
L_002E2134:;
    v0 = (s32) 0x40000000U;
    v1 = (s32) 0x3b0000U;
    f1.i = (s32) v0;
    v1 = (s32) ((u32) v1 + 0x33a4U);
    v0 = (s32) ((u32) a0 << 3);
    v0 = (s32) ((u32) v1 + (u32) v0);
    f0.f = (*(volatile f32 *) (u32) v0);
    f0.f = f1.f * f0.f;
    fcc = f2.f < f0.f;
    if (!fcc) { f0.i = f2.i; goto L_002E2168; }
    goto L_002E2168;
L_002E2168:;
    (*(volatile f32 *) (u32) (s1 + 16)) = f0.f;
L_002E216C:;
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = v0 & 0x100;
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) (s1 + 28)); goto L_002E2194; }
    v0 = (*(volatile s32 *) (u32) (s1 + 28));
    a0 = (*(volatile s32 *) (u32) (v0 + 72));
    a1 = 0; v0 = func_001EDC80(a0, a1);
    (*(volatile u32 *) (u32) (sp + 80)) = (u32) 0; goto L_002E21A0;
L_002E2194:;
    a1 = 0; v0 = func_001EDC80(a0, a1);
    (*(volatile u32 *) (u32) (sp + 80)) = (u32) 0;
L_002E21A0:;
    a0 = v0;
    (*(volatile u32 *) (u32) (sp + 84)) = (u32) 0;
    a1 = (s32) ((u32) sp + 0x50U);
    f0.f = (*(volatile f32 *) (u32) (s1 + 12));
    (*(volatile f32 *) (u32) (sp + 88)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s1 + 16));
    (*(volatile f32 *) (u32) (sp + 92)) = f0.f; func_001EF370(a0, a1);
    return;
}
