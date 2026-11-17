/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002D4BE0(s64, s64, s64, s64);
s64 func_00305E60(s64, s64);
s64 func_00BDA1E0(s64, s64, s64, s64);

s64 func_00301F90(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;

    s2 = a0;
    s0 = (*(volatile s32 *) (u32) (a0 + 24));
    v0 = (*(volatile s32 *) (u32) (s0 + 28));
    { s32 c_ = v0 == 0; s1 = 0; if (c_) goto L_00301FD8; }
    v0 = func_00BDA1E0(a0, a1, a2, a3);
    if (v0 != 0) goto L_00301FDC;
    v0 = (*(volatile s32 *) (u32) (s0 + 28));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u32 *) (u32) (s0 + 28)) = (u32) v0; goto L_00301FDC;
L_00301FD8:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00301FDC:;
    if (s1 == 0) { v0 = 0; goto L_00302010; }
    v1 = (*(volatile s32 *) (u32) (s0 + 36));
    v0 = (s32) ((u32) gp + 0xffff830cU);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002D4BE0(a0, a1, a2, a3);
    a1 = (s32) 0x300000U;
    a0 = s2;
    a1 = (s32) ((u32) a1 + 0x2030U); v0 = func_00305E60(a0, a1);
    v0 = 1;
L_00302010:;
    return v0;
}
