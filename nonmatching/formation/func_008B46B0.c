/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7D80(s64, s64, s64, s64);

s64 func_008B46B0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0;
    s64 hi = 0, lo = 0;

    v1 = (s32) 0x8f0000U;
    v0 = (s32) 0x8b0000U;
    a2 = (*(volatile s8 *) (u32) (v0 + 5198));
    a0 = (s32) 0x8f0000U;
    a1 = 12836;
    v1 = (s32) ((u32) v1 + 0xffffe75bU);
    a0 = (s32) ((u32) a0 + 0xffffe751U);
    a2 = a2 & 0x1;
    v0 = 36;
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    v1 = (s32) ((u32) v1 + (u32) a1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (*(volatile u8 *) (u32) v1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) goto L_008B471C;
    v0 = 33;
    if (v1 == v0) goto L_008B471C;
    v0 = 32;
    if (v1 == v0) goto L_008B471C;
    goto L_008B4748;
L_008B471C:;
    v0 = (s32) 0x8f0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -7780));
    if (a0 == 0) goto L_008B4744;
    v0 = (s32) 0x8f0000U;
    v0 = (*(volatile s8 *) (u32) (v0 + -7790));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    a1 = (s64) ((u64) v0 << 48);
    a1 = a1 >> 48; func_001D7D80(a0, a1, a2, a3);
L_008B4744:;
L_008B4748:;
    v0 = 1;
    return v0;
}
