/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D76B0(s64, s64);
void func_001DF420(s64, s64);
void func_001ED8F0(s64, s64);
s64 func_002928B0(s64);
s64 func_002D5410(void);
void func_002D5630(s64, s64);
s64 func_002F9630(s64);
s64 func_002F96F0(s64, s64);
void func_0091BD30(s64, s64, s64, s64);
void func_0091C180(s64);
void memset(s64, s64, s64);

void func_0091B4F0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 gp = 0x3ef370;

    v1 = 255;
    { s32 c_ = v1 == 0; s0 = a0; if (c_) goto L_0091B714; }
    a0 = (s32) 0x930000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xfffff320U);
    a2 = 60;
    (*(volatile u32 *) (u32) (gp + -20000)) = (u32) 0; memset(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (gp + -20000));
    a0 = (s32) 0x930000U;
    v0 = (s32) ((u32) gp + 0xffffb1e4U);
    a0 = (s32) ((u32) a0 + 0xfffff320U);
    a1 = (s32) ((u32) a2 << 4);
    v1 = (s32) ((u32) a2 << 2);
    a1 = (s32) ((u32) a1 - (u32) a2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u32 *) (u32) v0) = (u32) v1; v0 = func_002D5410();
    a0 = (*(volatile s32 *) (u32) (gp + -20000));
    s2 = (s32) 0x930000U;
    v1 = (s32) ((u32) gp + 0xffffb1e4U);
    s3 = 0;
    s2 = (s32) ((u32) s2 + 0xffffe910U);
    s1 = 0;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) (v1 + 28)) = (u32) v0;
L_0091B584:;
    a0 = (*(volatile s32 *) (u32) s2); v0 = func_002928B0(a0);
    a1 = (s64) ((u64) v0 << 48);
    v1 = (s32) ((u32) gp + 0xffffb1e4U);
    v0 = (*(volatile s32 *) (u32) (gp + -20000));
    s3 = (s32) ((u32) s3 + 0x1U);
    a1 = a1 >> 48;
    s2 = (s32) ((u32) s2 + 0x4U);
    a0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = s3 < 2;
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) v1 + (u32) s1);
    (*(volatile u32 *) (u32) (v1 + 52)) = (u32) a1;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_0091B584; }
    func_0091BD30(a0, a1, a2, a3);
    a0 = 1; func_0091C180(a0);
    v1 = (*(volatile s32 *) (u32) (gp + -20000));
    v0 = (s32) ((u32) gp + 0xffffb1e4U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 40));
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_0091B6D8;
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s1 = v0;
    { s32 c_ = s1 <= 0; s2 = 0; if (c_) goto L_0091B648; }
    v1 = (*(volatile s32 *) (u32) (gp + -20000));
L_0091B610:;
    v0 = (s32) ((u32) gp + 0xffffb1e4U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s2; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 255; func_001D76B0(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < s1;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -20000)); goto L_0091B610; }
L_0091B648:;
    v1 = (*(volatile s32 *) (u32) (gp + -20000));
    v0 = (s32) ((u32) gp + 0xffffb1e4U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s1; goto L_0091B67C; }
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s1;
L_0091B67C:;
    a1 = 255; func_001ED8F0(a0, a1);
    s2 = 1;
    v1 = (*(volatile s32 *) (u32) (gp + -20000));
L_0091B68C:;
    v0 = (s32) ((u32) gp + 0xffffb1e4U);
    a1 = s2;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_0091B6B8;
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
L_0091B6B8:;
    a0 = s1;
    a1 = 255; func_001DF420(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    at = s2 < 4;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -20000)); goto L_0091B68C; }
L_0091B6D8:;
    if (s0 <= 0) { v1 = (*(volatile s32 *) (u32) (gp + -20000)); goto L_0091B6F8; }
    at = s0 < 31;
    if (at != 0) { s0 = 1; goto L_0091B6F4; }
    s0 = (s32) ((u32) s0 + 0xffffffe2U); goto L_0091B6F4;
L_0091B6F4:;
    v1 = (*(volatile s32 *) (u32) (gp + -20000));
L_0091B6F8:;
    v0 = (s32) ((u32) gp + 0xffffb1e4U);
    a1 = s0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x20U); func_002D5630(a0, a1);
L_0091B714:;
    return;
}
