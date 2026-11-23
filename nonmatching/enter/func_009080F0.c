/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0090A100(s64);
s64 func_0090F520(void);

void func_009080F0(s64 a0, s64 a1) {
    s64 at = 0, v0 = 0, v1 = 0;

    v0 = func_0090F520();
    v1 = (s64) ((u64) v0 << 56);
    v1 = v1 >> 56;
    if (v1 != 0) goto L_00908118;
    a0 = 4; goto L_00908230;
L_00908118:;
    v1 = (s32) 0x590000U;
    a0 = 14;
    a1 = (*(volatile u8 *) (u32) (v1 + 7177));
    if (a1 == a0) goto L_00908214;
    v1 = 4;
    if (a1 == v1) goto L_009081F4;
    v1 = 2;
    if (a1 == v1) goto L_00908158;
    v1 = 1;
    if (a1 == v1) goto L_00908158;
    a0 = 0; goto L_00908230;
L_00908158:;
    v1 = (s32) 0x930000U;
    a0 = (s32) 0x20000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -3888));
    v1 = v1 & a0;
    if (v1 == 0) { a0 = 0; goto L_00908178; }
    a0 = 1; goto L_00908230;
L_00908178:;
    v0 = func_0090A100(a0);
    v1 = v0 & 0xffff;
    if (v1 < 0) { v1 = 0; goto L_009081A4; }
    at = v1 < 57;
    if (at == 0) goto L_009081A0;
    v1 = 1; goto L_009081A4;
L_009081A0:;
    v1 = 0;
L_009081A4:;
    if (v1 == 0) { a0 = 2; goto L_00908230; }
    a0 = 1; v0 = func_0090A100(a0);
    v1 = v0 & 0xffff;
    if (v1 < 0) { v1 = 0; goto L_009081D8; }
    at = v1 < 57;
    if (at == 0) goto L_009081D4;
    v1 = 1; goto L_009081D8;
L_009081D4:;
    v1 = 0;
L_009081D8:;
    if (v1 == 0) goto L_009081E8;
    a0 = 3; goto L_00908230;
L_009081E8:;
    a0 = 2;
    goto L_00908230;
L_009081F4:;
    v1 = (s32) 0x930000U;
    a0 = (s32) 0x20000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -3888));
    v1 = v1 & a0;
    if (v1 == 0) { a0 = 2; goto L_00908230; }
    a0 = 1; goto L_00908230;
L_00908214:;
    v1 = (s32) 0x930000U;
    a0 = (s32) 0x20000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -3888));
    v1 = v1 & a0;
    if (v1 == 0) { a0 = 3; goto L_00908230; }
    a0 = 1;
L_00908230:;
    v1 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (v1 + -3892)) = (u32) a0;
    return;
}
