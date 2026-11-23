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
void func_002D0640(s32, s32, s32, s32, s32);
void func_002D0A00(s32, s32, s32);
s32 func_002F82B0(s32, s32);

void func_002CEAF0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x3b0000U;
    s4 = a0;
    s3 = a1;
    s2 = a2;
    s1 = a3;
    a0 = (*(volatile s16 *) (u32) (v0 + -3216));
    v0 = (s32) 0x3b0000U;
    (*(volatile u16 *) (u32) (sp + 104)) = (u16) a0;
    a1 = (*(volatile s16 *) (u32) (v0 + -3214));
    a0 = s3;
    v0 = (s32) 0x3b0000U;
    (*(volatile u16 *) (u32) (sp + 106)) = (u16) a1;
    v1 = (*(volatile s16 *) (u32) (v0 + -3212));
    a1 = s2;
    v0 = (s32) 0x3b0000U;
    (*(volatile u16 *) (u32) (sp + 108)) = (u16) v1;
    v0 = (*(volatile s16 *) (u32) (v0 + -3210));
    (*(volatile u16 *) (u32) (sp + 110)) = (u16) v0; v0 = func_002F82B0(a0, a1);
    s0 = v0;
    v0 = (*(volatile u8 *) (u32) (v0 + 58));
    if (v0 == 0) goto L_002CECA0;
    { s32 c_ = s2 >= 0; v0 = (s32) s2 >> 1; if (c_) goto L_002CEB78; }
    v0 = (s32) ((u32) s2 + 0x1U);
    v0 = (s32) v0 >> 1;
L_002CEB78:;
    v0 = (s32) ((u32) v0 << 5);
    a0 = s3;
    (*(volatile u16 *) (u32) (sp + 104)) = (u16) v0;
    v0 = 72;
    (*(volatile u16 *) (u32) (sp + 106)) = (u16) v0;
    v0 = 32;
    (*(volatile u16 *) (u32) (sp + 108)) = (u16) v0;
    v0 = 40;
    (*(volatile u16 *) (u32) (sp + 110)) = (u16) v0; v0 = Pes6Team_ResolveSpecialId(a0);
    { s32 c_ = s0 == 0; a0 = v0 & 0xffff; if (c_) goto L_002CEBB8; }
    v1 = a0 & 0xffff;
    v0 = v1 < 204;
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) (s0 + 58)); goto L_002CEBC0; }
L_002CEBB8:;
    s1 = 0; goto L_002CEC20;
L_002CEBC0:;
    if (v0 != 0) goto L_002CEBD0;
    s1 = 0; goto L_002CEC20;
L_002CEBD0:;
    if (s2 == 0) { v0 = 185; goto L_002CEBE8; }
    v0 = 2;
    if (s2 != v0) { v1 = a0 & 0xffff; goto L_002CEC0C; }
    v0 = 185;
L_002CEBE8:;
    if (v1 != v0) { v0 = 184; goto L_002CEBF8; }
    s1 = 20651; goto L_002CEC20;
L_002CEBF8:;
    if (v1 != v0) goto L_002CEC08;
    s1 = 20652; goto L_002CEC20;
L_002CEC08:;
    v1 = a0 & 0xffff;
L_002CEC0C:;
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0xffffee60U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s1 = (*(volatile s32 *) (u32) v0);
L_002CEC20:;
    a0 = s4;
    a1 = 0; v0 = func_001EDC80(a0, a1);
    if (v0 == 0) { a0 = s4; goto L_002CEC3C; }
    s0 = v0; goto L_002CEC48;
L_002CEC3C:;
    v0 = func_001EDD00(a0, a1, a2, a3);
    s0 = v0;
L_002CEC48:;
    a0 = s1; v0 = func_001E6E10(a0);
    if (v0 != 0) { a1 = v0; goto L_002CEC6C; }
    a0 = s0;
    a1 = 0; func_001EF900(a0, a1);
    a0 = s4; goto L_002CEC90;
L_002CEC6C:;
    a0 = s0; func_001EEAC0(a0, a1);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x68U); func_001EE630(a0, a1);
    a0 = s0;
    a1 = 1; func_001EF900(a0, a1);
    a0 = s4;
L_002CEC90:;
    a1 = 1; func_001EDAE0(a0, a1);
    goto L_002CEDAC;
L_002CECA0:;
    v1 = (s32) 0x3b0000U;
    v0 = (s32) 0x3b0000U;
    a1 = (*(volatile s16 *) (u32) (v1 + -3224));
    a0 = (*(volatile s16 *) (u32) (v0 + -3222));
    v1 = (s32) 0x3b0000U;
    (*(volatile u16 *) (u32) (sp + 96)) = (u16) a1;
    v0 = (s32) 0x3b0000U;
    v1 = (*(volatile s16 *) (u32) (v1 + -3220));
    v0 = (*(volatile s16 *) (u32) (v0 + -3218));
    (*(volatile u16 *) (u32) (sp + 98)) = (u16) a0;
    (*(volatile u16 *) (u32) (sp + 100)) = (u16) v1;
    { s32 c_ = s1 != 0; (*(volatile u16 *) (u32) (sp + 102)) = (u16) v0; if (c_) goto L_002CECDC; }
    s2 = 20466; goto L_002CECE0;
L_002CECDC:;
    s2 = 20467;
L_002CECE0:;
    a3 = (*(volatile u8 *) (u32) (s0 + 48));
    a0 = s2;
    a1 = 20461;
    a2 = 2;
    a4 = 6; func_002D0640(a0, a1, a2, a3, a4);
    s1 = 9;
    at = s1 < 12;
    if (at == 0) goto L_002CED30;
    v0 = (s32) ((u32) s1 << 1);
L_002CED0C:;
    a0 = s2;
    a1 = (s32) ((u32) s0 + (u32) v0);
    a2 = s1; func_002D0A00(a0, a1, a2);
    s1 = (s32) ((u32) s1 + 0x1U);
    at = s1 < 12;
    if (at != 0) { v0 = (s32) ((u32) s1 << 1); goto L_002CED0C; }
L_002CED30:;
    a0 = s4;
    a1 = 0; v0 = func_001EDC80(a0, a1);
    if (v0 == 0) { a0 = s4; goto L_002CED4C; }
    s0 = v0; goto L_002CED58;
L_002CED4C:;
    v0 = func_001EDD00(a0, a1, a2, a3);
    s0 = v0;
L_002CED58:;
    a0 = s2; v0 = func_001E6E10(a0);
    if (v0 != 0) { a1 = v0; goto L_002CED7C; }
    a0 = s0;
    a1 = 0; func_001EF900(a0, a1);
    a0 = s4; goto L_002CEDA0;
L_002CED7C:;
    a0 = s0; func_001EEAC0(a0, a1);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x60U); func_001EE630(a0, a1);
    a0 = s0;
    a1 = 1; func_001EF900(a0, a1);
    a0 = s4;
L_002CEDA0:;
    a1 = 1; func_001EDAE0(a0, a1);
L_002CEDAC:;
    return;
}
