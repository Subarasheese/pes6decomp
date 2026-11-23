/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0023EA10(s32, s32, s32, s32);
s32 func_00246550(s32);

void func_00931BB0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x960000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + -10800));
    a0 = (*(volatile s32 *) (u32) (gp + -22756));
    v1 = (s32) 0x960000U;
    f2.f = (*(volatile f32 *) (u32) (v1 + -10796));
    (*(volatile f32 *) (u32) (sp + 16)) = f1.f;
    v1 = (s32) 0x960000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + -10792));
    (*(volatile f32 *) (u32) (sp + 20)) = f2.f;
    v1 = (s32) 0x960000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + -10788));
    (*(volatile f32 *) (u32) (sp + 24)) = f0.f;
    v1 = (s32) 0x960000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + -10784));
    (*(volatile f32 *) (u32) (sp + 28)) = f1.f;
    v1 = (s32) 0x960000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + -10780));
    (*(volatile f32 *) (u32) (sp + 32)) = f0.f;
    v1 = (s32) 0x960000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + -10776));
    (*(volatile f32 *) (u32) (sp + 36)) = f1.f;
    v1 = 6;
    { s32 c_ = a0 == v1; (*(volatile f32 *) (u32) (sp + 40)) = f0.f; if (c_) goto L_00931C20; }
    goto L_00931D68;
L_00931C20:;
    a0 = (*(volatile s32 *) (u32) (gp + -18788));
    a1 = 2;
    if (a0 == a1) { a0 = 163; goto L_00931CF8; }
    v1 = 9;
    if (a0 == v1) { a0 = (*(volatile s32 *) (u32) (gp + -18784)); goto L_00931CBC; }
    if (a0 == 0) { a0 = (*(volatile s32 *) (u32) (gp + -18784)); goto L_00931C4C; }
    goto L_00931D64;
L_00931C4C:;
    v1 = 3;
    if (a0 == v1) { v0 = (s32) 0xcb0000U; goto L_00931CAC; }
    if (a0 == a1) { v0 = (s32) 0xcb0000U; goto L_00931C9C; }
    v1 = 1;
    if (a0 == v1) { v0 = (s32) 0xce0000U; goto L_00931C8C; }
    if (a0 == 0) { v0 = (s32) 0xc80000U; goto L_00931C7C; }
    goto L_00931D64;
L_00931C7C:;
    a0 = v0 | 0x18; func_0023EA10(a0, a1, a2, a3);
    goto L_00931D64;
L_00931C8C:;
    a0 = v0 | 0x2c; func_0023EA10(a0, a1, a2, a3);
    goto L_00931D64;
L_00931C9C:;
    a0 = v0 | 0x7; func_0023EA10(a0, a1, a2, a3);
    goto L_00931D64;
L_00931CAC:;
    a0 = v0 | 0x8; func_0023EA10(a0, a1, a2, a3);
    goto L_00931D64;
L_00931CBC:;
    v1 = 1;
    if (a0 == v1) { v0 = (s32) 0xcd0000U; goto L_00931CE8; }
    if (a0 == 0) { v0 = (s32) 0xcd0000U; goto L_00931CD8; }
    goto L_00931D64;
L_00931CD8:;
    a0 = v0 | 0xb; func_0023EA10(a0, a1, a2, a3);
    goto L_00931D64;
L_00931CE8:;
    a0 = v0 | 0xd; func_0023EA10(a0, a1, a2, a3);
    goto L_00931D64;
L_00931CF8:;
    v0 = func_00246550(a0);
    if (v0 != 0) { a0 = 161; goto L_00931D38; }
    v1 = (*(volatile s32 *) (u32) (sp + 36));
    a0 = 161;
    v0 = (*(volatile s32 *) (u32) (sp + 40));
    (*(volatile u32 *) (u32) (sp + 32)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 36)) = (u32) v0; v0 = func_00246550(a0);
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (gp + -18784)); goto L_00931D54; }
    v0 = (*(volatile s32 *) (u32) (sp + 40));
    (*(volatile u32 *) (u32) (sp + 36)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 32)) = (u32) v0; goto L_00931D50;
L_00931D38:;
    v0 = func_00246550(a0);
    if (v0 != 0) goto L_00931D50;
    v0 = (*(volatile s32 *) (u32) (sp + 40));
    (*(volatile u32 *) (u32) (sp + 36)) = (u32) v0;
L_00931D50:;
    v0 = (*(volatile s32 *) (u32) (gp + -18784));
L_00931D54:;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    a0 = (*(volatile s32 *) (u32) (v0 + 16)); func_0023EA10(a0, a1, a2, a3);
L_00931D64:;
L_00931D68:;
    return;
}
