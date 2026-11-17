/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0098EAD0(s32, s32, s32);
s32 func_00B79380(void);
void func_00B798F0(s32, s32, s32);

s32 func_0098F7E0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s32 fcc = 0;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    a1 = (s32) ((u32) sp + 0x2cU);
    a2 = (s32) ((u32) sp + 0x28U);
    s0 = a0; func_0098EAD0(a0, a1, a2);
    v0 = func_00B79380();
    if (v0 != 0) goto L_0098F868;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (v0 + 16));
    (*(volatile f32 *) (u32) (sp + 36)) = f0.f;
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
L_0098F81C:;
    if (v1 == 0) { f3.f = (*(volatile f32 *) (u32) (sp + 44)); goto L_0098F884; }
    v0 = 1;
L_0098F828:;
    if (v1 != v0) goto L_0098F8B8;
    f3.f = (*(volatile f32 *) (u32) (sp + 44));
    v0 = (s32) 0x40000000U;
    f2.f = (*(volatile f32 *) (u32) (sp + 36));
    f1.i = (s32) v0;
    f0.i = (s32) 0;
    f2.f = f3.f + f2.f;
    f1.f = f2.f / f1.f;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_0098F8B8;
L_0098F860:;
    v0 = 1; goto L_0098F8BC;
L_0098F868:;
    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) sp + 0x24U);
    a2 = (*(volatile u8 *) (u32) (v0 + 7757));
    a1 = (s32) ((u32) sp + 0x20U); func_00B798F0(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s0 + 19)); goto L_0098F81C;
L_0098F884:;
    v0 = (s32) 0x40000000U;
    f2.f = (*(volatile f32 *) (u32) (sp + 36));
    f1.i = (s32) v0;
    f0.i = (s32) 0;
    f2.f = f3.f + f2.f;
    f1.f = f2.f / f1.f;
    fcc = f1.f < f0.f;
    if (fcc) goto L_0098F860;
    v0 = 1; goto L_0098F828;
L_0098F8B8:;
    v0 = 0;
L_0098F8BC:;
    return v0;
}
