/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00188910(s32);
s32 func_00AFBAB0(s32);
s32 func_00B29CB0(void);

void func_00B27880(s32 a0) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 hi = 0, lo = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s0 = a0;
    v0 = func_00B29CB0();
    if (v0 == 0) { a0 = (s32) ((u32) sp + 0x30U); goto L_00B278F0; }
    v0 = (s32) 0x44a00000U;
    f20.i = (s32) v0;
L_00B278A8:;
    a0 = (*(volatile u8 *) (u32) s0); v0 = func_00AFBAB0(a0);
    a0 = v0 & 0xff;
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (*(volatile s16 *) (u32) (s0 + 20));
    v1 = (s32) ((u32) v1 - (u32) a0);
    v0 = (s32) ((u32) 0 - (u32) v0);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (s32) ((u32) v0 << 3);
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    f0.f = f20.f + f0.f; goto L_00B2790C;
L_00B278F0:;
    func_00188910(a0);
    v0 = (*(volatile u8 *) (u32) (s0 + 19));
    if (v0 == 0) { f20.f = (*(volatile f32 *) (u32) (sp + 48)); goto L_00B278A8; }
    f20.f = (*(volatile f32 *) (u32) (sp + 60)); goto L_00B278A8;
L_00B2790C:;
    return;
}
