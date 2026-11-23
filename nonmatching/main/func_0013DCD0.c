/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_0013DCD0(s32 a0, s32 a1, s32 a2, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;

    v1 = (s32) 0x500000U;
    a1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffd1b0U);
    a2 = (s32) ((u32) a0 + 0xffffffffU);
    a1 = (s32) ((u32) v1 + (u32) a1);
    v1 = a2 < -4;
    { s32 c_ = v1 != 0; (*(volatile f32 *) (u32) a1) = f12.f; if (c_) goto L_0013DD20; }
    v1 = (s32) 0x500000U;
    a1 = (s32) ((u32) a2 << 2);
    v1 = (s32) ((u32) v1 + 0xffffd180U);
    v1 = (s32) ((u32) v1 + (u32) a1);
L_0013DD00:;
    f0.f = (*(volatile f32 *) (u32) (v1 + 48));
    fcc = f0.f < f12.f;
    if (fcc) { (*(volatile f32 *) (u32) (v1 + 48)) = f12.f; goto L_0013DD10; }
L_0013DD10:;
    a2 = (s32) ((u32) a2 + 0xffffffffU);
    at = a2 < -4;
    { s32 c_ = at == 0; v1 = (s32) ((u32) v1 + 0xfffffffcU); if (c_) goto L_0013DD00; }
L_0013DD20:;
    a1 = (s32) ((u32) a0 + 0x1U);
    at = a1 < 3;
    if (at == 0) goto L_0013DD60;
    v1 = (s32) 0x500000U;
    a0 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + 0xffffd180U);
    v1 = (s32) ((u32) v1 + (u32) a0);
L_0013DD40:;
    f0.f = (*(volatile f32 *) (u32) (v1 + 48));
    fcc = f0.f <= f12.f;
    if (!fcc) goto L_0013DD68;
L_0013DD50:;
    a1 = (s32) ((u32) a1 + 0x1U);
    at = a1 < 3;
    { s32 c_ = at != 0; v1 = (s32) ((u32) v1 + 0x4U); if (c_) goto L_0013DD40; }
L_0013DD60:;
    goto L_0013DD70;
L_0013DD68:;
    (*(volatile f32 *) (u32) (v1 + 48)) = f12.f; goto L_0013DD50;
L_0013DD70:;
    return;
}
