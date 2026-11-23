/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00290850(s32);
void func_002B4F90(s32);
void func_002C7BB0(s32, s32);
void func_002C7C20(s32, s32);
void func_002C7C60(s32, s32);
void func_002C7CA0(s32, s32);

void func_002B51C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 hi = 0, lo = 0;

    s3 = a0;
    s2 = a1;
    { s32 c_ = s2 == 0; s1 = a2; if (c_) goto L_002B5448; }
    v0 = 139;
    a3 = (s32) 0x590000U;
    { s64 m_ = (s64) (s32) s3 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a4 = lo; }
    a1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 + 0x1a96U);
    v1 = (s32) 0x5a0000U;
    a2 = (*(volatile u8 *) (u32) (s2 + 105));
    a3 = (s32) ((u32) a3 + 0x1a90U);
    v1 = (s32) ((u32) v1 + 0x2022U);
    v0 = (s32) ((u32) s3 << 4);
    a1 = (s32) ((u32) a1 + (u32) a4);
    a0 = (s32) ((u32) v0 - (u32) s3);
    v0 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) v0 - (u32) a0);
    v0 = (s32) ((u32) a3 + (u32) a4);
    s0 = (s32) ((u32) a0 << 3);
    (*(volatile u8 *) (u32) v0) = (u8) a2;
    v1 = (s32) ((u32) v1 + (u32) s0);
    a0 = (*(volatile u8 *) (u32) (s2 + 106));
    (*(volatile u8 *) (u32) (v0 + 1)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (s2 + 107));
    (*(volatile u8 *) (u32) (v0 + 2)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (s2 + 108));
    (*(volatile u8 *) (u32) (v0 + 3)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (s2 + 109));
    (*(volatile u8 *) (u32) (v0 + 4)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (s2 + 110));
    (*(volatile u8 *) (u32) a1) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (s2 + 100));
    { s32 c_ = s1 == 0; (*(volatile u8 *) (u32) v1) = (u8) a0; if (c_) goto L_002B5360; }
    a2 = 0;
L_002B5268:;
    a1 = (s32) ((u32) s2 + (u32) a2);
    a0 = (*(volatile u8 *) (u32) a1);
    a2 = (s32) ((u32) a2 + 0x8U);
    v1 = a2 < 32;
    (*(volatile u8 *) (u32) (v0 + 7)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a1 + 1));
    (*(volatile u8 *) (u32) (v0 + 8)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a1 + 2));
    (*(volatile u8 *) (u32) (v0 + 9)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a1 + 3));
    (*(volatile u8 *) (u32) (v0 + 10)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a1 + 4));
    (*(volatile u8 *) (u32) (v0 + 11)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a1 + 5));
    (*(volatile u8 *) (u32) (v0 + 12)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a1 + 6));
    (*(volatile u8 *) (u32) (v0 + 13)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a1 + 7));
    (*(volatile u8 *) (u32) (v0 + 14)) = (u8) a0;
    { s32 c_ = v1 != 0; v0 = (s32) ((u32) v0 + 0x8U); if (c_) goto L_002B5268; }
    v0 = 3;
    if (s1 == v0) goto L_002B52DC;
    v0 = 2;
    if (s1 == v0) goto L_002B52DC;
    a0 = s3; goto L_002B5350;
L_002B52DC:;
    v0 = 3;
L_002B52E0:;
    if (s1 == v0) goto L_002B5360;
    a0 = s3; func_002B4F90(a0);
    goto L_002B5360;
    a0 = s3;
L_002B52FC:;
    a1 = 2; func_002C7CA0(a0, a1);
    v0 = (*(volatile u8 *) (u32) (s2 + 104)); goto L_002B531C;
L_002B530C:;
    a0 = s3;
    a1 = 2; func_002C7C60(a0, a1);
    v0 = (*(volatile u8 *) (u32) (s2 + 104));
L_002B531C:;
    if (v0 == 0) goto L_002B5338;
    a0 = s3;
    a1 = 4; func_002C7CA0(a0, a1);
    goto L_002B5344;
L_002B5338:;
    a0 = s3;
    a1 = 4; func_002C7C60(a0, a1);
L_002B5344:;
    goto L_002B544C;
    a0 = s3;
L_002B5350:;
    func_00290850(a0);
    v0 = 3; goto L_002B52E0;
L_002B5360:;
    v0 = (s32) 0x5a0000U;
    a2 = (s32) ((u32) s2 + 0x6fU);
    v0 = (s32) ((u32) v0 + 0x2027U);
    a0 = 41;
    a3 = (s32) ((u32) v0 + (u32) s0);
    a1 = a3;
L_002B5378:;
    v1 = (*(volatile s8 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s8 *) (u32) (a2 + 1));
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    a2 = (s32) ((u32) a2 + 0x2U);
    (*(volatile u8 *) (u32) (a1 + 1)) = (u8) v0;
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x2U); if (c_) goto L_002B5378; }
    a2 = (s32) ((u32) s2 + 0xc1U);
    a1 = (s32) ((u32) a3 + 0x52U);
    a0 = 41;
L_002B53A4:;
    v1 = (*(volatile s8 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s8 *) (u32) (a2 + 1));
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    a2 = (s32) ((u32) a2 + 0x2U);
    (*(volatile u8 *) (u32) (a1 + 1)) = (u8) v0;
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x2U); if (c_) goto L_002B53A4; }
    a1 = (s32) ((u32) a3 + 0xa4U);
    a2 = (s32) ((u32) s2 + 0x113U);
    a0 = 41;
L_002B53D0:;
    v1 = (*(volatile s8 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s8 *) (u32) (a2 + 1));
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    a2 = (s32) ((u32) a2 + 0x2U);
    (*(volatile u8 *) (u32) (a1 + 1)) = (u8) v0;
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x2U); if (c_) goto L_002B53D0; }
    v0 = (*(volatile u8 *) (u32) (s2 + 96));
    v1 = (s32) 0x5a0000U;
    v1 = (s32) ((u32) v1 + 0x2170U);
    v1 = (s32) ((u32) v1 + (u32) s0);
    (*(volatile u8 *) (u32) v1) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s2 + 97));
    (*(volatile u8 *) (u32) (v1 + 1)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s2 + 98));
    (*(volatile u8 *) (u32) (v1 + 2)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s2 + 99));
    (*(volatile u8 *) (u32) (v1 + 3)) = (u8) v0;
    a1 = (*(volatile u8 *) (u32) (s2 + 101));
    a0 = s3; func_002C7BB0(a0, a1);
    a1 = (*(volatile u8 *) (u32) (s2 + 102));
    a0 = s3; func_002C7C20(a0, a1);
    v0 = (*(volatile u8 *) (u32) (s2 + 103));
    if (v0 == 0) goto L_002B530C;
    a0 = s3; goto L_002B52FC;
L_002B5448:;
L_002B544C:;
    return;
}
