/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6BonePalette_IsActive(void);
s32 Pes6Camera_GetViewMatrix(s32, s32, s32, s32);
s32 sceVu0MulMatrix(s32, s32, s32);

void func_001423D0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s64 frame[26];
    s32 sp = (s32) (u32) frame;

    s1 = (*(volatile s32 *) (u32) (a0 + 12));
    s0 = (*(volatile s32 *) (u32) (a1 + 28));
    s2 = a2; v0 = Pes6Camera_GetViewMatrix(a0, a1, a2, a3);
    a1 = v0;
    a0 = (s32) ((u32) sp + 0x90U);
    a2 = s2; v0 = sceVu0MulMatrix(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x50U);
    a1 = (s32) ((u32) sp + 0x90U);
    a2 = s0; v0 = sceVu0MulMatrix(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (gp + -23412));
    a2 = (s32) ((u32) sp + 0x50U);
    a0 = (s32) ((u32) v0 + 0x50U);
    a1 = (s32) ((u32) v0 + 0x90U); v0 = sceVu0MulMatrix(a0, a1, a2);
    f3.f = (*(volatile f32 *) (u32) (sp + 152));
    f2.f = (*(volatile f32 *) (u32) (sp + 168));
    f1.f = (*(volatile f32 *) (u32) (sp + 184));
    f0.f = (*(volatile f32 *) (u32) (sp + 200));
    (*(volatile f32 *) (u32) (sp + 156)) = f3.f;
    (*(volatile f32 *) (u32) (sp + 172)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 188)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 204)) = f0.f; v0 = Pes6BonePalette_IsActive();
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -23412)); goto L_00142490; }
    v1 = (*(volatile s32 *) (u32) (gp + -23412));
    { s32 c_ = s1 == 0; s2 = (*(volatile s32 *) (u32) v1); if (c_) goto L_001424C0; }
L_00142464:;
    a0 = s2;
    a2 = s0;
    a1 = (s32) ((u32) sp + 0x90U);
    s2 = (s32) ((u32) s2 + 0x40U);
    s0 = (s32) ((u32) s0 + 0x40U); v0 = sceVu0MulMatrix(a0, a1, a2);
    s1 = (s32) ((u32) s1 + 0xffffffffU);
    if (s1 != 0) goto L_00142464;
    goto L_001424C0;
L_00142490:;
    { s32 c_ = s1 == 0; s3 = (*(volatile s32 *) (u32) v1); if (c_) goto L_001424C0; }
L_00142498:;
    a0 = s3;
    a2 = s0;
    a1 = s2;
    s3 = (s32) ((u32) s3 + 0x40U);
    s0 = (s32) ((u32) s0 + 0x40U); v0 = sceVu0MulMatrix(a0, a1, a2);
    s1 = (s32) ((u32) s1 + 0xffffffffU);
    if (s1 != 0) goto L_00142498;
L_001424C0:;
    return;
}
