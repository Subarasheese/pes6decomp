/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s64, s64);
void func_00150420(s64, s64, s64, s64, s64, s64);
void func_001CDAD0(s64);

void func_001A86B0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s64 frame[22];
    s64 sp = (s32) (u32) frame;

    s1 = (*(volatile s32 *) (u32) a0);
    v0 = (*(volatile s32 *) (u32) (a0 + 68));
    (*(volatile u32 *) (u32) (s1 + 8)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (s1 + 8)); func_001CDAD0(a0);
    v0 = (*(volatile s32 *) (u32) (s1 + 8));
    fp = (s32) 0x520000U;
    s4 = (s32) 0x390000U;
    s7 = 0;
    fp = (s32) ((u32) fp + 0x750U);
    s4 = (s32) ((u32) s4 + 0x7970U);
    s0 = (s32) ((u32) sp + 0xacU);
    s6 = (s32) ((u32) sp + 0xaeU);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (s1 + 12)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s1 + 8));
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    (*(volatile u32 *) (u32) (s1 + 16)) = (u32) v0;
L_001A872C:;
    s3 = (s32) 0x520000U;
    s5 = 0;
    s3 = (s32) ((u32) s3 + 0x1680U);
    s2 = fp;
L_001A8740:;
    v1 = (s32) ((u32) sp + 0xa8U);
    { s32 c_ = v1 == 0; v0 = 8; if (c_) goto L_001A8768; }
L_001A874C:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_001A874C;
L_001A8768:;
    v0 = (*(volatile s32 *) (u32) s2);
    if (v0 == s1) { v0 = (*(volatile s32 *) (u32) (s1 + 12)); goto L_001A87B4; }
L_001A8778:;
    s5 = (s32) ((u32) s5 + 0x1U);
    v0 = s5 < 26;
    s3 = (s32) ((u32) s3 + 0x40U);
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_001A8740; }
    s7 = (s32) ((u32) s7 + 0x1U);
    fp = (s32) ((u32) fp + 0x68U);
    v0 = s7 < 6;
    { s32 c_ = v0 != 0; s4 = (s32) ((u32) s4 + 0x8U); if (c_) goto L_001A872C; }
    a0 = (*(volatile s32 *) (u32) (s1 + 8)); Pes6Heap_Free(a0, a1);
    (*(volatile u32 *) (u32) (s1 + 8)) = (u32) 0;
    (*(volatile u8 *) (u32) (s1 + 4)) = (u8) 0; goto L_001A8960;
L_001A87B4:;
    if (v0 == 0) goto L_001A8838;
    v1 = (*(volatile s16 *) (u32) (s4 + 4));
    a2 = 0;
    v0 = (*(volatile s16 *) (u32) (s4 + 6));
    a0 = (*(volatile s32 *) (u32) (s3 + 12));
    a3 = (*(volatile s16 *) (u32) s4);
    a4 = (*(volatile s16 *) (u32) (s4 + 2));
    (*(volatile u16 *) (u32) s0) = (u16) v1;
    (*(volatile u16 *) (u32) s6) = (u16) v0;
    a1 = (*(volatile s32 *) (u32) (s1 + 12));
    a5 = (s32) ((u32) sp + 0xa8U); func_00150420(a0, a1, a2, a3, a4, a5);
    a0 = (*(volatile s16 *) (u32) s4);
    v0 = (*(volatile s16 *) (u32) (s4 + 4));
    v0 = (s32) ((u32) a0 + (u32) v0);
    at = v0 < 33;
    if (at == 0) goto L_001A8838;
    v1 = (*(volatile s16 *) (u32) s0);
    v0 = 64;
    v0 = (s32) ((u32) v0 - (u32) a0);
    a4 = (*(volatile s16 *) (u32) (s4 + 2));
    a3 = (s64) ((u64) v0 << 48);
    a0 = (*(volatile s32 *) (u32) (s3 + 12));
    a3 = a3 >> 48;
    a2 = 0;
    v0 = (s32) ((u32) 0 - (u32) v1);
    (*(volatile u16 *) (u32) s0) = (u16) v0;
    a1 = (*(volatile s32 *) (u32) (s1 + 12));
    a5 = (s32) ((u32) sp + 0xa8U); func_00150420(a0, a1, a2, a3, a4, a5);
L_001A8838:;
    v0 = (*(volatile s32 *) (u32) (s1 + 16));
    if (v0 == 0) goto L_001A8938;
    v1 = (*(volatile s16 *) (u32) (s4 + 4));
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 1; if (c_) goto L_001A8858; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_001A8858:;
    v1 = (*(volatile s16 *) (u32) (s4 + 6));
    (*(volatile u16 *) (u32) s0) = (u16) v0;
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 1; if (c_) goto L_001A8870; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_001A8870:;
    v1 = (*(volatile s16 *) (u32) s4);
    (*(volatile u16 *) (u32) s6) = (u16) v0;
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 1; if (c_) goto L_001A8888; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_001A8888:;
    v1 = (*(volatile s16 *) (u32) (s4 + 2));
    a3 = (s64) ((u64) v0 << 48);
    a3 = a3 >> 48;
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 1; if (c_) goto L_001A88A4; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_001A88A4:;
    a0 = (*(volatile s32 *) (u32) (s3 + 16));
    a4 = (s64) ((u64) v0 << 48);
    a1 = (*(volatile s32 *) (u32) (s1 + 16));
    a4 = a4 >> 48;
    a2 = 0;
    a5 = (s32) ((u32) sp + 0xa8U); func_00150420(a0, a1, a2, a3, a4, a5);
    v1 = (*(volatile s16 *) (u32) s4);
    v0 = (*(volatile s16 *) (u32) (s4 + 4));
    v0 = (s32) ((u32) v1 + (u32) v0);
    at = v0 < 33;
    if (at == 0) goto L_001A8938;
    a0 = (*(volatile s16 *) (u32) s0);
    v0 = 64;
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) v1 >> 1;
    a0 = (s32) ((u32) 0 - (u32) a0);
    { s32 c_ = v1 >= 0; (*(volatile u16 *) (u32) s0) = (u16) a0; if (c_) goto L_001A88FC; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_001A88FC:;
    v1 = (*(volatile s16 *) (u32) (s4 + 2));
    a3 = (s64) ((u64) v0 << 48);
    a3 = a3 >> 48;
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 1; if (c_) goto L_001A8918; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_001A8918:;
    a0 = (*(volatile s32 *) (u32) (s3 + 16));
    a4 = (s64) ((u64) v0 << 48);
    a1 = (*(volatile s32 *) (u32) (s1 + 16));
    a4 = a4 >> 48;
    a2 = 0;
    a5 = (s32) ((u32) sp + 0xa8U); func_00150420(a0, a1, a2, a3, a4, a5);
L_001A8938:;
    v0 = (*(volatile u8 *) (u32) (s3 + 63));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (s3 + 63)) = (u8) v0;
    v0 = v0 & 0xff;
    v0 = v0 < 6;
    { s32 c_ = v0 != 0; (*(volatile u32 *) (u32) s2) = (u32) 0; if (c_) goto L_001A8778; }
    v0 = 2;
    (*(volatile u8 *) (u32) (s3 + 1)) = (u8) v0; goto L_001A8778;
L_001A8960:;
    return;
}
