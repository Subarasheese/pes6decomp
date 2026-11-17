/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00309460(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x5f0000U;
    { s32 c_ = a0 <= 0; v1 = (s32) ((u32) v1 + 0xfffffdc0U); if (c_) goto L_00309488; }
    a2 = (s32) ((u32) a0 << 2);
    a2 = (s32) ((u32) a2 + (u32) v1);
    a3 = (*(volatile s32 *) (u32) (a2 + 12));
    a2 = (*(volatile s32 *) (u32) (a2 + -4));
    if (a3 != a2) goto L_003095EC;
L_00309488:;
    a2 = (s32) ((u32) a0 << 2);
    a4 = (s32) ((u32) a0 + 0x1U);
    a2 = (s32) ((u32) v1 + (u32) a2);
    at = a4 < 4;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) a2) = (u32) a1; if (c_) goto L_003094C8; }
    a2 = (s32) ((u32) a4 << 2);
    a3 = (s32) ((u32) v1 + (u32) a2);
L_003094A8:;
    a4 = (s32) ((u32) a4 + 0x1U);
    (*(volatile u32 *) (u32) a3) = (u32) 0;
    a2 = a4 < 4;
    a3 = (s32) ((u32) a3 + 0x4U);
    if (a2 != 0) goto L_003094A8;
L_003094C8:;
    if (a0 != 0) goto L_003095EC;
    a0 = (s32) 0x3b0000U;
    a2 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (a0 + 29088));
    f1.f = (*(volatile f32 *) (u32) (a2 + 29092));
    a0 = (s32) 0x3b0000U;
    f2.f = (*(volatile f32 *) (u32) (a0 + 29096));
    a2 = (s32) 0x3b0000U;
    (*(volatile f32 *) (u32) sp) = f0.f;
    (*(volatile f32 *) (u32) (sp + 4)) = f1.f;
    a0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (a2 + 29100));
    f1.f = (*(volatile f32 *) (u32) (a0 + 29104));
    (*(volatile f32 *) (u32) (sp + 8)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 12)) = f0.f;
    a2 = (s32) 0x3b0000U;
    a0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (a0 + 29108));
    (*(volatile f32 *) (u32) (sp + 16)) = f1.f;
    a0 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (a0 + 29112));
    (*(volatile f32 *) (u32) (sp + 20)) = f0.f;
    a0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (a0 + 29116));
    (*(volatile f32 *) (u32) (sp + 24)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (a2 + 29120));
    (*(volatile f32 *) (u32) (sp + 28)) = f0.f;
    a0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (a0 + 29124));
    (*(volatile f32 *) (u32) (sp + 32)) = f1.f;
    a2 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (a2 + 29128));
    (*(volatile f32 *) (u32) (sp + 36)) = f0.f;
    a0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (a0 + 29132));
    a2 = (s32) ((u32) a1 << 2);
    (*(volatile f32 *) (u32) (sp + 40)) = f1.f;
    a2 = (s32) ((u32) a2 + (u32) sp);
    (*(volatile f32 *) (u32) (sp + 44)) = f0.f;
    a0 = 8;
    a2 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = a1 == a0; (*(volatile u32 *) (u32) (v1 + 32)) = (u32) a2; if (c_) goto L_003095BC; }
    a0 = 7;
    if (a1 == a0) goto L_003095BC;
    a0 = 6;
    if (a1 == a0) goto L_003095BC;
    a0 = 11;
    if (a1 == a0) goto L_003095AC;
    if (a1 == 0) goto L_003095AC;
    a0 = (s32) 0x800000U; goto L_003095CC;
L_003095AC:;
    a0 = (s32) 0x310000U;
    a0 = (s32) ((u32) a0 + 0xffffc1c0U);
    (*(volatile u32 *) (u32) (v1 + 40)) = (u32) a0; goto L_003095D4;
L_003095BC:;
    a0 = (s32) 0x800000U;
    a0 = (s32) ((u32) a0 + 0x7b40U);
    (*(volatile u32 *) (u32) (v1 + 40)) = (u32) a0; goto L_003095D4;
L_003095CC:;
    a0 = (s32) ((u32) a0 + 0x7bb0U);
    (*(volatile u32 *) (u32) (v1 + 40)) = (u32) a0;
L_003095D4:;
    a0 = (*(volatile s32 *) (u32) (v1 + 52));
    if (a0 != 0) goto L_003095EC;
    a0 = (s32) 0x310000U;
    a0 = (s32) ((u32) a0 + 0xffffc1d0U);
    (*(volatile u32 *) (u32) (v1 + 36)) = (u32) a0;
L_003095EC:;
    return v0;
}
