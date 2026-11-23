/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Write(s32, s32, s32);
s32 func_002FC720(s32);
s32 func_0030E5B0(void);
s32 func_003258F0(s32, s32);

void func_008F9FE0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    v0 = a2 & 0xff;
    s3 = a1;
    s2 = a0;
    s1 = v0 ^ 0x1;
    a0 = s3;
    a1 = s1;
    v0 = func_003258F0(a0, a1);
    v1 = (*(volatile s32 *) (u32) s3);
    s0 = v0 & 0xffff;
    v0 = 2;
    { s32 c_ = v1 == v0; a2 = 1; if (c_) goto L_008FA034; }
    if (v1 == a2) { a0 = s2; goto L_008FA038; }
    a2 = 0;
L_008FA034:;
    a0 = s2;
L_008FA038:;
    a1 = 49; Pes6BitSet_Write(a0, a1, a2);
    s0 = s0 & 0xffff;
    a0 = s2;
    v0 = s0 ^ 0xfe;
    a1 = 50;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0xff;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 51; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x100;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 52; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x101;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 53; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x102;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 54; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x103;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 55; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x109;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 56; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x10a;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 57; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x10b;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 58; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x108;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 59; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x10c;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 61; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x104;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 62; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x105;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 63; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x106;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 64; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x107;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 65; Pes6BitSet_Write(a0, a1, a2);
    a0 = 0; v0 = func_002FC720(a0);
    (*(volatile u8 *) (u32) (sp + 92)) = (u8) v0;
    a0 = 1; v0 = func_002FC720(a0);
    (*(volatile u8 *) (u32) (sp + 93)) = (u8) v0; v0 = func_0030E5B0();
    if (v0 == 0) { v0 = (*(volatile u8 *) (u32) (sp + 92)); goto L_008FA1AC; }
    v1 = 3;
    if (v0 == v1) goto L_008FA1A8;
    v0 = (s32) ((u32) s1 + (u32) sp); goto L_008FA1D4;
L_008FA1A8:;
    v0 = (*(volatile u8 *) (u32) (sp + 92));
L_008FA1AC:;
    v0 = v0 ^ 0;
    v0 = (u64) v0 < (u64) (s64) 1;
    if (v0 == 0) { a2 = v0 ^ 0x1; goto L_008FA1DC; }
    v0 = (*(volatile u8 *) (u32) (sp + 93));
    v0 = v0 ^ 0;
    v0 = (u64) v0 < (u64) (s64) 1;
    a2 = v0 ^ 0x1;
    goto L_008FA1DC;
L_008FA1D4:;
    v0 = (*(volatile u8 *) (u32) (v0 + 92));
    a2 = (u64) 0 < (u64) v0;
L_008FA1DC:;
    a0 = s2;
    a1 = 66; Pes6BitSet_Write(a0, a1, a2);
    v0 = 1;
    return;
}
