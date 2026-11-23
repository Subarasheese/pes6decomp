/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_006557D0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };

    v1 = (s32) 0x660000U;
    a1 = (s32) 0x660000U;
    a3 = (*(volatile s32 *) (u32) (v1 + -6160));
    a0 = (s32) 0x660000U;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (a1 + -4972)) = (u32) a3;
    a2 = (*(volatile s32 *) (u32) (v1 + -6156));
    a1 = (s32) 0x660000U;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (a0 + -4968)) = (u32) a2;
    a3 = (*(volatile s32 *) (u32) (v1 + -6152));
    a0 = (s32) 0x660000U;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (a1 + -4964)) = (u32) a3;
    a2 = (*(volatile s32 *) (u32) (v1 + -6148));
    a1 = (s32) 0x660000U;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (a0 + -4960)) = (u32) a2;
    a3 = (*(volatile s32 *) (u32) (v1 + -6144));
    a0 = (s32) 0x660000U;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (a1 + -4956)) = (u32) a3;
    a2 = (*(volatile s32 *) (u32) (v1 + -6140));
    a1 = (s32) 0x660000U;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (a0 + -4952)) = (u32) a2;
    a4 = (*(volatile s32 *) (u32) (v1 + -6136));
    a0 = (s32) 0x660000U;
    a2 = 1;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (a1 + -4948)) = (u32) a4;
    a3 = (*(volatile s32 *) (u32) (v1 + -6132));
    a1 = (s32) 0x660000U;
    a4 = 0;
    a1 = (s32) ((u32) a1 + 0xffffedc0U);
    (*(volatile u32 *) (u32) (a0 + -4944)) = (u32) a3;
    v1 = (s32) 0x660000U;
    a3 = (s32) 0x660000U;
    (*(volatile u8 *) (u32) (v1 + -4488)) = (u8) a2;
    a3 = (s32) ((u32) a3 + 0xffffeb70U);
    a0 = (s32) 0x660000U;
    v1 = (s32) 0x660000U;
    f3.f = (*(volatile f32 *) (u32) (a0 + -6128));
    f2.f = (*(volatile f32 *) (u32) (v1 + -6124));
    a0 = (s32) 0x660000U;
    v1 = (s32) 0x660000U;
    f1.f = (*(volatile f32 *) (u32) (a0 + -6120));
    f0.f = (*(volatile f32 *) (u32) (v1 + -6116));
L_00655890:;
    if (a4 < 0) goto L_006558B8;
    at = a4 < 8;
    if (at == 0) goto L_006558B8;
    (*(volatile f32 *) (u32) (a3 + 324)) = f3.f;
    (*(volatile u8 *) (u32) (a1 + 184)) = (u8) a2;
    (*(volatile f32 *) (u32) (a3 + 328)) = f2.f;
    (*(volatile f32 *) (u32) (a3 + 332)) = f1.f;
    (*(volatile f32 *) (u32) (a3 + 336)) = f0.f;
L_006558B8:;
    a4 = (s32) ((u32) a4 + 0x1U);
    v1 = a4 < 8;
    { s32 c_ = v1 != 0; a3 = (s32) ((u32) a3 + 0x10U); if (c_) goto L_00655890; }
    v1 = (s32) 0x660000U;
    a0 = (s32) 0x660000U;
    f2.f = (*(volatile f32 *) (u32) (v1 + -6000));
    a1 = (s32) 0x660000U;
    f1.f = (*(volatile f32 *) (u32) (a0 + -5996));
    a2 = (s32) 0x660000U;
    a3 = 0;
    a1 = (s32) ((u32) a1 + 0xffffedc0U);
    v1 = (s32) 0x660000U;
    a2 = (s32) ((u32) a2 + 0xffffeb70U);
    f0.f = (*(volatile f32 *) (u32) (v1 + -5992));
    a0 = 1;
L_006558F8:;
    if (a3 < 0) goto L_00655920;
    at = a3 < 10;
    if (at == 0) goto L_00655920;
    (*(volatile f32 *) (u32) (a2 + 452)) = f2.f;
    (*(volatile u8 *) (u32) (a1 + 184)) = (u8) a0;
    (*(volatile f32 *) (u32) (a2 + 456)) = f1.f;
    (*(volatile f32 *) (u32) (a2 + 460)) = f0.f;
L_00655920:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v1 = a3 < 10;
    { s32 c_ = v1 != 0; a2 = (s32) ((u32) a2 + 0xcU); if (c_) goto L_006558F8; }
    return;
}
