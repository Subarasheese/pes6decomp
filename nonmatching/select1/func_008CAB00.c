/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EF5B0(s32, s32);
void func_001EF900(s32, s32);
f32 sqrtf(f32);

void func_008CAB00(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s0 = a0;
    if (s0 == 0) { ; goto L_008CACA8; }
    f2.f = (*(volatile f32 *) (u32) a2);
    f3.f = (*(volatile f32 *) (u32) a1);
    fcc = f3.f == f2.f;
    if (!fcc) { v1 = a3 & 0xffff; goto L_008CAB54; }
    f1.f = (*(volatile f32 *) (u32) (a1 + 4));
    f0.f = (*(volatile f32 *) (u32) (a2 + 4));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_008CAB50;
    a1 = 0; func_001EF900(a0, a1);
    goto L_008CACA4;
L_008CAB50:;
    v1 = a3 & 0xffff;
L_008CAB54:;
    if (v1 == 0) goto L_008CACA4;
    f0.f = f2.f - f3.f;
    f2.f = (*(volatile f32 *) (u32) (a2 + 4));
    f1.f = (*(volatile f32 *) (u32) (a1 + 4));
    f1.f = f2.f - f1.f;
    acc = f1.f * f1.f;
    f0.f = acc + f0.f * f0.f;
    f3.f = sqrtf(f0.f);
    if (a3 < 0) goto L_008CAB94;
    f0.i = (s32) a3;
    f0.f = (f32) f0.i; goto L_008CABB0;
L_008CAB94:;
    v1 = (s32) ((u32) a3 >> 1);
    v0 = a3 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_008CABB0:;
    f0.f = f0.f * f1.f;
    v0 = (s32) 0x40000000U;
    f1.f = f0.f / f3.f;
    f0.i = (s32) v0;
    f5.f = f1.f / f0.f;
    f2.f = (*(volatile f32 *) (u32) a1);
    f0.f = (*(volatile f32 *) (u32) a2);
    f0.f = f0.f - f2.f;
    { s32 c_ = a3 < 0; f1.i = f0.i ^ (s32) 0x80000000U; if (c_) goto L_008CABE8; }
    f0.i = (s32) a3;
    f0.f = (f32) f0.i; goto L_008CAC04;
L_008CABE8:;
    v1 = (s32) ((u32) a3 >> 1);
    v0 = a3 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_008CAC04:;
    f0.f = f0.f * f1.f;
    v0 = (s32) 0x40000000U;
    a0 = s0;
    f1.f = f0.f / f3.f;
    f0.i = (s32) v0;
    f4.f = f1.f / f0.f;
    f0.f = f2.f + f5.f;
    (*(volatile f32 *) (u32) (sp + 32)) = f0.f;
    f1.f = (*(volatile f32 *) (u32) (a1 + 4));
    f0.f = f1.f + f4.f;
    (*(volatile u32 *) (u32) (sp + 40)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 44)) = (u32) 0;
    f2.f = f1.f - f4.f;
    (*(volatile f32 *) (u32) (sp + 36)) = f0.f;
    f1.f = (*(volatile f32 *) (u32) a2);
    f0.f = f1.f + f5.f;
    (*(volatile f32 *) (u32) (sp + 48)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a2 + 4));
    f1.f = f1.f - f5.f;
    (*(volatile u32 *) (u32) (sp + 56)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) 0;
    f3.f = f0.f + f4.f;
    (*(volatile f32 *) (u32) (sp + 52)) = f3.f;
    f3.f = (*(volatile f32 *) (u32) a1);
    f0.f = f0.f - f4.f;
    a1 = 1;
    (*(volatile u32 *) (u32) (sp + 72)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) 0;
    f3.f = f3.f - f5.f;
    (*(volatile u32 *) (u32) (sp + 88)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 92)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 68)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 80)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 84)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 64)) = f3.f; func_001EF900(a0, a1);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x20U); func_001EF5B0(a0, a1);
L_008CACA4:;
L_008CACA8:;
    return;
}
