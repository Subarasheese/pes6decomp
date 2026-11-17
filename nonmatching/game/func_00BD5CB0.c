/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00207920(s64);
void func_00209540(s64, s64, s64);

s64 func_00BD5CB0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    a1 = 0;
    a4 = 0;
    s1 = a0;
    v0 = (*(volatile s32 *) (u32) (a0 + 4));
    s0 = 0;
    a2 = (*(volatile s32 *) (u32) a0);
    a3 = (*(volatile u8 *) (u32) (v0 + 12));
    a0 = (*(volatile s32 *) (u32) (a2 + 28));
    v1 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0x2418U);
L_00BD5CE8:;
    v0 = a4 & 0xff;
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile u16 *) (u32) v0);
    at = v0 < a0;
    if (at == 0) goto L_00BD5D60;
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = a4 < 6;
    if (v0 != 0) goto L_00BD5CE8;
    v1 = a4 & 0xff; goto L_00BD5D64;
L_00BD5D1C:;
    if (v0 <= 0) goto L_00BD5D50;
    a1 = (s64) ((u64) 0 + (u64) (s64) 1018); goto L_00BD5D50;
L_00BD5D2C:;
    v0 = v0 < 2;
    if (v0 != 0) goto L_00BD5D50;
    a0 = (*(volatile s32 *) (u32) (a2 + 4)); v0 = func_00207920(a0);
    at = v0 < 5000;
    if (at == 0) { a1 = (s64) ((u64) 0 + (u64) (s64) 1198); goto L_00BD5D50; }
    a1 = (s64) ((u64) 0 + (u64) (s64) 1044);
L_00BD5D50:;
    if (a1 != 0) { v0 = (*(volatile s32 *) (u32) s1); goto L_00BD5D80; }
L_00BD5D58:;
    v0 = s0; goto L_00BD5D94;
L_00BD5D60:;
    v1 = a4 & 0xff;
L_00BD5D64:;
    v0 = 1;
    if (v1 == v0) { v0 = a3 & 0xff; goto L_00BD5D2C; }
    if (v1 == 0) { v0 = a3 & 0xff; goto L_00BD5D1C; }
    goto L_00BD5D50;
L_00BD5D80:;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a2 = 0; func_00209540(a0, a1, a2);
    s0 = 1; goto L_00BD5D58;
L_00BD5D94:;
    return v0;
}
