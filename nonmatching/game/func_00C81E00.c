/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
void func_001EE580(s32, s32);
void func_001EF5B0(s32, s32);
s32 func_0020C980(void);
s32 func_0020D080(s32, s32);
void func_002D57E0(s32, s32, s32, s32);
s32 func_002F9370(s32);
void func_002FA040(s32, s32, s32, s32, s32, s32, s32);
void func_002FA170(s32, s32, s32, s32, s32, s32);
s32 func_00C94530(void);

void func_00C81E00(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s64 frame[28];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0xcd0000U;
    v1 = (s32) 0xcd0000U;
    s5 = a0;
    s4 = a2;
    s2 = (*(volatile s32 *) (u32) (v0 + -15884));
    s1 = (*(volatile s32 *) (u32) (v1 + -15880));
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -15920));
    s3 = a3; v0 = func_002F9370(a0);
    { s32 c_ = s2 >= 0; s0 = v0; if (c_) goto L_00C81F20; }
    v0 = func_00C94530();
    s1 = v0;
    a0 = s0;
    a2 = s1 & 0xffff;
    a1 = (s32) ((u32) sp + 0xc0U); v0 = func_001D7A20(a0, a1, a2);
    a2 = s4 & 0xffff;
    a0 = s0;
    a1 = (s32) ((u32) sp + 0xb0U); v0 = func_001D7A20(a0, a1, a2);
    f3.f = (*(volatile f32 *) (u32) (sp + 176));
    f2.f = (*(volatile f32 *) (u32) (sp + 184));
    f0.f = (*(volatile f32 *) (u32) (sp + 188));
    f1.f = (*(volatile f32 *) (u32) (sp + 192));
    f2.f = f3.f + f2.f;
    (*(volatile f32 *) (u32) (sp + 220)) = f0.f;
    f0.f = f2.f - f1.f;
    (*(volatile f32 *) (u32) (sp + 216)) = f0.f; v0 = func_0020C980();
    a1 = v0;
    a2 = s0;
    a3 = s1;
    a4 = s3;
    a0 = s5;
    a5 = 1;
    a6 = (s32) ((u32) sp + 0xd8U); func_002FA040(a0, a1, a2, a3, a4, a5, a6);
    f1.f = (*(volatile f32 *) (u32) (sp + 196));
    a0 = s5;
    f0.f = (*(volatile f32 *) (u32) (sp + 180));
    f0.f = f1.f - f0.f;
    f0.i = (s32) f0.f;
    s0 = f0.i;
    a1 = (s32) ((u32) sp + 0x70U); func_001EE580(a0, a1);
    f0.i = (s32) s0;
    a0 = 0;
    f1.f = (f32) f0.i;
    v1 = (s32) ((u32) sp + 0x70U);
L_00C81EF0:;
    f0.f = (*(volatile f32 *) (u32) (v1 + 4));
    a0 = (s32) ((u32) a0 + 0x1U);
    v0 = (u64) a0 < (u64) (s64) 4;
    f0.f = f0.f - f1.f;
    (*(volatile f32 *) (u32) (v1 + 4)) = f0.f;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x10U); if (c_) goto L_00C81EF0; }
    a0 = s5;
    a1 = (s32) ((u32) sp + 0x70U); func_001EF5B0(a0, a1);
    goto L_00C81F48;
L_00C81F20:;
    a0 = s1;
    a1 = s2; v0 = func_0020D080(a0, a1);
    a1 = v0;
    a2 = s0;
    a3 = s4;
    a4 = s3;
    a0 = s5;
    a5 = 1; func_002FA170(a0, a1, a2, a3, a4, a5);
L_00C81F48:;
    v0 = (s32) 0xcd0000U;
    a2 = (s32) 0xcb0000U;
    a1 = (*(volatile s32 *) (u32) (v0 + -15892));
    a0 = s5;
    a2 = (s32) ((u32) a2 + 0xffff87d0U);
    a3 = 8; func_002D57E0(a0, a1, a2, a3);
    return;
}
