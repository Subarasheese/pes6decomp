/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001A54F0(s64);
void func_001A55C0(s64);
s64 func_009B34C0(s64, s64, s64, s64, f32, f32, f32, f32);

void func_0099E7D0(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s64 frame[14];
    s64 sp = (s32) (u32) frame;

    s3 = a0;
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0x2800U);
    s0 = a1;
    a1 = 0;
    v1 = 255;
L_0099E800:;
    v0 = (*(volatile u8 *) (u32) (a0 + 16));
    if (v0 == v1) { a1 = (s32) ((u32) a1 + 0x1U); goto L_0099E82C; }
    v1 = (s32) ((u32) a1 << 2);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = (s32) ((u32) v0 + 0x2810U);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s1 = (*(volatile u8 *) (u32) v0); goto L_0099E838;
L_0099E82C:;
    v0 = a1 < 8;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x28U); if (c_) goto L_0099E800; }
L_0099E838:;
    a0 = (s32) ((u32) sp + 0x60U); func_001A55C0(a0);
    a0 = (s32) ((u32) sp + 0x50U); func_001A54F0(a0);
    v0 = (*(volatile s32 *) (u32) (s3 + 176));
    v0 = v0 & 0xf0;
    a1 = v0 & 0xffff;
    if (a1 != 0) goto L_0099E8A0;
    a0 = (*(volatile u8 *) (u32) (s3 + 71));
    v0 = a0 < 8;
    if (v0 != 0) { v1 = (s32) ((u32) a0 << 3); goto L_0099E874; }
    v0 = 0; goto L_0099E88C;
L_0099E874:;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0x1972U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
L_0099E88C:;
    if (v0 != 0) goto L_0099E8A0;
    v0 = s0 & 0xff;
    v0 = v0 & 0xf0;
    a1 = v0 & 0xffff;
L_0099E8A0:;
    s0 = a1 & 0xffff;
    a0 = s0 & 0x10;
    { s32 c_ = a0 == 0; s2 = 0; if (c_) goto L_0099E8C4; }
    v0 = s0 & 0x80;
    if (v0 == 0) goto L_0099E8C4;
    s2 = (s64) ((u64) 0 + (u64) (s64) 8192); goto L_0099E93C;
L_0099E8C4:;
    v1 = s0 & 0x40;
    if (v1 != 0) { v0 = s0 & 0x80; goto L_0099E9D4; }
L_0099E8D0:;
    if (v1 == 0) goto L_0099E8F0;
    v0 = s0 & 0x20;
    if (v0 == 0) goto L_0099E8F0;
    v0 = 0xa000;
    s2 = v0 & 0xffff; goto L_0099E93C;
L_0099E8F0:;
    if (a0 != 0) { v0 = s0 & 0x20; goto L_0099E9E4; }
L_0099E8F8:;
    if (a0 == 0) { v0 = s0 & 0x80; goto L_0099E908; }
    s2 = 0; goto L_0099E93C;
L_0099E908:;
    if (v0 == 0) goto L_0099E918;
    s2 = (s64) ((u64) 0 + (u64) (s64) 16384); goto L_0099E93C;
L_0099E918:;
    if (v1 == 0) { v0 = s0 & 0x20; goto L_0099E92C; }
    v0 = 0x8000;
    s2 = v0 & 0xffff; goto L_0099E93C;
L_0099E92C:;
    if (v0 == 0) goto L_0099E93C;
    v0 = 0xc000;
    s2 = v0 & 0xffff;
L_0099E93C:;
    v0 = (s32) 0x590000U;
    v1 = s1 & 0xff;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (v0 != v1) { f12.f = (*(volatile f32 *) (u32) (sp + 96)); goto L_0099E9F8; }
    v1 = (*(volatile u16 *) (u32) (s3 + 38));
    v0 = s2 & 0xffff;
    v0 = (s32) ((u32) v1 + (u32) v0);
    v1 = v0 & 0xffff;
    v0 = v1 & 0x1f00;
    v0 = v0 < 4096;
    if (v0 != 0) goto L_0099EA90;
    v0 = (s32) ((u32) v1 + 0x2000U);
    v1 = v0 & 0xffff; goto L_0099EA90;
