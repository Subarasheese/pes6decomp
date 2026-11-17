/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_002A8930(void);
void func_002A8940(s32, f32);
s32 func_002A8B80(f32);
void func_002AB750(s32, s32, s32, s32);

void func_002A9E60(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;

    f0.f = func_002A8930();
    v1 = (s32) 0x5e0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 9844));
    if (v1 == 0) goto L_002A9F58;
    f1.i = (s32) 0;
    fcc = f1.f == f0.f;
    if (!fcc) goto L_002A9E9C;
    goto L_002A9F5C;
L_002A9E9C:;
    func_002AB750(a0, a1, a2, a3);
    v1 = (s32) 0x5e0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 9844));
    v1 = v1 & 0x2;
    if (v1 == 0) goto L_002A9F58;
    v0 = (s32) 0x5e0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 9856));
    f1.i = (s32) 0;
    fcc = f1.f == f0.f;
    if (fcc) goto L_002A9F44;
L_002A9ED4:;
    v0 = (s32) 0x5e0000U;
    v1 = (s32) 0x5e0000U;
    f3.f = (*(volatile f32 *) (u32) (v0 + 9864));
    f12.f = (*(volatile f32 *) (u32) (v1 + 9860));
    v0 = (s32) 0x5e0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 9776));
    v1 = (s32) 0x5e0000U;
    f2.f = f12.f - f3.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 9856));
    f1.f = f1.f * f2.f;
    v0 = (s32) 0x5e0000U;
    f0.f = f1.f / f0.f;
    f0.f = f3.f + f0.f;
    fcc = f0.f <= f12.f;
    { s32 c_ = fcc; (*(volatile f32 *) (u32) (v0 + 9848)) = f0.f; if (c_) goto L_002A9F1C; }
    goto L_002A9F20;
L_002A9F1C:;
    f12.i = f0.i;
L_002A9F20:;
    v0 = (s32) 0x5e0000U;
    (*(volatile f32 *) (u32) (v0 + 9848)) = f12.f; func_002A8940(a0, f12.f);
    v0 = (s32) 0x3f000000U;
    f12.i = (s32) v0;
    v0 = func_002A8B80(f12.f);
    goto L_002A9F58;
L_002A9F44:;
    v1 = (s32) 0x5e0000U;
    v0 = (s32) 0x5e0000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 9776));
    (*(volatile f32 *) (u32) (v0 + 9856)) = f0.f; goto L_002A9ED4;
L_002A9F58:;
L_002A9F5C:;
    return;
}
