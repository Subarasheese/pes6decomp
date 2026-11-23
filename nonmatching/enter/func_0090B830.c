/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Random_Below(s64);
s64 func_00907F90(s64);
s64 func_00907FC0(s64);
s64 func_00907FF0(s64);
s64 func_0090A100(s64);
s64 func_009177C0(s64);

s64 func_0090B830(s64 a0) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 hi = 0, lo = 0;

    a0 = (s64) ((u64) a0 << 56);
    a0 = a0 >> 56;
    s2 = 0;
    { s32 c_ = a0 <= 0; s1 = 0; if (c_) goto L_0090B86C; }
    v0 = (s32) 0x930000U;
    s0 = (s32) 0x930000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -3674));
    s0 = (s32) ((u32) s0 + 0xfffff1acU); goto L_0090B87C;
L_0090B86C:;
    v0 = (s32) 0x930000U;
    s0 = (s32) 0x930000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -3676));
    s0 = (s32) ((u32) s0 + 0xfffff1a8U);
L_0090B87C:;
    v0 = v0 & 0xff;
    at = (u64) v0 < (u64) (s64) 19;
    if (at == 0) { v0 = s2; goto L_0090BD60; }
    v1 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffda50U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x90b8a8U) goto L_0090B8A8; if (t_ == 0x90b8b4U) goto L_0090B8B4; if (t_ == 0x90b8d4U) goto L_0090B8D4; if (t_ == 0x90b8e0U) goto L_0090B8E0; if (t_ == 0x90b8ecU) goto L_0090B8EC; if (t_ == 0x90b8f8U) goto L_0090B8F8; if (t_ == 0x90b9e0U) goto L_0090B9E0; if (t_ == 0x90b9ecU) goto L_0090B9EC; if (t_ == 0x90b9f8U) goto L_0090B9F8; if (t_ == 0x90ba04U) goto L_0090BA04; if (t_ == 0x90ba10U) goto L_0090BA10; if (t_ == 0x90ba1cU) goto L_0090BA1C; if (t_ == 0x90ba28U) goto L_0090BA28; if (t_ == 0x90baf8U) goto L_0090BAF8; if (t_ == 0x90bd3cU) goto L_0090BD3C; if (t_ == 0x90bd48U) goto L_0090BD48; if (t_ == 0x90bd54U) goto L_0090BD54; if (t_ == 0x90bd5cU) goto L_0090BD5C; }
L_0090B8A8:;
    v0 = (s32) 0x10000U;
    s2 = v0 | 0xf1; goto L_0090BD5C;
L_0090B8B4:;
    v0 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) goto L_0090BD5C;
    v0 = (s32) 0x10000U;
    s2 = v0 | 0xee; goto L_0090BD5C;
L_0090B8D4:;
    v0 = (s32) 0x10000U;
    s2 = v0 | 0xfe; goto L_0090BD5C;
L_0090B8E0:;
    v0 = (s32) 0x10000U;
    s2 = v0 | 0xfe; goto L_0090BD5C;
L_0090B8EC:;
    v0 = (s32) 0x10000U;
    s2 = v0 | 0xfe; goto L_0090BD5C;
L_0090B8F8:;
    a0 = (*(volatile u8 *) (u32) s0);
    v1 = 1;
    if (a0 != v1) { v0 = 2; goto L_0090B910; }
    s1 = 0; goto L_0090B91C;
L_0090B910:;
    if (a0 != v0) { a0 = s1 & 0xff; goto L_0090B920; }
    s1 = v1 & 0xff;
L_0090B91C:;
    a0 = s1 & 0xff;
L_0090B920:;
    v0 = func_0090A100(a0);
    s0 = v0 & 0xffff;
    a0 = s0; v0 = func_00907FF0(a0);
    if (v0 == 0) { a0 = s0; goto L_0090B980; }
    v0 = s1 & 0xff;
    a0 = v0 ^ 0x1; v0 = func_0090A100(a0);
    a0 = v0 & 0xffff; v0 = func_00907F90(a0);
    if (v0 == 0) goto L_0090B960;
    v0 = 7; goto L_0090B9A0;
