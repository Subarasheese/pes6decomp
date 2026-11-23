/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
void func_001EE790(s32, s32);
void func_001EEAC0(s32, s32);
void func_001EF370(s32, s32);
void func_001EF900(s32, s32);
s32 func_002D5650(s32, s32, s32, s32);

void func_002F9DF0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    a0 = a1;
    s2 = a3;
    a1 = a2;
    s1 = a4;
    s0 = a5;
    a3 = (s32) ((u32) sp + 0x90U);
    a2 = (s32) ((u32) sp + 0x9cU);
    v0 = func_002D5650(a0, a1, a2, a3);
    a1 = v0;
    a0 = s3; func_001EEAC0(a0, a1);
    a1 = (*(volatile s32 *) (u32) (sp + 156));
    a0 = s3; func_001EE790(a0, a1);
    a0 = s3;
    a1 = 1; func_001EF900(a0, a1);
    if (s2 == 0) { ; goto L_002F9EFC; }
    a2 = s0 & 0xffff;
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x60U); v0 = func_001D7A20(a0, a1, a2);
    f20.f = (*(volatile f32 *) (u32) (sp + 96));
    v0 = (s32) ((u32) sp + 0x88U);
    f21.f = (*(volatile f32 *) (u32) (sp + 100));
    (*(volatile f32 *) (u32) (sp + 136)) = f20.f;
    { s32 c_ = v0 == 0; (*(volatile f32 *) (u32) (sp + 140)) = f21.f; if (c_) goto L_002F9E90; }
    a2 = s1 & 0xffff; goto L_002F9EA0;
L_002F9E90:;
    f20.i = (s32) 0;
    f21.i = f20.i;
    a2 = s1 & 0xffff;
L_002F9EA0:;
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x70U);
    (*(volatile u32 *) (u32) (sp + 112)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 116)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 120)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 124)) = (u32) 0; v0 = func_001D7A20(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 112));
    v0 = (s32) ((u32) sp + 0x90U);
    f0.f = (*(volatile f32 *) (u32) (sp + 116));
    f1.f = f1.f - f20.f;
    f0.f = f0.f - f21.f;
    (*(volatile f32 *) (u32) (sp + 112)) = f1.f;
    { s32 c_ = v0 == 0; (*(volatile f32 *) (u32) (sp + 116)) = f0.f; if (c_) goto L_002F9EEC; }
    f1.f = (*(volatile f32 *) (u32) (sp + 144));
    f0.f = (*(volatile f32 *) (u32) (sp + 148));
    (*(volatile f32 *) (u32) (sp + 120)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 124)) = f0.f;
L_002F9EEC:;
    a0 = s3;
    a1 = (s32) ((u32) sp + 0x70U); func_001EF370(a0, a1);
L_002F9EFC:;
    return;
}
