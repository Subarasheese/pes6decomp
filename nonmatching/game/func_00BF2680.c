/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001CD9E0(void);
s64 func_00288670(s64, s64);
s64 func_009B30B0(s64, s64);
s64 func_009B3350(s64, s64, s64);
void func_00AD1520(s64);
void func_00ADE160(s64, s64, s64);
s64 func_00BBB780(s64);
s64 func_00BBB8C0(s64);

void func_00BF2680(s64 a0, s64 a1, s64 a2, f32 fa12) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    s2 = a0;
    s1 = a1;
    v1 = (*(volatile s16 *) (u32) (a0 + 20));
    f1.i = (s32) v1;
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    f1.f = (f32) f1.i;
    f0.f = f0.f * f1.f;
    f0.i = (s32) f0.f;
    a1 = f0.i;
    a2 = 0; v0 = func_009B3350(a0, a1, a2);
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_00BF26E0; }
    f0.i = (s32) v0;
    f12.f = (f32) f0.i; goto L_00BF26F8;
L_00BF26E0:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f12.f = (f32) f0.i;
    f12.f = f12.f + f12.f;
L_00BF26F8:;
    v0 = func_001CD9E0();
    a2 = (*(volatile u8 *) (u32) (s2 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s2 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 50;
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 124));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v1 = (*(volatile u8 *) (u32) (s2 + 36));
    { s32 c_ = v1 == 0; v0 = v0 & 0xff; if (c_) goto L_00BF288C; }
    v1 = (*(volatile s32 *) (u32) (s2 + 144));
    at = (u64) v1 < (u64) (s64) 9;
    { s32 c_ = at == 0; s0 = (s64) ((u64) 0 + (u64) (s64) 255); if (c_) goto L_00BF2800; }
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0x2820U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xbf2788U) goto L_00BF2788; if (t_ == 0xbf27a4U) goto L_00BF27A4; if (t_ == 0xbf2800U) goto L_00BF2800; if (t_ == 0xbf2818U) goto L_00BF2818; }
L_00BF2788:;
    v0 = (s32) 0xcc0000U;
    v1 = 2;
    v0 = (*(volatile u8 *) (u32) (v0 + -16830));
    if (v0 != v1) { s0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00BF281C; }
    s0 = v1 & 0xff; goto L_00BF281C;
L_00BF27A4:;
    a2 = (*(volatile u8 *) (u32) (s2 + 18));
    a1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (s2 + 17));
    a1 = (s32) ((u32) a1 + 0x2980U);
    v1 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) a0 << 4);
    a0 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 - (u32) a0);
    a0 = (s32) ((u32) a2 << 8);
    v1 = (s32) ((u32) v1 << 3);
    a0 = (s32) ((u32) a1 + (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (v1 + 168));
    v1 = v1 & 0x7f;
    v1 = v1 < 80;
    if (v1 != 0) { v0 = v0 & 0xff; goto L_00BF296C; }
L_00BF27F8:;
    s0 = (s64) ((u64) 0 + (u64) (s64) 2); goto L_00BF281C;
L_00BF2800:;
    a0 = v0 & 0xff;
    v0 = a0 < 75;
    if (v0 != 0) goto L_00BF299C;
L_00BF2810:;
    s0 = (s64) ((u64) 0 + (u64) (s64) 2); goto L_00BF281C;
L_00BF2818:;
    s0 = (s64) ((u64) 0 + (u64) (s64) 2);
L_00BF281C:;
    v1 = s0 & 0xff;
    v0 = 2;
    if (v1 == v0) { v0 = (*(volatile s32 *) (u32) (s2 + 4)); goto L_00BF2868; }
    v0 = 1;
    if (v1 == v0) { v0 = (*(volatile s32 *) (u32) (s2 + 4)); goto L_00BF2840; }
    v0 = (*(volatile s32 *) (u32) (s2 + 176)); goto L_00BF2890;
L_00BF2840:;
    v0 = (*(volatile u8 *) (u32) (v0 + 45));
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (s2 + 176)); goto L_00BF285C; }
    v0 = (*(volatile s32 *) (u32) (s2 + 176));
    v0 = v0 | 0x80;
    (*(volatile u32 *) (u32) (s2 + 176)) = (u32) v0; goto L_00BF288C;