L_0090B960:;
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) s0 << 1);
    v0 = (s32) ((u32) v0 + 0xffffd210U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u16 *) (u32) v0);
    v0 = v0 & 0xf000;
    v0 = (s32) v0 >> 12; goto L_0090B9A0;
L_0090B980:;
    v0 = func_00907FC0(a0);
    if (v0 == 0) { v0 = 7; goto L_0090B9A0; }
    v0 = (s32) 0x930000U;
    v0 = (*(volatile u16 *) (u32) (v0 + -11728));
    v0 = v0 & 0xf000;
    v0 = (s32) v0 >> 12;
L_0090B9A0:;
    at = (u64) v0 < (u64) (s64) 8;
    if (at == 0) goto L_0090BD5C;
    v1 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffda30U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x90b8a8U) goto L_0090B8A8; if (t_ == 0x90b8b4U) goto L_0090B8B4; if (t_ == 0x90b8d4U) goto L_0090B8D4; if (t_ == 0x90b8e0U) goto L_0090B8E0; if (t_ == 0x90b8ecU) goto L_0090B8EC; if (t_ == 0x90b8f8U) goto L_0090B8F8; if (t_ == 0x90b9c8U) goto L_0090B9C8; if (t_ == 0x90b9d4U) goto L_0090B9D4; if (t_ == 0x90b9e0U) goto L_0090B9E0; if (t_ == 0x90b9ecU) goto L_0090B9EC; if (t_ == 0x90b9f8U) goto L_0090B9F8; if (t_ == 0x90ba04U) goto L_0090BA04; if (t_ == 0x90ba10U) goto L_0090BA10; if (t_ == 0x90ba1cU) goto L_0090BA1C; if (t_ == 0x90ba28U) goto L_0090BA28; if (t_ == 0x90baf8U) goto L_0090BAF8; if (t_ == 0x90bd3cU) goto L_0090BD3C; if (t_ == 0x90bd48U) goto L_0090BD48; if (t_ == 0x90bd54U) goto L_0090BD54; if (t_ == 0x90bd5cU) goto L_0090BD5C; }
L_0090B9C8:;
    v0 = (s32) 0x10000U;
    s2 = v0 | 0xe3; goto L_0090BD5C;
L_0090B9D4:;
    v0 = (s32) 0x10000U;
    s2 = v0 | 0xeb; goto L_0090BD5C;
L_0090B9E0:;
    v0 = (s32) 0x10000U;
    s2 = v0 | 0xed; goto L_0090BD5C;
L_0090B9EC:;
    v0 = (s32) 0x10000U;
    s2 = v0 | 0xe5; goto L_0090BD5C;
L_0090B9F8:;
    v0 = (s32) 0x10000U;
    s2 = v0 | 0xe7; goto L_0090BD5C;
L_0090BA04:;
    v0 = (s32) 0x10000U;
    s2 = v0 | 0xee; goto L_0090BD5C;
L_0090BA10:;
    v0 = (s32) 0x10000U;
    s2 = v0 | 0xea; goto L_0090BD5C;
L_0090BA1C:;
    v0 = (s32) 0x10000U;
    s2 = v0 | 0xe9; goto L_0090BD5C;
L_0090BA28:;
    v0 = (*(volatile u8 *) (u32) (s0 + 2));
    if (v0 != 0) { a0 = (*(volatile u8 *) (u32) (s0 + 2)); goto L_0090BAB0; }
    if (a0 != 0) { a0 = 1000; goto L_0090BA8C; }
    v0 = (s32) 0x930000U;
    v1 = (s32) 0x10000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -4072));
    v0 = v1 | 0xf5;
    if (a0 == v0) { v0 = 3; goto L_0090BA84; }
    v0 = v1 | 0xf4;
    if (a0 == v0) { v0 = 2; goto L_0090BA7C; }
    v0 = v1 | 0xf3;
    if (a0 == v0) { v0 = 1; goto L_0090BA74; }
    goto L_0090BAAC;
