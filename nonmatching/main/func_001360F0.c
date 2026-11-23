/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void FlushCache(void);
s32 sceSifDmaStat(void);
s32 sceSifSetDma(void);

void func_001360F0(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s2 = a2;
    if (s2 > 0) goto L_00136114;
    v0 = 0; goto L_001361E4;
L_00136114:;
    (*(volatile u32 *) (u32) (sp + 68)) = (u32) a0;
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) a1;
    a0 = 0;
    (*(volatile u32 *) (u32) (sp + 72)) = (u32) s2;
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) 0; FlushCache();
    v0 = (s32) 0x10000000U;
    a0 = (s32) ((u32) sp + 0x40U);
    s0 = (*(volatile u16 *) (u32) v0);
    a1 = 1; v0 = sceSifSetDma();
    s1 = v0;
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    if (v0 == 0) goto L_00136198;
    s0 = s0 & 0xffff;
L_00136158:;
    v0 = (s32) 0x10000000U;
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v0 - (u32) s0);
    v0 = v0 & 0xffff;
    at = v0 < 1051;
    if (at == 0) goto L_00136198;
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = 1; v0 = sceSifSetDma();
    s1 = v0;
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    if (v0 != 0) goto L_00136158;
L_00136198:;
    v0 = (s32) 0x10000000U;
    s0 = (*(volatile u16 *) (u32) v0);
L_001361A0:;
    v0 = (u64) 0 < (u64) s1;
    v0 = v0 ^ 0x1;
    if (v0 != 0) goto L_001361E0;
    a0 = s1; v0 = sceSifDmaStat();
    if (v0 < 0) goto L_001361E0;
    v0 = (s32) 0x10000000U;
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v0 - (u32) s0);
    v0 = v0 & 0xffff;
    at = v0 < 1051;
    if (at != 0) goto L_001361A0;
L_001361E0:;
    v0 = s2;
L_001361E4:;
    return;
}
