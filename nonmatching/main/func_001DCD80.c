/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_001DCD80(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6) {
    s64 at = 0, v0 = 0, v1 = 0;

    a3 = (*(volatile u8 *) (u32) a0);
    v1 = a3 & 0x80;
    if (v1 == 0) { a5 = 1; goto L_001DCDD8; }
    a5 = 2;
    a4 = (s64) ((u64) 0 + (u64) (s64) 128);
    a6 = a5;
    a2 = 8;
    a1 = 1;
L_001DCDA4:;
    v1 = (s32) ((u32) a2 - (u32) a6);
    v1 = (s32) ((u32) a1 << (v1 & 31));
    v1 = v1 & 0xff;
    v1 = a4 | v1;
    a4 = v1 & 0xff;
    v1 = a4 & a3;
    if (a4 != v1) goto L_001DCDD8;
    a5 = a6;
    a6 = (s32) ((u32) a6 + 0x1U);
    at = a6 < 7;
    if (at != 0) goto L_001DCDA4;
L_001DCDD8:;
    v1 = (s32) 0x530000U;
    (*(volatile u8 *) (u32) (v1 + -20996)) = (u8) a5;
    v1 = (s32) 0x530000U;
    { s32 c_ = a5 == 0; (*(volatile u32 *) (u32) (v1 + -21000)) = (u32) 0; if (c_) goto L_001DCE18; }
    a1 = (s32) 0x530000U;
    v1 = (s32) 0x530000U;
L_001DCDF4:;
    a4 = (*(volatile u8 *) (u32) a0);
    a5 = (s32) ((u32) a5 + 0xffffffffU);
    a2 = (*(volatile s32 *) (u32) (a1 + -21000));
    a3 = (s32) ((u32) a5 << 3);
    a3 = (s32) ((u32) a4 << (a3 & 31));
    a0 = (s32) ((u32) a0 + 0x1U);
    a2 = a2 | a3;
    { s32 c_ = a5 != 0; (*(volatile u32 *) (u32) (v1 + -21000)) = (u32) a2; if (c_) goto L_001DCDF4; }
L_001DCE18:;
    a0 = 1;
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + -21008)) = (u32) a0; return v0;
}
