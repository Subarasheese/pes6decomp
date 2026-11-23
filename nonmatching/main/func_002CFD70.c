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

void func_002CFD70(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    s2 = a1;
    s1 = a2;
    a0 = s2;
    a1 = s1;
    v0 = func_002F82B0(a0, a1);
    s0 = v0;
    v0 = (*(volatile u8 *) (u32) (v0 + 58));
    if (v0 == 0) goto L_002CFF14;
    v1 = (s32) ((u32) sp + 0x50U);
    { s32 c_ = v1 == 0; v0 = 8; if (c_) goto L_002CFDD8; }
L_002CFDBC:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_002CFDBC;
L_002CFDD8:;
    { s32 c_ = s1 >= 0; a1 = (s32) s1 >> 1; if (c_) goto L_002CFDE8; }
    v0 = (s32) ((u32) s1 + 0x1U);
    a1 = (s32) v0 >> 1;
L_002CFDE8:;
    v1 = (s32) ((u32) a1 << 1);
    v0 = 48;
    v1 = (s32) ((u32) v1 + (u32) a1);
    (*(volatile u16 *) (u32) (sp + 84)) = (u16) v0;
    v1 = (s32) ((u32) v1 << 4);
    v0 = 40;
    a0 = s2;
    (*(volatile u16 *) (u32) (sp + 80)) = (u16) v1;
    (*(volatile u16 *) (u32) (sp + 86)) = (u16) v0;
    (*(volatile u16 *) (u32) (sp + 82)) = (u16) 0; v0 = Pes6Team_ResolveSpecialId(a0);
    { s32 c_ = s0 == 0; a0 = v0 & 0xffff; if (c_) goto L_002CFE2C; }
    v1 = a0 & 0xffff;
    v0 = v1 < 204;
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) (s0 + 58)); goto L_002CFE34; }
L_002CFE2C:;
    s1 = 0; goto L_002CFE94;
L_002CFE34:;
    if (v0 != 0) goto L_002CFE44;
    s1 = 0; goto L_002CFE94;
L_002CFE44:;
    if (s1 == 0) { v0 = 185; goto L_002CFE5C; }
    v0 = 2;
    if (s1 != v0) { v1 = a0 & 0xffff; goto L_002CFE80; }
    v0 = 185;
L_002CFE5C:;
    if (v1 != v0) { v0 = 184; goto L_002CFE6C; }
    s1 = 20651; goto L_002CFE94;
L_002CFE6C:;
    if (v1 != v0) goto L_002CFE7C;
    s1 = 20652; goto L_002CFE94;
L_002CFE7C:;
    v1 = a0 & 0xffff;
L_002CFE80:;
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0xffffee60U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s1 = (*(volatile s32 *) (u32) v0);
L_002CFE94:;
    a0 = s3;
    a1 = 0; v0 = func_001EDC80(a0, a1);
    if (v0 == 0) { a0 = s3; goto L_002CFEB0; }
    s0 = v0; goto L_002CFEBC;
L_002CFEB0:;
    v0 = func_001EDD00(a0, a1, a2, a3);
    s0 = v0;
L_002CFEBC:;
    a0 = s1; v0 = func_001E6E10(a0);
    if (v0 != 0) { a1 = v0; goto L_002CFEE0; }
    a0 = s0;
    a1 = 0; func_001EF900(a0, a1);
    a0 = s3; goto L_002CFF04;
L_002CFEE0:;
    a0 = s0; func_001EEAC0(a0, a1);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x50U); func_001EE630(a0, a1);
    a0 = s0;
    a1 = 1; func_001EF900(a0, a1);
    a0 = s3;
L_002CFF04:;
    a1 = 1; func_001EDAE0(a0, a1);
    goto L_002CFFF4;
L_002CFF14:;
    v1 = (s32) 0x3b0000U;
    v0 = (s32) 0x3b0000U;
    a3 = (*(volatile s16 *) (u32) (v1 + -3264));
    a0 = (s32) ((u32) s1 << 2);
    a2 = (*(volatile s16 *) (u32) (v0 + -3262));
    v1 = (s32) 0x3b0000U;
    (*(volatile u16 *) (u32) (sp + 88)) = (u16) a3;
    a1 = (*(volatile s16 *) (u32) (v1 + -3260));
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s16 *) (u32) (v0 + -3258));
    (*(volatile u16 *) (u32) (sp + 90)) = (u16) a2;
    v1 = (s32) 0x3b0000U;
    (*(volatile u16 *) (u32) (sp + 92)) = (u16) a1;
    v1 = (s32) ((u32) v1 + 0xfffff330U);
    a1 = s1 & 0x1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    s2 = (*(volatile s32 *) (u32) v1);
    { s32 c_ = s1 >= 0; (*(volatile u16 *) (u32) (sp + 94)) = (u16) v0; if (c_) goto L_002CFF6C; }
    if (a1 == 0) { a0 = s0; goto L_002CFF70; }
    a1 = (s32) ((u32) a1 + 0xfffffffeU);
L_002CFF6C:;
    a0 = s0;
L_002CFF70:;
    a2 = s2; func_002D0430(a0, a1, a2);
    a0 = s3;
    a1 = 0; v0 = func_001EDC80(a0, a1);
    if (v0 == 0) { a0 = s3; goto L_002CFF94; }
    s0 = v0; goto L_002CFFA0;
L_002CFF94:;
    v0 = func_001EDD00(a0, a1, a2, a3);
    s0 = v0;
L_002CFFA0:;
    a0 = s2; v0 = func_001E6E10(a0);
    if (v0 != 0) { a1 = v0; goto L_002CFFC4; }
    a0 = s0;
    a1 = 0; func_001EF900(a0, a1);
    a0 = s3; goto L_002CFFE8;
L_002CFFC4:;
    a0 = s0; func_001EEAC0(a0, a1);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x58U); func_001EE630(a0, a1);
    a0 = s0;
    a1 = 1; func_001EF900(a0, a1);
    a0 = s3;
L_002CFFE8:;
    a1 = 1; func_001EDAE0(a0, a1);
L_002CFFF4:;
    return;
}
