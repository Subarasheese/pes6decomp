/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002B5D20(s64, s64, s64, s64);
void func_009B6420(s64);

void func_00BCE150(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, t4 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;

    v0 = (s32) 0xcc0000U;
    t4 = 0;
    a7 = (*(volatile u16 *) (u32) (v0 + -22012));
    a6 = (*(volatile s32 *) (u32) (gp + -32228));
    v0 = (s32) 0xcc0000U;
    a0 = a7;
    a5 = (*(volatile u16 *) (u32) (v0 + -22014));
    v0 = (s32) 0x45120000U;
    v1 = 3;
    v0 = v0 | 0x8000;
    a4 = 300;
    f0.i = (s32) v0;
    a3 = 852;
    a1 = 4;
L_00BCE190:;
    if ((u32) a4 != 0) { s64 q_ = (s32) ((u32) a0 / (u32) a4); hi = (s32) ((u32) a0 % (u32) a4); lo = q_; }
    v0 = hi;
    a0 = v0 & 0xffff;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) a3; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    a2 = (s32) ((u32) a6 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) (a2 + 846));
    if (v0 == a1) goto L_00BCE200;
    if (v0 == v1) goto L_00BCE200;
    v0 = (*(volatile s16 *) (u32) (a2 + 844));
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00BCE1C4; }
L_00BCE1C4:;
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    fcc = f1.f < f0.f;
    if (fcc) goto L_00BCE200;
    v0 = a0 & 0xffff;
    if (v0 == a5) goto L_00BCE200;
    v0 = (s32) ((u32) a0 + 0x1U);
    t4 = (s32) ((u32) t4 + 0x1U);
    a0 = v0 & 0xffff;
    v0 = t4 < 225;
    if (v0 != 0) goto L_00BCE190;
L_00BCE200:;
    a1 = a7 & 0xffff;
    a2 = 0;
    v1 = (s64) ((u64) 0 + (u64) (s64) 299);
L_00BCE20C:;
    v0 = a0 & 0xffff;
    if (v0 == a1) goto L_00BCE240;
    if (v0 != 0) goto L_00BCE228;
    a0 = v1; goto L_00BCE230;
L_00BCE228:;
    v0 = (s32) ((u32) a0 + 0xffffffffU);
    a0 = v0 & 0xffff;
L_00BCE230:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v0 = a2 < 75;
    if (v0 != 0) goto L_00BCE20C;
L_00BCE240:;
    func_009B6420(a0);
    func_002B5D20(a0, a1, a2, a3);
    return;
}
