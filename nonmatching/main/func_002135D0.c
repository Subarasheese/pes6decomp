/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00212570(s32, s32);
s32 func_002E1540(s32, s32);

void func_002135D0(s32 a0, s32 a1, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    if (a0 == 0) goto L_00213688;
    v1 = (*(volatile u8 *) (u32) (a0 + 9));
    if (v1 == 0) { ; goto L_0021368C; }
    v1 = (s32) 0x7f7f0000U;
    v1 = v1 | 0xffff;
    f20.i = (s32) v1;
    fcc = f12.f <= f20.f;
    if (fcc) goto L_0021361C;
    v1 = (*(volatile u8 *) (u32) (a0 + 8)); goto L_0021363C;
L_0021361C:;
    f20.i = (s32) 0;
    fcc = f12.f < f20.f;
    if (!fcc) { f20.i = f12.i; goto L_00213638; }
    goto L_00213638;
L_00213638:;
    v1 = (*(volatile u8 *) (u32) (a0 + 8));
L_0021363C:;
    v1 = v1 & 0x1;
    if (v1 == 0) { s0 = (*(volatile s8 *) (u32) (a0 + 12)); goto L_00213650; }
    v1 = (*(volatile s8 *) (u32) (a0 + 12));
    s0 = (s32) ((u32) v1 + 0x1U);
L_00213650:;
    { s32 c_ = s0 <= 0; s2 = 0; if (c_) goto L_00213688; }
    s1 = a0;
L_0021365C:;
    a0 = (s32) ((u32) s1 + 0x38U);
    a1 = (s32) ((u32) sp + 0x50U); v0 = func_002E1540(a0, a1);
    a0 = (s32) ((u32) s1 + 0x10U);
    a1 = (s32) ((u32) sp + 0x50U);
    (*(volatile f32 *) (u32) (sp + 88)) = f20.f; func_00212570(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < s0;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x7cU); if (c_) goto L_0021365C; }
L_00213688:;
L_0021368C:;
    return;
}
