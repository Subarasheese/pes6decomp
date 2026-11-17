/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Free(s32, s32);
s32 func_001454C0(s32);
s32 func_00145590(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_0020A380(s32, s32, s32, s32);
s32 func_0020A540(s32, s32, s32, s32);

s32 func_00266A30(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s3 = a0;
    v0 = (s32) ((u32) s3 << 2);
    s2 = 0;
    s0 = (s32) ((u32) v0 + 0x26d4U);
L_00266A58:;
    a0 = s0; v0 = func_001454C0(a0);
    s1 = v0;
    if (s1 == 0) goto L_00266A80;
    a0 = s1; v0 = func_00145590(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s1; v0 = Pes6Heap_Free(a0, a1);
L_00266A80:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 4;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x1U); if (c_) goto L_00266A58; }
    s2 = (s32) ((u32) s3 << 1);
    a0 = (s32) ((u32) s2 + 0x26e8U); v0 = func_001454C0(a0);
    s0 = v0;
    if (s0 == 0) { a0 = (s32) ((u32) s2 + 0x26e9U); goto L_00266ABC; }
    a0 = s0; v0 = func_00145590(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s0; v0 = Pes6Heap_Free(a0, a1);
    a0 = (s32) ((u32) s2 + 0x26e9U);
L_00266ABC:;
    v0 = func_001454C0(a0);
    s0 = v0;
    if (s0 == 0) goto L_00266AE0;
    a0 = s0; v0 = func_00145590(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s0; v0 = Pes6Heap_Free(a0, a1);
L_00266AE0:;
    v1 = (s32) 0x3b0000U;
    s1 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + 0xffffb128U);
    a0 = 0xffff;
    v1 = (s32) ((u32) v1 + (u32) s2);
    (*(volatile u16 *) (u32) v1) = (u16) a0;
    v1 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -20208));
    { s32 c_ = v1 == 0; s1 = (s32) ((u32) s1 + 0xffffb110U); if (c_) goto L_00266B80; }
    a0 = (s32) ((u32) s3 + (u32) s1);
    v1 = 1;
    s0 = (s32) ((u32) a0 + 0x10U);
    a0 = (*(volatile u8 *) (u32) (a0 + 16));
    if (a0 != v1) { v1 = (*(volatile u8 *) (u32) s0); goto L_00266B58; }
    v0 = (s32) ((u32) s2 + (u32) s1);
    (*(volatile u8 *) (u32) s0) = (u8) 0;
    a2 = (*(volatile u16 *) (u32) (v0 + 12));
    s2 = (s32) ((u32) v0 + 0xcU);
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = 2; v0 = func_0020A380(a0, a1, a2, a3);
    a2 = (*(volatile u16 *) (u32) s2);
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = 1; v0 = func_0020A380(a0, a1, a2, a3);
    v1 = 0xffff;
    (*(volatile u16 *) (u32) s2) = (u16) v1;
    v1 = (*(volatile u8 *) (u32) s0);
L_00266B58:;
    if (v1 != 0) { ; goto L_00266B84; }
    v1 = s3 ^ 0x1;
    v1 = (s32) ((u32) v1 + (u32) s1);
    v1 = (*(volatile u8 *) (u32) (v1 + 16));
    if (v1 != 0) goto L_00266B80;
    a0 = (*(volatile s32 *) (u32) s1); v0 = func_0020A540(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s1) = (u32) 0;
L_00266B80:;
L_00266B84:;
    return v0;
}
