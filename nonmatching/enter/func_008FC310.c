/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6BitSet_Lookup(s32, s32);
void Pes6BitSet_Write(s32, s32, s32);
s32 func_00325EA0(s32);
void func_00326510(s32, s32, s32, s32);
void func_008FBFF0(s32, s32, s32, s32);

void func_008FC310(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x20000000U;
    s4 = a0;
    s3 = a1;
    s2 = a2;
    a1 = 294;
    s0 = s2 & 0xff;
    v1 = (s32) ((u32) s0 << 4);
    v1 = (s32) ((u32) v1 - (u32) s0);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) s3 + (u32) v1);
    s1 = (s32) ((u32) v1 + 0x50U);
    v1 = (*(volatile s32 *) (u32) (v1 + 132));
    a2 = v1 & v0; Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (s1 + 52));
    v0 = (s32) 0x40000000U;
    a0 = s4;
    a1 = 295;
    a2 = v1 & v0; Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 294; v0 = Pes6BitSet_Lookup(a0, a1);
    s5 = v0;
    a0 = s4;
    a1 = 295; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = s5 | v0;
    a0 = s4;
    a1 = 293; Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = s3;
    a2 = s2; func_008FBFF0(a0, a1, a2, a3);
    a0 = s3; v0 = func_00325EA0(a0);
    if (v0 != 0) { a0 = s3; goto L_008FC3E0; }
    v1 = (*(volatile s32 *) (u32) s3);
    v0 = 6;
    if (v1 != v0) { s0 = s2 & 0xff; goto L_008FC470; }
    a0 = s3;
L_008FC3E0:;
    a1 = (s32) ((u32) sp + 0x78U);
    a2 = 0; func_00326510(a0, a1, a2, a3);
    a0 = s3;
    a1 = (s32) ((u32) sp + 0x7cU);
    a2 = 1; func_00326510(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (sp + 120));
    a0 = s4;
    v0 = (*(volatile u8 *) (u32) (sp + 124));
    a1 = 316;
    v0 = (s32) ((u32) v1 + (u32) v0);
    a2 = v0 ^ 0;
    a2 = (u64) a2 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s3 + 13));
    v0 = 255;
    a2 = 0;
    { s32 c_ = v1 == v0; a0 = 0; if (c_) goto L_008FC440; }
    v0 = v1 < 3;
    if (v0 != 0) goto L_008FC440;
    a0 = 1;
L_008FC440:;
    if (a0 == 0) { a0 = s4; goto L_008FC464; }
    v0 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile u8 *) (u32) (v0 + 120));
    if (v0 != 0) goto L_008FC460;
    a2 = 1;
L_008FC460:;
    a0 = s4;
L_008FC464:;
    a1 = 317; Pes6BitSet_Write(a0, a1, a2);
    s0 = s2 & 0xff;
L_008FC470:;
    { s32 c_ = s0 != 0; a2 = 0; if (c_) goto L_008FC494; }
    v1 = (*(volatile s32 *) (u32) (s1 + 52));
    v0 = (s32) 0x4000000U;
    v0 = v0 | 0x8400;
    v0 = v1 & v0;
    if (v0 == 0) { a0 = s4; goto L_008FC498; }
    a2 = 1;
L_008FC494:;
    a0 = s4;
L_008FC498:;
    a1 = 319; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s1 + 52));
    a0 = s4;
    a1 = 320;
    a2 = v0 & 0x400; Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (s1 + 52));
    v0 = (s32) 0x4000000U;
    a0 = s4;
    a1 = 321;
    a2 = v1 & v0; Pes6BitSet_Write(a0, a1, a2);
    a2 = s0 ^ 0;
    a2 = (u64) a2 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s4; goto L_008FC4F4; }
    v1 = (*(volatile s32 *) (u32) (s1 + 52));
    v0 = (s32) 0x8010000U;
    v0 = v0 | 0x800;
    v0 = v1 & v0;
    a2 = (u64) 0 < (u64) v0;
    a0 = s4;
L_008FC4F4:;
    a1 = 323; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s1 + 52));
    a0 = s4;
    a1 = 324;
    a2 = v0 & 0x800; Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (s1 + 52));
    v0 = (s32) 0x8000000U;
    a0 = s4;
    a1 = 325;
    a2 = v1 & v0; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s4; goto L_008FC550; }
    v1 = (*(volatile s32 *) (u32) (s1 + 52));
    v0 = (s32) 0x8010000U;
    v0 = v0 | 0x800;
    v0 = v1 & v0;
    a2 = (u64) 0 < (u64) v0;
    a0 = s4;
L_008FC550:;
    a1 = 327; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s1 + 52));
    a0 = s4;
    a1 = 328;
    a2 = v0 & 0x800; Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (s1 + 52));
    v0 = (s32) 0x8000000U;
    a0 = s4;
    a1 = 329;
    a2 = v1 & v0; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x1;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 331; Pes6BitSet_Write(a0, a1, a2);
    v0 = 1;
    return;
}
