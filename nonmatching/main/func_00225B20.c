/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6SaveData_IsUnavailable(void);

s32 func_00225B20(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;

    s0 = a0; v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) { a0 = (*(volatile s32 *) (u32) (gp + -31684)); goto L_00225B48; }
    s0 = 0; goto L_00225B80;
L_00225B48:;
    if (a0 == 0) { s0 = 0; goto L_00225B80; }
    v1 = s0 & 0xff;
    at = v1 < 80;
    if (at == 0) goto L_00225B7C;
    v0 = 1236;
    at = (s32) 0x40000U;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    at = at | 0x4328;
    v0 = (s32) ((u32) a0 + (u32) v0);
    s0 = (s32) ((u32) v0 + (u32) at); goto L_00225B80;
L_00225B7C:;
    s0 = 0;
L_00225B80:;
    v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) goto L_00225B9C;
    v0 = 0; goto L_00225BA8;
L_00225B9C:;
    if (s0 != 0) { v0 = (*(volatile u8 *) (u32) (s0 + 2)); goto L_00225BA8; }
    v0 = 0;
L_00225BA8:;
    v0 = v0 & 0xff;
    at = (u64) v0 < (u64) (s64) 33;
    if (at == 0) { v0 = 0; goto L_00225BE8; }
    v1 = (s32) 0x3d0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x7d40U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x225bd4U) goto L_00225BD4; if (t_ == 0x225bdcU) goto L_00225BDC; }
L_00225BD4:;
    v0 = 1; goto L_00225BE8;
L_00225BDC:;
    v0 = 0; goto L_00225BE8;
    v0 = 0;
L_00225BE8:;
    return v0;
}