L_0090BA74:;
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) v0; goto L_0090BAAC;
L_0090BA7C:;
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) v0; goto L_0090BAAC;
L_0090BA84:;
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) v0; goto L_0090BAAC;
L_0090BA8C:;
    v0 = Pes6Random_Below(a0);
    v1 = v0 & 0xffff;
    v0 = 3;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = hi;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) v0;
L_0090BAAC:;
    a0 = (*(volatile u8 *) (u32) (s0 + 2));
L_0090BAB0:;
    v0 = 3;
    if (a0 == v0) { v0 = (s32) 0x10000U; goto L_0090BAF0; }
    v1 = 2;
    if (a0 == v1) { v0 = (s32) 0x10000U; goto L_0090BAE8; }
    v0 = 1;
    if (a0 == v0) { v0 = (s32) 0x10000U; goto L_0090BADC; }
    goto L_0090BD5C;
L_0090BADC:;
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) v1;
    s2 = v0 | 0xf4; goto L_0090BD5C;
L_0090BAE8:;
    s2 = v0 | 0xf4; goto L_0090BD5C;
L_0090BAF0:;
    s2 = v0 | 0xf5; goto L_0090BD5C;
L_0090BAF8:;
    v0 = (*(volatile u8 *) (u32) (s0 + 2));
    v1 = v0 & 0xf0;
    if (v1 == 0) goto L_0090BB14;
    v0 = 64;
    if (v1 != v0) { v1 = (*(volatile u8 *) (u32) (s0 + 2)); goto L_0090BCD8; }
L_0090BB14:;
    if (a0 != 0) goto L_0090BB94;
    v0 = (s32) 0x930000U;
    v1 = (s32) 0x10000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -4072));
    v0 = v1 | 0xfc;
    if (a0 == v0) { v0 = 96; goto L_0090BB8C; }
    v0 = v1 | 0xf9;
    if (a0 == v0) { v0 = 80; goto L_0090BB84; }
    v0 = v1 | 0xf8;
    if (a0 == v0) { v0 = 48; goto L_0090BB7C; }
    v0 = v1 | 0xf7;
    if (a0 == v0) { v0 = 32; goto L_0090BB74; }
    v0 = v1 | 0xf6;
    if (a0 == v0) { v0 = 16; goto L_0090BB6C; }
    goto L_0090BCD4;
L_0090BB6C:;
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) v0; goto L_0090BCD4;
L_0090BB74:;
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) v0; goto L_0090BCD4;
L_0090BB7C:;
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) v0; goto L_0090BCD4;
L_0090BB84:;
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) v0; goto L_0090BCD4;
L_0090BB8C:;
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) v0; goto L_0090BCD4;
L_0090BB94:;
    v0 = (s32) 0x930000U;
    v1 = (s32) 0x930000U;
    a0 = (*(volatile u8 *) (u32) (v0 + -3844));
    v1 = (s32) ((u32) v1 + 0xfffff100U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) 0x930000U;
    v1 = (*(volatile u8 *) (u32) v1);
    v0 = (s32) ((u32) v0 + 0xfffff0b4U);
    v1 = v1 ^ 0x1a;
    v1 = (u64) 0 < (u64) v1;
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s8 *) (u32) v0); v0 = func_009177C0(a0);
    v1 = (*(volatile u8 *) (u32) v0);
    v0 = 1;
    if (v1 == v0) { v0 = (*(volatile u8 *) (u32) (s0 + 2)); goto L_0090BBEC; }
    v0 = 12;
    if (v1 != v0) { v0 = (*(volatile u8 *) (u32) (s0 + 2)); goto L_0090BBFC; }
    v0 = (*(volatile u8 *) (u32) (s0 + 2));
