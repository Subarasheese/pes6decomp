/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Team_ResolveSpecialId(s32);
s32 func_001E6E10(s32);
void func_001EDAE0(s32, s32);
s32 func_001EDC80(s32, s32);
s32 func_001EDD00(s32, s32, s32, s32);
void func_001EE630(s32, s32);
void func_001EEAC0(s32, s32);
void func_001EF900(s32, s32);
void func_002D0430(s32, s32, s32);
s32 func_002F82B0(s32, s32);

void func_002D0010(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = a1;
    s2 = a2;
    s1 = a3;
    a0 = s3;
    a1 = s2;
    v0 = func_002F82B0(a0, a1);
    s0 = v0;
    v0 = (*(volatile u8 *) (u32) (v0 + 58));
    if (v0 == 0) goto L_002D01BC;
    v1 = (s32) ((u32) sp + 0x68U);
    { s32 c_ = v1 == 0; v0 = 8; if (c_) goto L_002D0080; }
L_002D0064:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_002D0064;
L_002D0080:;
    { s32 c_ = s2 >= 0; a1 = (s32) s2 >> 1; if (c_) goto L_002D0090; }
    v0 = (s32) ((u32) s2 + 0x1U);
    a1 = (s32) v0 >> 1;
L_002D0090:;
    v1 = (s32) ((u32) a1 << 1);
    v0 = 48;
    v1 = (s32) ((u32) v1 + (u32) a1);
    (*(volatile u16 *) (u32) (sp + 108)) = (u16) v0;
    v1 = (s32) ((u32) v1 << 4);
    v0 = 40;
    a0 = s3;
    (*(volatile u16 *) (u32) (sp + 104)) = (u16) v1;
    (*(volatile u16 *) (u32) (sp + 110)) = (u16) v0;
    (*(volatile u16 *) (u32) (sp + 106)) = (u16) 0; v0 = Pes6Team_ResolveSpecialId(a0);
    { s32 c_ = s0 == 0; a0 = v0 & 0xffff; if (c_) goto L_002D00D4; }
    v1 = a0 & 0xffff;
    v0 = v1 < 204;
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) (s0 + 58)); goto L_002D00DC; }
L_002D00D4:;
    s1 = 0; goto L_002D013C;
L_002D00DC:;
    if (v0 != 0) goto L_002D00EC;
    s1 = 0; goto L_002D013C;
L_002D00EC:;
    if (s2 == 0) { v0 = 185; goto L_002D0104; }
    v0 = 2;
    if (s2 != v0) { v1 = a0 & 0xffff; goto L_002D0128; }
    v0 = 185;
L_002D0104:;
    if (v1 != v0) { v0 = 184; goto L_002D0114; }
    s1 = 20651; goto L_002D013C;
L_002D0114:;
    if (v1 != v0) goto L_002D0124;
    s1 = 20652; goto L_002D013C;
L_002D0124:;
    v1 = a0 & 0xffff;
L_002D0128:;
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0xffffee60U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s1 = (*(volatile s32 *) (u32) v0);
L_002D013C:;
    a0 = s4;
    a1 = 0; v0 = func_001EDC80(a0, a1);
    if (v0 == 0) { a0 = s4; goto L_002D0158; }
    s0 = v0; goto L_002D0164;
L_002D0158:;
    v0 = func_001EDD00(a0, a1, a2, a3);
    s0 = v0;
L_002D0164:;
    a0 = s1; v0 = func_001E6E10(a0);
    if (v0 != 0) { a1 = v0; goto L_002D0188; }
    a0 = s0;
    a1 = 0; func_001EF900(a0, a1);
    a0 = s4; goto L_002D01AC;
L_002D0188:;
    a0 = s0; func_001EEAC0(a0, a1);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x68U); func_001EE630(a0, a1);
    a0 = s0;
    a1 = 1; func_001EF900(a0, a1);
    a0 = s4;
L_002D01AC:;
    a1 = 1; func_001EDAE0(a0, a1);
    goto L_002D0298;
L_002D01BC:;
    v1 = (s32) 0x3b0000U;
    v0 = (s32) 0x3b0000U;
    a1 = (*(volatile s16 *) (u32) (v1 + -3288));
    a0 = (*(volatile s16 *) (u32) (v0 + -3286));
    v1 = (s32) 0x3b0000U;
    (*(volatile u16 *) (u32) (sp + 96)) = (u16) a1;
    v0 = (s32) 0x3b0000U;
    v1 = (*(volatile s16 *) (u32) (v1 + -3284));
    v0 = (*(volatile s16 *) (u32) (v0 + -3282));
    (*(volatile u16 *) (u32) (sp + 98)) = (u16) a0;
    (*(volatile u16 *) (u32) (sp + 100)) = (u16) v1;
    { s32 c_ = s1 != 0; (*(volatile u16 *) (u32) (sp + 102)) = (u16) v0; if (c_) goto L_002D01F8; }
    s1 = 20462; goto L_002D01FC;
L_002D01F8:;
    s1 = 20463;
L_002D01FC:;
    { s32 c_ = s2 >= 0; a1 = s2 & 0x1; if (c_) goto L_002D0210; }
    if (a1 == 0) { a0 = s0; goto L_002D0214; }
    a1 = (s32) ((u32) a1 + 0xfffffffeU);
L_002D0210:;
    a0 = s0;
L_002D0214:;
    a2 = s1; func_002D0430(a0, a1, a2);
    a0 = s4;
    a1 = 0; v0 = func_001EDC80(a0, a1);
    if (v0 == 0) { a0 = s4; goto L_002D0238; }
    s0 = v0; goto L_002D0244;
L_002D0238:;
    v0 = func_001EDD00(a0, a1, a2, a3);
    s0 = v0;
L_002D0244:;
    a0 = s1; v0 = func_001E6E10(a0);
    if (v0 != 0) { a1 = v0; goto L_002D0268; }
    a0 = s0;
    a1 = 0; func_001EF900(a0, a1);
    a0 = s4; goto L_002D028C;
L_002D0268:;
    a0 = s0; func_001EEAC0(a0, a1);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x60U); func_001EE630(a0, a1);
    a0 = s0;
    a1 = 1; func_001EF900(a0, a1);
    a0 = s4;
L_002D028C:;
    a1 = 1; func_001EDAE0(a0, a1);
L_002D0298:;
    return;
}
