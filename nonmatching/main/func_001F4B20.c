/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
void func_001F4E80(s32, s32);

void func_001F4B20(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    v1 = (s32) 0x530000U;
    s4 = a1;
    s3 = a2;
    s1 = a0;
    s2 = (*(volatile s32 *) (u32) (v1 + -19640));
    { s32 c_ = s2 == 0; s0 = a3; if (c_) goto L_001F4C20; }
L_001F4B58:;
    v1 = (*(volatile s32 *) (u32) (s2 + 16));
    if (v1 != s1) { s2 = (*(volatile s32 *) (u32) (s2 + 4)); goto L_001F4B6C; }
    goto L_001F4B78;
L_001F4B6C:;
    if (s2 != 0) goto L_001F4B58;
    s2 = 0;
L_001F4B78:;
    if (s2 == 0) { a0 = 1; goto L_001F4C28; }
L_001F4B80:;
    at = (u64) s3 < (u64) s4;
    if (at != 0) goto L_001F4C18;
    v1 = 1;
    s0 = (s32) ((u32) v1 << (s0 & 31));
L_001F4B94:;
    s1 = (*(volatile s32 *) (u32) (s2 + 8));
    if (s1 == 0) { s1 = 0; goto L_001F4BF0; }
    v1 = (*(volatile s32 *) (u32) (s1 + 8));
    v1 = (u64) s4 < (u64) v1;
    if (v1 != 0) goto L_001F4C80;
    v1 = (*(volatile s32 *) (u32) (s2 + 12));
    v1 = (*(volatile s32 *) (u32) (v1 + 8));
    at = (u64) v1 < (u64) s4;
    if (at != 0) goto L_001F4C80;
L_001F4BC8:;
    v1 = (*(volatile s32 *) (u32) (s1 + 8));
    if (v1 != s4) goto L_001F4BE0;
    goto L_001F4BF0;
L_001F4BE0:;
    s1 = (*(volatile s32 *) (u32) (s1 + 4));
    if (s1 != 0) goto L_001F4BC8;
    s1 = 0;
L_001F4BF0:;
    if (s1 == 0) goto L_001F4C88;
L_001F4BF8:;
    v1 = (*(volatile u8 *) (u32) (s1 + 12));
    a0 = s0 & 0xff;
    s4 = (s32) ((u32) s4 + 0x1U);
    at = (u64) s3 < (u64) s4;
    v1 = v1 | a0;
    { s32 c_ = at == 0; (*(volatile u8 *) (u32) (s1 + 12)) = (u8) v1; if (c_) goto L_001F4B94; }
L_001F4C18:;
    goto L_001F4CB0;
L_001F4C20:;
    s2 = 0; goto L_001F4B78;
L_001F4C28:;
    a1 = 20; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (v0 + 16)) = (u32) s1;
    v1 = (s32) 0x530000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -19640));
    { s32 c_ = v1 == 0; s2 = v0; if (c_) goto L_001F4C6C; }
    a0 = (s32) 0x530000U;
    v1 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (a0 + -19636));
    (*(volatile u32 *) (u32) (a0 + 4)) = (u32) s2;
    v1 = (*(volatile s32 *) (u32) (v1 + -19636));
    (*(volatile u32 *) (u32) s2) = (u32) v1;
L_001F4C5C:;
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + -19636)) = (u32) s2;
    (*(volatile u32 *) (u32) (s2 + 4)) = (u32) 0; goto L_001F4B80;
L_001F4C6C:;
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + -19640)) = (u32) s2;
    (*(volatile u32 *) (u32) s2) = (u32) 0; goto L_001F4C5C;
L_001F4C80:;
    s1 = 0; goto L_001F4BF0;
L_001F4C88:;
    a0 = 1;
    a1 = 16; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    s1 = v0;
    (*(volatile u32 *) (u32) (v0 + 8)) = (u32) s4;
    a0 = s2;
    a1 = s1; func_001F4E80(a0, a1);
    goto L_001F4BF8;
L_001F4CB0:;
    return;
}
