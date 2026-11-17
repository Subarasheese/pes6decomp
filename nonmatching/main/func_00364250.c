/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s64, s64, s64);
s64 Pes6BitSet_Lookup(s64, s64);
void Pes6BitSet_Write(s64, s64, s64);
s64 Pes6Job_SendMessage(s64, s64, s64, s64, s64, s64, s64);
void func_00326C60(s64, s64, s64);
void func_00326D50(s64, s64, s64);

void func_00364250(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[10];
    s64 sp = (s32) (u32) frame;

    a1 = 12;
    a2 = (s32) ((u32) sp + 0x48U);
    s1 = (s32) ((u32) sp + 0x30U);
    s0 = a0;
    a0 = s1; Pes6BitSet_Initialize(a0, a1, a2);
    a1 = (*(volatile s32 *) (u32) (s0 + 20));
    a2 = (*(volatile u8 *) (u32) (s0 + 14));
    a0 = (s32) ((u32) sp + 0x4eU); func_00326D50(a0, a1, a2);
    a1 = (*(volatile s32 *) (u32) (s0 + 20));
    a2 = (*(volatile u8 *) (u32) (s0 + 14));
    a0 = (s32) ((u32) sp + 0x4cU); func_00326C60(a0, a1, a2);
    a1 = (*(volatile s16 *) (u32) (sp + 78));
    if (a1 == 0) { s0 = 0; goto L_003642F4; }
    a0 = (s64) ((u64) a1 << 48);
    a0 = a0 >> 48;
    v0 = a0 < 3;
    { s32 c_ = v0 != 0; s0 = 0; if (c_) goto L_003642F4; }
    v1 = (*(volatile s16 *) (u32) (sp + 76));
    v0 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (s32) ((u32) v0 << 2);
    if ((s32) a0 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) a0); hi = (s32) ((s32) v0 % (s32) a0); lo = q_; }
    v0 = lo;
    at = v0 < 61;
    if (at != 0) { v0 = (s64) ((u64) a1 << 48); goto L_003642F8; }
    s0 = 1;
    goto L_003642F4;
    s0 = 0;
L_003642F4:;
    v0 = (s64) ((u64) a1 << 48);
L_003642F8:;
    a0 = s1;
    v0 = v0 >> 48;
    a1 = 2;
    a2 = v0 ^ 0;
    a2 = (u64) a2 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s16 *) (u32) (sp + 78));
    a0 = s1;
    a1 = 3;
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s16 *) (u32) (sp + 78));
    a0 = s1;
    a1 = 4;
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s16 *) (u32) (sp + 78));
    a0 = s1;
    a1 = 5;
    v0 = v0 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s16 *) (u32) (sp + 78));
    a0 = s1;
    a1 = 6;
    v0 = v0 ^ 0x4;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s16 *) (u32) (sp + 78));
    a0 = s1;
    a1 = 7;
    v0 = v0 ^ 0x5;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile s16 *) (u32) (sp + 78));
    v0 = v1 < 6;
    { s32 c_ = v0 != 0; a2 = 0; if (c_) goto L_003643A8; }
    v0 = 255;
    if (v1 == v0) { a0 = s1; goto L_003643AC; }
    a2 = 1;
L_003643A8:;
    a0 = s1;
L_003643AC:;
    a1 = 8; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s16 *) (u32) (sp + 76));
    { s32 c_ = v0 == 0; a2 = 0; if (c_) goto L_003643D8; }
    v1 = (s64) ((u64) v0 << 48);
    v1 = v1 >> 48;
    v0 = 255;
    if (v1 == v0) { a0 = s1; goto L_003643DC; }
    a2 = 1;
L_003643D8:;
    a0 = s1;
L_003643DC:;
    a1 = 9; Pes6BitSet_Write(a0, a1, a2);
    a2 = s0;
    a0 = s1;
    a1 = 10; Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile s16 *) (u32) (sp + 78));
    v0 = (*(volatile s16 *) (u32) (sp + 76));
    { s32 c_ = v0 != v1; a2 = 0; if (c_) goto L_00364414; }
    v0 = v1 < 2;
    if (v0 != 0) { a0 = s1; goto L_00364418; }
    a2 = 1;
L_00364414:;
    a0 = s1;
L_00364418:;
    a1 = 11; Pes6BitSet_Write(a0, a1, a2);
    a0 = s1;
    a1 = 2; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = v0;
    a0 = s1;
    a1 = 3; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = s0 | v0;
    a0 = s1;
    a1 = 4; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = v0 | s0;
    a0 = s1;
    a1 = 5; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = v0 | s0;
    a0 = s1;
    a1 = 6; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = v0 | s0;
    a0 = s1;
    a1 = 7; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = v0 | s0;
    a0 = s1;
    a1 = 8; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = v0 | s0;
    a0 = s1;
    a1 = 1; Pes6BitSet_Write(a0, a1, a2);
    a0 = s1;
    a1 = 1; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = v0;
    a0 = s1;
    a1 = 0; Pes6BitSet_Write(a0, a1, a2);
    a1 = s1;
    a0 = 135;
    a2 = 2; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    if (v0 == 0) { v0 = 1; goto L_003644DC; }
    v0 = 3; goto L_003644DC;
    v0 = 1;
L_003644DC:;
    return;
}
