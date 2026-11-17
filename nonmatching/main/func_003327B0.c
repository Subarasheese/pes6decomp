/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0032E980(s64);
s64 func_00331BF0(s64, s64, s64, s64, s64);
s64 func_003325A0(s64, s64, s64, s64, s64, s64, s64);

s64 func_003327B0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[18];
    s64 sp = (s32) (u32) frame;

    s2 = a0;
    s1 = a1;
    s0 = 0; v0 = func_003325A0(a0, a1, a2, a3, a4, a5, a6);
    if (v0 != 0) { v0 = (*(volatile u16 *) (u32) (s2 + 10)); goto L_003327F4; }
    v0 = 0; goto L_00332E40;
L_003327F4:;
    a1 = 2;
    v0 = (s64) ((u64) v0 << 55);
    v0 = (s64) ((u64) v0 >> 62);
    if (v0 == a1) { v1 = (*(volatile u16 *) (u32) (s2 + 8)); goto L_00332B40; }
    a0 = 1;
    if (v0 == a0) { v1 = (*(volatile u16 *) (u32) (s2 + 8)); goto L_0033281C; }
    v0 = s0; goto L_00332E40;
L_0033281C:;
    v0 = 7;
    v1 = (s64) ((u64) v1 << 55);
    v1 = (s64) ((u64) v1 >> 60);
    if (v1 == v0) { s3 = 0; goto L_00332A9C; }
    v0 = 5;
    if (v1 == v0) { s3 = 0; goto L_003329F0; }
    if (v1 == a0) goto L_003329EC;
    v0 = 8;
    if (v1 == v0) { v0 = (*(volatile u8 *) (u32) (s2 + 11)); goto L_00332944; }
    v0 = 9;
    if (v1 == v0) { v0 = (*(volatile u8 *) (u32) (s2 + 11)); goto L_003328C4; }
    v0 = 10;
    if (v1 == v0) { s4 = 0; goto L_0033287C; }
    if (v1 == a1) goto L_00332878;
    goto L_00332E3C;
L_00332878:;
    s4 = 0;
L_0033287C:;
    s3 = 0;
    (*(volatile u8 *) (u32) (s2 + 12)) = (u8) s4;
L_00332884:;
    a0 = s2;
    v0 = (*(volatile s32 *) (u32) (s2 + 16));
    v0 = (s32) ((u32) v0 + (u32) s3);
    a1 = (*(volatile s32 *) (u32) v0);
    a2 = s1; v0 = func_00331BF0(a0, a1, a2, a3, a4);
    s0 = v0;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = (*(volatile u8 *) (u32) (s2 + 15));
    at = s4 < v0;
    { s32 c_ = at == 0; s3 = (s32) ((u32) s3 + 0x4U); if (c_) goto L_00332E3C; }
    if (s0 != 0) { (*(volatile u8 *) (u32) (s2 + 12)) = (u8) s4; goto L_00332884; }
    goto L_00332E3C;
L_003328C4:;
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    { s32 c_ = v0 != 0; s3 = 0; if (c_) goto L_00332E3C; }
L_003328D4:;
    a0 = (*(volatile u8 *) (u32) (s2 + 15)); v0 = func_0032E980(a0);
    (*(volatile u8 *) (u32) (s2 + 12)) = (u8) v0;
    a0 = s2;
    v1 = (*(volatile u8 *) (u32) (s2 + 12));
    v0 = (*(volatile s32 *) (u32) (s2 + 16));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
    a2 = s1; v0 = func_00331BF0(a0, a1, a2, a3, a4);
    s0 = v0;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = (*(volatile u8 *) (u32) (s2 + 15));
    at = s3 < v0;
    if (at == 0) goto L_00332928;
    v0 = (u64) 0 < (u64) s0;
    v0 = v0 ^ 0x1;
    if (v0 != 0) goto L_003328D4;
L_00332928:;
    a0 = (*(volatile u8 *) (u32) (s2 + 11));
    v0 = -3;
    v1 = (s64) ((u64) 0 + (u64) (s64) 2);
    v0 = a0 & v0;
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) (s2 + 11)) = (u8) v0; goto L_00332E3C;
L_00332944:;
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    { s32 c_ = v0 != 0; s3 = 0; if (c_) goto L_00332E3C; }
    v1 = (*(volatile u8 *) (u32) (s2 + 12));
