/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Team_ResolveSpecialId(s32);
s32 func_001E6E10(s32);
void func_001EDAE0(s32, s32);
s32 func_001EDC80(s32, s32);
s32 func_001EDD00(s32, s32, s32, s32);
void func_001EE580(s32, s32);
void func_001EE630(s32, s32);
void func_001EEAC0(s32, s32);
void func_001EF5B0(s32, s32);
void func_001EF900(s32, s32);

void func_002D07A0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    v0 = 8;
    v1 = (s32) ((u32) sp + 0x88U);
    s2 = a0;
    s1 = a1;
    { s32 c_ = v1 == 0; s0 = a3; if (c_) goto L_002D07E8; }
L_002D07CC:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_002D07CC;
L_002D07E8:;
    { s32 c_ = s0 >= 0; v0 = (s32) s0 >> 1; if (c_) goto L_002D07F8; }
    v0 = (s32) ((u32) s0 + 0x1U);
    v0 = (s32) v0 >> 1;
L_002D07F8:;
    v0 = (s32) ((u32) v0 << 5);
    a0 = a2;
    (*(volatile u16 *) (u32) (sp + 136)) = (u16) v0;
    v0 = 40;
    (*(volatile u16 *) (u32) (sp + 138)) = (u16) v0;
    v0 = 32;
    (*(volatile u16 *) (u32) (sp + 140)) = (u16) v0;
    (*(volatile u16 *) (u32) (sp + 142)) = (u16) v0; v0 = Pes6Team_ResolveSpecialId(a0);
    { s32 c_ = s1 == 0; a0 = v0 & 0xffff; if (c_) goto L_002D0834; }
    v1 = a0 & 0xffff;
    v0 = v1 < 204;
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) (s1 + 58)); goto L_002D083C; }
L_002D0834:;
    s1 = 0; goto L_002D089C;
L_002D083C:;
    if (v0 != 0) goto L_002D084C;
    s1 = 0; goto L_002D089C;
L_002D084C:;
    if (s0 == 0) { v0 = 185; goto L_002D0864; }
    v0 = 2;
    if (s0 != v0) { v1 = a0 & 0xffff; goto L_002D0888; }
    v0 = 185;
L_002D0864:;
    if (v1 != v0) { v0 = 184; goto L_002D0874; }
    s1 = 20651; goto L_002D089C;
L_002D0874:;
    if (v1 != v0) goto L_002D0884;
    s1 = 20652; goto L_002D089C;
L_002D0884:;
    v1 = a0 & 0xffff;
L_002D0888:;
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0xffffee60U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s1 = (*(volatile s32 *) (u32) v0);
L_002D089C:;
    a0 = s2;
    a1 = 0; v0 = func_001EDC80(a0, a1);
    if (v0 == 0) { a0 = s2; goto L_002D08B8; }
    s0 = v0; goto L_002D08C4;
L_002D08B8:;
    v0 = func_001EDD00(a0, a1, a2, a3);
    s0 = v0;
L_002D08C4:;
    a0 = s1; v0 = func_001E6E10(a0);
    if (v0 != 0) { a1 = v0; goto L_002D08E8; }
    a0 = s0;
    a1 = 0; func_001EF900(a0, a1);
    a0 = s2; goto L_002D090C;
L_002D08E8:;
    a0 = s0; func_001EEAC0(a0, a1);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x88U); func_001EE630(a0, a1);
    a0 = s0;
    a1 = 1; func_001EF900(a0, a1);
    a0 = s2;
L_002D090C:;
    a1 = 1; func_001EDAE0(a0, a1);
    v1 = (s32) ((u32) sp + 0x40U);
    { s32 c_ = v1 == 0; v0 = 64; if (c_) goto L_002D093C; }
L_002D0920:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_002D0920;
L_002D093C:;
    a0 = s2;
    a1 = 1; v0 = func_001EDC80(a0, a1);
    if (v0 == 0) { a0 = s2; goto L_002D0958; }
    s0 = v0; goto L_002D0964;
L_002D0958:;
    v0 = func_001EDD00(a0, a1, a2, a3);
    s0 = v0;
L_002D0964:;
    a0 = 20460; v0 = func_001E6E10(a0);
    if (v0 != 0) { a1 = v0; goto L_002D0988; }
    a0 = s0;
    a1 = 0; func_001EF900(a0, a1);
    a0 = s2; goto L_002D09B0;
L_002D0988:;
    a0 = s0; func_001EEAC0(a0, a1);
    a1 = (s32) 0x3b0000U;
    a0 = s0;
    a1 = (s32) ((u32) a1 + 0xfffff2d8U); func_001EE630(a0, a1);
    a0 = s0;
    a1 = 1; func_001EF900(a0, a1);
    a0 = s2;
L_002D09B0:;
    a1 = 0; v0 = func_001EDC80(a0, a1);
    if (v0 == 0) { a0 = s2; goto L_002D09C8; }
    a0 = v0; goto L_002D09D4;
L_002D09C8:;
    v0 = func_001EDD00(a0, a1, a2, a3);
    a0 = v0;
L_002D09D4:;
    a1 = (s32) ((u32) sp + 0x40U); func_001EE580(a0, a1);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x40U); func_001EF5B0(a0, a1);
    return;
}
