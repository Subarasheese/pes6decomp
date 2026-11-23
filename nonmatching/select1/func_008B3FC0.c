/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001CDA50(s32);
s32 func_00363E60(s32, s32, s32, s32);
void func_008B32B0(s32, s32, s32);

void func_008B3FC0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x510000U;
    v1 = (*(volatile s32 *) (u32) (v0 + 4048));
    v0 = 4;
    if (v1 != v0) { v0 = (s32) 0x10000U; goto L_008B3FFC; }
    a0 = 1; v0 = func_001CDA50(a0);
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 + 0xffffd8d0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0); goto L_008B4000;
L_008B3FFC:;
    v0 = v0 | 0x38c;
L_008B4000:;
    (*(volatile u32 *) (u32) (sp + 32)) = (u32) v0;
    a2 = 4;
    v0 = 5;
    (*(volatile u32 *) (u32) (sp + 36)) = (u32) a2;
    (*(volatile u32 *) (u32) (sp + 40)) = (u32) v0;
    v0 = 6;
    (*(volatile u32 *) (u32) (sp + 44)) = (u32) v0;
    v0 = 7;
    (*(volatile u32 *) (u32) (sp + 48)) = (u32) v0;
    v0 = (s32) 0x8e0000U;
    a0 = (*(volatile s16 *) (u32) (v0 + -15646));
    v0 = (s32) 0x8e0000U;
    (*(volatile u32 *) (u32) (sp + 24)) = (u32) a0;
    v1 = (*(volatile s16 *) (u32) (v0 + -15640));
    v0 = (*(volatile s32 *) (u32) (gp + -20320));
    (*(volatile u32 *) (u32) (sp + 28)) = (u32) v1;
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = (s32) ((u32) sp + 0x40U); func_008B32B0(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 64));
    a0 = (s32) ((u32) sp + 0x10U);
    f0.f = (*(volatile f32 *) (u32) (sp + 68));
    (*(volatile f32 *) (u32) (sp + 16)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 20)) = f0.f; v0 = func_00363E60(a0, a1, a2, a3);
    a0 = (s32) 0x8e0000U;
    v1 = (s32) 0x8e0000U;
    (*(volatile u32 *) (u32) (a0 + -15728)) = (u32) v0;
    a1 = (s32) ((u32) sp + 0x40U);
    a0 = (*(volatile s16 *) (u32) (v1 + -15630));
    v0 = (s32) 0x8e0000U;
    v1 = (*(volatile s16 *) (u32) (v0 + -15624));
    (*(volatile u32 *) (u32) (sp + 24)) = (u32) a0;
    v0 = (*(volatile s32 *) (u32) (gp + -20320));
    (*(volatile u32 *) (u32) (sp + 28)) = (u32) v1;
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a2 = 5; func_008B32B0(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 64));
    a0 = (s32) ((u32) sp + 0x10U);
    f0.f = (*(volatile f32 *) (u32) (sp + 68));
    (*(volatile f32 *) (u32) (sp + 16)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 20)) = f0.f; v0 = func_00363E60(a0, a1, a2, a3);
    a0 = (s32) 0x8e0000U;
    v1 = (s32) 0x8e0000U;
    (*(volatile u32 *) (u32) (a0 + -15724)) = (u32) v0;
    a1 = (s32) ((u32) sp + 0x40U);
    a0 = (*(volatile s16 *) (u32) (v1 + -15614));
    v0 = (s32) 0x8e0000U;
    v1 = (*(volatile s16 *) (u32) (v0 + -15608));
    (*(volatile u32 *) (u32) (sp + 24)) = (u32) a0;
    v0 = (*(volatile s32 *) (u32) (gp + -20320));
    (*(volatile u32 *) (u32) (sp + 28)) = (u32) v1;
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a2 = 6; func_008B32B0(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 64));
    a0 = (s32) ((u32) sp + 0x10U);
    f0.f = (*(volatile f32 *) (u32) (sp + 68));
    (*(volatile f32 *) (u32) (sp + 16)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 20)) = f0.f; v0 = func_00363E60(a0, a1, a2, a3);
    v1 = (s32) 0x8e0000U;
    (*(volatile u32 *) (u32) (v1 + -15720)) = (u32) v0;
    return;
}