L_00332958:;
    a0 = s2;
    v0 = (*(volatile s32 *) (u32) (s2 + 16));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
    a2 = s1; v0 = func_00331BF0(a0, a1, a2, a3, a4);
    s0 = v0;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = (*(volatile u8 *) (u32) (s2 + 12));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (s2 + 12)) = (u8) v0;
    v1 = (*(volatile u8 *) (u32) (s2 + 15));
    v0 = (*(volatile u8 *) (u32) (s2 + 12));
    if ((u32) v1 != 0) { s64 q_ = (s32) ((u32) v0 / (u32) v1); hi = (s32) ((u32) v0 % (u32) v1); lo = q_; }
    v0 = hi;
    (*(volatile u8 *) (u32) (s2 + 12)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s2 + 15));
    at = s3 < v0;
    if (at == 0) goto L_003329C0;
    v0 = (u64) 0 < (u64) s0;
    v0 = v0 ^ 0x1;
    if (v0 != 0) { v1 = (*(volatile u8 *) (u32) (s2 + 12)); goto L_00332958; }
L_003329C0:;
    v1 = (*(volatile u8 *) (u32) (s2 + 12));
    v0 = (*(volatile u8 *) (u32) (s2 + 13));
    if (v1 != v0) goto L_00332E3C;
    a0 = (*(volatile u8 *) (u32) (s2 + 11));
    v0 = -3;
    v1 = (s64) ((u64) 0 + (u64) (s64) 2);
    v0 = a0 & v0;
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) (s2 + 11)) = (u8) v0; goto L_00332E3C;
L_003329EC:;
    s3 = 0;
L_003329F0:;
    a0 = (*(volatile u8 *) (u32) (s2 + 15)); v0 = func_0032E980(a0);
    (*(volatile u8 *) (u32) (s2 + 12)) = (u8) v0;
    v1 = (*(volatile u8 *) (u32) (s2 + 13));
    v0 = (*(volatile u8 *) (u32) (s2 + 12));
    if (v1 != v0) goto L_00332A20;
    v1 = (*(volatile u8 *) (u32) (s2 + 15));
    v0 = 1;
    if (v1 != v0) goto L_003329F0;
L_00332A20:;
    v0 = (*(volatile u8 *) (u32) (s2 + 15));
    v0 = s3 < v0;
    if (v0 != 0) goto L_00332A50;
    v0 = (*(volatile u8 *) (u32) (s2 + 12));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (s2 + 12)) = (u8) v0;
    v1 = (*(volatile u8 *) (u32) (s2 + 15));
    v0 = (*(volatile u8 *) (u32) (s2 + 12));
    if ((u32) v1 != 0) { s64 q_ = (s32) ((u32) v0 / (u32) v1); hi = (s32) ((u32) v0 % (u32) v1); lo = q_; }
    v0 = hi;
    (*(volatile u8 *) (u32) (s2 + 12)) = (u8) v0;
L_00332A50:;
    v1 = (*(volatile u8 *) (u32) (s2 + 12));
    v0 = (*(volatile s32 *) (u32) (s2 + 16));
    a0 = s2;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
    a2 = s1; v0 = func_00331BF0(a0, a1, a2, a3, a4);
    s0 = v0;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = (*(volatile u8 *) (u32) (s2 + 15));
    at = s3 < v0;
    if (at == 0) goto L_00332A90;
    if (s0 == 0) goto L_003329F0;
L_00332A90:;
    v0 = (*(volatile u8 *) (u32) (s2 + 12));
    (*(volatile u8 *) (u32) (s2 + 13)) = (u8) v0; goto L_00332E3C;
L_00332A9C:;
    a0 = (*(volatile u8 *) (u32) (s2 + 15));
L_00332AA0:;
    at = s3 < a0;
    if (at == 0) goto L_00332AD8;
    v0 = func_0032E980(a0);
    v1 = (s32) ((u32) v0 << 2);
    a0 = s2;
    v0 = (*(volatile s32 *) (u32) (s2 + 16));
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
    a2 = s1; v0 = func_00331BF0(a0, a1, a2, a3, a4);
    s0 = v0; goto L_00332B20;
