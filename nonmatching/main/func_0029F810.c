/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 memset(s32, s32, s32);

s32 func_0029F810(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    s32 fcc = 0;

    v0 = (s32) 0x5e0000U;
    f0.i = (s32) 0;
    f2.f = (*(volatile f32 *) (u32) (v0 + 8712));
    s0 = (s32) 0x5e0000U;
    s0 = (s32) ((u32) s0 + 0x1f70U);
    (*(volatile u32 *) (u32) s0) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) 0;
    fcc = f2.f <= f0.f;
    (*(volatile u32 *) (u32) (s0 + 20)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 24)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 52)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 56)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 32)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 36)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 40)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 64)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 68)) = (u32) 0;
    { s32 c_ = fcc; (*(volatile u32 *) (u32) (s0 + 72)) = (u32) 0; if (c_) goto L_0029F87C; }
    v1 = (s32) 0x43800000U; goto L_0029F890;
L_0029F87C:;
    fcc = f0.f == f2.f;
    if (fcc) goto L_0029F97C;
    f2.i = f2.i ^ (s32) 0x80000000U;
L_0029F88C:;
    v1 = (s32) 0x43800000U;
L_0029F890:;
    v0 = (s32) 0x44ab0000U;
    f1.i = (s32) v1;
    v0 = v0 | 0xe000;
    f0.i = (s32) v0;
    f1.f = f1.f * f2.f;
    v0 = (s32) 0x5e0000U;
    f0.f = f1.f / f0.f;
    (*(volatile f32 *) (u32) (s0 + 80)) = f0.f;
    f2.f = (*(volatile f32 *) (u32) (v0 + 8712));
    f0.i = (s32) 0;
    fcc = f2.f <= f0.f;
    if (!fcc) goto L_0029F8DC;
    fcc = f0.f == f2.f;
    if (fcc) goto L_0029F988;
    f2.i = f2.i ^ (s32) 0x80000000U;
L_0029F8DC:;
    v1 = (s32) 0x43400000U;
    v0 = (s32) 0x44ab0000U;
    f1.i = (s32) v1;
    v0 = v0 | 0xe000;
    f0.i = (s32) v0;
    a0 = (s32) ((u32) s0 + 0x58U);
    f1.f = f1.f * f2.f;
    a1 = 0;
    a2 = 44;
    f0.f = f1.f / f0.f;
    (*(volatile f32 *) (u32) (s0 + 84)) = f0.f; v0 = memset(a0, a1, a2);
    a0 = (s32) ((u32) s0 + 0x84U);
    a1 = 0;
    a2 = 44; v0 = memset(a0, a1, a2);
    a0 = (s32) ((u32) s0 + 0xb0U);
    a1 = 0;
    a2 = 44; v0 = memset(a0, a1, a2);
    a0 = (s32) ((u32) s0 + 0xdcU);
    a1 = 0;
    a2 = 44; v0 = memset(a0, a1, a2);
    a0 = (s32) ((u32) s0 + 0x108U);
    a1 = 0;
    a2 = 60; v0 = memset(a0, a1, a2);
    a0 = (s32) ((u32) s0 + 0x144U);
    a1 = 0;
    a2 = 60; v0 = memset(a0, a1, a2);
    a0 = (s32) ((u32) s0 + 0x180U);
    a1 = 0;
    a2 = 60; v0 = memset(a0, a1, a2);
    goto L_0029F998;
L_0029F97C:;
    v0 = (s32) 0x5e0000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + 8704)); goto L_0029F88C;
L_0029F988:;
    v0 = (s32) 0x5e0000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + 8704)); goto L_0029F8DC;
L_0029F998:;
    return v0;
}
