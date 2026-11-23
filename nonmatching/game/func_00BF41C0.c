/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00B29B50(void);
s32 func_00B29CB0(void);
void func_00B798F0(s32, s32, s32);

s32 func_00BF41C0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7177));
    v0 = 5;
    if (v1 == v0) goto L_00BF4254;
L_00BF41E0:;
    v0 = (s32) 0x590000U;
    v1 = 255;
    a2 = (*(volatile u8 *) (u32) (v0 + 7757));
    if (a2 == v1) { s0 = 1; goto L_00BF4200; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a2 / (s32) v0); hi = (s32) ((s32) a2 % (s32) v0); lo = q_; }
    s0 = hi;
L_00BF4200:;
    a0 = (s32) ((u32) sp + 0x2cU);
    a1 = (s32) ((u32) sp + 0x28U); func_00B798F0(a0, a1, a2);
    v1 = (s32) ((u32) s0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) s0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s16 *) (u32) (v0 + 20));
    f1.f = (*(volatile f32 *) (u32) (sp + 44));
    f0.i = (s32) 0;
    f2.i = (s32) v0;
    f2.f = (f32) f2.i;
    f1.f = f2.f * f1.f;
    fcc = f1.f <= f0.f;
    if (!fcc) { v0 = 1; goto L_00BF4284; }
    v0 = 0; goto L_00BF4284;
L_00BF4254:;
    v0 = func_00B29B50();
    if (v0 == 0) goto L_00BF426C;
L_00BF4264:;
    v0 = 0; goto L_00BF4284;
L_00BF426C:;
    v0 = func_00B29CB0();
    if (v0 == 0) goto L_00BF41E0;
    goto L_00BF4264;
L_00BF4284:;
    return v0;
}