L_00332AD8:;
    v1 = (*(volatile u8 *) (u32) (s2 + 12));
    v0 = (*(volatile s32 *) (u32) (s2 + 16));
    a0 = s2;
    a2 = s1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
    s3 = 0; v0 = func_00331BF0(a0, a1, a2, a3, a4);
    s0 = v0;
    v0 = (*(volatile u8 *) (u32) (s2 + 12));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (s2 + 12)) = (u8) v0;
    v1 = (*(volatile u8 *) (u32) (s2 + 15));
    v0 = (*(volatile u8 *) (u32) (s2 + 12));
    if ((u32) v1 != 0) { s64 q_ = (s32) ((u32) v0 / (u32) v1); hi = (s32) ((u32) v0 % (u32) v1); lo = q_; }
    v0 = hi;
    (*(volatile u8 *) (u32) (s2 + 12)) = (u8) v0;
L_00332B20:;
    { s32 c_ = s0 != 0; s3 = (s32) ((u32) s3 + 0x1U); if (c_) goto L_00332E3C; }
    v0 = (*(volatile u8 *) (u32) (s2 + 15));
    v0 = s3 < v0;
    if (v0 != 0) { a0 = (*(volatile u8 *) (u32) (s2 + 15)); goto L_00332AA0; }
    goto L_00332E3C;
L_00332B40:;
    v0 = 6;
    v1 = (s64) ((u64) v1 << 55);
    v1 = (s64) ((u64) v1 >> 60);
    if (v1 == v0) { s3 = 0; goto L_00332DBC; }
    v0 = 5;
    if (v1 == v0) { s3 = 0; goto L_00332D44; }
    v0 = 4;
    if (v1 == v0) { v0 = (*(volatile u8 *) (u32) (s2 + 15)); goto L_00332CE4; }
    v0 = 7;
    if (v1 == v0) { a0 = (*(volatile u8 *) (u32) (s2 + 15)); goto L_00332CBC; }
    v0 = 10;
    if (v1 == v0) { s3 = 0; goto L_00332C6C; }
    if (v1 == a1) { s3 = 0; goto L_00332C34; }
    v0 = 9;
    if (v1 == v0) { v0 = (*(volatile u8 *) (u32) (s2 + 11)); goto L_00332BA0; }
    goto L_00332E3C;
L_00332BA0:;
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 != 0) goto L_00332C10;
    s3 = 0;
L_00332BB4:;
    a0 = (*(volatile u8 *) (u32) (s2 + 15)); v0 = func_0032E980(a0);
    (*(volatile u8 *) (u32) (s2 + 12)) = (u8) v0;
    a2 = (*(volatile u8 *) (u32) (s2 + 12));
    v0 = (*(volatile u8 *) (u32) (s2 + 13));
    if (v0 == a2) goto L_00332BB4;
    v0 = (*(volatile s32 *) (u32) (s2 + 16));
    v1 = (s32) ((u32) a2 << 2);
    a1 = s1;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u8 *) (u32) (s2 + 13)) = (u8) a2; v0 = func_003327B0(a0, a1, a2, a3, a4, a5, a6);
    v1 = (*(volatile u8 *) (u32) (s2 + 15));
    s0 = v0;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = (u64) 0 < (u64) s0;
    v0 = v0 ^ 0x1;
    v1 = s3 < v1;
    v0 = v0 & v1;
    if (v0 != 0) goto L_00332BB4;
L_00332C10:;
    if (s0 == 0) goto L_00332E3C;
    a0 = (*(volatile u8 *) (u32) (s2 + 11));
    v0 = -3;
    v1 = (s64) ((u64) 0 + (u64) (s64) 2);
    v0 = a0 & v0;
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) (s2 + 11)) = (u8) v0; goto L_00332E3C;
L_00332C34:;
    s4 = 0;
L_00332C38:;
    v0 = (*(volatile s32 *) (u32) (s2 + 16));
    v0 = (s32) ((u32) v0 + (u32) s4);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_003327B0(a0, a1, a2, a3, a4, a5, a6);
    s0 = s0 | v0;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = (*(volatile u8 *) (u32) (s2 + 15));
    v0 = s3 < v0;
    { s32 c_ = v0 != 0; s4 = (s32) ((u32) s4 + 0x4U); if (c_) goto L_00332C38; }
    goto L_00332E3C;
L_00332C6C:;
    s4 = 0;
    v0 = (*(volatile s32 *) (u32) (s2 + 16));