L_0099E97C:;
    a0 = v1 & 0x70;
    v0 = (s32) 0x590000U;
    v1 = v1 & 0x80;
    a0 = (s32) ((u32) a0 << 1);
    v1 = (s32) v1 >> 3;
    v1 = a0 | v1;
    (*(volatile u32 *) (u32) (v0 + 7804)) = (u32) v1; goto L_0099E9A4;
L_0099E99C:;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + 7804)) = (u32) 0;
L_0099E9A4:;
    f13.f = (*(volatile f32 *) (u32) (sp + 104));
    f14.f = (*(volatile f32 *) (u32) (sp + 80));
    f15.f = (*(volatile f32 *) (u32) (sp + 88));
    f12.f = (*(volatile f32 *) (u32) (sp + 96)); v0 = func_009B34C0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    v1 = (*(volatile u16 *) (u32) (s3 + 252));
    a0 = v0 & 0xffff;
    a0 = (s32) ((u32) a0 + 0xffffc000U);
    a0 = a0 & 0xffff;
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u16 *) (u32) (s3 + 252)) = (u16) v1; goto L_0099EAC0;
L_0099E9D4:;
    if (v0 == 0) goto L_0099E8D0;
    s2 = (s64) ((u64) 0 + (u64) (s64) 24576); goto L_0099E93C;
L_0099E9E4:;
    if (v0 == 0) goto L_0099E8F8;
    v0 = 0xe000;
    s2 = v0 & 0xffff; goto L_0099E93C;
L_0099E9F8:;
    f14.f = (*(volatile f32 *) (u32) (sp + 80));
    f15.f = (*(volatile f32 *) (u32) (sp + 88));
    f13.f = (*(volatile f32 *) (u32) (sp + 104)); v0 = func_009B34C0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    v1 = v0 & 0xffff;
    v0 = s2 & 0xffff;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = v0 & 0xffff;
    v0 = v1 & 0x1f00;
    v0 = v0 < 4096;
    if (v0 != 0) goto L_0099EA60;
    v0 = (s32) ((u32) v1 + 0x2000U);
    v1 = v0 & 0xffff; goto L_0099EA60;
L_0099EA34:;
    a0 = v1 & 0x70;
    v0 = (s32) 0x590000U;
    v1 = v1 & 0x80;
    a0 = (s32) ((u32) a0 << 1);
    v1 = (s32) v1 >> 3;
    v1 = a0 | v1;
    (*(volatile u32 *) (u32) (v0 + 7804)) = (u32) v1; goto L_0099E9A4;
L_0099EA54:;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + 7804)) = (u32) 0; goto L_0099E9A4;
L_0099EA60:;
    v1 = v1 & 0xffff;
    v0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0x4000U);
    v0 = (s32) ((u32) v0 + 0xffffa2e0U);
    v1 = v1 & 0xffff;
    v1 = (s32) v1 >> 13;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    { s32 c_ = s0 == 0; v0 = (*(volatile u16 *) (u32) v0); if (c_) goto L_0099EA54; }
    v1 = v0 & 0xffff; goto L_0099EA34;
L_0099EA90:;
    v1 = v1 & 0xffff;
    v0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0x4000U);
    v0 = (s32) ((u32) v0 + 0xffffa2e0U);
    v1 = v1 & 0xffff;
    v1 = (s32) v1 >> 13;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    { s32 c_ = s0 == 0; v0 = (*(volatile u16 *) (u32) v0); if (c_) goto L_0099E99C; }
    v1 = v0 & 0xffff; goto L_0099E97C;
L_0099EAC0:;
    return;
}
