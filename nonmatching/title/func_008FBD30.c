/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_008FBD30(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;

    v0 = 12;
    a4 = (*(volatile s32 *) (u32) (a0 + 64));
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    v1 = (s32) ((u32) a4 + 0xcU);
    v1 = (s32) ((u32) v1 + (u32) a1);
    a0 = (s32) ((u32) a4 + (u32) a1);
    v0 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) v1) = (u32) a2;
    (*(volatile u32 *) (u32) (a0 + 16)) = (u32) a3;
    v1 = gp;
    a4 = a0;
    (*(volatile u32 *) (u32) (a4 + 20)) = (u32) v1; return;
}