L_00332C74:;
    v0 = (s32) ((u32) v0 + (u32) s4);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_003327B0(a0, a1, a2, a3, a4, a5, a6);
    s0 = v0;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = (*(volatile u8 *) (u32) (s2 + 15));
    at = s3 < v0;
    { s32 c_ = at == 0; s4 = (s32) ((u32) s4 + 0x4U); if (c_) goto L_00332CA8; }
    if (s0 != 0) { v0 = (*(volatile s32 *) (u32) (s2 + 16)); goto L_00332C74; }
L_00332CA8:;
    v0 = s3 < 2;
    if (v0 != 0) goto L_00332E3C;
    s0 = 1; goto L_00332E3C;
L_00332CBC:;
    v0 = func_0032E980(a0);
    v1 = (*(volatile s32 *) (u32) (s2 + 16));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_003327B0(a0, a1, a2, a3, a4, a5, a6);
    s0 = v0; goto L_00332E3C;
L_00332CE4:;
    { s32 c_ = v0 <= 0; s3 = 0; if (c_) goto L_00332E3C; }
    s4 = 0;
L_00332CF0:;
    v0 = (*(volatile s32 *) (u32) (s2 + 16));
    a1 = s1;
    v0 = (s32) ((u32) v0 + (u32) s4);
    s5 = (*(volatile s32 *) (u32) v0);
    a0 = s5; v0 = func_003325A0(a0, a1, a2, a3, a4, a5, a6);
    if (v0 == 0) goto L_00332D28;
    a0 = s5;
    a1 = s1; v0 = func_003327B0(a0, a1, a2, a3, a4, a5, a6);
    s0 = v0;
    if (s0 != 0) goto L_00332E3C;
L_00332D28:;
    v0 = (*(volatile u8 *) (u32) (s2 + 15));
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < v0;
    { s32 c_ = v0 != 0; s4 = (s32) ((u32) s4 + 0x4U); if (c_) goto L_00332CF0; }
    goto L_00332E3C;
L_00332D44:;
    a0 = (*(volatile u8 *) (u32) (s2 + 15)); v0 = func_0032E980(a0);
    (*(volatile u8 *) (u32) (s2 + 12)) = (u8) v0;
    a0 = (*(volatile u8 *) (u32) (s2 + 12));
    v0 = (*(volatile u8 *) (u32) (s2 + 13));
    if (v0 != a0) goto L_00332D70;
    v1 = (*(volatile u8 *) (u32) (s2 + 15));
    v0 = 1;
    if (v1 != v0) goto L_00332D44;
L_00332D70:;
    v0 = a0 & 0xff;
    v1 = (s32) ((u32) v0 << 2);
    v0 = (*(volatile s32 *) (u32) (s2 + 16));
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_003327B0(a0, a1, a2, a3, a4, a5, a6);
    s0 = v0;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = (*(volatile u8 *) (u32) (s2 + 12));
    (*(volatile u8 *) (u32) (s2 + 13)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s2 + 15));
    at = s3 < v0;
    if (at == 0) goto L_00332E3C;
    if (s0 == 0) goto L_00332D44;
    goto L_00332E3C;
L_00332DBC:;
    s6 = 0;
    s5 = 0;
    s4 = (s32) ((u32) sp + 0x80U);
L_00332DC8:;
    v0 = (*(volatile s32 *) (u32) (s2 + 16));
    v0 = (s32) ((u32) v0 + (u32) s5);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_003325A0(a0, a1, a2, a3, a4, a5, a6);
    if (v0 == 0) goto L_00332DF0;
    (*(volatile u8 *) (u32) s4) = (u8) s3;
    s6 = (s32) ((u32) s6 + 0x1U);
    s4 = (s32) ((u32) s4 + 0x1U);
L_00332DF0:;
    v0 = (*(volatile u8 *) (u32) (s2 + 15));
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < v0;
    { s32 c_ = v0 != 0; s5 = (s32) ((u32) s5 + 0x4U); if (c_) goto L_00332DC8; }
    if (s6 == 0) goto L_00332E3C;
    a0 = s6; v0 = func_0032E980(a0);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v1 = (*(volatile s32 *) (u32) (s2 + 16));
    v0 = (*(volatile u8 *) (u32) (v0 + 128));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_003327B0(a0, a1, a2, a3, a4, a5, a6);
    goto L_00332E44;
L_00332E3C:;
    v0 = s0;
L_00332E40:;
L_00332E44:;
    return v0;
}
