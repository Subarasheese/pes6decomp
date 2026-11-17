/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Heap_Alloc(s64, s64, s64, s64);
s64 func_001EC0F0(void);
s64 func_001EC4C0(s64, s64, s64);
s64 func_001EC500(s64, s64);
s64 func_001EC540(s64, s64, s64, s64);

s64 func_001E5F60(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 v0 = 0, v1 = 0, s0 = 0;

    a0 = 1;
    a1 = 64;
    v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    v1 = (s32) 0x530000U;
    a3 = (s32) 0x530000U;
    a4 = (*(volatile s64 *) (u32) (v1 + -20280));
    a2 = (s32) 0x530000U;
    a1 = (s32) 0x530000U;
    a0 = (s32) 0x530000U;
    s0 = v0;
    (*(volatile u64 *) (u32) v0) = (u64) a4;
    v1 = (s32) 0x530000U;
    a3 = (*(volatile s64 *) (u32) (a3 + -20272));
    (*(volatile u64 *) (u32) (v0 + 8)) = (u64) a3;
    a2 = (*(volatile s64 *) (u32) (a2 + -20264));
    (*(volatile u64 *) (u32) (v0 + 16)) = (u64) a2;
    a1 = (*(volatile s64 *) (u32) (a1 + -20256));
    (*(volatile u64 *) (u32) (v0 + 24)) = (u64) a1;
    a0 = (*(volatile s64 *) (u32) (a0 + -20248));
    (*(volatile u64 *) (u32) (v0 + 32)) = (u64) a0;
    v1 = (*(volatile s64 *) (u32) (v1 + -20240));
    { s32 c_ = s0 == 0; (*(volatile u64 *) (u32) (v0 + 40)) = (u64) v1; if (c_) goto L_001E5FD0; }
    v0 = 1;
    (*(volatile u8 *) (u32) (s0 + 61)) = (u8) v0;
L_001E5FD0:;
    v0 = func_001EC0F0();
    (*(volatile u8 *) (u32) (s0 + 62)) = (u8) v0; v0 = func_001EC540(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 52)) = (u32) v0;
    a2 = (s32) 0x1e0000U;
    a0 = (*(volatile s32 *) (u32) (s0 + 52));
    a1 = s0;
    a2 = (s32) ((u32) a2 + 0x5970U); v0 = func_001EC4C0(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s0 + 52));
    a1 = 144; v0 = func_001EC500(a0, a1);
    v0 = s0;
    return v0;
}
