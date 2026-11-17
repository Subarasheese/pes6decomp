/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Team_ResolveSpecialId(s32);
s32 func_002F82B0(s32, s32, s32, s32);

s32 func_002CDB10(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;

    s3 = a0;
    s2 = a1;
    s1 = a2;
    a0 = s2 & 0xffff;
    v0 = Pes6Team_ResolveSpecialId(a0);
    a0 = v0 & 0xffff;
    (*(volatile u8 *) (u32) (s3 + 16)) = (u8) 0;
    v1 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) s1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) s1);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 << 1);
    s0 = (s32) ((u32) v1 + (u32) v0);
    a0 = s2 & 0xffff;
    v1 = -1;
    v0 = (s32) ((u32) gp + 0xffffab18U);
    (*(volatile u32 *) (u32) (s3 + 20)) = (u32) v1;
    (*(volatile u32 *) (u32) (s3 + 24)) = (u32) v1;
    (*(volatile u32 *) (u32) (s3 + 28)) = (u32) v1;
    (*(volatile u32 *) (u32) (s3 + 32)) = (u32) v1;
    (*(volatile u32 *) (u32) (s3 + 36)) = (u32) v1;
    (*(volatile u32 *) (u32) (s3 + 40)) = (u32) v1;
    (*(volatile u32 *) (u32) (s3 + 44)) = (u32) v1;
    (*(volatile u32 *) (u32) (s3 + 48)) = (u32) v1;
    v1 = (*(volatile u8 *) (u32) (s3 + 1));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = v0 & 0x1;
    v0 = (s32) ((u32) v0 << 1);
    a1 = (s32) ((u32) v0 + 0x1U); v0 = func_002F82B0(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (v0 + 60));
    a0 = s2 & 0xffff;
    (*(volatile u8 *) (u32) s3) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s3 + 52));
    v0 = (s32) ((u32) v0 << 1);
    a1 = (s32) ((u32) s1 + (u32) v0); v0 = func_002F82B0(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (s3 + 52));
    a0 = s2 & 0xffff;
    v1 = (s32) ((u32) a1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) ((u32) s0 + (u32) v1);
    (*(volatile u32 *) (u32) (s3 + 20)) = (u32) v1;
    (*(volatile u32 *) (u32) (s3 + 48)) = (u32) 0;
    v1 = (*(volatile u8 *) (u32) (v0 + 54));
    (*(volatile u8 *) (u32) (s3 + 4)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (v0 + 61));
    (*(volatile u8 *) (u32) (s3 + 11)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (v0 + 42));
    (*(volatile u8 *) (u32) (s3 + 10)) = (u8) v1;
    (*(volatile u8 *) (u32) (s3 + 3)) = (u8) 0;
    (*(volatile u8 *) (u32) (s3 + 5)) = (u8) 0;
    v1 = (*(volatile u8 *) (u32) (v0 + 52));
    (*(volatile u8 *) (u32) (s3 + 6)) = (u8) v1;
    v0 = (*(volatile u8 *) (u32) (v0 + 50));
    (*(volatile u8 *) (u32) (s3 + 8)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s3 + 53));
    v0 = (s32) ((u32) v0 << 1);
    a1 = (s32) ((u32) s1 + (u32) v0); v0 = func_002F82B0(a0, a1, a2, a3);
    v1 = (*(volatile s16 *) (u32) (v0 + 10));
    { s32 c_ = s1 == 0; (*(volatile u16 *) (u32) (s3 + 66)) = (u16) v1; if (c_) goto L_002CDC40; }
    a0 = (*(volatile u8 *) (u32) (s3 + 53));
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) s0 + (u32) v1);
    (*(volatile u32 *) (u32) (s3 + 40)) = (u32) v1;
L_002CDC40:;
    v0 = (*(volatile u8 *) (u32) (v0 + 55));
    a0 = s2 & 0xffff;
    (*(volatile u8 *) (u32) (s3 + 2)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s3 + 54));
    v0 = (s32) ((u32) v0 << 1);
    a1 = (s32) ((u32) s1 + (u32) v0); v0 = func_002F82B0(a0, a1, a2, a3);
    if (s1 == 0) { ; goto L_002CDC7C; }
    a0 = (*(volatile u8 *) (u32) (s3 + 54));
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) s0 + (u32) v1);
    (*(volatile u32 *) (u32) (s3 + 44)) = (u32) v1;
L_002CDC7C:;
    return v0;
}
