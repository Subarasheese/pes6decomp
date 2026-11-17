/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00209E40(s32, s32, s32, s32, s32);
s32 func_0020A060(s32, s32, s32, s32, s32);
s32 func_002651E0(s32, s32, s32, s32);

s32 func_0020B730(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    a4 = a2;
    v1 = (s32) 0x3d0000U;
    a2 = 0;
    s0 = a1;
    v1 = (s32) ((u32) v1 + 0x41d0U);
    a1 = 0;
L_0020B754:;
    v0 = (*(volatile s32 *) (u32) v1);
    if (a0 != v0) { a2 = (s32) ((u32) a2 + 0x1U); goto L_0020B77C; }
    v0 = (s32) 0x3d0000U;
    v1 = (s32) ((u32) a2 << 3);
    v0 = (s32) ((u32) v0 + 0x41d4U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0); goto L_0020B788;
    a2 = (s32) ((u32) a2 + 0x1U);
L_0020B77C:;
    v0 = (u64) a2 < (u64) (s64) 2;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x8U); if (c_) goto L_0020B754; }
L_0020B788:;
    if (a1 == 0) goto L_0020B7C4;
    v0 = (s32) 0x530000U;
    a2 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 31296));
    a3 = a4;
    a2 = (s32) ((u32) a2 + 0x7a30U); v0 = func_002651E0(a0, a1, a2, a3);
    if (s0 == 0) { ; goto L_0020B824; }
    v1 = (s32) 0x530000U;
    v1 = (s32) ((u32) v1 + 0x7a30U);
    (*(volatile u32 *) (u32) s0) = (u32) v1;
    goto L_0020B820;
L_0020B7C4:;
    v0 = (s32) 0x530000U;
    v1 = (s32) ((u32) a0 << 1);
    a3 = (*(volatile s32 *) (u32) (v0 + 31296));
    v0 = (s32) ((u32) v1 + (u32) a0);
    a1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x530000U;
    v0 = (s32) ((u32) v0 + 0x7a48U);
    v1 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) 0x530000U;
    v0 = (s32) ((u32) v0 + 0x7a44U);
    v0 = (s32) ((u32) v0 + (u32) a1);
    a2 = (*(volatile s32 *) (u32) v0);
    v0 = 10;
    { s32 c_ = a0 != v0; a1 = (*(volatile s32 *) (u32) v1); if (c_) goto L_0020B814; }
    a0 = a3;
    a3 = s0; v0 = func_00209E40(a0, a1, a2, a3, a4);
    goto L_0020B820;
L_0020B814:;
    a0 = a3;
    a3 = s0; v0 = func_0020A060(a0, a1, a2, a3, a4);
L_0020B820:;
L_0020B824:;
    return v0;
}
