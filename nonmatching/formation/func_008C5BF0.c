/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
void func_002E4130(s32, s32);
void func_002E4500(s32, s32);
void func_008C1430(s32, f32, f32);

void func_008C5BF0(s32 a0, s32 a1, s32 a2, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = a1;
    s2 = a2;
    s1 = 0;
    s0 = s4;
L_008C5C20:;
    f0.i = (s32) s3;
    a0 = (*(volatile s32 *) (u32) (s0 + 16));
    f12.f = (f32) f0.i;
    f0.i = (s32) s2;
    f13.f = (f32) f0.i; func_008C1430(a0, f12.f, f13.f);
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 4;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_008C5C20; }
    a0 = (*(volatile s32 *) (u32) (s4 + 24));
    if (a0 == 0) { a0 = (*(volatile s32 *) (u32) (s4 + 28)); goto L_008C5C8C; }
    a1 = (s32) ((u32) sp + 0x60U);
    a2 = 267; v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s4 + 4));
    a1 = (s32) ((u32) sp + 0x70U); func_002E4130(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 96));
    f0.f = (*(volatile f32 *) (u32) (sp + 100));
    (*(volatile f32 *) (u32) (sp + 112)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 116)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s4 + 4));
    a1 = (s32) ((u32) sp + 0x70U); func_002E4500(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s4 + 28));
L_008C5C8C:;
    if (a0 == 0) { ; goto L_008C5CCC; }
    a1 = (s32) ((u32) sp + 0x60U);
    a2 = 267; v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s4 + 4));
    a1 = (s32) ((u32) sp + 0x70U); func_002E4130(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 96));
    f0.f = (*(volatile f32 *) (u32) (sp + 100));
    (*(volatile f32 *) (u32) (sp + 112)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 116)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s4 + 4));
    a1 = (s32) ((u32) sp + 0x70U); func_002E4500(a0, a1);
L_008C5CCC:;
    return;
}
