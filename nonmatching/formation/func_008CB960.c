/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
s32 func_008B94E0(s32, s32, s32, s32);
void func_008C98A0(s32, s32, s32);
void func_008CAD70(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);
s32 func_008CBFF0(s32, s32, s32, s32, s32, s32, s32, s32, f32);
void func_008D0270(s32);
void func_008D1C70(s32, s32, s32, s32);
s32 func_008D1D20(s32);
s32 func_008D1E40(s32);
void func_008D1E50(s32, s32);
s32 func_008D1ED0(s32);
s32 func_008D1EE0(s32);
s32 func_008D1F00(s32);
s32 func_008D1F10(s32);
s32 func_008D1F20(s32, s32);
void func_008D20A0(s32, s32, s32);
void func_008D2100(s32, s32, s32);
s32 func_008D2780(s32, s32, s32, s32, f32, f32);
s32 func_008D4030(s32, s32, s32, s32, s32);
s32 func_008D90A0(s32, s32, s32, s32);

s32 func_008CB960(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s1 = a1;
    { s32 c_ = s2 != 0; s0 = a2; if (c_) goto L_008CB998; }
    v0 = 0; goto L_008CBD3C;
L_008CB998:;
    v0 = (*(volatile s32 *) (u32) (gp + -20092));
    { s32 c_ = v0 >= 0; v1 = v0 & 0xff; if (c_) goto L_008CB9B0; }
    if (v1 == 0) { v0 = (*(volatile u8 *) (u32) (s2 + 20)); goto L_008CB9B4; }
    v1 = (s32) ((u32) v1 + 0xffffff00U);
L_008CB9B0:;
    v0 = (*(volatile u8 *) (u32) (s2 + 20));
L_008CB9B4:;
    if (v1 == v0) { a0 = (s32) ((u32) s2 + 0x480U); goto L_008CBADC; }
    (*(volatile u8 *) (u32) (s2 + 20)) = (u8) v1;
    a0 = (s32) ((u32) s2 + 0x480U); v0 = func_008D2780(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) goto L_008CBAC8;
    a0 = (s32) ((u32) s2 + 0x480U); v0 = func_008D1F00(a0);
    s4 = v0;
    a0 = (s32) ((u32) s2 + 0x480U);
    s5 = -1; v0 = func_008D1ED0(a0);
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0x1U);
    at = v0 < 0;
    if (at != 0) goto L_008CBAC8;
    s3 = (s32) ((u32) s5 + (u32) s4);
L_008CBA00:;
    a0 = s2;
    a1 = s3;
    a2 = (s32) ((u32) sp + 0x7cU); func_008C98A0(a0, a1, a2);
    a2 = (s32) ((u32) s5 + 0x1U);
    a0 = (s32) ((u32) s2 + 0x480U);
    a1 = (s32) ((u32) sp + 0x7cU); func_008D2100(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (s2 + 1140));
    { s32 c_ = a2 == 0; a3 = 0; if (c_) goto L_008CBA98; }
    if (s3 < 0) goto L_008CBA98;
    v0 = (*(volatile u8 *) (u32) (a2 + 33));
    at = s3 < v0;
    if (at == 0) goto L_008CBA98;
    a1 = (*(volatile u8 *) (u32) (a2 + 842));
    { s32 c_ = a1 <= 0; a4 = 0; if (c_) goto L_008CBA98; }
    v0 = (s32) ((u32) a2 + (u32) s3);
    v1 = 1;
    a0 = (*(volatile u8 *) (u32) (v0 + 1));
L_008CBA60:;
    v0 = (*(volatile u8 *) (u32) (a2 + 828));
    if (v0 != a0) goto L_008CBA78;
    a3 = v1; goto L_008CBA88;
L_008CBA78:;
    v0 = (*(volatile u8 *) (u32) (a2 + 829));
    if (v0 != a0) goto L_008CBA88;
    a3 = v1;
L_008CBA88:;
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = a4 < a1;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x2U); if (c_) goto L_008CBA60; }
L_008CBA98:;
    a2 = a3 & 0xff;
    a1 = (s32) ((u32) s5 + 0x1U);
    a0 = (s32) ((u32) s2 + 0x480U); func_008D20A0(a0, a1, a2);
    a0 = (s32) ((u32) s2 + 0x480U);
    s5 = (s32) ((u32) s5 + 0x1U); v0 = func_008D1ED0(a0);
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0x1U);
    v0 = s5 < v0;
    if (v0 != 0) { s3 = (s32) ((u32) s5 + (u32) s4); goto L_008CBA00; }
L_008CBAC8:;
    a0 = (s32) ((u32) s2 + 0x480U); func_008D1C70(a0, a1, a2, a3);
    a0 = (s32) ((u32) s2 + 0x480U); func_008D0270(a0);
    a0 = (s32) ((u32) s2 + 0x480U);
L_008CBADC:;
    v0 = func_008D1F10(a0);
    if (v0 == 0) { a0 = (s32) ((u32) s2 + 0x480U); goto L_008CBAF4; }
    v0 = 0; goto L_008CBD3C;
