/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
void func_008C98A0(s32, s32, s32);
void func_008CAD70(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);
void func_008D0270(s32);
void func_008D1C70(s32, s32, s32, s32);
s32 func_008D1D20(s32);
s32 func_008D1E40(s32);
void func_008D1E50(s32, s32);
s32 func_008D1ED0(s32);
s32 func_008D1EE0(s32);
s32 func_008D1F00(s32);
s32 func_008D1F10(s32);
void func_008D20A0(s32, s32, s32);
void func_008D2100(s32, s32, s32);
s32 func_008D2780(s32, s32, s32, s32, f32, f32);
s32 func_008D4030(s32, s32, s32, s32, s32);

s32 func_008CB6F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = a1;
    if (s4 != 0) goto L_008CB720;
    v0 = 0; goto L_008CB940;
L_008CB720:;
    v0 = (*(volatile s32 *) (u32) (gp + -20092));
    { s32 c_ = v0 >= 0; v1 = v0 & 0xff; if (c_) goto L_008CB738; }
    if (v1 == 0) { v0 = (*(volatile u8 *) (u32) (s4 + 20)); goto L_008CB73C; }
    v1 = (s32) ((u32) v1 + 0xffffff00U);
L_008CB738:;
    v0 = (*(volatile u8 *) (u32) (s4 + 20));
L_008CB73C:;
    if (v1 == v0) { a0 = (s32) ((u32) s4 + 0x480U); goto L_008CB864; }
    (*(volatile u8 *) (u32) (s4 + 20)) = (u8) v1;
    a0 = (s32) ((u32) s4 + 0x480U); v0 = func_008D2780(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) goto L_008CB850;
    a0 = (s32) ((u32) s4 + 0x480U); v0 = func_008D1F00(a0);
    s1 = v0;
    a0 = (s32) ((u32) s4 + 0x480U);
    s2 = -1; v0 = func_008D1ED0(a0);
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0x1U);
    at = v0 < 0;
    if (at != 0) goto L_008CB850;
    s0 = (s32) ((u32) s2 + (u32) s1);
L_008CB788:;
    a0 = s4;
    a1 = s0;
    a2 = (s32) ((u32) sp + 0x6cU); func_008C98A0(a0, a1, a2);
    a2 = (s32) ((u32) s2 + 0x1U);
    a0 = (s32) ((u32) s4 + 0x480U);
    a1 = (s32) ((u32) sp + 0x6cU); func_008D2100(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (s4 + 1140));
    { s32 c_ = a2 == 0; a3 = 0; if (c_) goto L_008CB820; }
    if (s0 < 0) goto L_008CB820;
    v0 = (*(volatile u8 *) (u32) (a2 + 33));
    at = s0 < v0;
    if (at == 0) goto L_008CB820;
    a1 = (*(volatile u8 *) (u32) (a2 + 842));
    { s32 c_ = a1 <= 0; a4 = 0; if (c_) goto L_008CB820; }
    v0 = (s32) ((u32) a2 + (u32) s0);
    v1 = 1;
    a0 = (*(volatile u8 *) (u32) (v0 + 1));
L_008CB7E8:;
    v0 = (*(volatile u8 *) (u32) (a2 + 828));
    if (v0 != a0) goto L_008CB800;
    a3 = v1; goto L_008CB810;
L_008CB800:;
    v0 = (*(volatile u8 *) (u32) (a2 + 829));
    if (v0 != a0) goto L_008CB810;
    a3 = v1;
L_008CB810:;
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = a4 < a1;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x2U); if (c_) goto L_008CB7E8; }
L_008CB820:;
    a2 = a3 & 0xff;
    a1 = (s32) ((u32) s2 + 0x1U);
    a0 = (s32) ((u32) s4 + 0x480U); func_008D20A0(a0, a1, a2);
    a0 = (s32) ((u32) s4 + 0x480U);
    s2 = (s32) ((u32) s2 + 0x1U); v0 = func_008D1ED0(a0);
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0x1U);
    v0 = s2 < v0;
    if (v0 != 0) { s0 = (s32) ((u32) s2 + (u32) s1); goto L_008CB788; }
L_008CB850:;
    a0 = (s32) ((u32) s4 + 0x480U); func_008D1C70(a0, a1, a2, a3);
    a0 = (s32) ((u32) s4 + 0x480U); func_008D0270(a0);
    a0 = (s32) ((u32) s4 + 0x480U);
L_008CB864:;
    v0 = func_008D1F10(a0);
    if (v0 == 0) { a0 = (s32) ((u32) s4 + 0x480U); goto L_008CB87C; }
    v0 = 0; goto L_008CB940;
L_008CB87C:;
    v0 = func_008D1D20(a0);
    if (v0 != 0) { a0 = (s32) ((u32) s4 + 0x480U); goto L_008CB8A4; }
    a1 = (*(volatile u8 *) (u32) (s4 + 1148));
    a0 = s4;
    a2 = 0;
    a3 = 0; func_008CAD70(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a0 = (s32) ((u32) s4 + 0x480U);
L_008CB8A4:;
    v0 = func_008D1E40(a0);
    (*(volatile u32 *) (u32) (sp + 96)) = (u32) v0;
    a0 = (s32) ((u32) s4 + 0x480U); v0 = func_008D1F00(a0);
    (*(volatile u16 *) (u32) (sp + 100)) = (u16) v0;
    a0 = (s32) ((u32) s4 + 0x480U); v0 = func_008D1EE0(a0);
    s0 = v0;
    a0 = (s32) ((u32) s4 + 0x480U); v0 = func_008D1ED0(a0);
    a2 = (*(volatile u8 *) (u32) (s4 + 1148));
    a1 = s3;
    a3 = s0;
    a0 = (s32) ((u32) sp + 0x60U);
    a4 = v0; v0 = func_008D4030(a0, a1, a2, a3, a4);
    v1 = 3;
    if (v0 == v1) { v0 = (s32) 0x84000000U; goto L_008CB914; }
    v1 = 4;
    if (v0 == v1) { a1 = (*(volatile u8 *) (u32) (sp + 100)); goto L_008CB908; }
    v0 = 0; goto L_008CB940;
L_008CB908:;
    a0 = (s32) ((u32) s4 + 0x480U); func_008D1E50(a0, a1);
    v0 = (s32) 0x84000000U;
L_008CB914:;
    a0 = v0 | 0xf802; SD_call(a0);
    v0 = (*(volatile u8 *) (u32) (sp + 102));
    a0 = s4;
    a1 = (*(volatile s16 *) (u32) (sp + 96));
    a3 = 0;
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    a2 = v0 & 0xff; func_008CAD70(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    v0 = 3;
L_008CB940:;
    return v0;
}
