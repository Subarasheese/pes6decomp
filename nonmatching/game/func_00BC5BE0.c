/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32, s32);

void func_00BC5BE0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s3 = 0;
L_00BC5BFC:;
    s2 = s3 & 0xffff;
    v1 = (s32) 0xcc0000U;
    v1 = (s32) ((u32) v1 + 0xffffd370U);
    a0 = (s32) ((u32) s2 << 2);
    s1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) s1);
    if (v1 == 0) goto L_00BC5C78;
    v1 = (s32) 0xcc0000U;
    v1 = (s32) ((u32) v1 + 0xffffd308U);
    s0 = (s32) ((u32) v1 + (u32) s2);
    v1 = (*(volatile u8 *) (u32) s0);
    if (v1 != 0) goto L_00BC5C58;
    v1 = (s32) 0xcc0000U;
    v1 = (s32) ((u32) v1 + 0xffffd2f0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) v1);
    if (a0 == 0) goto L_00BC5C58;
    Pes6Heap_Free(a0, a1);
L_00BC5C58:;
    v1 = (s32) 0xcc0000U;
    a0 = (s32) ((u32) s2 << 2);
    v1 = (s32) ((u32) v1 + 0xffffd2f0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u8 *) (u32) s0) = (u8) 0;
    (*(volatile u32 *) (u32) s1) = (u32) 0;
    (*(volatile u32 *) (u32) v1) = (u32) 0;
L_00BC5C78:;
    v1 = (s32) ((u32) s3 + 0x1U);
    s3 = v1 & 0xffff;
    v1 = s3 < 6;
    if (v1 != 0) goto L_00BC5BFC;
    s1 = 0;
L_00BC5C90:;
    a0 = s1 & 0xffff;
    v1 = (s32) 0xcc0000U;
    v1 = (s32) ((u32) v1 + 0xffffd2d0U);
    a0 = (s32) ((u32) a0 << 2);
    s0 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) s0);
    if (a0 == 0) goto L_00BC5CB8;
    Pes6Heap_Free(a0, a1);
L_00BC5CB8:;
    v1 = (s32) ((u32) s1 + 0x1U);
    s1 = v1 & 0xffff;
    v1 = s1 < 6;
    { s32 c_ = v1 != 0; (*(volatile u32 *) (u32) s0) = (u32) 0; if (c_) goto L_00BC5C90; }
    return;
}
