/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 dpadd(s64, s64);
s64 dpmul(s64, s64);
f32 dptofp(s64);
s64 litodp(s64);

f32 __floatdisf(s64 a0) {
    s64 a1 = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };

    v0 = -1;
    v0 = (s64) ((u64) v0 >> 11);
    s1 = a0;
    v0 = (s64) ((u64) s1 + (u64) v0);
    v1 = -1;
    v1 = (s64) ((u64) v1 << 11);
    v1 = (s64) ((u64) v1 >> 10);
    v1 = (u64) v1 < (u64) v0;
    v0 = s1 & 0x7ff;
    if (v1 == 0) goto L_0011F018;
    { s32 c_ = v0 == 0; v0 = 2048; if (c_) goto L_0011F018; }
    s1 = s1 | v0;
L_0011F018:;
    s0 = 0x81e0;
    s0 = (s64) ((u64) s0 << 47);
    a0 = s1 >> 32;
    v0 = litodp(a0);
    a0 = v0;
    a1 = s0;
    v0 = dpmul(a0, a1);
    a1 = s0;
    s0 = (s32) 0xffff0000U;
    s0 = (s64) ((u64) s0 >> 32);
    a0 = v0;
    s0 = s1 & s0; v0 = dpmul(a0, a1);
    s0 = (s32) s0;
    s2 = v0;
    a0 = s0; v0 = litodp(a0);
    a1 = 0x83e0;
    a1 = (s64) ((u64) a1 << 47);
    if (s0 >= 0) goto L_0011F084;
    a0 = v0;
    v0 = dpadd(a0, a1);
L_0011F084:;
    a1 = v0;
    a0 = s2;
    v0 = dpadd(a0, a1);
    a0 = v0;
    f0.f = dptofp(a0);
    return f0.f;
}
