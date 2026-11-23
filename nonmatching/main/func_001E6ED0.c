/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001E6870(s32, s32, s32, s32);
void func_001E6B70(s32, s32, s32, s32, s32, s32, s32, s32);

void func_001E6ED0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s3 = a0;
    if (s3 == 0) goto L_001E6F5C;
    v1 = (*(volatile u8 *) (u32) (s3 + 24));
    at = 0 < v1;
    { s32 c_ = at == 0; a2 = 0; if (c_) goto L_001E6F20; }
    a0 = (*(volatile s32 *) (u32) (s3 + 16));
L_001E6F04:;
    v0 = (*(volatile s32 *) (u32) a0);
    if (a1 == v0) goto L_001E6F20;
    a2 = (s32) ((u32) a2 + 0x1U);
    v0 = a2 < v1;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x4U); if (c_) goto L_001E6F04; }
L_001E6F20:;
    if (a2 == v1) { v0 = 0; goto L_001E6FA8; }
    v0 = (s32) ((u32) a2 >> 2);
    s1 = a2 & 0x3;
    s2 = (s32) ((u32) v0 << 2);
    v0 = (*(volatile s32 *) (u32) (s3 + 20));
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v0 >> (s1 & 31));
    v0 = v0 & 0x1;
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (s3 + 16)); goto L_001E6F64; }
    v0 = 0;
L_001E6F54:;
    goto L_001E6FAC;
L_001E6F5C:;
    v0 = 0; goto L_001E6FA8;
L_001E6F64:;
    s0 = (s32) ((u32) a2 << 2);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) v0); func_001E6870(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s3 + 16));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) v0); func_001E6B70(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (*(volatile s32 *) (u32) (s3 + 20));
    v0 = 1;
    a0 = (s32) ((u32) v0 << (s1 & 31));
    a1 = ~(a0 | 0);
    a0 = (s32) ((u32) v1 + (u32) s2);
    v1 = (*(volatile s32 *) (u32) a0);
    v1 = v1 & a1;
    (*(volatile u32 *) (u32) a0) = (u32) v1; goto L_001E6F54;
L_001E6FA8:;
L_001E6FAC:;
    return;
}
