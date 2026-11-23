/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00655B00(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };

    a1 = (s32) 0x660000U;
    a2 = (s32) 0x660000U;
    a3 = 0;
    a1 = (s32) ((u32) a1 + 0xffffedc0U);
    a2 = (s32) ((u32) a2 + 0xffffeb70U);
    a0 = (s32) 0x660000U;
    v1 = (s32) 0x660000U;
    f3.f = (*(volatile f32 *) (u32) (a0 + -6128));
    f2.f = (*(volatile f32 *) (u32) (v1 + -6124));
    a0 = (s32) 0x660000U;
    v1 = (s32) 0x660000U;
    f1.f = (*(volatile f32 *) (u32) (a0 + -6120));
    f0.f = (*(volatile f32 *) (u32) (v1 + -6116));
    a0 = 1;
L_00655B38:;
    if (a3 < 0) goto L_00655B60;
    at = a3 < 8;
    if (at == 0) goto L_00655B60;
    (*(volatile f32 *) (u32) (a2 + 324)) = f3.f;
    (*(volatile u8 *) (u32) (a1 + 184)) = (u8) a0;
    (*(volatile f32 *) (u32) (a2 + 328)) = f2.f;
    (*(volatile f32 *) (u32) (a2 + 332)) = f1.f;
    (*(volatile f32 *) (u32) (a2 + 336)) = f0.f;
L_00655B60:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v1 = a3 < 8;
    { s32 c_ = v1 != 0; a2 = (s32) ((u32) a2 + 0x10U); if (c_) goto L_00655B38; }
    return;
}
