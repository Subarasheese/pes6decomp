/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00255E70(s64);
s64 func_002D4C40(s64, s64, s64, s64, s64, s64, s64);
s64 func_00305E60(s64, s64);
s64 func_00992DF0(s64, s64, s64, s64);
s64 func_009E1C90(s64, s64, s64, s64);

s64 func_002FF6D0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f12 = { 0 };
    union { f32 f; s32 i; } f13 = { 0 };
    s32 fcc = 0;

    v0 = (s32) 0x590000U;
    v0 = (*(volatile s8 *) (u32) (v0 + 7605));
    { s32 c_ = v0 == 0; s3 = a0; if (c_) goto L_002FF700; }
    v0 = 0; goto L_002FF87C;
L_002FF700:;
    s1 = (*(volatile s32 *) (u32) (s3 + 24));
    v0 = (*(volatile s32 *) (u32) (s1 + 28));
    { s32 c_ = v0 == 0; s2 = 0; if (c_) goto L_002FF71C; }
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u32 *) (u32) (s1 + 28)) = (u32) v0; goto L_002FF748;
L_002FF71C:;
    v1 = (*(volatile s32 *) (u32) (s1 + 36));
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x4fd0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002D4C40(a0, a1, a2, a3, a4, a5, a6);
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    v0 = (s32) ((u32) v0 << 1);
    (*(volatile u32 *) (u32) (s1 + 28)) = (u32) v0;
L_002FF748:;
    a0 = (*(volatile s32 *) (u32) (gp + -31080));
    v0 = 1;
    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    if (v1 != v0) { v0 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_002FF7B4; }
    v1 = (*(volatile u8 *) (u32) (a0 + 37));
    v0 = 7;
    if (v1 != v0) goto L_002FF7B0;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 24380));
    v0 = (*(volatile s32 *) (u32) (v0 + 7620));
    if (v1 != v0) goto L_002FF7B0;
    a1 = (s32) 0x300000U;
    a0 = s3;
    a1 = (s32) ((u32) a1 + 0xfffff620U); v0 = func_00305E60(a0, a1);
    v1 = (s32) 0x590000U;
    v0 = 1;
    a0 = (*(volatile u8 *) (u32) (v1 + 7140));
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) (s1 + 28)) = (u32) v1; goto L_002FF87C;
L_002FF7B0:;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
L_002FF7B4:;
    f0.i = (s32) 0;
    f1.f = (*(volatile f32 *) (u32) (v0 + 16));
    fcc = f1.f < f0.f;
    { s32 c_ = fcc; s0 = 1; if (c_) goto L_002FF7CC; }
    s0 = 0;
L_002FF7CC:;
    a0 = 1; v0 = func_009E1C90(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 1;
    if (v1 == v0) goto L_002FF7EC;
    v1 = 255; goto L_002FF850;
L_002FF7EC:;
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 24360));
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_002FF804; }
    v1 = 255; goto L_002FF850;
L_002FF804:;
    f12.f = (*(volatile f32 *) (u32) (v0 + 16));
    f13.f = (*(volatile f32 *) (u32) (v0 + 24));
    a0 = s0 & 0xff; v0 = func_00992DF0(a0, a1, a2, a3);
    if (v0 == 0) { v1 = 255; goto L_002FF850; }
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7629));
    { s32 c_ = v1 >= 0; v0 = v1 & 0x1; if (c_) goto L_002FF838; }
    if (v0 == 0) { v0 = s0 ^ v0; goto L_002FF83C; }
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_002FF838:;
    v0 = s0 ^ v0;
L_002FF83C:;
    a0 = v0 & 0xff; v0 = func_00255E70(a0);
    if (v0 == 0) { v1 = 1; goto L_002FF850; }
    v1 = 0;
L_002FF850:;
    v0 = (*(volatile s32 *) (u32) (s1 + 36));
    if (v0 == v1) goto L_002FF860;
    s2 = (s64) ((u64) 0 + (u64) (s64) 1);
L_002FF860:;
    if (s2 == 0) { v0 = 0; goto L_002FF87C; }
    a1 = (s32) 0x300000U;
    a0 = s3;
    a1 = (s32) ((u32) a1 + 0xfffff8a0U); v0 = func_00305E60(a0, a1);
    v0 = 1;
L_002FF87C:;
    return v0;
}
