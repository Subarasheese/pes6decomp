/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Camera_GetViewMatrix(s64, s64, s64, s64);
void sceVu0CopyMatrix(s64, s64);
s64 sceVu0MulMatrix(s64, s64, s64);

void Pes6BonePalette_Build(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s64 frame[18];
    s64 sp = (s32) (u32) frame;

    v0 = 1;
    s3 = a0;
    s2 = a1;
    s1 = a3;
    (*(volatile u32 *) (u32) (gp + -23428)) = (u32) v0;
    (*(volatile u32 *) (u32) (gp + -32572)) = (u32) s2;
    (*(volatile u32 *) (u32) (gp + -23424)) = (u32) s3; v0 = Pes6Camera_GetViewMatrix(a0, a1, a2, a3);
    a0 = (s32) ((u32) sp + 0x50U);
    a1 = v0; sceVu0CopyMatrix(a0, a1);
    f3.f = (*(volatile f32 *) (u32) (sp + 88));
    v1 = 0 < s2;
    f2.f = (*(volatile f32 *) (u32) (sp + 104));
    s0 = 0;
    f1.f = (*(volatile f32 *) (u32) (sp + 120));
    f0.f = (*(volatile f32 *) (u32) (sp + 136));
    (*(volatile f32 *) (u32) (sp + 92)) = f3.f;
    (*(volatile f32 *) (u32) (sp + 108)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 124)) = f1.f;
    { s32 c_ = v1 != 0; (*(volatile f32 *) (u32) (sp + 140)) = f0.f; if (c_) goto L_00141D08; }
L_00141D00:;
    goto L_00141D40;
L_00141D08:;
    v1 = (s64) ((u64) s3 << 36);
    v0 = (s32) 0x20000000U;
    v1 = (s64) ((u64) v1 >> 36);
    a1 = (s32) ((u32) sp + 0x50U);
    a0 = v1 | v0;
    a2 = s1; v0 = sceVu0MulMatrix(a0, a1, a2);
    s0 = (s32) ((u32) s0 + 0x1U);
    s3 = (s32) ((u32) s3 + 0x40U);
    v1 = s0 < s2;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x40U); if (c_) goto L_00141D08; }
    goto L_00141D00;
L_00141D40:;
    return;
}
