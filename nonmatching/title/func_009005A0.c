/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
s32 func_001543E0(s32);
s32 func_001B5350(s32, s32, s32, s32, f32, f32);
s32 func_001BE5B0(s32);
s32 func_001CDA50(s32);
f32 func_001E5410(void);
s32 func_001E6E10(s32);
void func_001ED880(s32, f32);
void func_001EDA30(s32, s32);
void func_001EDAE0(s32, s32);
s32 func_001EDC80(s32, s32);
void func_001EDD90(s32, s32, s32, s32);
s32 func_001EE0D0(s32, s32, s32, s32);
void func_001EEDA0(s32, s32);
s32 func_001F87D0(void);
s32 func_001F87E0(s32, s32);
s32 func_0026DA40(s32);
s32 func_00900A40(s32, s32, s32, s32, f32);

s32 func_009005A0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };

    s1 = (*(volatile s32 *) (u32) (gp + -19812));
    a0 = (*(volatile s32 *) (u32) s1);
    at = (u64) a0 < (u64) (s64) 6;
    { s32 c_ = at == 0; fp = 0; if (c_) goto L_00900990; }
    v1 = (s32) 0x900000U;
    v0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + 0x2260U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x900600U) goto L_00900600; if (t_ == 0x900618U) goto L_00900618; if (t_ == 0x9007a8U) goto L_009007A8; if (t_ == 0x9008c4U) goto L_009008C4; if (t_ == 0x9008f8U) goto L_009008F8; if (t_ == 0x90097cU) goto L_0090097C; }
L_00900600:;
    a0 = 1;
    a1 = 255; v0 = func_001F87E0(a0, a1);
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) s1) = (u32) v0;
L_00900618:;
    v0 = func_001F87D0();
    a0 = 1;
    if (v0 != a0) { v0 = fp; goto L_00900994; }
    v0 = func_0026DA40(a0);
    if (v0 != 0) goto L_00900990;
    a0 = 1; v0 = func_001CDA50(a0);
    s0 = v0; v0 = func_001EE0D0(a0, a1, a2, a3);
    s4 = v0;
    a1 = 1;
    a0 = s4; func_001EDA30(a0, a1);
    v0 = (s32) 0x44bb0000U;
    v0 = v0 | 0x8000;
    f12.i = (s32) v0;
    a0 = s4; func_001ED880(a0, f12.f);
    v0 = (s32) ((u32) s0 << 1);
    v1 = (s32) ((u32) v0 + (u32) s0);
    v0 = (s32) 0x900000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0x1aa8U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { s32 c_ = v0 <= 0; s5 = 0; if (c_) goto L_00900738; }
    v0 = (s32) 0x900000U;
    s2 = 0;
    v0 = (s32) ((u32) v0 + 0x1aa0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s6 = (s32) ((u32) v0 + 0x4U);
    s7 = (s32) ((u32) v0 + 0x8U);
L_009006AC:;
    v0 = (*(volatile s32 *) (u32) s6);
    s0 = (s32) ((u32) v0 + (u32) s2);
    a0 = (*(volatile s32 *) (u32) s0); v0 = func_001E6E10(a0);
    s3 = v0;
    v0 = (s32) 0x3f0000U;
    v1 = (*(volatile s16 *) (u32) (v0 + 30612));
    v0 = (s32) 0x40000000U;
    f0.i = (s32) v0;
    v0 = (s32) ((u32) 0 - (u32) v1);
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    f20.f = f1.f / f0.f;
    f0.f = func_001E5410();
    f1.i = f0.i ^ (s32) 0x80000000U;
    v0 = (s32) 0x40000000U;
    f0.i = (s32) v0;
    a3 = s3;
    f13.f = f1.f / f0.f;
    a0 = (s32) ((u32) s0 + 0x4U);
    f12.i = f20.i;
    a1 = (s32) ((u32) s0 + 0x14U);
    a2 = s4; v0 = func_001B5350(a0, a1, a2, a3, f12.f, f13.f);
    v0 = (*(volatile s32 *) (u32) s7);
    s5 = (s32) ((u32) s5 + 0x1U);
    v0 = s5 < v0;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x1cU); if (c_) goto L_009006AC; }
L_00900738:;
    a0 = s4;
    a1 = 1; func_001EDAE0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s1 + 8));
    if (a0 == 0) { v0 = 255; goto L_0090075C; }
    func_001EDD90(a0, a1, a2, a3);
    v0 = 255;
L_0090075C:;
    (*(volatile u32 *) (u32) (s1 + 24)) = (u32) v0;
    (*(volatile u32 *) (u32) (s1 + 20)) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) (s1 + 8));
    a1 = 1; v0 = func_001EDC80(a0, a1);
    if (v0 == 0) { (*(volatile u32 *) (u32) (s1 + 8)) = (u32) s4; goto L_00900788; }
    a0 = v0;
    a1 = 0; func_001EEDA0(a0, a1);
    (*(volatile u32 *) (u32) (s1 + 8)) = (u32) s4;
