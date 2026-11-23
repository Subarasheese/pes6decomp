/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008D87E0(s64, s64, s64);

void func_008CC950(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s1 = a0;
    { s32 c_ = a1 == 0; (*(volatile u8 *) (u32) (a0 + 24)) = (u8) a1; if (c_) goto L_008CCA10; }
    s0 = 0;
    v1 = 4;
L_008CC974:;
    if (s0 == v1) goto L_008CC998;
    if (s0 == 0) goto L_008CC998;
    v1 = 8;
    if (s0 == v1) goto L_008CC998;
    goto L_008CC9A0;
L_008CC998:;
    v1 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_008CC9A8;
L_008CC9A0:;
    v1 = 0;
L_008CC9A8:;
    a3 = v1 & 0xff;
    if (a3 == 0) goto L_008CC9B8;
    a3 = (s64) ((u64) 0 + (u64) (s64) 1);
L_008CC9B8:;
    a1 = s0 & 0xff;
    v1 = (s32) ((u32) s1 + (u32) a1);
    a2 = a3 & 0xff;
    a0 = (s32) ((u32) v1 + 0x1cU);
    v1 = (*(volatile u8 *) (u32) (v1 + 28));
    if (v1 == a2) goto L_008CC9F8;
    v0 = (s32) 0x8f0000U;
    (*(volatile u8 *) (u32) a0) = (u8) a3;
    v1 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffd970U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) s1 + 0x6b4U); func_008D87E0(a0, a1, a2);
L_008CC9F8:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 8;
    if (v1 != 0) { v1 = 4; goto L_008CC974; }
    goto L_008CCA78;
L_008CCA10:;
    s0 = 0;
    v1 = (s32) ((u32) s1 + (u32) s0);
L_008CCA18:;
    a3 = (*(volatile u8 *) (u32) (v1 + 28));
    if (a3 == 0) goto L_008CCA28;
    a3 = (s64) ((u64) 0 + (u64) (s64) 1);
L_008CCA28:;
    a1 = s0 & 0xff;
    v1 = (s32) ((u32) s1 + (u32) a1);
    a2 = a3 & 0xff;
    a0 = (s32) ((u32) v1 + 0x1cU);
    v1 = (*(volatile u8 *) (u32) (v1 + 28));
    if (v1 == a2) goto L_008CCA68;
    v0 = (s32) 0x8f0000U;
    (*(volatile u8 *) (u32) a0) = (u8) a3;
    v1 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffd970U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) s1 + 0x6b4U); func_008D87E0(a0, a1, a2);
L_008CCA68:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 8;
    if (v1 != 0) { v1 = (s32) ((u32) s1 + (u32) s0); goto L_008CCA18; }
L_008CCA78:;
    return;
}
