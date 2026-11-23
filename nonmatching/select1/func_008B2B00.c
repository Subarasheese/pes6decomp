/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001E6E10(s32);
void func_001ED880(s32, f32);
void func_001EDA30(s32, s32);
s32 func_001EDD00(s32, s32, s32, s32);
s32 func_001EE0D0(s32, s32, s32, s32);
void func_001EE890(s32, s32);
void func_001EEAC0(s32, s32);
void func_001EF370(s32, s32);
void func_001EF860(s32, s32);
void func_001EF900(s32, s32);
s32 func_0020A120(s32, s32, s32, s32, s32);

void func_008B2B00(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    v0 = 16;
    v1 = (s32) ((u32) sp + 0x70U);
    s4 = a0;
    s3 = a1;
    s2 = a5;
    if (v1 == 0) goto L_008B2B50;
L_008B2B34:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_008B2B34;
L_008B2B50:;
    f0.i = (s32) a3;
    v1 = (s32) ((u32) sp + 0x60U);
    f0.f = (f32) f0.i;
    v0 = 16;
    (*(volatile f32 *) (u32) (sp + 112)) = f0.f;
    f0.i = (s32) a4;
    f0.f = (f32) f0.i;
    { s32 c_ = v1 == 0; (*(volatile f32 *) (u32) (sp + 116)) = f0.f; if (c_) goto L_008B2B94; }
L_008B2B78:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_008B2B78;
L_008B2B94:;
    s0 = a2 & 0xffff;
    s1 = 105;
    if (s0 == s1) { v0 = (*(volatile s32 *) (u32) (gp + -20368)); goto L_008B2BE4; }
    v0 = 0xffff;
    if (s0 == v0) { s1 = 0; goto L_008B2BE0; }
    v0 = 283;
    if (s0 == v0) goto L_008B2BD0;
    v0 = 281;
    if (s0 == v0) goto L_008B2BD0;
    s1 = s0; goto L_008B2BE0;
L_008B2BD0:;
    s1 = 0;
    goto L_008B2BE0;
    s1 = s0;
L_008B2BE0:;
    v0 = (*(volatile s32 *) (u32) (gp + -20368));
L_008B2BE4:;
    if (v0 != 0) { v1 = s4 & 0xff; goto L_008B2C18; }
    v0 = func_001EE0D0(a0, a1, a2, a3);
    f0.i = (s32) s2;
    (*(volatile u32 *) (u32) (gp + -20368)) = (u32) v0;
    f12.f = (f32) f0.i;
    a0 = v0; func_001ED880(a0, f12.f);
    a0 = (*(volatile s32 *) (u32) (gp + -20368));
    a1 = 1; func_001EDA30(a0, a1);
    v1 = s4 & 0xff;
L_008B2C18:;
    v0 = (s32) 0x8e0000U;
    a0 = (*(volatile s32 *) (u32) (gp + -20368));
    v0 = (s32) ((u32) v0 + 0xffffab80U);
    v1 = (s32) ((u32) v1 << 2);
    s2 = (s32) ((u32) v0 + (u32) v1); v0 = func_001EDD00(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s2) = (u32) v0;
    a0 = v0;
    a1 = 1; func_001EF900(a0, a1);
    a0 = (*(volatile s32 *) (u32) s2);
    a1 = (s32) ((u32) sp + 0x70U); func_001EF860(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -20364));
    a1 = s3 & 0xff;
    a2 = s1;
    a3 = (s32) ((u32) sp + 0x8cU);
    a4 = (s32) ((u32) sp + 0x60U); v0 = func_0020A120(a0, a1, a2, a3, a4);
    s1 = v0;
    if (s1 != 0) { a0 = (*(volatile s32 *) (u32) s2); goto L_008B2C80; }
    a0 = 20000; v0 = func_001E6E10(a0);
    s1 = v0;
    a0 = (*(volatile s32 *) (u32) s2);
L_008B2C80:;
    a1 = (s32) ((u32) sp + 0x60U); func_001EF370(a0, a1);
    a0 = (*(volatile s32 *) (u32) s2);
    a1 = s1; func_001EEAC0(a0, a1);
    a1 = (*(volatile s32 *) (u32) (sp + 140));
    a0 = (*(volatile s32 *) (u32) s2); func_001EE890(a0, a1);
    v1 = 0xffff;
    if (s0 == v1) { v1 = s4 & 0xff; goto L_008B2CC8; }
    v1 = 281;
    if (s0 == v1) goto L_008B2CC4;
    v1 = 283;
    if (s0 != v1) { ; goto L_008B2CE8; }
L_008B2CC4:;
    v1 = s4 & 0xff;
L_008B2CC8:;
    v0 = (s32) 0x8e0000U;
    v0 = (s32) ((u32) v0 + 0xffffab80U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_001EF900(a0, a1);
L_008B2CE8:;
    return;
}
