/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
s32 func_001F08B0(s32);
s32 func_008D90A0(s32, s32, s32, s32);
s32 func_008D9300(s32, s32, s32, s32);
void func_008EADF0(s32, s32, s32, s32);
void func_008EB260(s32, s32, s32, s32);
void func_008EB3B0(s32, s32, s32);

s32 func_008E95A0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 hi = 0, lo = 0;

    s3 = a0;
    s2 = a1;
    if (s3 != 0) goto L_008E95CC;
    v0 = 0; goto L_008E97C8;
L_008E95CC:;
    s1 = (*(volatile u8 *) (u32) s3);
    v0 = (s32) ((u32) s1 + (u32) s3);
    s0 = (*(volatile u8 *) (u32) (v0 + 1));
    a0 = s2; v0 = func_008D90A0(a0, a1, a2, a3);
    v1 = v0 & 0x60;
    v0 = 32;
    if (v1 == v0) { v0 = (s32) 0x84020000U; goto L_008E9614; }
    v0 = 64;
    if (v1 == v0) { v0 = (s32) 0x84000000U; goto L_008E9604; }
    a0 = s2; goto L_008E9624;
L_008E9604:;
    a0 = v0 | 0x8401; SD_call(a0);
    v0 = 1; goto L_008E97C8;
L_008E9614:;
    a0 = v0 | 0x8400; SD_call(a0);
    v0 = 2; goto L_008E97C8;
L_008E9624:;
    v0 = func_008D9300(a0, a1, a2, a3);
    v1 = 4;
    if (v0 == v1) { v1 = (s32) ((u32) s0 + 0x2U); goto L_008E96E0; }
    v1 = 8;
    if (v0 == v1) { v1 = (s32) ((u32) s0 + 0x1U); goto L_008E9664; }
    v1 = 2;
    if (v0 == v1) { v0 = (s32) ((u32) s1 + 0x1U); goto L_008E9764; }
    v1 = 1;
    if (v0 == v1) { v0 = (s32) ((u32) s1 + 0x1U); goto L_008E9764; }
    v0 = 0; goto L_008E975C;
L_008E9664:;
    v0 = 3;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = (*(volatile u8 *) (u32) s3);
    a2 = hi;
    v0 = (s32) ((u32) v0 + (u32) s3);
    (*(volatile u8 *) (u32) (v0 + 1)) = (u8) a2;
    a1 = (*(volatile u8 *) (u32) s3);
    a0 = (s32) ((u32) s3 + 0x4U); func_008EB3B0(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) s3);
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffe0c0U);
    a0 = (s32) ((u32) a1 + (u32) s3);
    v1 = (s32) ((u32) a1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a1);
    a0 = (*(volatile u8 *) (u32) (a0 + 1));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
    a0 = (s32) ((u32) s3 + 0x4U);
    a1 = v0; func_008EB260(a0, a1, a2, a3);
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf803; SD_call(a0);
    v0 = 3; goto L_008E97C8;
L_008E96E0:;
    v0 = 3;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = (*(volatile u8 *) (u32) s3);
    a2 = hi;
    v0 = (s32) ((u32) v0 + (u32) s3);
    (*(volatile u8 *) (u32) (v0 + 1)) = (u8) a2;
    a1 = (*(volatile u8 *) (u32) s3);
    a0 = (s32) ((u32) s3 + 0x4U); func_008EB3B0(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) s3);
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffe0c0U);
    a0 = (s32) ((u32) a1 + (u32) s3);
    v1 = (s32) ((u32) a1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a1);
    a0 = (*(volatile u8 *) (u32) (a0 + 1));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
    a0 = (s32) ((u32) s3 + 0x4U);
    a1 = v0; func_008EB260(a0, a1, a2, a3);
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf803; SD_call(a0);
    v0 = 3; goto L_008E97C8;
L_008E975C:;
    goto L_008E97CC;
L_008E9764:;
    v0 = v0 & 0xff;
    a0 = (s32) ((u32) s3 + 0x4U);
    a1 = v0 & 0x1;
    (*(volatile u8 *) (u32) s3) = (u8) a1; func_008EADF0(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) s3);
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffe0c0U);
    a0 = (s32) ((u32) a1 + (u32) s3);
    v1 = (s32) ((u32) a1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a1);
    a0 = (*(volatile u8 *) (u32) (a0 + 1));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
    a0 = (s32) ((u32) s3 + 0x4U);
    a1 = v0; func_008EB260(a0, a1, a2, a3);
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    v0 = 3;
L_008E97C8:;
L_008E97CC:;
    return v0;
}
