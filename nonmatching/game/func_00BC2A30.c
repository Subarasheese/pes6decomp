/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00BDB8B0(s32);

f32 func_00BC2A30(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 fcc = 0;

    v1 = 1;
    v0 = -1;
    a1 = 12;
    s0 = v1;
    if (a0 != 0) s0 = v0;
    v0 = (s32) 0xc6520000U;
    v0 = v0 | 0x6400;
    f20.i = (s32) v0;
    v0 = a1;
    if (a0 != 0) v0 = v1;
    if (v0 == 0) { a1 = v1; goto L_00BC2A80; }
    if (a0 != 0) a1 = v1;
L_00BC2A80:;
    v1 = (s32) ((u32) a1 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s1 = 0;
    s2 = (s32) ((u32) v0 + (u32) v1);
L_00BC2A9C:;
    a0 = s2; v0 = func_00BDB8B0(a0);
    if (v0 == 0) goto L_00BC2AE8;
    f1.i = (s32) s0;
    f0.f = (*(volatile f32 *) (u32) (s2 + 224));
    f1.f = (f32) f1.i;
    f0.f = f1.f * f0.f;
    fcc = f20.f < f0.f;
    if (!fcc) goto L_00BC2AD8;
    f21.i = f20.i;
    f20.i = f0.i; goto L_00BC2AE8;
L_00BC2AD8:;
    fcc = f21.f < f0.f;
    if (!fcc) goto L_00BC2AE8;
    f21.i = f0.i;
L_00BC2AE8:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 11;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x240U); if (c_) goto L_00BC2A9C; }
    v0 = (s32) 0xc2800000U;
    f1.i = (s32) v0;
    f0.i = (s32) 0;
    f21.f = f21.f - f1.f;
    fcc = f21.f < f0.f;
    if (!fcc) goto L_00BC2B1C;
    f21.i = f0.i;
L_00BC2B1C:;
    f0.i = (s32) s0;
    f0.f = (f32) f0.i;
    f0.f = f21.f * f0.f;
    return f0.f;
}
