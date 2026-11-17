/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
s32 Pes6Heap_Free(s32, s32);
s32 func_001D8340(s32, s32, s32, s32);

s32 func_001D81D0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    s1 = (*(volatile s32 *) (u32) (a0 + 28));
    s0 = a0;
    a0 = (*(volatile s32 *) (u32) (a0 + 36));
    if (a0 == 0) { v1 = (*(volatile u8 *) (u32) s1); goto L_001D8268; }
L_001D8200:;
    v1 = (*(volatile u8 *) (u32) s1);
    v1 = a0 < v1;
    if (v1 != 0) { a0 = s0; goto L_001D8278; }
L_001D8210:;
    v1 = (*(volatile u8 *) (u32) s1);
    s3 = (*(volatile s32 *) (u32) (s0 + 40));
    at = 0 < v1;
    { s32 c_ = at == 0; s4 = 0; if (c_) goto L_001D8260; }
    s2 = 0;
L_001D8228:;
    a0 = (*(volatile s32 *) (u32) (s1 + 12));
    v1 = (*(volatile s16 *) (u32) (s3 + 16));
    a0 = (s32) ((u32) a0 + (u32) s2);
    s0 = (*(volatile s32 *) (u32) a0);
    a0 = (*(volatile u16 *) (u32) (s0 + 4));
    if (v1 != a0) { (*(volatile u16 *) (u32) (s3 + 16)) = (u16) a0; goto L_001D82A4; }
L_001D8248:;
    v1 = (*(volatile u8 *) (u32) s1);
    s4 = (s32) ((u32) s4 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x4U);
    v1 = s4 < v1;
    { s32 c_ = v1 != 0; s3 = (s32) ((u32) s3 + 0x14U); if (c_) goto L_001D8228; }
L_001D8260:;
    goto L_001D8318;
L_001D8268:;
    if (v1 != 0) goto L_001D8200;
    goto L_001D8318;
L_001D8278:;
    v0 = func_001D8340(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) s1);
    (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v1;
    a0 = (*(volatile u8 *) (u32) s1);
    if (a0 == 0) goto L_001D8318;
    a1 = 20; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 40)) = (u32) v0; goto L_001D8210;
L_001D82A4:;
    a0 = (*(volatile s32 *) (u32) s3);
    if (a0 == 0) goto L_001D82C0;
    v0 = Pes6Heap_Free(a0, a1);
    (*(volatile u32 *) (u32) s3) = (u32) 0;
L_001D82C0:;
    v1 = (*(volatile u16 *) (u32) (s0 + 4));
    if (v1 == 0) goto L_001D8248;
    v0 = v1 & 0xffff;
    a1 = 1;
    a0 = (s32) ((u32) v0 << 5); v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s3) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) s3);
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) v1;
    a0 = (*(volatile u16 *) (u32) (s0 + 4));
    v1 = (*(volatile s32 *) (u32) (s3 + 4));
    a0 = (s32) ((u32) a0 << 4);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) (s3 + 8)) = (u32) v1;
    a0 = (*(volatile u16 *) (u32) (s0 + 4));
    v1 = (*(volatile s32 *) (u32) (s3 + 8));
    a0 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) (s3 + 12)) = (u32) v1; goto L_001D8248;
L_001D8318:;
    return v0;
}
