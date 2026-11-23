/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
void func_008B9B00(s32, s32, s32, s32);

void func_008E77B0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 hi = 0, lo = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    s1 = a1;
    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    { s32 c_ = v1 == 0; s0 = a0; if (c_) goto L_008E7844; }
    a0 = (*(volatile s32 *) (u32) (s0 + 16));
    if (a0 == 0) { ; goto L_008E7848; }
    v1 = (*(volatile s32 *) (u32) (s0 + 8));
    if (v1 != 0) { v1 = (s32) ((u32) s0 + 0x14U); goto L_008E77F4; }
    goto L_008E7844;
    v1 = (s32) ((u32) s0 + 0x14U);
L_008E77F4:;
    if (v1 == 0) goto L_008E7844;
    a1 = (s32) ((u32) sp + 0x30U);
    a2 = 257; v0 = func_001D7A20(a0, a1, a2);
    f0.f = (*(volatile f32 *) (u32) (sp + 48));
    v1 = (*(volatile u8 *) (u32) (s0 + 2));
    v0 = s1 & 0xff;
    f1.i = (s32) f0.f;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    a1 = f1.i;
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    f0.f = (*(volatile f32 *) (u32) (sp + 52));
    f0.f = f0.f + f1.f;
    f0.i = (s32) f0.f;
    a2 = f0.i;
    a0 = (*(volatile s32 *) (u32) (s0 + 8)); func_008B9B00(a0, a1, a2, a3);
L_008E7844:;
L_008E7848:;
    return;
}
