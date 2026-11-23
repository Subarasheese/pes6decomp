/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00277B20(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 fcc = 0;
    s64 frame[26];
    s32 sp = (s32) (u32) frame;

    a3 = (s32) 0x3b0000U;
    a3 = (s32) ((u32) a3 + 0xffffb6d0U);
    a2 = (s32) ((u32) sp + 0x80U);
    a1 = 18;
L_00277B34:;
    v1 = (*(volatile s16 *) (u32) a3);
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    v0 = (*(volatile s16 *) (u32) (a3 + 2));
    (*(volatile u16 *) (u32) a2) = (u16) v1;
    (*(volatile u16 *) (u32) (a2 + 2)) = (u16) v0;
    a3 = (s32) ((u32) a3 + 0x4U);
    { s32 c_ = a1 > 0; a2 = (s32) ((u32) a2 + 0x4U); if (c_) goto L_00277B34; }
    a2 = (s32) 0x3b0000U;
    a1 = (s32) ((u32) sp + 0x0U);
    a2 = (s32) ((u32) a2 + 0xffffb720U);
    v1 = 31;
L_00277B64:;
    v0 = (*(volatile s32 *) (u32) a2);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u32 *) (u32) a1) = (u32) v0;
    a2 = (s32) ((u32) a2 + 0x4U);
    a1 = (s32) ((u32) a1 + 0x4U);
    if (v1 > 0) goto L_00277B64;
    a1 = (*(volatile u8 *) (u32) (a0 + 1));
    v0 = (*(volatile u8 *) (u32) (a0 + 2));
    v1 = (s32) ((u32) a1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = (s32) ((u32) v0 << 1);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) sp);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u16 *) (u32) (v0 + 128));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_00277BB8; }
    f0.i = (s32) v0;
    f2.f = (f32) f0.i; goto L_00277BD0;
L_00277BB8:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00277BD0:;
    v1 = (*(volatile u8 *) (u32) a0);
    v0 = (s32) 0x4f000000U;
    f0.i = (s32) v0;
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    f1.f = (*(volatile f32 *) (u32) v0);
    f1.f = f1.f * f2.f;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_00277C08; }
    f0.i = (s32) f1.f;
    v0 = f0.i;
    v0 = v0 & 0xffff; goto L_00277C20;
L_00277C08:;
    v1 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    v0 = v0 | v1;
    v0 = v0 & 0xffff;
L_00277C20:;
    return v0;
}
