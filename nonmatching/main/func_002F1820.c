/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EE580(s64, s64);
void func_001EE5D0(s64, s64);
void func_001EF900(s64, s64);
void func_001F3D10(s64, s64);
void func_001F3D30(s64, s64);

void func_002F1820(s64 a0, s64 a1, f32 fa12, f32 fa13) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 fcc = 0;
    s64 frame[18];
    s64 sp = (s32) (u32) frame;

    v1 = 2;
    s0 = a0;
    a0 = (*(volatile u8 *) (u32) a0);
    f21.i = f12.i;
    { s32 c_ = a0 == v1; f20.i = f13.i; if (c_) goto L_002F18A8; }
    v1 = 1;
    if (a0 == v1) { a0 = (*(volatile s32 *) (u32) (s0 + 32)); goto L_002F1860; }
    goto L_002F1904;
L_002F1860:;
    a1 = (s32) ((u32) sp + 0x80U); func_001F3D30(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 132));
    f0.f = (*(volatile f32 *) (u32) (sp + 140));
    f0.f = f1.f + f0.f;
    fcc = f0.f < f21.f;
    if (!fcc) goto L_002F1888;
    a1 = 0; goto L_002F1898;
L_002F1888:;
    fcc = f20.f < f1.f;
    if (!fcc) { a1 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_002F1898; }
    a1 = 0;
L_002F1898:;
    a0 = (*(volatile s32 *) (u32) (s0 + 32)); func_001F3D10(a0, a1);
    goto L_002F1900;
L_002F18A8:;
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    a1 = (s32) ((u32) sp + 0x70U); func_001EE5D0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    a1 = (s32) ((u32) sp + 0x30U); func_001EE580(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 84));
    f0.f = (*(volatile f32 *) (u32) (sp + 52));
    f2.f = (*(volatile f32 *) (u32) (sp + 116));
    f0.f = f1.f - f0.f;
    f0.f = f2.f + f0.f;
    fcc = f0.f < f21.f;
    if (!fcc) goto L_002F18E8;
    a1 = 0; goto L_002F18F8;
L_002F18E8:;
    fcc = f20.f < f2.f;
    if (!fcc) { a1 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_002F18F8; }
    a1 = 0;
L_002F18F8:;
    a0 = (*(volatile s32 *) (u32) (s0 + 32)); func_001EF900(a0, a1);
L_002F1900:;
L_002F1904:;
    return;
}
