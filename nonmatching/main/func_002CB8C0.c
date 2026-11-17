/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Heap_Free(s64, s64);
s64 func_001540E0(s64);

s64 func_002CB8C0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;

    s0 = a0;
    if (s0 == 0) goto L_002CB99C;
    a1 = (s32) 0x5e0000U;
    a0 = (s32) 0x5e0000U;
    a2 = -1;
    a3 = 1;
    a1 = (s32) ((u32) a1 + 0x3ba8U);
    a0 = (s32) ((u32) a0 + 0x3ba1U);
L_002CB8F0:;
    v1 = (*(volatile s32 *) (u32) (a1 + 4));
    if (v1 == 0) goto L_002CB930;
    v0 = (*(volatile s32 *) (u32) a1);
    at = (u64) s0 < (u64) v0;
    if (at != 0) goto L_002CB930;
    v0 = (s32) ((u32) v0 + (u32) v1);
    at = (u64) s0 < (u64) v0;
    if (at == 0) goto L_002CB930;
    v0 = (*(volatile s8 *) (u32) (a0 + 224));
    if (v0 != 0) goto L_002CB978;
    a2 = (s64) ((u64) a3 << 56);
    a2 = a2 >> 56;
L_002CB930:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < 28;
    a1 = (s32) ((u32) a1 + 0x8U);
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x1U); if (c_) goto L_002CB8F0; }
    v0 = (s64) ((u64) a2 << 56);
    v0 = v0 >> 56;
L_002CB94C:;
    a0 = (s64) ((u64) v0 << 56);
    a0 = a0 >> 56;
    v0 = -1;
    if (a0 == v0) goto L_002CB984;
    v0 = func_001540E0(a0);
    if (v0 != 0) goto L_002CB994;
    goto L_002CB9A0;
L_002CB978:;
    v0 = (s64) ((u64) a3 << 56);
    v0 = v0 >> 56; goto L_002CB94C;
L_002CB984:;
    a0 = s0; v0 = Pes6Heap_Free(a0, a1);
    goto L_002CB99C;
L_002CB994:;
    a0 = s0; v0 = Pes6Heap_Free(a0, a1);
L_002CB99C:;
L_002CB9A0:;
    return v0;
}
