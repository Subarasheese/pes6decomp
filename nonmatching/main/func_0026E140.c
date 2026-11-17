/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00251630(s32, s32);

s32 func_0026E140(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;

    a1 = a0;
    v0 = (s32) ((u32) a1 << 3);
    v1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) 0x88880000U;
    v1 = (s32) ((u32) v1 << 1);
    v0 = v0 | 0x8889;
    { s64 m_ = (s64) (u64) (u32) v0 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = hi;
    a1 = (s32) ((u32) v0 >> 3);
    if (a1 != 0) { a0 = 0; goto L_0026E17C; }
    if (a0 == 0) goto L_0026E178;
    a1 = 1;
L_0026E178:;
    a0 = 0;
L_0026E17C:;
    v0 = func_00251630(a0, a1); return v0;
}
