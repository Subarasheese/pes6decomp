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

void func_002CFAD0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    s2 = a1;
    s1 = a3;
    v0 = (*(volatile u8 *) (u32) (a1 + 58));
    { s32 c_ = v0 == 0; s0 = (s32) ((u32) s2 + 0x3aU); if (c_) goto L_002CFC68; }
    v1 = (s32) ((u32) sp + 0x60U);
    { s32 c_ = v1 == 0; v0 = 8; if (c_) goto L_002CFB2C; }
L_002CFB10:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_002CFB10;
L_002CFB2C:;
    { s32 c_ = s1 >= 0; a1 = (s32) s1 >> 1; if (c_) goto L_002CFB3C; }
    v0 = (s32) ((u32) s1 + 0x1U);
    a1 = (s32) v0 >> 1;
L_002CFB3C:;
    v1 = (s32) ((u32) a1 << 1);
    v0 = 48;
    v1 = (s32) ((u32) v1 + (u32) a1);
    (*(volatile u16 *) (u32) (sp + 100)) = (u16) v0;
    v1 = (s32) ((u32) v1 << 4);
    v0 = 40;
    a0 = a2;
    (*(volatile u16 *) (u32) (sp + 96)) = (u16) v1;
    (*(volatile u16 *) (u32) (sp + 102)) = (u16) v0;
    (*(volatile u16 *) (u32) (sp + 98)) = (u16) 0; v0 = Pes6Team_ResolveSpecialId(a0);
    { s32 c_ = s2 == 0; a0 = v0 & 0xffff; if (c_) goto L_002CFB80; }
    v1 = a0 & 0xffff;
    v0 = v1 < 204;
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) s0); goto L_002CFB88; }
L_002CFB80:;
    s1 = 0; goto L_002CFBE8;
L_002CFB88:;
    if (v0 != 0) goto L_002CFB98;
    s1 = 0; goto L_002CFBE8;
L_002CFB98:;
    if (s1 == 0) { v0 = 185; goto L_002CFBB0; }
    v0 = 2;
    if (s1 != v0) { v1 = a0 & 0xffff; goto L_002CFBD4; }
    v0 = 185;
L_002CFBB0:;
    if (v1 != v0) { v0 = 184; goto L_002CFBC0; }
    s1 = 20651; goto L_002CFBE8;
L_002CFBC0:;
    if (v1 != v0) goto L_002CFBD0;
    s1 = 20652; goto L_002CFBE8;
L_002CFBD0:;
    v1 = a0 & 0xffff;
L_002CFBD4:;
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0xffffee60U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s1 = (*(volatile s32 *) (u32) v0);
L_002CFBE8:;
    a0 = s3;
    a1 = 0; v0 = func_001EDC80(a0, a1);
    if (v0 == 0) { a0 = s3; goto L_002CFC04; }
    s0 = v0; goto L_002CFC10;
L_002CFC04:;
    v0 = func_001EDD00(a0, a1, a2, a3);
    s0 = v0;
L_002CFC10:;
    a0 = s1; v0 = func_001E6E10(a0);
    if (v0 != 0) { a1 = v0; goto L_002CFC34; }
    a0 = s0;
    a1 = 0; func_001EF900(a0, a1);
    a0 = s3; goto L_002CFC58;
L_002CFC34:;
    a0 = s0; func_001EEAC0(a0, a1);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x60U); func_001EE630(a0, a1);
    a0 = s0;
    a1 = 1; func_001EF900(a0, a1);
    a0 = s3;
L_002CFC58:;
    a1 = 1; func_001EDAE0(a0, a1);
    goto L_002CFD50;
L_002CFC68:;
    v1 = (s32) 0x3b0000U;
    v0 = (s32) 0x3b0000U;
    a2 = (*(volatile s16 *) (u32) (v1 + -3256));
    a1 = (*(volatile s16 *) (u32) (v0 + -3254));
    v1 = (s32) 0x3b0000U;
    (*(volatile u16 *) (u32) (sp + 104)) = (u16) a2;
    a0 = (*(volatile s16 *) (u32) (v1 + -3252));
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s16 *) (u32) (v0 + -3250));
    (*(volatile u16 *) (u32) (sp + 106)) = (u16) a1;
    v1 = (s32) s1 >> 1;
    (*(volatile u16 *) (u32) (sp + 108)) = (u16) a0;
    { s32 c_ = s1 >= 0; (*(volatile u16 *) (u32) (sp + 110)) = (u16) v0; if (c_) goto L_002CFCA8; }
    v0 = (s32) ((u32) s1 + 0x1U);
    v1 = (s32) v0 >> 1;
L_002CFCA8:;
    if (v1 != 0) { s4 = 20467; goto L_002CFCB4; }
    s4 = 20466;
L_002CFCB4:;
    { s32 c_ = s1 >= 0; a1 = s1 & 0x1; if (c_) goto L_002CFCC8; }
    if (a1 == 0) { a0 = s2; goto L_002CFCCC; }
    a1 = (s32) ((u32) a1 + 0xfffffffeU);
L_002CFCC8:;
    a0 = s2;
L_002CFCCC:;
    a2 = s4; func_002D0430(a0, a1, a2);
    a0 = s3;
    a1 = 0; v0 = func_001EDC80(a0, a1);
    if (v0 == 0) { a0 = s3; goto L_002CFCF0; }
    s0 = v0; goto L_002CFCFC;
L_002CFCF0:;
    v0 = func_001EDD00(a0, a1, a2, a3);
    s0 = v0;
L_002CFCFC:;
    a0 = s4; v0 = func_001E6E10(a0);
    if (v0 != 0) { a1 = v0; goto L_002CFD20; }
    a0 = s0;
    a1 = 0; func_001EF900(a0, a1);
    a0 = s3; goto L_002CFD44;
L_002CFD20:;
    a0 = s0; func_001EEAC0(a0, a1);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x68U); func_001EE630(a0, a1);
    a0 = s0;
    a1 = 1; func_001EF900(a0, a1);
    a0 = s3;
L_002CFD44:;
    a1 = 1; func_001EDAE0(a0, a1);
L_002CFD50:;
    return;
}
