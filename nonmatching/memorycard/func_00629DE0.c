/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B4F10(s32, f32);
void func_001EE890(s32, s32);
void func_001EEAC0(s32, s32);
void func_001EEE60(s32, s32);
void func_001EF370(s32, s32);
void func_001EF900(s32, s32);
void func_0020E310(s32, s32);

void func_00629DE0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };
    volatile union { f32 f; s32 i; } f23 = { 0 };
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x650000U;
    s3 = a0;
    s2 = a2;
    s1 = a3;
    s0 = a4;
    a0 = 5;
    f22.f = (*(volatile f32 *) (u32) (v0 + 30432));
    f3.f = (*(volatile f32 *) (u32) a1);
    f2.f = (*(volatile f32 *) (u32) (a1 + 4));
    v0 = (s32) 0x650000U;
    f23.f = (*(volatile f32 *) (u32) (v0 + 30436));
    f1.f = (*(volatile f32 *) (u32) (a1 + 8));
    f0.f = (*(volatile f32 *) (u32) (a1 + 12));
    v0 = (s32) 0x650000U;
    f20.f = (*(volatile f32 *) (u32) (v0 + 30448));
    (*(volatile f32 *) (u32) (sp + 96)) = f3.f;
    a1 = (s32) ((u32) sp + 0x7cU);
    (*(volatile f32 *) (u32) (sp + 100)) = f2.f;
    v0 = (s32) 0x650000U;
    f21.f = (*(volatile f32 *) (u32) (v0 + 30452));
    (*(volatile f32 *) (u32) (sp + 104)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 108)) = f0.f; func_0020E310(a0, a1);
    v0 = (s32) 0x41c80000U;
    f12.i = (s32) v0;
    a0 = (*(volatile s32 *) (u32) (s3 + 312)); func_001B4F10(a0, f12.f);
    a0 = (*(volatile s32 *) (u32) (s3 + 312));
    a1 = (s32) ((u32) sp + 0x7cU); func_001EEE60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 312));
    a1 = s1; func_001EEAC0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 312));
    a1 = s0; func_001EE890(a0, a1);
    v0 = 1;
    if (s2 == v0) { f1.f = (*(volatile f32 *) (u32) (sp + 96)); goto L_00629EE8; }
    if (s2 == 0) { f1.f = (*(volatile f32 *) (u32) (sp + 96)); goto L_00629EB4; }
    a0 = (*(volatile s32 *) (u32) (s3 + 312)); goto L_00629F1C;
L_00629EB4:;
    f0.f = (*(volatile f32 *) (u32) (sp + 100));
    f1.f = f1.f + f20.f;
    f0.f = f0.f + f21.f;
    (*(volatile f32 *) (u32) (sp + 96)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 100)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s3 + 312));
    a1 = (s32) ((u32) sp + 0x60U); func_001EF370(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 312));
    a1 = 1; func_001EF900(a0, a1);
    goto L_00629F28;
L_00629EE8:;
    f0.f = (*(volatile f32 *) (u32) (sp + 100));
    f1.f = f1.f + f22.f;
    f0.f = f0.f + f23.f;
    (*(volatile f32 *) (u32) (sp + 96)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 100)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s3 + 312));
    a1 = (s32) ((u32) sp + 0x60U); func_001EF370(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 312));
    a1 = 1; func_001EF900(a0, a1);
    goto L_00629F24;
L_00629F1C:;
    a1 = 0; func_001EF900(a0, a1);
L_00629F24:;
L_00629F28:;
    return;
}
