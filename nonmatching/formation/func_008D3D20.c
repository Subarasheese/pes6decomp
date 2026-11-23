/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001D79A0(s64, s64);
s64 func_001D7A20(s64, s64, s64);
void func_001D7F10(s64, s64, s64, s64);
void func_001F1EA0(s64, s64, s64, s64);
void func_002DF960(s64, s64, s64, s64, s64, s64, s64, s64);
s64 func_008B9B70(s64, s64, s64, s64);
s64 func_008B9F90(s64, s64, s64, s64, f32);
s64 func_008BA000(s64, s64, s64, s64, f32);
s64 func_008C1490(s64, s64, s64, s64, f32);
void func_008C59E0(s64, s64);
void func_008C5D70(s64, s64, s64, s64);
void func_008C5DF0(s64, s64, s64, s64, f32, f32);
void func_008D3040(s64, s64, s64, s64);
void memset(s64, s64, s64);

void func_008D3D20(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12, f32 fa13) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    u64 qh_v0 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 frame[20];
    s64 sp = (s32) (u32) frame;

    s3 = a0;
    s2 = a1;
    s1 = a2;
    a1 = (*(volatile u8 *) (u32) (gp + -31308));
    v1 = (*(volatile u8 *) (u32) (gp + -31307));
    (*(volatile u8 *) (u32) (sp + 156)) = (u8) a1;
    { s32 c_ = s3 == 0; (*(volatile u8 *) (u32) (sp + 157)) = (u8) v1; if (c_) goto L_008D3F08; }
    if (s3 == 0) { s0 = s1 & 0x3; goto L_008D3DB0; }
    func_008D3040(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s3 + 180)); func_002DF960(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (s3 + 16)); func_001F1EA0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s3 + 0xb8U); func_008C5D70(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s3 + 72)); func_001D7F10(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s3 + 76)); func_001D7F10(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s3 + 84)); func_001D7F10(a0, a1, a2, a3);
    a0 = s3;
    a1 = 0;
    a2 = 216; memset(a0, a1, a2);
    s0 = s1 & 0x3;
L_008D3DB0:;
    if (s1 >= 0) { { u32 a_ = (u32) (s2 + 0) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); } goto L_008D3DC8; }
    if (s0 == 0) goto L_008D3DC4;
    s0 = (s32) ((u32) s0 + 0xfffffffcU);
L_008D3DC4:;
    { u32 a_ = (u32) (s2 + 0) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
L_008D3DC8:;
    a3 = (s32) ((u32) sp + 0x60U);
    a0 = (s32) ((u32) s3 + 0xb8U);
    a1 = 1;
    a2 = s0;
    { u32 a_ = (u32) (sp + 96) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } func_008C5DF0(a0, a1, a2, a3, f12.f, f13.f);
    a0 = (s32) ((u32) s3 + 0xb8U);
    a1 = (s32) ((u32) sp + 0x9cU); func_008C59E0(a0, a1);
    a0 = 3;
    a1 = (s32) ((u32) sp + 0x60U); v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    (*(volatile u32 *) (u32) (s3 + 72)) = (u32) v0;
    a0 = v0;
    a1 = (s32) ((u32) sp + 0x80U);
    a2 = 20; v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s3 + 72));
    a1 = (s32) ((u32) sp + 0x70U);
    a2 = 21; v0 = func_001D7A20(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 116));
    f0.f = (*(volatile f32 *) (u32) (sp + 132));
    f0.f = f1.f - f0.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_008D3E3C; }
L_008D3E3C:;
    (*(volatile u8 *) (u32) (s3 + 13)) = (u8) v0;
    a0 = 12;
    a1 = (s32) ((u32) sp + 0x60U);
    (*(volatile u32 *) (u32) (sp + 96)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 100)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 112)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 116)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 120)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 124)) = (u32) 0; v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    (*(volatile u32 *) (u32) (s3 + 84)) = (u32) v0;
    a0 = v0;
    a1 = 85; f0.f = func_001D79A0(a0, a1);
    f20.i = f0.i;
    a0 = (s32) ((u32) sp + 0x70U);
    f12.i = f0.i; v0 = func_008BA000(a0, a1, a2, a3, f12.f);
    s1 = v0;
    v0 = s0 & 0x1;
    { s32 c_ = s0 >= 0; (*(volatile u32 *) (u32) (s3 + 16)) = (u32) s1; if (c_) goto L_008D3EA0; }
    if (v0 == 0) { (*(volatile u8 *) (u32) s3) = (u8) v0; goto L_008D3EA4; }
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_008D3EA0:;
    (*(volatile u8 *) (u32) s3) = (u8) v0;
L_008D3EA4:;
    a0 = s1;
    f12.i = f20.i;
    a1 = (s32) ((u32) sp + 0x80U); v0 = func_008B9F90(a0, a1, a2, a3, f12.f);
    a0 = s1;
    (*(volatile u32 *) (u32) (s3 + 20)) = (u32) v0;
    f12.i = f20.i;
    a1 = 0; v0 = func_008B9F90(a0, a1, a2, a3, f12.f);
    (*(volatile u32 *) (u32) (s3 + 24)) = (u32) v0;
    a1 = (s32) ((u32) sp + 0x80U);
    a0 = (*(volatile s32 *) (u32) (s3 + 84));
    a2 = 85; v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s3 + 20));
    a1 = (s32) ((u32) sp + 0x80U);
    a2 = 0; v0 = func_008B9B70(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s3 + 180)) = (u32) v0;
    a1 = (s32) ((u32) sp + 0x60U);
    { u32 a_ = (u32) (s2 + 0) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = 10;
    { u32 a_ = (u32) (sp + 96) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    (*(volatile u32 *) (u32) (s3 + 76)) = (u32) v0;
L_008D3F08:;
    return;
}
