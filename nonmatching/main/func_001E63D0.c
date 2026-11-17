/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_001E63D0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 at = 0, v0 = 0, v1 = 0;

    at = (u64) a0 < (u64) (s64) 7;
    if (at == 0) goto L_001E6470;
    v1 = (s32) ((u32) a0 << 2);
    a0 = (s32) 0x3d0000U;
    a0 = (s32) ((u32) a0 + 0x2a40U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x1e63f8U) goto L_001E63F8; if (t_ == 0x1e640cU) goto L_001E640C; if (t_ == 0x1e6420U) goto L_001E6420; if (t_ == 0x1e6434U) goto L_001E6434; if (t_ == 0x1e6448U) goto L_001E6448; if (t_ == 0x1e645cU) goto L_001E645C; if (t_ == 0x1e6470U) goto L_001E6470; }
L_001E63F8:;
    a5 = 1;
    a2 = 4;
    a4 = 0;
    a3 = 0; goto L_001E6470;
L_001E640C:;
    a5 = 1;
    a2 = 4;
    a4 = 0;
    a3 = a5; goto L_001E6470;
L_001E6420:;
    a5 = 1;
    a2 = 4;
    a4 = a5;
    a3 = 0; goto L_001E6470;
L_001E6434:;
    a5 = 1;
    a2 = 4;
    a4 = a5;
    a3 = a5; goto L_001E6470;
L_001E6448:;
    a5 = 1;
    a2 = 2;
    a4 = a5;
    a3 = 0; goto L_001E6470;
L_001E645C:;
    a5 = 0;
    a2 = 0;
    a4 = 0;
    a3 = 0;
    a1 = 0;
L_001E6470:;
    v1 = (s64) ((u64) a4 << 32);
    a2 = (s64) ((u64) a2 << 32);
    v1 = v1 >> 32;
    a2 = a2 >> 32;
    a0 = (s64) ((u64) v1 << 3);
    v1 = (s64) ((u64) a3 << 32);
    a0 = a2 | a0;
    v1 = v1 >> 32;
    v1 = (s64) ((u64) v1 << 4);
    a0 = v1 | a0;
    v1 = (s64) ((u64) a1 << 32);
    a0 = a0 | 0x40;
    v1 = v1 >> 32;
    v1 = (s64) ((u64) v1 << 8);
    a0 = v1 | a0;
    v1 = (s64) ((u64) a5 << 32);
    a1 = (s64) ((u64) a0 << 47);
    v1 = v1 >> 32;
    v1 = (s64) ((u64) v1 << 46);
    a0 = v1 | 0x8000;
    v1 = (s32) 0x10000000U;
    a0 = a0 | a1;
    v1 = (s64) ((u64) v1 << 32);
    a0 = a0 | v1;
    v1 = (s32) 0x530000U;
    (*(volatile u64 *) (u32) (v1 + -20208)) = (u64) a0;
    a0 = 14;
    v1 = (s32) 0x530000U;
    (*(volatile u64 *) (u32) (v1 + -20200)) = (u64) a0; return v0;
}