L_00BF285C:;
    v0 = v0 | 0x20;
    (*(volatile u32 *) (u32) (s2 + 176)) = (u32) v0; goto L_00BF288C;
L_00BF2868:;
    v0 = (*(volatile u8 *) (u32) (v0 + 45));
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (s2 + 176)); goto L_00BF2884; }
    v0 = (*(volatile s32 *) (u32) (s2 + 176));
    v0 = v0 | 0x20;
    (*(volatile u32 *) (u32) (s2 + 176)) = (u32) v0; goto L_00BF288C;
L_00BF2884:;
    v0 = v0 | 0x80;
    (*(volatile u32 *) (u32) (s2 + 176)) = (u32) v0;
L_00BF288C:;
    v0 = (*(volatile s32 *) (u32) (s2 + 176));
L_00BF2890:;
    v0 = v0 & 0x20;
    { s32 c_ = v0 != 0; s0 = 0; if (c_) goto L_00BF29B8; }
    v0 = (*(volatile u8 *) (u32) (s2 + 257));
    if (v0 == 0) goto L_00BF28C4;
    a1 = (*(volatile u16 *) (u32) (s2 + 254));
    a0 = 0; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    v0 = v0 < 32;
    if (v0 != 0) goto L_00BF29B8;
L_00BF28C4:;
    v0 = (*(volatile s32 *) (u32) (s2 + 176));
    v0 = v0 & 0x80;
    if (v0 != 0) goto L_00BF29C0;
    v0 = (*(volatile u8 *) (u32) (s2 + 257));
    if (v0 == 0) goto L_00BF28FC;
    a1 = (*(volatile u16 *) (u32) (s2 + 254));
    a0 = 0x8000; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    v0 = v0 < 32;
    if (v0 != 0) goto L_00BF29C0;
L_00BF28FC:;
    v0 = s0 & 0xff;
    if (v0 == 0) { a0 = s2; goto L_00BF29C8; }
    v1 = 1;
    if (v0 != v1) { v0 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_00BF2920; }
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile u8 *) (u32) (v0 + 108)) = (u8) 0; goto L_00BF2924;
L_00BF2920:;
    (*(volatile u8 *) (u32) (v0 + 108)) = (u8) v1;
L_00BF2924:;
    v1 = (*(volatile s32 *) (u32) (s2 + 144));
    v0 = 2;
    if (v1 == v0) goto L_00BF29DC;
    v1 = (*(volatile s32 *) (u32) (s2 + 4));
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (*(volatile u8 *) (u32) (v1 + 45));
    v0 = (*(volatile u8 *) (u32) (v0 + 108));
    if (v1 != v0) goto L_00BF29DC;
    a0 = 48; v0 = func_00BBB8C0(a0);
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    a0 = 160;
    a0 = (s32) ((u32) a0 - (u32) v0);
    (*(volatile u16 *) (u32) (v1 + 106)) = (u16) a0;
L_00BF2964:;
    goto L_00BF29F0;
L_00BF296C:;
    v0 = (s32) ((u32) v0 + 0x14U);
    a0 = (s64) ((u64) v0 << 48);
    a0 = a0 >> 48; v0 = func_00BBB780(a0);
    if (v0 != 0) goto L_00BF27F8;
    a0 = 3; v0 = func_00BBB8C0(a0);
    if (v0 != 0) goto L_00BF281C;
    goto L_00BF27F8;
L_00BF299C:;
    v0 = func_00BBB8C0(a0);
    v0 = v0 < 35;
    if (v0 != 0) goto L_00BF281C;
    goto L_00BF2810;
L_00BF29B8:;
    s0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00BF28C4;
L_00BF29C0:;
    s0 = (s64) ((u64) 0 + (u64) (s64) 2); goto L_00BF28FC;
L_00BF29C8:;
    a1 = s1;
    a2 = 0; func_00ADE160(a0, a1, a2);
    goto L_00BF29EC;
L_00BF29DC:;
    a0 = s2; func_00AD1520(a0);
    goto L_00BF2964;
L_00BF29EC:;
L_00BF29F0:;
    return;
}
