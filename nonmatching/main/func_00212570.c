/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EF860(s32, s32);
void func_001F17C0(s32);
void func_001F3D80(s32, s32, s32);
void func_002E18C0(s32, s32);

void func_00212570(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x40000000U;
    f0.i = (s32) v0;
    v0 = (s32) 0x41c00000U;
    s1 = a0;
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) 0;
    f1.f = (*(volatile f32 *) (u32) (a1 + 4));
    f0.f = f1.f - f0.f;
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 72)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 68)) = f0.f;
    v0 = (*(volatile s32 *) (u32) (a0 + 120));
    { s32 c_ = v0 == 0; s0 = a1; if (c_) goto L_002125C8; }
    f0.f = (*(volatile f32 *) (u32) s0);
    v0 = (s32) 0x41f00000U;
    f1.i = (s32) v0;
    f0.f = f1.f + f0.f; goto L_002125DC;
L_002125C8:;
    f0.f = (*(volatile f32 *) (u32) s0);
    v0 = (s32) 0x3f800000U;
    f1.i = (s32) v0;
    f0.f = f1.f + f0.f;
L_002125DC:;
    (*(volatile f32 *) (u32) (sp + 64)) = f0.f;
    v0 = (*(volatile s32 *) (u32) (s1 + 120));
    if (v0 == 0) { f1.f = (*(volatile f32 *) (u32) (s0 + 8)); goto L_00212600; }
    f1.f = (*(volatile f32 *) (u32) (s0 + 8));
    v0 = (s32) 0x41f00000U;
    f0.i = (s32) v0;
    f0.f = f1.f - f0.f; goto L_00212610;
L_00212600:;
    v0 = (s32) 0x3f800000U;
    f0.i = (s32) v0;
    f0.f = f1.f - f0.f;
L_00212610:;
    (*(volatile f32 *) (u32) (sp + 72)) = f0.f;
    a0 = (s32) ((u32) s1 + 0x4U);
    a1 = (s32) ((u32) sp + 0x40U); func_002E18C0(a0, a1);
    f0.f = (*(volatile f32 *) (u32) s0);
    v0 = (s32) 0x41f00000U;
    a0 = (s32) ((u32) s1 + 0x28U);
    a1 = (s32) ((u32) sp + 0x40U);
    (*(volatile f32 *) (u32) (sp + 64)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 4));
    (*(volatile f32 *) (u32) (sp + 68)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 8));
    (*(volatile f32 *) (u32) (sp + 72)) = f0.f;
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) v0; func_002E18C0(a0, a1);
    v0 = (*(volatile u8 *) (u32) (s1 + 1));
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (s1 + 120)); goto L_00212674; }
    f1.f = (*(volatile f32 *) (u32) (s0 + 12));
    v0 = (s32) 0x41400000U;
    f0.i = (s32) v0;
    f0.f = f1.f - f0.f;
    (*(volatile f32 *) (u32) (sp + 76)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s1 + 120));
L_00212674:;
    if (a0 == 0) { v0 = (*(volatile s32 *) (u32) (s1 + 120)); goto L_002126B8; }
    f1.f = (*(volatile f32 *) (u32) s0);
    v1 = (s32) 0x40800000U;
    f2.i = (s32) v1;
    v0 = (s32) 0x3f800000U;
    f0.i = (s32) v0;
    a1 = (s32) ((u32) sp + 0x30U);
    f1.f = f2.f + f1.f;
    (*(volatile f32 *) (u32) (sp + 48)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (s0 + 4));
    f0.f = f1.f - f0.f;
    (*(volatile u32 *) (u32) (sp + 56)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 52)) = f0.f; func_001EF860(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s1 + 120));
L_002126B8:;
    if (v0 == 0) { v0 = 10; goto L_002126C4; }
    v0 = 40;
L_002126C4:;
    f0.i = (s32) v0;
    v1 = (s32) 0x40a00000U;
    f3.f = (f32) f0.i;
    v0 = (s32) 0x41200000U;
    a1 = (s32) ((u32) sp + 0x40U);
    f2.f = (*(volatile f32 *) (u32) s0);
    f0.i = (s32) v0;
    f1.i = (s32) v1;
    f2.f = f2.f + f3.f;
    (*(volatile f32 *) (u32) (sp + 64)) = f2.f;
    f2.f = (*(volatile f32 *) (u32) (s0 + 4));
    f0.f = f0.f + f3.f;
    f1.f = f2.f - f1.f;
    (*(volatile f32 *) (u32) (sp + 68)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (s0 + 8));
    f0.f = f1.f - f0.f;
    (*(volatile f32 *) (u32) (sp + 72)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 12));
    (*(volatile f32 *) (u32) (sp + 76)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s1 + 112));
    a2 = 0; func_001F3D80(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s1 + 112)); func_001F17C0(a0);
    return;
}
