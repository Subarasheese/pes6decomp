/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
void func_001EE630(s32, s32);
void func_001EEAC0(s32, s32);
void func_001EF370(s32, s32);
void func_001EF900(s32, s32);

void func_002F9B80(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    s5 = a2;
    s4 = a3;
    s3 = a4;
    s2 = a5;
    s1 = a6;
    s0 = a0;
    func_001EEAC0(a0, a1);
    a1 = s5;
    a0 = s0; func_001EE630(a0, a1);
    a2 = s1 & 0xffff;
    a0 = s3;
    a1 = (s32) ((u32) sp + 0x80U); v0 = func_001D7A20(a0, a1, a2);
    f20.f = (*(volatile f32 *) (u32) (sp + 128));
    v0 = (s32) ((u32) sp + 0xa8U);
    f21.f = (*(volatile f32 *) (u32) (sp + 132));
    (*(volatile f32 *) (u32) (sp + 168)) = f20.f;
    { s32 c_ = v0 == 0; (*(volatile f32 *) (u32) (sp + 172)) = f21.f; if (c_) goto L_002F9C00; }
    a2 = s2 & 0xffff; goto L_002F9C10;
L_002F9C00:;
    f20.i = (s32) 0;
    f21.i = f20.i;
    a2 = s2 & 0xffff;
L_002F9C10:;
    a0 = s3;
    a1 = (s32) ((u32) sp + 0x90U);
    (*(volatile u32 *) (u32) (sp + 144)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 148)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 152)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) 0; v0 = func_001D7A20(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 144));
    f0.f = (*(volatile f32 *) (u32) (sp + 148));
    f1.f = f1.f - f20.f;
    f0.f = f0.f - f21.f;
    (*(volatile f32 *) (u32) (sp + 144)) = f1.f;
    { s32 c_ = s4 == 0; (*(volatile f32 *) (u32) (sp + 148)) = f0.f; if (c_) goto L_002F9C58; }
    f0.f = (*(volatile f32 *) (u32) s4);
    (*(volatile f32 *) (u32) (sp + 152)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s4 + 4));
    (*(volatile f32 *) (u32) (sp + 156)) = f0.f;
L_002F9C58:;
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x90U); func_001EF370(a0, a1);
    a0 = s0;
    a1 = 1; func_001EF900(a0, a1);
    return;
}
