/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008CC230(s64, s64, s64);
void memcpy(s64, s64, s64);

void func_008CC080(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 hi = 0, lo = 0;

    v0 = 255;
    s3 = a0;
    s2 = a2;
    { s32 c_ = s3 == v0; s1 = a1; if (c_) goto L_008CC0C0; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s3 / (s32) v0); hi = (s32) ((s32) s3 % (s32) v0); lo = q_; }
    a0 = hi;
    v1 = (s32) ((u32) a0 << 3); goto L_008CC0C8;
L_008CC0C0:;
    a0 = 1;
    v1 = (s32) ((u32) a0 << 3);
L_008CC0C8:;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = (s32) 0x590000U;
    s0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) a0 + 0x2980U);
    a3 = (*(volatile u8 *) (u32) (s0 + 18));
    a1 = (s32) ((u32) s1 + 0x58U);
    v1 = (*(volatile u8 *) (u32) (s0 + 17));
    a2 = 36;
    v0 = (s32) ((u32) a3 << 4);
    a3 = (s32) ((u32) v0 - (u32) a3);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a3 << 3);
    a3 = (s32) ((u32) v0 - (u32) a3);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a3 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) v0 + 0x1cU); memcpy(a0, a1, a2);
    a3 = (*(volatile u8 *) (u32) (s0 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s0 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = (s32) ((u32) s1 + 0x20U);
    a2 = 15;
    v0 = (s32) ((u32) a3 << 4);
    a3 = (s32) ((u32) v0 - (u32) a3);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a3 << 3);
    a3 = (s32) ((u32) v0 - (u32) a3);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a3 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) v0 + 0x247U); memcpy(a0, a1, a2);
    a7 = (*(volatile u8 *) (u32) (s0 + 18));
    a6 = (s32) 0x590000U;
    a3 = (s32) 0x590000U;
    a5 = (*(volatile u8 *) (u32) (s0 + 17));
    a6 = (s32) ((u32) a6 + 0x2990U);
    a3 = (s32) ((u32) a3 + 0x2980U);
    a4 = (s32) ((u32) a7 << 4);
    v0 = (*(volatile u8 *) (u32) (s1 + 111));
    a7 = (s32) ((u32) a4 - (u32) a7);
    v1 = -241;
    a4 = (s32) ((u32) a5 << 4);
    a0 = s3;
    a5 = (s32) ((u32) a4 - (u32) a5);
    a2 = s2;
    a4 = (s32) ((u32) a7 << 3);
    a1 = s1;
    a7 = (s32) ((u32) a4 - (u32) a7);
    a4 = (s32) ((u32) a5 << 3);
    a4 = (s32) ((u32) a4 - (u32) a5);
    a5 = (s32) ((u32) a7 << 8);
    a6 = (s32) ((u32) a6 + (u32) a5);
    a3 = (s32) ((u32) a3 + (u32) a5);
    a5 = (s32) ((u32) a4 << 3);
    a4 = (s32) ((u32) a5 + (u32) a6);
    a3 = (s32) ((u32) a5 + (u32) a3);
    (*(volatile u8 *) (u32) a4) = (u8) v0;
    a4 = (*(volatile u8 *) (u32) (s1 + 53));
    v0 = (*(volatile u8 *) (u32) (a3 + 105));
    a4 = (s64) ((u64) a4 << 56);
    v0 = v0 & v1;
    v1 = (s64) ((u64) a4 >> 60);
    v1 = v1 & 0xf;
    v1 = (s32) ((u32) v1 << 4);
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) (a3 + 105)) = (u8) v0; func_008CC230(a0, a1, a2);
    return;
}