L_0090BBEC:;
    v0 = v0 & 0xf;
    v0 = v0 | 0x50;
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s0 + 2));
L_0090BBFC:;
    v0 = v0 & 0xf0;
    if (v0 != 0) { v1 = (*(volatile u8 *) (u32) (s0 + 2)); goto L_0090BC8C; }
    a0 = 256; v0 = Pes6Random_Below(a0);
    v1 = v0 & 0xffff;
    v0 = 5;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v1 = (*(volatile u8 *) (u32) (s0 + 2));
    a0 = hi;
    a0 = (s32) ((u32) a0 << 4);
    v0 = 64;
    a0 = (s32) ((u32) a0 + 0x10U);
    v1 = v1 & 0xf;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (s0 + 2));
    v1 = v1 & 0xf0;
    if (v1 != v0) goto L_0090BC88;
    a0 = 256; v0 = Pes6Random_Below(a0);
    v1 = v0 & 0xffff;
    { s32 c_ = v1 >= 0; v0 = v1 & 0x1; if (c_) goto L_0090BC70; }
    if (v0 == 0) { v1 = (s32) ((u32) v0 << 4); goto L_0090BC74; }
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_0090BC70:;
    v1 = (s32) ((u32) v0 << 4);
L_0090BC74:;
    v0 = (*(volatile u8 *) (u32) (s0 + 2));
    v1 = (s32) ((u32) v1 + 0x50U);
    v0 = v0 & 0xf;
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) v0;
L_0090BC88:;
    v1 = (*(volatile u8 *) (u32) (s0 + 2));
L_0090BC8C:;
    v0 = 64;
    v1 = v1 & 0xf0;
    if (v1 != v0) goto L_0090BCD4;
    a0 = 256; v0 = Pes6Random_Below(a0);
    v1 = v0 & 0xffff;
    { s32 c_ = v1 >= 0; v0 = v1 & 0x3; if (c_) goto L_0090BCBC; }
    if (v0 == 0) { v1 = (s32) ((u32) v0 << 4); goto L_0090BCC0; }
    v0 = (s32) ((u32) v0 + 0xfffffffcU);
L_0090BCBC:;
    v1 = (s32) ((u32) v0 << 4);
L_0090BCC0:;
    v0 = (*(volatile u8 *) (u32) (s0 + 2));
    v1 = (s32) ((u32) v1 + 0x10U);
    v0 = v0 & 0xf;
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) v0;
L_0090BCD4:;
    v1 = (*(volatile u8 *) (u32) (s0 + 2));
L_0090BCD8:;
    v0 = 96;
    v1 = v1 & 0xf0;
    if (v1 == v0) { v0 = (s32) 0x10000U; goto L_0090BD34; }
    v0 = 80;
    if (v1 == v0) { v0 = (s32) 0x10000U; goto L_0090BD2C; }
    v0 = 48;
    if (v1 == v0) { v0 = (s32) 0x10000U; goto L_0090BD24; }
    v0 = 32;
    if (v1 == v0) { v0 = (s32) 0x10000U; goto L_0090BD1C; }
    v0 = 16;
    v0 = (s32) 0x10000U;
    s2 = v0 | 0xf6; goto L_0090BD5C;
L_0090BD1C:;
    s2 = v0 | 0xf7; goto L_0090BD5C;
L_0090BD24:;
    s2 = v0 | 0xf8; goto L_0090BD5C;
L_0090BD2C:;
    s2 = v0 | 0xf9; goto L_0090BD5C;
L_0090BD34:;
    s2 = v0 | 0xfc; goto L_0090BD5C;
L_0090BD3C:;
    v0 = (s32) 0x10000U;
    s2 = v0 | 0xfa; goto L_0090BD5C;
L_0090BD48:;
    v0 = (s32) 0x10000U;
    s2 = v0 | 0xfb; goto L_0090BD5C;
L_0090BD54:;
    v0 = (s32) 0x10000U;
    s2 = v0 | 0xfd;
L_0090BD5C:;
    v0 = s2;
L_0090BD60:;
    return v0;
}