L_008CBAF4:;
    v0 = func_008D1D20(a0);
    if (v0 != 0) { a0 = (s32) ((u32) s2 + 0x480U); goto L_008CBB1C; }
    a1 = (*(volatile u8 *) (u32) (s2 + 1148));
    a0 = s2;
    a2 = 0;
    a3 = 0; func_008CAD70(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a0 = (s32) ((u32) s2 + 0x480U);
L_008CBB1C:;
    v0 = func_008D1E40(a0);
    s4 = v0;
    a0 = s1; v0 = func_008D90A0(a0, a1, a2, a3);
    s3 = v0;
    v0 = 32;
    v1 = s3 & 0x5060;
    if (v1 == v0) { a0 = (*(volatile u8 *) (u32) (s2 + 1)); goto L_008CBB80; }
    v0 = 64;
    if (v1 == v0) { v0 = (s32) 0x84000000U; goto L_008CBB70; }
    v0 = 16384;
    if (v1 == v0) { v0 = 7; goto L_008CBD3C; }
    v0 = 4096;
    if (v1 == v0) { v0 = 6; goto L_008CBD3C; }
    a0 = (s32) ((u32) s2 + 0x480U); goto L_008CBC34;
L_008CBB70:;
    a0 = v0 | 0x8401; SD_call(a0);
    v0 = 1; goto L_008CBD3C;
L_008CBB80:;
    v0 = func_008B94E0(a0, a1, a2, a3);
    if (v0 != 0) goto L_008CBC30;
    if (s0 == 0) { v0 = 2; goto L_008CBD3C; }
    if (s2 != 0) { s0 = (*(volatile s32 *) (u32) (s2 + 1140)); goto L_008CBBA8; }
    v1 = 5; goto L_008CBC04;
L_008CBBA8:;
    a0 = (s32) ((u32) s2 + 0x480U);
    a1 = s4 & 0xff; v0 = func_008D1F20(a0, a1);
    if (v0 != 0) goto L_008CBBC4;
    v1 = 5; goto L_008CBC04;
L_008CBBC4:;
    if (s0 == 0) { v1 = 2; goto L_008CBC04; }
    v0 = (*(volatile u8 *) (u32) (s0 + 852));
    if (v0 == 0) { v0 = s4 & 0xff; goto L_008CBBE0; }
    v1 = 2; goto L_008CBC04;
L_008CBBE0:;
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v0 + 1));
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v0 + 133));
    if (v0 != 0) goto L_008CBC00;
    v1 = 5; goto L_008CBC04;
L_008CBC00:;
    v1 = 2;
L_008CBC04:;
    v0 = 2;
    if (v1 == v0) goto L_008CBC24;
    v0 = (s32) 0x8c000000U;
    a0 = v0 | 0x8005; SD_call(a0);
    v0 = 5; goto L_008CBD3C;
L_008CBC24:;
    v0 = 2;
    goto L_008CBD3C;
L_008CBC30:;
    a0 = (s32) ((u32) s2 + 0x480U);
L_008CBC34:;
    v0 = func_008D1EE0(a0);
    v0 = v0 & 0xff;
    at = v0 < 12;
    if (at == 0) { a0 = (s32) ((u32) s2 + 0x480U); goto L_008CBCA0; }
    v1 = (*(volatile u8 *) (u32) (s2 + 22));
    v0 = 2;
    if (v1 != v0) goto L_008CBC9C;
    v0 = s3 & 0xc;
    if (v0 == 0) goto L_008CBC9C;
    v0 = (*(volatile u8 *) (u32) (s2 + 23));
    a0 = s2;
    v0 = v0 ^ 0x1;
    (*(volatile u8 *) (u32) (s2 + 23)) = (u8) v0; v0 = func_008CBFF0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f);
    if (v0 == 0) { v0 = 0; goto L_008CBD3C; }
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    v0 = 0;
    goto L_008CBD3C;
L_008CBC9C:;
    a0 = (s32) ((u32) s2 + 0x480U);
L_008CBCA0:;
    v0 = func_008D1E40(a0);
    (*(volatile u32 *) (u32) (sp + 112)) = (u32) v0;
    a0 = (s32) ((u32) s2 + 0x480U); v0 = func_008D1F00(a0);
    (*(volatile u16 *) (u32) (sp + 116)) = (u16) v0;
    a0 = (s32) ((u32) s2 + 0x480U); v0 = func_008D1EE0(a0);
    s0 = v0;
    a0 = (s32) ((u32) s2 + 0x480U); v0 = func_008D1ED0(a0);
    a2 = (*(volatile u8 *) (u32) (s2 + 1148));
    a1 = s1;
    a3 = s0;
    a0 = (s32) ((u32) sp + 0x70U);
    a4 = v0; v0 = func_008D4030(a0, a1, a2, a3, a4);
    v1 = 3;
    if (v0 == v1) { v0 = (s32) 0x84000000U; goto L_008CBD10; }
    v1 = 4;
    if (v0 == v1) { a1 = (*(volatile u8 *) (u32) (sp + 116)); goto L_008CBD04; }
    v0 = 0; goto L_008CBD3C;
L_008CBD04:;
    a0 = (s32) ((u32) s2 + 0x480U); func_008D1E50(a0, a1);
    v0 = (s32) 0x84000000U;
L_008CBD10:;
    a0 = v0 | 0xf802; SD_call(a0);
    v0 = (*(volatile u8 *) (u32) (sp + 118));
    a0 = s2;
    a1 = (*(volatile s16 *) (u32) (sp + 112));
    a3 = 0;
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    a2 = v0 & 0xff; func_008CAD70(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    v0 = 3;
L_008CBD3C:;
    return v0;
}
