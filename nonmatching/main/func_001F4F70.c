/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
s32 func_001DA200(void);

void func_001F4F70(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    v0 = (s32) 0x530000U;
    s1 = a0;
    (*(volatile u32 *) (u32) (v0 + -19628)) = (u32) s1; v0 = func_001DA200();
    s2 = v0;
    a1 = 4;
    a0 = s2; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + -19632)) = (u32) v0;
    v1 = 0 < s2;
    { s32 c_ = v1 != 0; s3 = 0; if (c_) goto L_001F4FC4; }
L_001F4FBC:;
    goto L_001F4FFC;
L_001F4FC4:;
    s0 = 0;
L_001F4FC8:;
    a0 = s1;
    a1 = 1; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    v1 = (s32) 0x530000U;
    s3 = (s32) ((u32) s3 + 0x1U);
    a0 = (*(volatile s32 *) (u32) (v1 + -19632));
    a0 = (s32) ((u32) a0 + (u32) s0);
    v1 = s3 < s2;
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_001F4FC8; }
    goto L_001F4FBC;
L_001F4FFC:;
    return;
}
