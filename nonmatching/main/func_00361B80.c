/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Module_GetRegion(s32);
s32 func_001FC7D0(s32);
void func_00290C00(s32);
void func_002B51C0(s32, s32, s32);
void func_0099D450(s32, s32);
void func_0099D490(s32, s32);

void func_00361B80(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 hi = 0, lo = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = a1;
    if (s3 == 0) goto L_00361DF0;
    v0 = 139;
    a5 = 0;
    { s64 m_ = (s64) (s32) s4 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a2 = lo; }
    a3 = (s32) ((u32) sp + 0x60U);
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1a90U);
    s2 = (s32) ((u32) v0 + (u32) a2);
    a4 = s2;
L_00361BC8:;
    a1 = (*(volatile u8 *) (u32) (a4 + 7));
    a5 = (s32) ((u32) a5 + 0x5U);
    a0 = (*(volatile u8 *) (u32) (a4 + 8));
    v0 = a5 < 6;
    v1 = (*(volatile u8 *) (u32) (a4 + 9));
    (*(volatile u8 *) (u32) a3) = (u8) a1;
    (*(volatile u8 *) (u32) (a3 + 1)) = (u8) a0;
    (*(volatile u8 *) (u32) (a3 + 2)) = (u8) v1;
    a0 = (*(volatile u8 *) (u32) (a4 + 10));
    v1 = (*(volatile u8 *) (u32) (a4 + 11));
    (*(volatile u8 *) (u32) (a3 + 3)) = (u8) a0;
    (*(volatile u8 *) (u32) (a3 + 4)) = (u8) v1;
    a4 = (s32) ((u32) a4 + 0x5U);
    { s32 c_ = v0 != 0; a3 = (s32) ((u32) a3 + 0x5U); if (c_) goto L_00361BC8; }
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) a5 + (u32) sp);
    v0 = (s32) ((u32) v0 + 0x1a97U);
    a1 = (s32) ((u32) s3 + 0x14U);
    a0 = (s32) ((u32) v0 + (u32) a2);
    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a5 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0x1a96U);
    s1 = (s32) ((u32) v0 + (u32) a2);
    v0 = (*(volatile u8 *) (u32) a0);
    a2 = 3;
    s0 = (*(volatile u8 *) (u32) s1);
    a0 = s4;
    (*(volatile u8 *) (u32) (v1 + 96)) = (u8) v0; func_002B51C0(a0, a1, a2);
    a2 = 0;
    a4 = s2;
    a3 = (s32) ((u32) sp + 0x60U);
    a0 = 1;
    v0 = (s32) 0x590000U;
L_00361C54:;
    a1 = (*(volatile u8 *) (u32) a3);
    v1 = (*(volatile u8 *) (u32) (a4 + 7));
    if (a1 == v1) goto L_00361C68;
    (*(volatile u8 *) (u32) (v0 + 7932)) = (u8) a0;
L_00361C68:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v1 = a2 < 11;
    a4 = (s32) ((u32) a4 + 0x1U);
    { s32 c_ = v1 != 0; a3 = (s32) ((u32) a3 + 0x1U); if (c_) goto L_00361C54; }
    v0 = (*(volatile u8 *) (u32) s1);
    v1 = s0 & 0xff;
    if (v1 == v0) { a0 = 17; goto L_00361C9C; }
    v1 = 1;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 7932)) = (u8) v1;
    a0 = 17;
L_00361C9C:;
    v0 = Pes6Module_GetRegion(a0);
    a0 = v0; v0 = func_001FC7D0(a0);
    v1 = 17;
    if (v0 != v1) goto L_00361D38;
    v0 = (*(volatile u8 *) (u32) s3);
    a0 = 255;
    if (v0 == a0) goto L_00361D38;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7757));
    if (v1 == a0) { a0 = 1; goto L_00361CE4; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00361CE4:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 18));
    if (s4 != v0) goto L_00361D38;
    s1 = 0;
    s0 = (s32) ((u32) s3 + (u32) s1);
L_00361D10:;
    a0 = (*(volatile u8 *) (u32) s0);
    a1 = s1; func_0099D490(a0, a1);
    a0 = (*(volatile u8 *) (u32) (s0 + 2));
    a1 = s1; func_0099D450(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 2;
    if (v0 != 0) { s0 = (s32) ((u32) s3 + (u32) s1); goto L_00361D10; }
L_00361D38:;
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1ef6U);
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1ef8U);
    a0 = (*(volatile u8 *) (u32) (s3 + 18));
    v1 = (s32) ((u32) v1 + (u32) s4);
    v0 = (s32) ((u32) v0 + (u32) s4);
    (*(volatile u8 *) (u32) v1) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (s3 + 18));
    v0 = (s32) ((u32) a0 + (u32) v0);
    at = a0 < v0;
    { s32 c_ = at == 0; a1 = a0; if (c_) goto L_00361DB0; }
    v0 = (s32) ((u32) a0 << 3);
    a2 = (s32) ((u32) s2 + (u32) v0);
L_00361D78:;
    v0 = (s32) ((u32) a1 - (u32) a0);
    v0 = (s32) ((u32) v0 << 1);
    a1 = (s32) ((u32) a1 + 0x1U);
    v1 = (s32) ((u32) s3 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 4));
    (*(volatile u8 *) (u32) (a2 + 82)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (v1 + 5));
    (*(volatile u8 *) (u32) (a2 + 83)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s3 + 18));
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = a1 < v0;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x8U); if (c_) goto L_00361D78; }
L_00361DB0:;
    at = a1 < 7;
    if (at == 0) goto L_00361DE8;
    v0 = (s32) ((u32) a1 << 3);
    v1 = 255;
    a0 = (s32) ((u32) s2 + (u32) v0);
L_00361DC8:;
    (*(volatile u8 *) (u32) (a0 + 82)) = (u8) v1;
    a1 = (s32) ((u32) a1 + 0x1U);
    (*(volatile u8 *) (u32) (a0 + 83)) = (u8) v1;
    v0 = a1 < 7;
    a0 = (s32) ((u32) a0 + 0x8U);
    if (v0 != 0) goto L_00361DC8;
L_00361DE8:;
    a0 = s4; func_00290C00(a0);
L_00361DF0:;
    return;
}
