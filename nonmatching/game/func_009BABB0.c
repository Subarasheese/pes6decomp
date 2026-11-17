/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002885D0(s64, s64);
s64 func_00288670(s64, s64);
s64 func_002AE670(s64);
s64 func_00BBB780(s64);
s64 func_00BBB8C0(s64);

s64 func_009BABB0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    a2 = (s32) 0x590000U;
    a2 = (s32) ((u32) a2 + 0x2980U);
    a1 = 50;
    a3 = (*(volatile u8 *) (u32) (a0 + 18));
    s0 = a0;
    v1 = (*(volatile u8 *) (u32) (a0 + 17));
    v0 = (s32) ((u32) a3 << 4);
    a0 = (s32) ((u32) v0 - (u32) a3);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a0 << 3);
    a0 = (s32) ((u32) v0 - (u32) a0);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a0 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a2 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 112));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    { s32 c_ = v0 >= 0; s1 = (s32) v0 >> 2; if (c_) goto L_009BAC24; }
    v0 = (s32) ((u32) v0 + 0x3U);
    s1 = (s32) v0 >> 2;
L_009BAC24:;
    a1 = (*(volatile u8 *) (u32) (s0 + 17));
    a0 = (*(volatile u8 *) (u32) (s0 + 18)); v0 = func_002885D0(a0, a1);
    v1 = v0 & 0xff;
    v0 = 4;
    if (v1 == v0) { s1 = 0; goto L_009BAC6C; }
    v0 = 3;
    if (v1 == v0) { s1 = (s32) ((u32) s1 + 0xfffffff6U); goto L_009BAC6C; }
    v0 = 2;
    if (v1 == v0) goto L_009BAC6C;
    v0 = 1;
    if (v1 == v0) { s1 = (s32) ((u32) s1 + 0x2U); goto L_009BAC6C; }
    if (v1 == 0) { s1 = (s32) ((u32) s1 + 0xaU); goto L_009BAC6C; }
L_009BAC6C:;
    a2 = (*(volatile u8 *) (u32) (s0 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s0 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 20;
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
    v0 = (*(volatile u8 *) (u32) (v0 + 131));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    at = v0 < 75;
    if (at == 0) goto L_009BACCC;
    s1 = 0;
L_009BACCC:;
    a2 = (*(volatile u8 *) (u32) (s0 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s0 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 50;
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
    v0 = (*(volatile u8 *) (u32) (v0 + 112));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v1 = 99;
    v0 = (s32) ((u32) v1 - (u32) v0);
    v0 = v0 < 20;
    if (v0 != 0) { a2 = (*(volatile u8 *) (u32) (s0 + 18)); goto L_009BAD38; }
    s0 = 6; goto L_009BAD9C;
L_009BAD38:;
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s0 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 50;
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
    v0 = (*(volatile u8 *) (u32) (v0 + 112));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v1 = 99;
    v0 = (s32) ((u32) v1 - (u32) v0);
    { s32 c_ = v0 >= 0; s0 = (s32) v0 >> 2; if (c_) goto L_009BAD9C; }
    v0 = (s32) ((u32) v0 + 0x3U);
    s0 = (s32) v0 >> 2;
L_009BAD9C:;
    { s32 c_ = s1 >= 0; v0 = (s32) s1 >> 2; if (c_) goto L_009BADAC; }
    v0 = (s32) ((u32) s1 + 0x3U);
    v0 = (s32) v0 >> 2;
L_009BADAC:;
    a0 = (s64) ((u64) v0 << 48);
    a0 = a0 >> 48; v0 = func_00BBB780(a0);
    if (v0 == 0) { v0 = 35; goto L_009BADF4; }
    v0 = 35;
    v0 = (s32) ((u32) v0 - (u32) s1);
    { s32 c_ = v0 >= 0; a0 = (s32) v0 >> 2; if (c_) goto L_009BADD8; }
    v0 = (s32) ((u32) v0 + 0x3U);
    a0 = (s32) v0 >> 2;
L_009BADD8:;
    v0 = func_00BBB8C0(a0);
    v0 = (s32) ((u32) s0 + (u32) v0);
    a0 = (s32) ((u32) v0 + 0x2U); v0 = func_002AE670(a0);
    goto L_009BAE20;
L_009BADF4:;
    v0 = (s32) ((u32) v0 - (u32) s1);
    { s32 c_ = v0 >= 0; a0 = (s32) v0 >> 2; if (c_) goto L_009BAE08; }
    v0 = (s32) ((u32) v0 + 0x3U);
    a0 = (s32) v0 >> 2;
L_009BAE08:;
    v0 = func_00BBB8C0(a0);
    v0 = (s32) ((u32) s0 + (u32) v0);
    a0 = (s32) ((u32) v0 + 0x4U); v0 = func_002AE670(a0);
L_009BAE20:;
    return v0;
}
