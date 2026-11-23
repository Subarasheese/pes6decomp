/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Write(s32, s32, s32);
void func_003264D0(s32, s32, s32);
void func_00326510(s32, s32, s32, s32);
void func_00326F50(s32, s32, s32);
void func_008FD540(s32, s32, s32, s32);

void func_008FD8C0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    v0 = (*(volatile s32 *) (u32) a1);
    at = (u64) v0 < (u64) (s64) 19;
    { s32 c_ = at == 0; s2 = a1; if (c_) goto L_008FD908; }
    v1 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffacb0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x8fd908U) goto L_008FD908; if (t_ == 0x8fd910U) goto L_008FD910; if (t_ == 0x8fdb4cU) goto L_008FDB4C; }
L_008FD908:;
    v0 = 0; goto L_008FDB5C;
L_008FD910:;
    s0 = a2 & 0xff;
    a0 = (s32) ((u32) sp + 0x6cU);
    a2 = s0; func_00326F50(a0, a1, a2);
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x68U);
    a2 = s0; func_00326510(a0, a1, a2, a3);
    a2 = s0 ^ 0x1;
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x64U); func_00326510(a0, a1, a2, a3);
    a0 = (s32) ((u32) sp + 0x58U);
    a1 = s2;
    a2 = 0; func_003264D0(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x5cU);
    a1 = s2;
    a2 = 1; func_003264D0(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (sp + 108));
    v0 = 255;
    v1 = (*(volatile u8 *) (u32) (s2 + 13));
    s0 = (*(volatile u8 *) (u32) a0);
    { s32 c_ = v1 == v0; s1 = 0; if (c_) goto L_008FD988; }
    at = v1 < 4;
    if (at != 0) { v0 = v1 ^ 0x1; goto L_008FD98C; }
    s1 = 1;
L_008FD988:;
    v0 = v1 ^ 0x1;
L_008FD98C:;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) goto L_008FD9A4;
    v0 = (*(volatile s32 *) (u32) (sp + 88));
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
L_008FD9A4:;
    if (a2 == 0) { a0 = s3; goto L_008FD9BC; }
    v0 = (*(volatile s32 *) (u32) (sp + 92));
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s3;
L_008FD9BC:;
    a1 = 51; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 107));
    a2 = v0 ^ 0;
    a2 = (u64) a2 < (u64) (s64) 1;
    if (a2 == 0) goto L_008FD9E4;
    v0 = (*(volatile u8 *) (u32) (sp + 103));
    a2 = v0 ^ 0;
    a2 = (u64) a2 < (u64) (s64) 1;
L_008FD9E4:;
    if (a2 == 0) { a0 = s3; goto L_008FD9F4; }
    a2 = (u64) 0 < (u64) s1;
    a0 = s3;
L_008FD9F4:;
    a1 = 52; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 107));
    a2 = v0 ^ 0;
    a2 = (u64) a2 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s3; goto L_008FDA18; }
    a2 = (u64) 0 < (u64) s1;
    a0 = s3;
L_008FDA18:;
    a1 = 53; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 108));
    a0 = s3;
    a1 = 54;
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    s0 = s0 & 0xff;
    a0 = s3;
    v0 = s0 ^ 0x1;
    a1 = 55;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s2 + 48));
    a0 = s3;
    a1 = 56;
    v0 = v0 < 5;
    a2 = v0 ^ 0x1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 108));
    a0 = s3;
    a1 = 57;
    v0 = (*(volatile u8 *) (u32) (v0 + 3));
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s2 + 48));
    v0 = v0 ^ 0x4;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s3; goto L_008FDAAC; }
    v0 = (*(volatile s32 *) (u32) (sp + 108));
    v0 = (*(volatile u8 *) (u32) (v0 + 3));
    a2 = (u64) 0 < (u64) v0;
    a0 = s3;
L_008FDAAC:;
    a1 = 58; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 108));
    a0 = s3;
    a2 = (*(volatile u8 *) (u32) (v0 + 3));
    a1 = 59; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x2;
    a0 = s3;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 60; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x3;
    a0 = s3;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 61; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x4;
    a0 = s3;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 62; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x5;
    a0 = s3;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 63; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 < 6;
    a2 = v0 ^ 0x1;
    if (a2 == 0) goto L_008FDB2C;
    a2 = s0 < 11;
L_008FDB2C:;
    if (a2 == 0) { a0 = s3; goto L_008FDB44; }
    v0 = (*(volatile s32 *) (u32) (s2 + 48));
    v0 = v0 < 4;
    a2 = v0 ^ 0x1;
    a0 = s3;
L_008FDB44:;
    a1 = 64; Pes6BitSet_Write(a0, a1, a2);
L_008FDB4C:;
    a0 = s3;
    a1 = s2; func_008FD540(a0, a1, a2, a3);
    v0 = 1;
L_008FDB5C:;
    return;
}
