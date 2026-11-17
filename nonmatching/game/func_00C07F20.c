/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00952420(s32, s32, s32, s32, f32, f32);
s32 func_00AFBAB0(s32);
s32 func_00BDB8B0(s32);
void func_00C04830(s32, s32, s32);
void func_00C04E00(s32, s32);

s32 func_00C07F20(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;
    f32 acc = 0;

    a2 = 8192;
    a1 = (*(volatile u16 *) (u32) (a0 + 288));
    a3 = (*(volatile s32 *) (u32) (a0 + 292));
    s2 = a0; v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) { a0 = (*(volatile u8 *) (u32) s2); goto L_00C07F58; }
    v0 = 0; goto L_00C0807C;
L_00C07F58:;
    v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v1 == v0) { a0 = 1; goto L_00C07F84; }
    a0 = (*(volatile u8 *) (u32) s2); v0 = func_00AFBAB0(a0);
    v0 = v0 & 0xff;
    a0 = (s32) ((u32) v0 + 0x1U);
L_00C07F84:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s0 = 0;
    s1 = (s32) ((u32) v0 + (u32) v1);
L_00C07FA0:;
    a0 = s1; v0 = func_00BDB8B0(a0);
    if (v0 == 0) goto L_00C08068;
    if (s2 == s1) goto L_00C08068;
    f0.f = (*(volatile f32 *) (u32) (s1 + 232));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45120000U;
    v0 = v0 | 0x8000;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_00C08068;
    v0 = (*(volatile u8 *) (u32) (s1 + 514));
    v0 = v0 < 20;
    if (v0 != 0) goto L_00C08068;
    v1 = (*(volatile s16 *) (u32) (s2 + 20));
    v0 = (s32) 0x44c00000U;
    f1.i = (s32) v0;
    f0.i = (s32) 0;
    f3.f = (*(volatile f32 *) (u32) (s2 + 224));
    acc = f0.f + f1.f;
    f2.f = (*(volatile f32 *) (u32) (s1 + 224));
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f1.f = f0.f * f3.f;
    f0.f = acc + f2.f * f0.f;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00C08068;
    a1 = (*(volatile u16 *) (u32) (s1 + 288));
    a0 = s1;
    a3 = (*(volatile s32 *) (u32) (s1 + 292));
    a2 = 8192; v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) goto L_00C08068;
    a2 = (*(volatile u8 *) (u32) s1);
    a0 = s2;
    a1 = 0; func_00C04830(a0, a1, a2);
    a0 = s1;
    a1 = 2; func_00C04E00(a0, a1);
    v0 = 1; goto L_00C0807C;
L_00C08068:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 10;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x240U); if (c_) goto L_00C07FA0; }
    v0 = 0;
L_00C0807C:;
    return v0;
}
