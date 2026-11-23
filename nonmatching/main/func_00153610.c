/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6DmaQueue_Send(s64, s64, s64, s64);
void Pes6PacketStream_AppendGsAD(s64, s64, s64);
void Pes6PacketStream_AppendWord(s64, s64);
void func_001034D0(s64, s64);
s64 func_001034E0(s64);
void func_00103538(s64, s64);
void func_00103698(s64, s64);
void func_001036F0(s64, s64);
void func_00103748(s64);
void func_00103778(s64, s64);
void func_00103790(s64);

void func_00153610(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    u64 qh_a1 = 0;
    s64 frame[8];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x20000000U;
    s0 = a0;
    v1 = (s64) ((u64) s0 << 36);
    a0 = (s32) ((u32) sp + 0x20U);
    v1 = (s64) ((u64) v1 >> 36);
    a1 = v1 | v0; func_001034D0(a0, a1);
    a0 = (s32) ((u32) sp + 0x20U);
    a1 = 0; func_00103538(a0, a1);
    a0 = (s32) ((u32) sp + 0x20U);
    a1 = (s32) 0x13000000U; Pes6PacketStream_AppendWord(a0, a1);
    a0 = (s32) ((u32) sp + 0x20U);
    a1 = (s32) 0x10000000U; Pes6PacketStream_AppendWord(a0, a1);
    a0 = (s32) ((u32) sp + 0x20U);
    a1 = 0; func_001036F0(a0, a1);
    v0 = (s32) 0x370000U;
    { u32 a_ = (u32) (v0 + 27328) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    a0 = (s32) ((u32) sp + 0x20U); func_00103778(a0, a1);
    a2 = (*(volatile s64 *) (u32) (s0 + 88));
    a0 = (s32) ((u32) sp + 0x20U);
    a1 = 64; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x20U); func_00103790(a0);
    a0 = (s32) ((u32) sp + 0x20U); func_00103748(a0);
    a0 = (s32) ((u32) sp + 0x20U);
    a1 = 0; func_00103698(a0, a1);
    a0 = (s32) ((u32) sp + 0x20U); v0 = func_001034E0(a0);
    a0 = 1;
    a2 = s0;
    a1 = a0;
    a3 = 0; Pes6DmaQueue_Send(a0, a1, a2, a3);
    return;
}
