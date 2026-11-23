/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00114090(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00114D28(s32, s32, s32, s32, s32, s32, s32, s32);

void func_00121370(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    s0 = a1; v0 = func_00114090(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 1;
    if (v0 == v1) { a0 = s0; goto L_00121398; }
L_00121390:;
    goto L_0012141C;
L_00121398:;
    func_00114D28(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (s32) 0x370000U;
    a0 = (s32) ((u32) sp + 0x20U);
    f3.f = (*(volatile f32 *) (u32) (v1 + 18752));
    a2 = 7;
    a1 = 0;
    v1 = (s32) 0x370000U;
    f2.f = (*(volatile f32 *) (u32) (v1 + 18756));
    (*(volatile f32 *) (u32) (sp + 32)) = f3.f;
    v1 = (s32) 0x370000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 18760));
    (*(volatile f32 *) (u32) (sp + 36)) = f2.f;
    v1 = (s32) 0x370000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 18764));
    (*(volatile f32 *) (u32) (sp + 40)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 44)) = f0.f;
L_001213DC:;
    v1 = (*(volatile s32 *) (u32) a0);
    if (s0 != v1) { a1 = (s32) ((u32) a1 + 0x1U); goto L_001213F8; }
    v1 = (s32) ((u32) a1 << 3);
    v1 = (s32) ((u32) v1 + (u32) sp);
    a2 = (*(volatile s32 *) (u32) (v1 + 36)); goto L_00121408;
L_001213F8:;
    v1 = a1 < 2;
    { s32 c_ = v1 != 0; a0 = (s32) ((u32) a0 + 0x8U); if (c_) goto L_001213DC; }
L_00121408:;
    v1 = (s32) 0x370000U;
    (*(volatile u32 *) (u32) (v1 + 18720)) = (u32) a2;
    v1 = (s32) 0x400000U;
    (*(volatile u32 *) (u32) (v1 + -20880)) = (u32) a2; goto L_00121390;
L_0012141C:;
    return;
}