L_00900788:;
    a0 = 0;
    a1 = 8;
    (*(volatile u32 *) (u32) (s1 + 12)) = (u32) 0; v0 = func_001F87E0(a0, a1);
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) s1) = (u32) v0; goto L_00900990;
L_009007A8:;
    v1 = (*(volatile s32 *) (u32) (s1 + 20));
    v0 = (*(volatile s32 *) (u32) (s1 + 24));
    at = v1 < v0;
    if (at == 0) { s0 = (s32) ((u32) v1 + 0xfffffffcU); goto L_009007DC; }
    s0 = (s32) ((u32) v1 + 0x4U);
    at = v0 < s0;
    if (at == 0) { (*(volatile u32 *) (u32) (s1 + 20)) = (u32) s0; goto L_009007F8; }
    s0 = v0;
    v0 = 32;
    (*(volatile u32 *) (u32) (s1 + 24)) = (u32) v0; goto L_009007F4;
L_009007DC:;
    at = s0 < v0;
    if (at == 0) goto L_009007F4;
    s0 = v0;
    v0 = 255;
    (*(volatile u32 *) (u32) (s1 + 24)) = (u32) v0;
L_009007F4:;
    (*(volatile u32 *) (u32) (s1 + 20)) = (u32) s0;
L_009007F8:;
    a0 = (*(volatile s32 *) (u32) (s1 + 8));
    a1 = 1; v0 = func_001EDC80(a0, a1);
    if (v0 == 0) { a0 = 0; goto L_0090081C; }
    a1 = s0 & 0xff;
    a0 = v0; func_001EEDA0(a0, a1);
    a0 = 0;
L_0090081C:;
    v0 = func_001543E0(a0);
    v1 = -241;
    v0 = v0 & v1;
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (s1 + 12)); goto L_00900884; }
    v0 = (s32) 0x84020000U;
    a0 = v0 | 0x8400; SD_call(a0);
    a0 = (*(volatile s32 *) (u32) (s1 + 8));
    a1 = 1; v0 = func_001EDC80(a0, a1);
    if (v0 == 0) { a0 = 0; goto L_00900864; }
    a0 = v0;
    a1 = 255; func_001EEDA0(a0, a1);
    a0 = 0;
L_00900864:;
    a1 = 128; v0 = func_001F87E0(a0, a1);
    v0 = 1;
    (*(volatile u32 *) (u32) (s1 + 16)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) s1) = (u32) v0; goto L_00900990;
L_00900884:;
    v0 = (s32) ((u32) v0 + 0x1U);
    at = v0 < 1801;
    { s32 c_ = at != 0; (*(volatile u32 *) (u32) (s1 + 12)) = (u32) v0; if (c_) goto L_00900990; }
    a0 = (*(volatile s32 *) (u32) (s1 + 8));
    a1 = 1; v0 = func_001EDC80(a0, a1);
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) s1); goto L_009008B8; }
    a0 = v0;
    a1 = 0; func_001EEDA0(a0, a1);
    v0 = (*(volatile s32 *) (u32) s1);
L_009008B8:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) s1) = (u32) v0; goto L_00900990;
L_009008C4:;
    v0 = (*(volatile s32 *) (u32) (s1 + 16));
    if (v0 == 0) { v0 = (s32) ((u32) a0 + 0x1U); goto L_009008F0; }
    v0 = func_00900A40(a0, a1, a2, a3, f12.f);
    if (v0 == 0) goto L_00900990;
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) s1) = (u32) v0; goto L_00900990;
L_009008F0:;
    (*(volatile u32 *) (u32) s1) = (u32) v0; goto L_00900990;
L_009008F8:;
    v0 = (*(volatile s32 *) (u32) (s1 + 16));
    if (v0 == 0) { a0 = 1; goto L_00900940; }
    a0 = 0; v0 = func_001BE5B0(a0);
    v1 = 1;
    if (v0 != v1) goto L_00900990;
    a0 = (*(volatile s32 *) (u32) (s1 + 8));
    if (a0 == 0) { v0 = (*(volatile s32 *) (u32) s1); goto L_00900934; }
    func_001EDD90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s1 + 8)) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) s1);
L_00900934:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) s1) = (u32) v0; goto L_00900990;
L_00900940:;
    a1 = 32; v0 = func_001F87E0(a0, a1);
    v1 = 1;
    if (v0 != v1) goto L_00900990;
    a0 = (*(volatile s32 *) (u32) (s1 + 8));
    if (a0 == 0) { v0 = (*(volatile s32 *) (u32) s1); goto L_00900970; }
    func_001EDD90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s1 + 8)) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) s1);
L_00900970:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) s1) = (u32) v0; goto L_00900990;
L_0090097C:;
    a0 = 1; v0 = func_0026DA40(a0);
    if (v0 != 0) goto L_00900990;
    fp = 1;
L_00900990:;
    v0 = fp;
L_00900994:;
    return v0;
}
