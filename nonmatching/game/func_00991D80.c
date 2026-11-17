/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00990590(s32, s32, s32, s32, s32);

s32 func_00991D80(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;

    v1 = (*(volatile u8 *) (u32) (a0 + 19));
    v0 = (*(volatile s32 *) (u32) (gp + -31080));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == 0) { v0 = 0; goto L_00991E9C; }
    a1 = v1 ^ 0x1;
    v0 = 255;
    v1 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) ((u32) v1 << 1);
    a2 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) ((u32) a2 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (v1 + 436));
    if (v1 == v0) { a1 = 1; goto L_00991DD4; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a1 = hi;
L_00991DD4:;
    v1 = (s32) ((u32) a1 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v1 + 16));
    if (v0 != 0) goto L_00991E5C;
    v1 = (s32) ((u32) a2 + (u32) a0);
    v0 = 255;
    v1 = (*(volatile u8 *) (u32) (v1 + 437));
    if (v1 == v0) { a1 = 1; goto L_00991E18; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a1 = hi;
L_00991E18:;
    v1 = (s32) ((u32) a1 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a1);
    at = (s32) 0x10000U;
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v1 = (s32) ((u32) v0 + (u32) v1);
    at = at | 0x1;
    v0 = (*(volatile u8 *) (u32) v1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile s32 *) (u32) (v0 + 344));
    at = (u64) v0 < (u64) at;
    if (at != 0) goto L_00991E5C;
    v0 = 1; goto L_00991E9C;
L_00991E5C:;
    v0 = (*(volatile u8 *) (u32) v1);
    at = (s32) 0x40000U;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile s32 *) (u32) (v0 + 344));
    at = (u64) v0 < (u64) at;
    if (at == 0) { a1 = (*(volatile u16 *) (u32) (a0 + 288)); goto L_00991E84; }
    v0 = 0; goto L_00991E9C;
L_00991E84:;
    a2 = 10240;
    a3 = (*(volatile s32 *) (u32) (a0 + 292));
    a4 = 1; v0 = func_00990590(a0, a1, a2, a3, a4);
    v0 = v0 & 0xff;
    v0 = v0 < 2;
L_00991E9C:;
    return v0;
}
