/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Write(s32, s32, s32);
void func_00326760(s32, s32, s32);

void func_008FA210(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = a1;
    s1 = a2 & 0xff;
    v0 = (s32) ((u32) s1 << 1);
    a2 = s1;
    v0 = (s32) ((u32) v0 + (u32) sp);
    s0 = (s32) ((u32) v0 + 0x6cU);
    a0 = s0; func_00326760(a0, a1, a2);
    a2 = s1 ^ 0x1;
    a1 = s3;
    v0 = (s32) ((u32) a2 << 1);
    v0 = (s32) ((u32) v0 + (u32) sp);
    s2 = (s32) ((u32) v0 + 0x6cU);
    a0 = s2; func_00326760(a0, a1, a2);
    v0 = (*(volatile s16 *) (u32) s2);
    v1 = (*(volatile s16 *) (u32) s0);
    if (v1 != v0) { at = v1 < v0; goto L_008FA284; }
    s2 = 3; goto L_008FA2B0;
L_008FA284:;
    if (at == 0) { at = v0 < v1; goto L_008FA294; }
    s2 = 2; goto L_008FA2B0;
L_008FA294:;
    if (at == 0) { v0 = 32767; goto L_008FA2A4; }
    s2 = 1; goto L_008FA2B0;
L_008FA2A4:;
    if (v1 != v0) { s2 = 1; goto L_008FA2B0; }
    s2 = 4;
L_008FA2B0:;
    v0 = (s32) ((u32) s1 << 2);
    v1 = (s32) ((u32) v0 + (u32) s3);
    s0 = (s32) ((u32) v1 + 0x40U);
    v0 = 13;
    v1 = (*(volatile s32 *) (u32) (v1 + 64));
    { s32 c_ = v1 != v0; a2 = 0; if (c_) goto L_008FA2E0; }
    v1 = (*(volatile s32 *) (u32) (s3 + 44));
    v0 = 41;
    if (v1 != v0) { a0 = s4; goto L_008FA2E4; }
    a2 = 1;
L_008FA2E0:;
    a0 = s4;
L_008FA2E4:;
    a1 = 82; Pes6BitSet_Write(a0, a1, a2);
    v0 = s2 ^ 0x1;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 83; Pes6BitSet_Write(a0, a1, a2);
    v0 = s2 ^ 0x3;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 84; Pes6BitSet_Write(a0, a1, a2);
    v0 = s2 ^ 0x2;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 85; Pes6BitSet_Write(a0, a1, a2);
    v0 = s2 ^ 0x4;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 86; Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) s0);
    v0 = 6;
    { s32 c_ = v1 == v0; a2 = 1; if (c_) goto L_008FA35C; }
    v0 = 12;
    if (v1 == v0) { a0 = s4; goto L_008FA360; }
    a2 = 0;
L_008FA35C:;
    a0 = s4;
L_008FA360:;
    a1 = 87; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s3 + 64));
    v0 = v0 ^ 0x6;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s4; goto L_008FA38C; }
    v0 = (*(volatile s32 *) (u32) (s3 + 68));
    v0 = v0 ^ 0x6;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s4;
L_008FA38C:;
    a1 = 88; Pes6BitSet_Write(a0, a1, a2);
    v0 = 1;
    return;
}
