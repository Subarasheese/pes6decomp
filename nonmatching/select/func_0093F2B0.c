/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0023EA10(s32, s32, s32, s32);
void func_002DF0A0(s32, s32);
void func_002DF6E0(s32, f32);
void func_008B31E0(s32, s32, s32, s32);
f32 func_008B32A0(s32, s32, s32, s32);
void func_008B32B0(s32, s32, s32, s32);

void func_0093F2B0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    f32 acc = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x960000U;
    v1 = (*(volatile s8 *) (u32) (v0 + 31384));
    v0 = 4;
    if (v1 == v0) { v0 = (*(volatile s32 *) (u32) (gp + -18332)); goto L_0093F2E4; }
    v0 = 3;
    if (v1 == v0) goto L_0093F2E0;
    v0 = (*(volatile s32 *) (u32) (gp + -18332)); goto L_0093F308;
L_0093F2E0:;
    v0 = (*(volatile s32 *) (u32) (gp + -18332));
L_0093F2E4:;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = 3; func_008B31E0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -18332));
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 3; func_008B31E0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -18332)); goto L_0093F328;
L_0093F308:;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = 2; func_008B31E0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -18332));
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 2; func_008B31E0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -18332));
L_0093F328:;
    a1 = (s32) ((u32) sp + 0x20U);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a2 = 1; func_008B32B0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -18332));
    a1 = (s32) ((u32) sp + 0x10U);
    a0 = (*(volatile s32 *) (u32) v0);
    a2 = 0; func_008B32B0(a0, a1, a2, a3);
    f0.f = (*(volatile f32 *) (u32) (sp + 32));
    v0 = (s32) 0x960000U;
    v0 = (*(volatile s8 *) (u32) (v0 + 31385));
    f1.f = (*(volatile f32 *) (u32) (sp + 24));
    f3.f = (*(volatile f32 *) (u32) (sp + 36));
    a0 = (*(volatile s32 *) (u32) (gp + -18336));
    (*(volatile f32 *) (u32) (sp + 48)) = f0.f;
    a1 = (s32) ((u32) sp + 0x30U);
    f0.i = (s32) v0;
    f4.f = (f32) f0.i;
    f0.f = (*(volatile f32 *) (u32) (sp + 28));
    f5.f = (*(volatile f32 *) (u32) (sp + 44));
    f2.i = (s32) 0;
    (*(volatile f32 *) (u32) (sp + 60)) = f0.f;
    acc = f2.f + f3.f;
    f0.f = acc + f5.f * f4.f;
    (*(volatile f32 *) (u32) (sp + 56)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 52)) = f0.f; func_002DF0A0(a0, a1);
    v0 = (*(volatile s32 *) (u32) (gp + -18332));
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = 1; f0.f = func_008B32A0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18336));
    f12.i = f0.i; func_002DF6E0(a0, f12.f);
    v0 = (s32) 0x960000U;
    v1 = (s32) 0x960000U;
    v0 = (*(volatile s8 *) (u32) (v0 + 31384));
    v1 = (s32) ((u32) v1 + 0xffffe1c0U);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0); func_0023EA10(a0, a1, a2, a3);
    return;
}
