/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Lookup(s32, s32);
s32 Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32, s32, s32, s32);
s32 func_0030DA20(s32, s32);
s32 func_0030DD90(s32, s32);
s32 func_00311A50(s32, s32, s32);
s32 func_00326960(s32, s32, s32, s32);

s32 func_00364710(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    a1 = 17;
    a2 = (s32) ((u32) sp + 0x84U);
    s3 = (s32) ((u32) sp + 0x60U);
    s1 = a0;
    a0 = s3; v0 = Pes6BitSet_Initialize(a0, a1, a2);
    a2 = (*(volatile u8 *) (u32) (s1 + 14));
    a0 = (s32) ((u32) sp + 0x8dU);
    s0 = (*(volatile s32 *) (u32) (s1 + 20));
    a1 = (s32) ((u32) sp + 0x8cU); v0 = func_00311A50(a0, a1, a2);
    a2 = (*(volatile u8 *) (u32) (sp + 141));
    a1 = s0;
    a3 = (*(volatile u8 *) (u32) (sp + 140));
    a0 = (s32) ((u32) sp + 0x8eU); v0 = func_00326960(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (s1 + 14));
    a0 = (s32) ((u32) sp + 0x8fU); v0 = func_0030DD90(a0, a1);
    a1 = (*(volatile u8 *) (u32) (sp + 143));
    at = (u64) a1 < (u64) (s64) 41;
    if (at == 0) { s1 = 4; goto L_003647C4; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + 0x6fe0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x3647a4U) goto L_003647A4; if (t_ == 0x3647b0U) goto L_003647B0; if (t_ == 0x3647b8U) goto L_003647B8; if (t_ == 0x3647c0U) goto L_003647C0; }
L_003647A4:;
    s1 = 4;
    goto L_003647C4;
L_003647B0:;
    s1 = 2; goto L_003647C4;
L_003647B8:;
    s1 = 3; goto L_003647C4;
L_003647C0:;
    s1 = 1;
L_003647C4:;
    v0 = (*(volatile u8 *) (u32) (sp + 142));
    at = (u64) v0 < (u64) (s64) 41;
    if (at == 0) { s2 = 4; goto L_00364810; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x6f30U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x3647f0U) goto L_003647F0; if (t_ == 0x3647fcU) goto L_003647FC; if (t_ == 0x364804U) goto L_00364804; if (t_ == 0x36480cU) goto L_0036480C; }
L_003647F0:;
    s2 = 4;
    goto L_00364810;
L_003647FC:;
    s2 = 2; goto L_00364810;
L_00364804:;
    s2 = 3; goto L_00364810;
L_0036480C:;
    s2 = 1;
L_00364810:;
    a0 = (s32) ((u32) sp + 0x8bU);
    v0 = func_0030DA20(a0, a1);
    a1 = (*(volatile u8 *) (u32) (sp + 142));
    a0 = (s32) ((u32) sp + 0x8aU); v0 = func_0030DA20(a0, a1);
    v1 = (*(volatile u8 *) (u32) (sp + 142));
    v0 = s2 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1;
    v0 = v1 ^ 0xee;
    { s32 c_ = a2 == 0; s0 = (u64) v0 < (u64) (s64) 1; if (c_) goto L_00364848; }
    v0 = s1 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
L_00364848:;
    a0 = s3;
    a1 = 3; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s2 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s3; goto L_00364870; }
    v0 = s1 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s3;
L_00364870:;
    a1 = 4; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s3;
    a1 = 3; v0 = Pes6BitSet_Lookup(a0, a1);
    s4 = v0;
    a0 = s3;
    a1 = 4; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = s4 | v0;
    a0 = s3;
    a1 = 2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s2 ^ s1;
    a2 = (u64) a2 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s3; goto L_003648C0; }
    v0 = s1 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s3;
L_003648C0:;
    a1 = 6; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s2 ^ s1;
    a2 = (u64) a2 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s3; goto L_003648E4; }
    v0 = s1 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s3;
L_003648E4:;
    a1 = 7; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s3;
    a1 = 6; v0 = Pes6BitSet_Lookup(a0, a1);
    s1 = v0;
    a0 = s3;
    a1 = 7; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = s1 | v0;
    a0 = s3;
    a1 = 5; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s3;
    a1 = 2; v0 = Pes6BitSet_Lookup(a0, a1);
    s1 = v0;
    a0 = s3;
    a1 = 5; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = s1 | v0;
    a0 = s3;
    a1 = 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 139));
    a0 = s3;
    a1 = 8;
    v0 = v0 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 138));
    v0 = v0 ^ 0x3;
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s3; goto L_0036497C; }
    v0 = (u64) 0 < (u64) s0;
    a2 = v0 ^ 0x1;
    a0 = s3;
L_0036497C:;
    a1 = 9; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 139));
    a0 = s3;
    a1 = 11;
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 138));
    v0 = v0 ^ 0x2;
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s3; goto L_003649BC; }
    v0 = (u64) 0 < (u64) s0;
    a2 = v0 ^ 0x1;
    a0 = s3;
L_003649BC:;
    a1 = 12; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 139));
    a0 = s3;
    a1 = 14;
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 138));
    v0 = v0 ^ 0x1;
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s3; goto L_003649FC; }
    v0 = (u64) 0 < (u64) s0;
    a2 = v0 ^ 0x1;
    a0 = s3;
L_003649FC:;
    a1 = 15; v0 = Pes6BitSet_Write(a0, a1, a2);
    a1 = s3;
    a0 = 133;
    a2 = 2; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    if (v0 == 0) { v0 = 1; goto L_00364A20; }
    v0 = 3;
L_00364A20:;
    return v0;
}
