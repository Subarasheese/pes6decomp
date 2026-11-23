/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001CEC70(void);
void func_001CECC0(s32);
void func_001D3FF0(s32, s32, s32, s32);

void func_0018E930(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s32 fcc = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    s0 = a0;
    a0 = 5440; func_001CECC0(a0);
    s5 = (s32) ((u32) s0 + 0x30U);
    v0 = 2;
    (*(volatile u32 *) (u32) (sp + 136)) = (u32) v0;
    s4 = 0;
    s3 = (s32) ((u32) sp + 0x7cU);
    s2 = (s32) ((u32) sp + 0x80U);
    s1 = (s32) ((u32) sp + 0x8cU);
    s0 = (s32) ((u32) sp + 0x84U);
L_0018E97C:;
    f1.f = (*(volatile f32 *) (u32) (s5 + 28));
    f0.i = (s32) 0;
    fcc = f1.f <= f0.f;
    if (!fcc) { f3.f = (*(volatile f32 *) (u32) s5); goto L_0018E9B8; }
L_0018E998:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 20;
    { s32 c_ = v0 != 0; s5 = (s32) ((u32) s5 + 0x34U); if (c_) goto L_0018E97C; }
    func_001CEC70();
    goto L_0018EA30;
L_0018E9B8:;
    v0 = (s32) 0x40000000U;
    f2.f = (*(volatile f32 *) (u32) (s5 + 4));
    f0.f = (*(volatile f32 *) (u32) (s5 + 8));
    f1.i = (s32) v0;
    v0 = (s32) ((u32) s5 + 0x24U);
    (*(volatile f32 *) (u32) (sp + 112)) = f3.f;
    (*(volatile f32 *) (u32) (sp + 116)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 120)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s5 + 24));
    f0.f = f1.f * f0.f;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    (*(volatile f32 *) (u32) s3) = f0.f;
    (*(volatile f32 *) (u32) s2) = f0.f;
    v0 = (*(volatile s32 *) (u32) (s5 + 32));
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_0018EA10;
    v0 = (s32) 0x390000U;
    v0 = (s32) ((u32) v0 + 0x7620U);
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_0018EA20;
L_0018EA10:;
    v0 = (s32) 0x390000U;
    v0 = (s32) ((u32) v0 + 0x7600U);
    (*(volatile u32 *) (u32) s0) = (u32) v0;
L_0018EA20:;
    a0 = (s32) ((u32) sp + 0x70U); func_001D3FF0(a0, a1, a2, a3);
    goto L_0018E998;
L_0018EA30:;
    return;
}
