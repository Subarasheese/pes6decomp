/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void FlushCache(void);
void Pes6DmaQueue_Send(s64, s64, s64, s64);
void Pes6PacketStream_AppendWord(s64, s64);
void func_001034D0(s64, s64);
s64 func_001034E0(s64);
void func_00103538(s64, s64);
void func_00103698(s64, s64);
s64 func_001391A0(s64);
void func_00147140(s64, s64, s64, s64, s64, s64, s64, s64);

void func_00147050(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 frame[10];
    s64 sp = (s32) (u32) frame;

    v1 = (s32) 0x510000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -21096));
    if (v1 == 0) goto L_00147124;
    a0 = 0; FlushCache();
    v0 = (s32) 0x510000U;
    v1 = 0xffff;
    a1 = (*(volatile u8 *) (u32) (v0 + -21095));
    a0 = (s32) ((u32) a1 << 3);
    v0 = -4096;
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 5);
    a0 = (s32) ((u32) a0 + 0x20U);
    v1 = (s32) ((u32) a0 + (u32) v1);
    a0 = v1 & v0; v0 = func_001391A0(a0);
    s1 = v0;
    a0 = (s32) ((u32) sp + 0x30U);
    v1 = (s64) ((u64) s1 << 36);
    v0 = (s32) 0x20000000U;
    v1 = (s64) ((u64) v1 >> 36);
    a1 = v1 | v0; func_001034D0(a0, a1);
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = 0; func_00103538(a0, a1);
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = (s32) 0x13000000U; Pes6PacketStream_AppendWord(a0, a1);
    v0 = (s32) 0x510000U;
    s0 = (*(volatile s32 *) (u32) (v0 + -21104));
L_001470E0:;
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = s0; func_00147140(a0, a1, a2, a3, a4, a5, a6, a7);
    s0 = (*(volatile s32 *) (u32) s0);
    if (s0 != 0) goto L_001470E0;
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = 0; func_00103698(a0, a1);
    a0 = (s32) ((u32) sp + 0x30U); v0 = func_001034E0(a0);
    a0 = 1;
    a2 = s1;
    a1 = a0;
    a3 = a0; Pes6DmaQueue_Send(a0, a1, a2, a3);
L_00147124:;
    return;
}
