/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32, s32, s32, s32);
s32 Pes6Job_SetDone(s32);
s32 func_0030D650(s32);
s32 func_00311A50(s32, s32, s32);
s32 func_003139F0(s32, s32);
s32 func_00992770(s32, s32, s32, s32);

s32 func_00346E50(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0xcc0000U;
    v1 = (*(volatile u8 *) (u32) (v0 + -13514));
    s2 = (*(volatile s32 *) (u32) (a0 + 76));
    v0 = 8;
    { s32 c_ = v1 != v0; s0 = a0; if (c_) goto L_00347050; }
    a2 = (*(volatile u8 *) (u32) (s2 + 21));
    a0 = (s32) ((u32) sp + 0x9fU);
    a1 = (s32) ((u32) sp + 0x9eU); v0 = func_00311A50(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (s2 + 75));
    { s32 c_ = a1 <= 0; a3 = 0; if (c_) goto L_00346EF0; }
    a0 = (*(volatile u8 *) (u32) (sp + 159));
    a2 = s2;
    v1 = (*(volatile u8 *) (u32) (sp + 158));
L_00346EB0:;
    v0 = (*(volatile u8 *) (u32) (a2 + 60));
    if (v0 != a0) { a3 = (s32) ((u32) a3 + 0x1U); goto L_00346EE0; }
    v0 = (*(volatile u8 *) (u32) (a2 + 61));
    if (v0 != v1) goto L_00346EDC;
    v0 = (s32) ((u32) a3 << 1);
    v0 = (s32) ((u32) v0 + (u32) a3);
    v0 = (s32) ((u32) v0 + (u32) s2);
    s4 = (*(volatile u8 *) (u32) (v0 + 62)); goto L_00346EF0;
L_00346EDC:;
    a3 = (s32) ((u32) a3 + 0x1U);
L_00346EE0:;
    v0 = a3 < a1;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x3U); if (c_) goto L_00346EB0; }
L_00346EF0:;
    a0 = (*(volatile u8 *) (u32) (s2 + 21)); v0 = func_0030D650(a0);
    s5 = v0;
    a0 = 8;
    v0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 30528));
    v0 = (s32) 0x3b0000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + 30532));
    (*(volatile f32 *) (u32) (sp + 112)) = f0.f;
    v0 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 30536));
    (*(volatile f32 *) (u32) (sp + 116)) = f2.f;
    v0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 30540));
    (*(volatile f32 *) (u32) (sp + 120)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 124)) = f0.f; v0 = func_00992770(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    a0 = (s32) ((u32) sp + 0x80U);
    v0 = s4 < 2;
    v1 = (s32) ((u32) v1 << 2);
    s3 = v0 ^ 0x1;
    a1 = 17;
    v0 = (s32) ((u32) v1 + (u32) sp);
    s1 = (*(volatile s32 *) (u32) (v0 + 112));
    a2 = (s32) ((u32) sp + 0x98U); v0 = Pes6BitSet_Initialize(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (s2 + 19));
    a0 = (s32) ((u32) sp + 0x80U); v0 = func_003139F0(a0, a1);
    v0 = s1 ^ 0x2;
    a0 = (s32) ((u32) sp + 0x80U);
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x80U);
    a1 = 2;
    a2 = s5; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x80U);
    a1 = 3;
    a2 = s3; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s4 ^ 0x1;
    a0 = (s32) ((u32) sp + 0x80U);
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 4; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (u64) 0 < (u64) s5;
    a0 = (s32) ((u32) sp + 0x80U);
    s2 = v0 ^ 0x1;
    a1 = 6;
    a2 = s2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x80U);
    a1 = 7;
    a2 = s3; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x3;
    a0 = (s32) ((u32) sp + 0x80U);
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 9; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s5;
    a0 = (s32) ((u32) sp + 0x80U);
    a1 = 10; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x80U);
    a1 = 11;
    a2 = s3; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s4 ^ 0x1;
    a0 = (s32) ((u32) sp + 0x80U);
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 12; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s2;
    a0 = (s32) ((u32) sp + 0x80U);
    a1 = 14; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s3;
    a0 = (s32) ((u32) sp + 0x80U);
    a1 = 15; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = 155;
    a1 = (s32) ((u32) sp + 0x80U);
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
L_00347050:;
    a0 = s0; v0 = Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
