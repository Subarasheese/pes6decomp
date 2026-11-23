/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0026B8B0(s32, s32, s32, s32);
s32 func_00901580(s32, s32, s32, s32);
s32 func_00901830(s32, s32, s32, s32);

s32 func_008FD730(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;

    v0 = (s32) 0x590000U;
    a0 = (*(volatile s8 *) (u32) (v0 + 7606)); v0 = func_0026B8B0(a0, a1, a2, a3);
    if (v0 < 0) goto L_008FD788;
    at = v0 < 9;
    if (at == 0) goto L_008FD788;
    a0 = (s32) ((u32) v0 << 2);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) v0);
    v1 = (s32) ((u32) v1 + 0x2808U);
    a0 = (s32) ((u32) a0 << 3);
    v0 = 1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 != v0) goto L_008FD788;
    v0 = 0; goto L_008FD86C;
L_008FD788:;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile s8 *) (u32) (v0 + 7606)); v0 = func_00901580(a0, a1, a2, a3);
    v1 = v0 < 0;
    v1 = v1 ^ 0x1;
    if (v1 == 0) { v0 = (u64) 0 < (u64) v1; goto L_008FD858; }
    v1 = (s32) 0x590000U;
    a0 = 4;
    a1 = (*(volatile u8 *) (u32) (v1 + 7972));
    if (a1 == a0) goto L_008FD7E4;
    v1 = 1;
    if (a1 == v1) goto L_008FD7E4;
    v1 = 2;
    if (a1 == v1) goto L_008FD7E4;
    v1 = 3;
    if (a1 == v1) goto L_008FD7E4;
    v0 = 0; goto L_008FD850;
L_008FD7E4:;
    v1 = (s32) 0xcc0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -13214));
    if (v1 != 0) goto L_008FD7FC;
    v0 = 0; goto L_008FD850;
L_008FD7FC:;
    v1 = (s32) 0x590000U;
    a0 = 255;
    a1 = (*(volatile u8 *) (u32) (v1 + 7757));
    if (a1 == a0) { a1 = 1; goto L_008FD81C; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a1 / (s32) v1); hi = (s32) ((s32) a1 % (s32) v1); lo = q_; }
    a1 = hi;
L_008FD81C:;
    v1 = (s32) ((u32) a1 << 3);
    a0 = (s32) 0x590000U;
    a1 = (s32) ((u32) v1 + (u32) a1);
    a0 = (s32) ((u32) a0 + 0xffffe5b0U);
    v1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 << 6);
    v1 = (*(volatile u8 *) (u32) (v1 + 7629));
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile u8 *) (u32) (a0 + 19));
    v1 = v1 & 0x1;
    v1 = a0 ^ v1;
    v0 = v0 ^ v1;
    v0 = (u64) v0 < (u64) (s64) 1;
L_008FD850:;
    v1 = (u64) 0 < (u64) v0;
    v0 = (u64) 0 < (u64) v1;
L_008FD858:;
    if (v0 == 0) goto L_008FD86C;
    v0 = func_00901830(a0, a1, a2, a3);
    v0 = (u64) 0 < (u64) v0;
L_008FD86C:;
    return v0;
}
