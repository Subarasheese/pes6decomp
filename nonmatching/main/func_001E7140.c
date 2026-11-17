/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Free(s32, s32);
s32 func_001E6870(s32, s32, s32, s32);
s32 func_001E6B70(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_001E7140(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    v1 = (s32) 0x530000U;
    s4 = (*(volatile s32 *) (u32) (v1 + -20160));
    if (s4 == 0) goto L_001E723C;
L_001E716C:;
    v1 = (*(volatile s32 *) (u32) (s4 + 8));
    if (v1 != a0) goto L_001E7180;
    goto L_001E7190;
L_001E7180:;
    s4 = (*(volatile s32 *) (u32) (s4 + 4));
    if (s4 != 0) goto L_001E716C;
    s4 = 0;
L_001E7190:;
    if (s4 == 0) goto L_001E72A0;
    a0 = (*(volatile s32 *) (u32) s4);
    { s32 c_ = a0 == 0; v1 = (*(volatile s32 *) (u32) (s4 + 4)); if (c_) goto L_001E7244; }
    (*(volatile u32 *) (u32) (a0 + 4)) = (u32) v1;
L_001E71A8:;
    if (v1 == 0) goto L_001E7250;
    (*(volatile u32 *) (u32) v1) = (u32) a0;
L_001E71B4:;
    v0 = (*(volatile u8 *) (u32) (s4 + 24));
    at = 0 < v0;
    { s32 c_ = at == 0; s3 = 0; if (c_) goto L_001E7208; }
    s2 = 0;
L_001E71C8:;
    v0 = (s32) ((u32) s3 >> 2);
    s0 = s3 & 0x3;
    s1 = (s32) ((u32) v0 << 2);
    v0 = (*(volatile s32 *) (u32) (s4 + 20));
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v0 >> (s0 & 31));
    v0 = v0 & 0x1;
    if (v0 != 0) goto L_001E725C;
L_001E71F0:;
    v0 = (*(volatile u8 *) (u32) (s4 + 24));
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < v0;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_001E71C8; }
L_001E7208:;
    a0 = (*(volatile s32 *) (u32) (s4 + 20)); v0 = Pes6Heap_Free(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s4 + 16)); v0 = Pes6Heap_Free(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s4 + 12));
    if (a0 == 0) goto L_001E722C;
    v0 = Pes6Heap_Free(a0, a1);
L_001E722C:;
    a0 = s4; v0 = Pes6Heap_Free(a0, a1);
    goto L_001E72A0;
L_001E723C:;
    s4 = 0; goto L_001E7190;
L_001E7244:;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + -20160)) = (u32) v1; goto L_001E71A8;
L_001E7250:;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + -20156)) = (u32) a0; goto L_001E71B4;
L_001E725C:;
    v0 = (*(volatile s32 *) (u32) (s4 + 16));
    v0 = (s32) ((u32) v0 + (u32) s2);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001E6870(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s4 + 16));
    v0 = (s32) ((u32) v0 + (u32) s2);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001E6B70(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (*(volatile s32 *) (u32) (s4 + 20));
    v1 = 1;
    v1 = (s32) ((u32) v1 << (s0 & 31));
    a0 = ~(v1 | 0);
    v1 = (s32) ((u32) v0 + (u32) s1);
    v0 = (*(volatile s32 *) (u32) v1);
    v0 = v0 & a0;
    (*(volatile u32 *) (u32) v1) = (u32) v0; goto L_001E71F0;
L_001E72A0:;
    return v0;
}
