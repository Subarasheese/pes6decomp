/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 dpadd(s64, s64);
s64 dpcmp(s64, s64);
s64 dpmul(s64, s64, s64, s64, s64, s64);
s64 dpsub(s64, s64);
s64 func_0011EF28(s64, s64, s64, s64, s64, s64);
s64 func_00120108(s64);

s64 __fixunsdfdi(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 v0 = 0, s0 = 0, s1 = 0, s2 = 0;

    a1 = 0;
    s1 = a0;
    v0 = dpcmp(a0, a1);
    a0 = s1;
    a1 = 0xf7c0;
    a1 = (s64) ((u64) a1 << 46);
    { s32 c_ = v0 < 0; v0 = 0; if (c_) goto L_0011F1B8; }
    v0 = dpmul(a0, a1, a2, a3, a4, a5);
    a0 = v0;
    v0 = func_00120108(a0);
    s0 = (s64) ((u64) v0 << 32);
    v0 = s0 & 0x1;
    a0 = (s64) ((u64) s0 >> 1);
    { s32 c_ = s0 < 0; a0 = v0 | a0; if (c_) goto L_0011F128; }
    a0 = s0; v0 = func_0011EF28(a0, a1, a2, a3, a4, a5);
    goto L_0011F140;
L_0011F128:;
    v0 = func_0011EF28(a0, a1, a2, a3, a4, a5);
    a0 = v0;
    a1 = a0;
    v0 = dpadd(a0, a1);
L_0011F140:;
    a0 = s1;
    a1 = v0;
    v0 = dpsub(a0, a1);
    s2 = 0;
    s1 = v0;
    a1 = s2;
    a0 = s1;
    v0 = dpcmp(a0, a1);
    a0 = s1;
    a1 = s1;
    if (v0 >= 0) goto L_0011F1A0;
    a0 = s2;
    v0 = dpsub(a0, a1);
    a0 = v0;
    v0 = func_00120108(a0);
    v0 = (s64) ((u64) v0 << 32);
    v0 = (s64) ((u64) v0 >> 32);
    s0 = (s64) ((u64) s0 - (u64) v0); goto L_0011F1B4;
L_0011F1A0:;
    v0 = func_00120108(a0);
    v0 = (s64) ((u64) v0 << 32);
    v0 = (s64) ((u64) v0 >> 32);
    s0 = (s64) ((u64) s0 + (u64) v0);
L_0011F1B4:;
    v0 = s0;
L_0011F1B8:;
    return v0;
}
