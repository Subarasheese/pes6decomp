/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7C00(s64, s64);
void func_001D7C20(s64, s64, s64, s64);
void func_001D7D60(s64, s64);
void func_001D7D80(s64, s64, s64, s64);
void func_001D7E40(s64, s64, s64, s64);
s64 func_001D7F90(s64, s64, s64, s64);

s64 func_008B3310(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;

    s5 = a1;
    s4 = a2;
    s3 = a3;
    s2 = a4;
    s1 = a5;
    v0 = func_001D7F90(a0, a1, a2, a3);
    s0 = v0;
    a1 = s5;
    a0 = s0; func_001D7E40(a0, a1, a2, a3);
    a1 = (s64) ((u64) s4 << 48);
    a0 = s0;
    a1 = a1 >> 48; func_001D7D80(a0, a1, a2, a3);
    a1 = s3;
    a0 = s0; func_001D7C20(a0, a1, a2, a3);
    a1 = s1 & 0xff;
    a0 = s0; func_001D7D60(a0, a1);
    a1 = s2;
    a0 = s0; func_001D7C00(a0, a1);
    v0 = s0;
    return v0;
}
