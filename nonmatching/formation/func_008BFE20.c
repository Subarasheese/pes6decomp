/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00290C00(s64);
void func_002B51C0(s64, s64, s64);
void func_002CA700(s64, s64, s64);
s64 func_008B9660(void);
void func_0099D490(s64, s64, s64, s64);
void func_00C323E0(s64, s64, s64, s64);

void func_008BFE20(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 hi = 0, lo = 0;

    a2 = 2;
    s2 = a0;
    s1 = a1;
    a1 = (s32) ((u32) s1 + 0x28U); func_002B51C0(a0, a1, a2);
    v0 = func_008B9660();
    v1 = (s64) ((u64) v0 << 48);
    v1 = v1 >> 48;
    v0 = 5;
    if (v1 == v0) { v0 = 1; goto L_008BFE80; }
    v0 = 4;
    if (v1 == v0) goto L_008BFE7C;
    v0 = 0; goto L_008BFE80;
L_008BFE7C:;
    v0 = 1;
L_008BFE80:;
    if (v0 == 0) goto L_008BFEB0;
    s0 = 0;
    v0 = (s32) ((u32) s1 + (u32) s0);
L_008BFE90:;
    a0 = s2 & 0xff;
    a2 = (*(volatile u8 *) (u32) (v0 + 1));
    a1 = s0; func_002CA700(a0, a1, a2);
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 11;
    if (v0 != 0) { v0 = (s32) ((u32) s1 + (u32) s0); goto L_008BFE90; }
L_008BFEB0:;
    v1 = (*(volatile u8 *) (u32) (s1 + 12));
    v0 = 255;
    if (v1 == v0) goto L_008BFF18;
    s0 = 0;
    v1 = (s32) ((u32) s1 + (u32) s0);
L_008BFEC8:;
    v0 = (*(volatile u8 *) (u32) (s1 + 12));
    s3 = (s32) ((u32) v1 + 0x28U);
    v1 = (*(volatile u8 *) (u32) (v1 + 40));
    if (v1 != v0) goto L_008BFEE8;
    a0 = s0 & 0xff;
    a1 = 0; func_0099D490(a0, a1, a2, a3);
L_008BFEE8:;
    v1 = (*(volatile u8 *) (u32) s3);
    v0 = (*(volatile u8 *) (u32) (s1 + 13));
    if (v1 != v0) goto L_008BFF08;
    a0 = s0 & 0xff;
    a1 = 1; func_0099D490(a0, a1, a2, a3);
L_008BFF08:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 11;
    if (v0 != 0) { v1 = (s32) ((u32) s1 + (u32) s0); goto L_008BFEC8; }
L_008BFF18:;
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1ef6U);
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1ef8U);
    a0 = (*(volatile u8 *) (u32) (s1 + 30));
    v1 = (s32) ((u32) v1 + (u32) s2);
    v0 = (s32) ((u32) v0 + (u32) s2);
    (*(volatile u8 *) (u32) v1) = (u8) a0;
    a2 = (*(volatile u8 *) (u32) v0);
    v1 = (*(volatile u8 *) (u32) (s1 + 30));
    v1 = (s32) ((u32) a2 + (u32) v1);
    at = a2 < v1;
    { s32 c_ = at == 0; v0 = a2; if (c_) goto L_008BFFA8; }
    v1 = 139;
    a0 = (s32) 0x590000U;
    { s64 m_ = (s64) (s32) s2 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    a0 = (s32) ((u32) a0 + 0x1a90U);
    v1 = (s32) ((u32) a2 << 3);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a1 = (s32) ((u32) v1 + (u32) a0);
L_008BFF6C:;
    v1 = (s32) ((u32) v0 - (u32) a2);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + 0x1U);
    a0 = (s32) ((u32) s1 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) (a0 + 16));
    (*(volatile u8 *) (u32) (a1 + 82)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (a0 + 17));
    (*(volatile u8 *) (u32) (a1 + 83)) = (u8) v1;
    (*(volatile u8 *) (u32) (a1 + 86)) = (u8) 0;
    v1 = (*(volatile u8 *) (u32) (s1 + 30));
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = v0 < v1;
    { s32 c_ = v1 != 0; a1 = (s32) ((u32) a1 + 0x8U); if (c_) goto L_008BFF6C; }
L_008BFFA8:;
    at = v0 < 7;
    if (at == 0) goto L_008BFFF0;
    v1 = 139;
    a0 = (s32) 0x590000U;
    { s64 m_ = (s64) (s32) s2 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    a0 = (s32) ((u32) a0 + 0x1a90U);
    v1 = (s32) ((u32) v0 << 3);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a1 = (s32) ((u32) v1 + (u32) a0);
    a0 = 255;
L_008BFFD4:;
    (*(volatile u8 *) (u32) (a1 + 82)) = (u8) a0;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (a1 + 83)) = (u8) a0;
    v1 = v0 < 7;
    a1 = (s32) ((u32) a1 + 0x8U);
    if (v1 != 0) goto L_008BFFD4;
L_008BFFF0:;
    a0 = s2; func_00290C00(a0);
    v0 = func_008B9660();
    a0 = (s64) ((u64) v0 << 48);
    v1 = 1;
    a0 = a0 >> 48;
    if (a0 != v1) { ; goto L_008C0020; }
    a0 = s2; func_00C323E0(a0, a1, a2, a3);
L_008C0020:;
    return;
}
