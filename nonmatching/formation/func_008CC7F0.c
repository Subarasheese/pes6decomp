/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_008B9430(void);
void func_008D8640(s64, s64, s64, s64);

void func_008CC7F0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    v1 = 8;
    s3 = a0;
    s2 = a1;
    s0 = s2 & 0xff;
    { s32 c_ = s0 == v1; s1 = a2; if (c_) goto L_008CC8CC; }
    v0 = func_008B9430();
    v1 = s1 & 0xff;
    if (v1 == 0) { a1 = 0; goto L_008CC87C; }
    a1 = 0;
    a0 = 8;
    v1 = (s32) ((u32) s3 + (u32) a1);
L_008CC840:;
    a2 = (s32) ((u32) v1 + 0x1aU);
    v1 = (*(volatile u8 *) (u32) (v1 + 26));
    if (v1 != a0) { a1 = (s32) ((u32) a1 + 0x1U); goto L_008CC858; }
    (*(volatile u8 *) (u32) a2) = (u8) s2; goto L_008CC868;
L_008CC858:;
    v1 = a1 < 2;
    if (v1 != 0) { v1 = (s32) ((u32) s3 + (u32) a1); goto L_008CC840; }
L_008CC868:;
    v1 = 2;
    if (a1 == v1) { ; goto L_008CC8D0; }
    s1 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_008CC8A8;
L_008CC87C:;
    v0 = (s32) ((u32) s3 + (u32) a1);
L_008CC880:;
    v1 = (s32) ((u32) v0 + 0x1aU);
    v0 = (*(volatile u8 *) (u32) (v0 + 26));
    if (v0 != s0) { a1 = (s32) ((u32) a1 + 0x1U); goto L_008CC89C; }
    v0 = 8;
    (*(volatile u8 *) (u32) v1) = (u8) v0; goto L_008CC8A8;
L_008CC89C:;
    v0 = a1 < 2;
    if (v0 != 0) { v0 = (s32) ((u32) s3 + (u32) a1); goto L_008CC880; }
L_008CC8A8:;
    v0 = s2 & 0xff;
    v1 = (s32) ((u32) v0 << 2);
    a0 = (s32) ((u32) s3 + 0x6b4U);
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffd970U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a2 = (*(volatile s32 *) (u32) v0);
    a3 = s1; func_008D8640(a0, a1, a2, a3);
L_008CC8CC:;
L_008CC8D0:;
    return;
}
