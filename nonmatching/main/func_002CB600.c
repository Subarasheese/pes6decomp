/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Create(s64, s64, s64);
void func_00154090(s64);
void func_001540B0(s64, s64);
s64 func_001540C0(void);
void func_001540D0(s64);
void func_001540F0(s64);

void func_002CB600(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    v0 = (s32) 0x5e0000U;
    v0 = (s32) ((u32) v0 + 0x3ba4U);
    s3 = a0;
    s2 = (s64) ((u64) s3 << 56);
    s2 = s2 >> 56;
    s1 = (s32) ((u32) s2 << 3);
    s0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (*(volatile s32 *) (u32) s0);
    if (v0 != 0) goto L_002CB6C4;
L_002CB644:;
    v0 = -1;
    if (s2 == v0) goto L_002CB6AC;
    at = s2 < 28;
    if (at == 0) goto L_002CB6AC;
    v0 = (*(volatile s32 *) (u32) s0);
    if (v0 == 0) goto L_002CB6AC;
    v0 = (s32) 0x5e0000U;
    s0 = (s64) ((u64) s3 << 56);
    v0 = (s32) ((u32) v0 + 0x3ba0U);
    s0 = s0 >> 56;
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = s0;
    a1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    a2 = (s32) ((u32) a1 + (u32) v0); Pes6Heap_Create(a0, a1, a2);
    v0 = (s32) 0x5e0000U;
    v1 = 1;
    v0 = (s32) ((u32) v0 + 0x3c80U);
    a0 = s0;
    v0 = (s32) ((u32) v0 + (u32) s2);
    (*(volatile u8 *) (u32) v0) = (u8) v1; func_00154090(a0);
L_002CB6AC:;
    a0 = (s64) ((u64) s3 << 56);
    a1 = 0;
    a0 = a0 >> 56; func_001540B0(a0, a1);
    goto L_002CB708;
L_002CB6C4:;
    v0 = func_001540C0();
    if (s2 != v0) goto L_002CB6DC;
    a0 = 1; func_001540D0(a0);
L_002CB6DC:;
    s4 = (s64) ((u64) s3 << 56);
    s4 = s4 >> 56;
    a0 = s4; func_00154090(a0);
    a0 = s4; func_001540F0(a0);
    v0 = (s32) 0x5e0000U;
    v0 = (s32) ((u32) v0 + 0x3c80U);
    v0 = (s32) ((u32) v0 + (u32) s2);
    (*(volatile u8 *) (u32) v0) = (u8) 0; goto L_002CB644;
L_002CB708:;
    return;
}
