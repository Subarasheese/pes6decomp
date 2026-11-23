/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00655EE0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };

    if (a1 != 0) goto L_00655FC0;
    a2 = (s32) 0x660000U;
    v1 = (s32) 0x660000U;
    f3.f = (*(volatile f32 *) (u32) (a2 + -6128));
    a3 = (s32) 0x660000U;
    f2.f = (*(volatile f32 *) (u32) (v1 + -6124));
    a4 = (s32) 0x660000U;
    a5 = 0;
    a3 = (s32) ((u32) a3 + 0xffffedc0U);
    a2 = (s32) 0x660000U;
    a4 = (s32) ((u32) a4 + 0xffffeb70U);
    v1 = (s32) 0x660000U;
    f1.f = (*(volatile f32 *) (u32) (a2 + -6120));
    f0.f = (*(volatile f32 *) (u32) (v1 + -6116));
    a2 = 1;
L_00655F20:;
    if (a5 < 0) goto L_00655F48;
    at = a5 < 8;
    if (at == 0) goto L_00655F48;
    (*(volatile f32 *) (u32) (a4 + 324)) = f3.f;
    (*(volatile u8 *) (u32) (a3 + 184)) = (u8) a2;
    (*(volatile f32 *) (u32) (a4 + 328)) = f2.f;
    (*(volatile f32 *) (u32) (a4 + 332)) = f1.f;
    (*(volatile f32 *) (u32) (a4 + 336)) = f0.f;
L_00655F48:;
    a5 = (s32) ((u32) a5 + 0x1U);
    v1 = a5 < 8;
    { s32 c_ = v1 != 0; a4 = (s32) ((u32) a4 + 0x10U); if (c_) goto L_00655F20; }
    v1 = (s32) 0x660000U;
    a2 = (s32) 0x660000U;
    f2.f = (*(volatile f32 *) (u32) (v1 + -6000));
    a3 = (s32) 0x660000U;
    f1.f = (*(volatile f32 *) (u32) (a2 + -5996));
    a4 = (s32) 0x660000U;
    a5 = 0;
    a3 = (s32) ((u32) a3 + 0xffffedc0U);
    v1 = (s32) 0x660000U;
    a4 = (s32) ((u32) a4 + 0xffffeb70U);
    f0.f = (*(volatile f32 *) (u32) (v1 + -5992));
    a2 = 1;
L_00655F88:;
    if (a5 < 0) goto L_00655FB0;
    at = a5 < 10;
    if (at == 0) goto L_00655FB0;
    (*(volatile f32 *) (u32) (a4 + 452)) = f2.f;
    (*(volatile u8 *) (u32) (a3 + 184)) = (u8) a2;
    (*(volatile f32 *) (u32) (a4 + 456)) = f1.f;
    (*(volatile f32 *) (u32) (a4 + 460)) = f0.f;
L_00655FB0:;
    a5 = (s32) ((u32) a5 + 0x1U);
    v1 = a5 < 10;
    { s32 c_ = v1 != 0; a4 = (s32) ((u32) a4 + 0xcU); if (c_) goto L_00655F88; }
L_00655FC0:;
    a4 = (s32) 0x660000U;
    a3 = (s32) 0x660000U;
    a4 = (s32) ((u32) a4 + 0xffffedc0U);
    { s32 c_ = a1 < 0; a3 = (s32) ((u32) a3 + 0xffffec94U); if (c_) goto L_00656010; }
    at = a1 < 8;
    if (at == 0) goto L_00656010;
    v1 = (s32) ((u32) a1 << 2);
    a2 = (s32) ((u32) a1 << 4);
    v1 = (s32) ((u32) v1 + (u32) a4);
    a1 = (s32) ((u32) a2 + (u32) a3);
    (*(volatile u32 *) (u32) (v1 + 12)) = (u32) 0;
    v1 = 3;
    (*(volatile u32 *) (u32) (a1 + 32)) = (u32) v1;
    (*(volatile u32 *) (u32) (a1 + 36)) = (u32) a0;
    v1 = 1;
    (*(volatile u32 *) (u32) (a1 + 40)) = (u32) 0;
    (*(volatile u8 *) (u32) (a4 + 184)) = (u8) v1;
    (*(volatile u32 *) (u32) (a1 + 44)) = (u32) v1;
L_00656010:;
    return;
}
