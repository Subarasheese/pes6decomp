/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Heap_Free(s64, s64);
s64 func_00153FE0(s64, s64);
s64 func_001B05B0(void);
s64 func_001CDAD0(s64);
s64 memcpy(s64, s64, s64);

s64 func_001A69C0(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 gp = 0x3ef370;

    s2 = a0;
    s0 = (*(volatile s32 *) (u32) (a0 + 68));
    s1 = (*(volatile s32 *) (u32) a0);
    s3 = (*(volatile s32 *) (u32) (a0 + 72));
    a0 = (*(volatile u8 *) (u32) (s1 + 3));
    at = a0 < 3;
    if (at == 0) goto L_001A6A20;
    v1 = (*(volatile u32 *) (u32) (gp + -23252));
    v0 = (s32) ((u32) a0 << 6);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v0 << 11);
    v0 = (s64) ((u64) v1 + (u64) v0);
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32; goto L_001A6A34;
L_001A6A20:;
    v0 = func_001B05B0();
    a1 = s3;
    a0 = v0; v0 = func_00153FE0(a0, a1);
L_001A6A34:;
    (*(volatile u32 *) (u32) (s1 + 8)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s2 + 72));
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (s1 + 8));
    a2 = (*(volatile s32 *) (u32) (s1 + 4));
    a1 = s0; v0 = memcpy(a0, a1, a2);
    s0 = (*(volatile s32 *) (u32) (s1 + 8));
    a0 = s0; v0 = func_001CDAD0(a0);
    v0 = (*(volatile s32 *) (u32) s0);
    at = 0 < v0;
    { s32 c_ = at == 0; a1 = 0; if (c_) goto L_001A6AA0; }
    a0 = 0;
    v1 = s1;
L_001A6A74:;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) a0 + 0x4U);
    (*(volatile u32 *) (u32) (v1 + 12)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) s0);
    v0 = a1 < v0;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x4U); if (c_) goto L_001A6A74; }
L_001A6AA0:;
    v0 = 2;
    (*(volatile u8 *) (u32) (s1 + 1)) = (u8) v0;
    a0 = (*(volatile s32 *) (u32) (s2 + 68)); v0 = Pes6Heap_Free(a0, a1);
    return v0;
}
