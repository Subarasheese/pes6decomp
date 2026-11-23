/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EEE60(s32, s32);
void func_008BAC60(s32);
void func_008E3950(s32);
void func_008E5BC0(s32, s32);

void func_008E5DE0(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 7664));
    { s32 c_ = v1 < 0; s2 = a0; if (c_) goto L_008E5E18; }
    f0.i = (s32) v1;
    f1.f = (f32) f0.i; goto L_008E5E34;
L_008E5E18:;
    a0 = (s32) ((u32) v1 >> 1);
    v1 = v1 & 0x1;
    a0 = a0 | v1;
    f0.i = (s32) a0;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_008E5E34:;
    a0 = (s32) 0x42700000U;
    v1 = (s32) 0x3f000000U;
    f0.i = (s32) a0;
    f1.f = f1.f / f0.f;
    f0.i = (s32) v1;
    { s32 c_ = s2 == 0; f21.f = f0.f * f1.f; if (c_) goto L_008E5F70; }
    v0 = (s32) 0x3f800000U;
    s1 = 0;
    f0.i = (s32) v0;
    s0 = s2;
    f20.f = f0.f - f21.f;
L_008E5E6C:;
    f3.f = (*(volatile f32 *) (u32) (s0 + 188));
    f2.f = (*(volatile f32 *) (u32) (s0 + 4));
    fcc = f2.f == f3.f;
    if (!fcc) goto L_008E5E98;
    f1.f = (*(volatile f32 *) (u32) (s0 + 8));
    f0.f = (*(volatile f32 *) (u32) (s0 + 192));
    fcc = f1.f == f0.f;
    if (fcc) goto L_008E5F30;
L_008E5E98:;
    f0.f = f2.f - f3.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_008E5EB0; }
L_008E5EB0:;
    at = v0 < 2;
    if (at == 0) goto L_008E5EC8;
    (*(volatile f32 *) (u32) (s0 + 4)) = f3.f; goto L_008E5ED8;
L_008E5EC8:;
    acc = f3.f * f20.f;
    f0.f = acc + f2.f * f21.f;
    (*(volatile f32 *) (u32) (s0 + 4)) = f0.f;
L_008E5ED8:;
    f2.f = (*(volatile f32 *) (u32) (s0 + 192));
    f1.f = (*(volatile f32 *) (u32) (s0 + 8));
    f0.f = f1.f - f2.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_008E5EF8; }
L_008E5EF8:;
    at = v0 < 2;
    if (at == 0) goto L_008E5F10;
    (*(volatile f32 *) (u32) (s0 + 8)) = f2.f; goto L_008E5F20;
L_008E5F10:;
    acc = f2.f * f20.f;
    f0.f = acc + f1.f * f21.f;
    (*(volatile f32 *) (u32) (s0 + 8)) = f0.f;
L_008E5F20:;
    a0 = s2;
    a1 = s1; func_008E5BC0(a0, a1);
L_008E5F30:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 11;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x8U); if (c_) goto L_008E5E6C; }
    a0 = s2; func_008E3950(a0);
    a0 = (s32) ((u32) sp + 0x5cU); func_008BAC60(a0);
    s0 = 0;
L_008E5F54:;
    a0 = (*(volatile s32 *) (u32) (s2 + 1744));
    a1 = (s32) ((u32) sp + 0x5cU); func_001EEE60(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 11;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_008E5F54; }
L_008E5F70:;
    return;
}
