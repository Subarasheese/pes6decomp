/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32, s32, s32, s32);
s32 Pes6Job_SetDone(s32);
s32 func_00311A50(s32, s32, s32);
s32 func_003139F0(s32, s32);

s32 func_00347080(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0xcc0000U;
    s5 = (*(volatile s32 *) (u32) (a0 + 76));
    s0 = a0;
    v1 = (*(volatile u8 *) (u32) (v0 + -12831));
    a0 = 4;
    { s32 c_ = v1 == a0; s2 = 0; if (c_) goto L_003470F4; }
    a0 = 3;
    if (v1 == a0) { s4 = a0; goto L_003470F8; }
    a0 = 2;
    if (v1 == a0) goto L_003470F4;
    v0 = 1;
    if (v1 == v0) { a0 = 1; goto L_003470F4; }
    if (v1 == 0) goto L_003470F0;
    goto L_003470F8;
L_003470F0:;
    a0 = 1;
L_003470F4:;
    s4 = a0;
L_003470F8:;
    v0 = (s32) 0xcc0000U;
    a2 = (*(volatile u8 *) (u32) (s5 + 22));
    s1 = (*(volatile u8 *) (u32) (v0 + -13514));
    a0 = (s32) ((u32) sp + 0x8fU);
    a1 = (s32) ((u32) sp + 0x8eU);
    v0 = s1 ^ 0x8;
    s3 = (u64) v0 < (u64) (s64) 1; v0 = func_00311A50(a0, a1, a2);
    if (s3 == 0) goto L_00347188;
    a1 = (*(volatile u8 *) (u32) (s5 + 75));
    a3 = 0;
    { s32 c_ = a1 <= 0; s2 = 0; if (c_) goto L_00347188; }
    a0 = (*(volatile u8 *) (u32) (sp + 143));
    a2 = s5;
    v1 = (*(volatile u8 *) (u32) (sp + 142));
L_0034713C:;
    v0 = (*(volatile u8 *) (u32) (a2 + 60));
    if (v0 != a0) { a3 = (s32) ((u32) a3 + 0x1U); goto L_00347178; }
    v0 = (*(volatile u8 *) (u32) (a2 + 61));
    if (v0 != v1) goto L_00347174;
    v0 = (s32) ((u32) a3 << 1);
    s2 = 1;
    v0 = (s32) ((u32) v0 + (u32) a3);
    v1 = (s32) ((u32) v0 + (u32) s5);
    v0 = (*(volatile u8 *) (u32) (v1 + 62));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (v1 + 62)) = (u8) v0; goto L_00347188;
L_00347174:;
    a3 = (s32) ((u32) a3 + 0x1U);
L_00347178:;
    v0 = a3 < a1;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x3U); if (c_) goto L_0034713C; }
L_00347188:;
    if (s2 != 0) { s2 = (s32) ((u32) sp + 0x70U); goto L_003471E0; }
    v1 = (*(volatile u8 *) (u32) (s5 + 75));
    a0 = (*(volatile u8 *) (u32) (sp + 143));
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) s5);
    (*(volatile u8 *) (u32) (v0 + 60)) = (u8) a0;
    v1 = (*(volatile u8 *) (u32) (s5 + 75));
    a0 = (*(volatile u8 *) (u32) (sp + 142));
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) s5);
    (*(volatile u8 *) (u32) (v0 + 61)) = (u8) a0;
    v1 = (*(volatile u8 *) (u32) (s5 + 75));
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) ((u32) v0 + (u32) s5);
    v0 = (*(volatile u8 *) (u32) (v1 + 62));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (v1 + 62)) = (u8) v0;
    s2 = (s32) ((u32) sp + 0x70U);
L_003471E0:;
    a1 = 9;
    a0 = s2;
    a2 = (s32) ((u32) sp + 0x88U); v0 = Pes6BitSet_Initialize(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (s5 + 19));
    a0 = s2; v0 = func_003139F0(a0, a1);
    a2 = s4 < 3;
    if (a2 == 0) { a0 = s2; goto L_00347214; }
    v0 = s1 ^ 0x4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s2;
L_00347214:;
    a1 = 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x6;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile u8 *) (u32) (s5 + 4));
    a0 = s2;
    a1 = 3; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x5;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 5; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x7;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 6; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s3;
    a0 = s2;
    a1 = 7; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x9;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 8; v0 = Pes6BitSet_Write(a0, a1, a2);
    a1 = s2;
    a0 = 154;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    a0 = s0; v0 = Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
