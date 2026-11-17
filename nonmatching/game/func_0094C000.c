/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00288670(s64, s64);
s64 func_002AE670(s64);
void func_00960F50(s64, s64);
s64 func_0098F530(s64);
s64 func_009909D0(s64, s64);
s64 func_00BBB780(s64);

s64 func_0094C000(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;
    s64 hi = 0, lo = 0;

    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    { s32 c_ = v0 != 0; s0 = a0; if (c_) goto L_0094C024; }
    v0 = 0; goto L_0094C1F4;
L_0094C024:;
    a2 = (*(volatile u8 *) (u32) (s0 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s0 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 40;
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 114));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v1 = (*(volatile s32 *) (u32) (s0 + 28));
    v1 = v1 < 4096;
    if (v1 != 0) { v0 = 0; goto L_0094C1F4; }
    v1 = (s32) 0x66660000U;
    v1 = v1 | 0x6667;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) v0 >> 31);
    v1 = hi;
    a3 = (*(volatile u8 *) (u32) (s0 + 18));
    a2 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (s0 + 17));
    a2 = (s32) ((u32) a2 + 0x2980U);
    v1 = (s32) v1 >> 3;
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (s32) ((u32) a3 << 4);
    a3 = (s32) ((u32) a0 - (u32) a3);
    a0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a3 << 3);
    a3 = (s32) ((u32) a0 - (u32) a3);
    a0 = (s32) ((u32) a1 << 3);
    a0 = (s32) ((u32) a0 - (u32) a1);
    a1 = (s32) ((u32) a3 << 8);
    a0 = (s32) ((u32) a0 << 3);
    a1 = (s32) ((u32) a2 + (u32) a1);
    a1 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile u8 *) (u32) (a1 + 121));
    a0 = (s64) ((u64) a0 << 56);
    a0 = (s64) ((u64) a0 >> 63);
    if (a0 == 0) goto L_0094C10C;
    { s32 c_ = v0 >= 0; a0 = (s32) v0 >> 2; if (c_) goto L_0094C108; }
    a0 = (s32) ((u32) v0 + 0x3U);
    a0 = (s32) a0 >> 2;
L_0094C108:;
    v1 = (s32) ((u32) v1 + (u32) a0);
L_0094C10C:;
    a1 = (*(volatile u8 *) (u32) (a1 + 105));
    a0 = 3;
    a1 = a1 & 0x3;
    if (a1 != a0) goto L_0094C134;
    { s32 c_ = v0 >= 0; a0 = (s32) v0 >> 2; if (c_) goto L_0094C130; }
    v0 = (s32) ((u32) v0 + 0x3U);
    a0 = (s32) v0 >> 2;
L_0094C130:;
    v1 = (s32) ((u32) v1 + (u32) a0);
L_0094C134:;
    a0 = (s64) ((u64) v1 << 48);
    a0 = a0 >> 48; v0 = func_00BBB780(a0);
    v0 = v0 & 0xff;
    if (v0 != 0) { a0 = s0; goto L_0094C154; }
    v0 = 0; goto L_0094C1F4;
L_0094C154:;
    a1 = (s32) 0x100000U; v0 = func_009909D0(a0, a1);
    if (v0 != 0) { v0 = 0; goto L_0094C1F4; }
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x5390U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == 0) { a0 = s0; goto L_0094C188; }
L_0094C180:;
    v0 = 0; goto L_0094C1F4;
L_0094C188:;
    v0 = func_0098F530(a0);
    if (v0 == 0) goto L_0094C180;
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = (*(volatile s32 *) (u32) (gp + -31080));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) goto L_0094C180;
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 21399));
    if (v0 != 0) goto L_0094C180;
    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x5372U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) goto L_0094C180;
    a0 = s0;
    a1 = 10; func_00960F50(a0, a1);
    a0 = 256; v0 = func_002AE670(a0);
    (*(volatile u32 *) (u32) (s0 + 500)) = (u32) v0;
    v0 = 1;
L_0094C1F4:;
    return v0;
}
