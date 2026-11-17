/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_00188980(void);
void func_00288590(void);
void memset(s32, s32, s32);

void func_0099FF00(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    f32 acc = 0;

    func_00288590();
    f0.f = func_00188980();
    v0 = (s32) 0x590000U;
    a0 = (s32) 0x42c80000U;
    f2.i = (s32) a0;
    v1 = (s32) 0x40000000U;
    f3.f = (*(volatile f32 *) (u32) (v0 + 7172));
    a1 = 0;
    f0.f = f0.f - f2.f;
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0x2380U);
    a2 = 288;
    f1.i = (s32) v1;
    f0.f = f3.f * f0.f;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f2.f = f0.f / f2.f;
    f0.i = (s32) 0;
    acc = f0.f + f3.f;
    f0.f = acc + f1.f * f2.f;
    (*(volatile f32 *) (u32) (v0 + 248)) = f0.f; memset(a0, a1, a2);
    return;
}
