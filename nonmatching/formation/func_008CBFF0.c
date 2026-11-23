/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);
void func_008C5230(s32, s32, s32, s32, f32);
void func_008C8E30(s32, s32, s32, s32);
void func_008C91C0(s32, s32, s32, s32);
s32 func_008C9AA0(s32);
void func_008C9AB0(s32, s32);
s32 func_008CB0C0(s32);
void func_008CC360(s32, s32, s32, s32, s32, s32, s32, s32, f32);
void func_008CC520(s32, s32, s32, s32, f32);
void func_008D1C10(s32, s32);
void func_008E7620(s32, s32, s32, s32, f32);
void func_008E7970(s32, s32, s32, s32, s32, s32, s32, s32, f32);
void func_008E7DC0(s32, s32, s32, s32, f32);
void func_008E7F00(s32, s32, s32, s32, s32, s32, s32, s32);
void func_008E7FF0(s32, s32, f32);

s32 func_008CBFF0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    a0 = (s32) ((u32) s2 + 0x6f0U);
    func_008E7F00(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s2 + 0x77cU); func_008C91C0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s2 + 0x78cU); func_008C8E30(a0, a1, a2, a3);
    a0 = (s32) ((u32) s2 + 0x480U);
    a1 = 0; func_008D1C10(a0, a1);
    a0 = s2; v0 = func_008C9AA0(a0);
    if (v0 != 0) { v1 = (*(volatile u8 *) (u32) (s2 + 22)); goto L_008CC044; }
    v0 = 0; goto L_008CC2FC;
L_008CC044:;
    v0 = 2;
    if (v1 == v0) { a0 = (s32) ((u32) s2 + 0x480U); goto L_008CC2D0; }
    v0 = 1;
    if (v1 == v0) { s1 = (*(volatile s32 *) (u32) (s2 + 1140)); goto L_008CC064; }
    v0 = 0; goto L_008CC2FC;
L_008CC064:;
    a0 = s2; v0 = func_008CB0C0(a0);
    v0 = (s32) ((u32) v0 + (u32) s1);
    a1 = (*(volatile u8 *) (u32) (v0 + 1));
    v0 = (*(volatile u8 *) (u32) (s1 + 842));
    { s32 c_ = v0 <= 0; a0 = 0; if (c_) goto L_008CC210; }
    v1 = s1;
L_008CC084:;
    v0 = (*(volatile u8 *) (u32) (v1 + 828));
    if (v0 != a1) { v0 = (*(volatile u8 *) (u32) (v1 + 829)); goto L_008CC144; }
    v0 = (s32) ((u32) a0 << 1);
    s0 = (*(volatile s32 *) (u32) (s2 + 1140));
    v0 = (s32) ((u32) v0 + (u32) s1);
    { s32 c_ = s0 == 0; s1 = (*(volatile u8 *) (u32) (v0 + 829)); if (c_) goto L_008CC13C; }
    a0 = (s32) ((u32) sp + 0x60U); func_008E7620(a0, a1, a2, a3, f12.f);
    f0.f = (*(volatile f32 *) (u32) (sp + 108));
    v0 = (s32) 0x40000000U;
    f1.i = (s32) v0;
    a0 = (s32) ((u32) sp + 0x70U);
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (sp + 108)) = f0.f;
    a2 = (*(volatile u8 *) (u32) (s2 + 1));
    a1 = 2; func_008C5230(a0, a1, a2, a3, f12.f);
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x60U); func_008C9AB0(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 96));
    a0 = (s32) ((u32) s2 + 0x6f0U);
    f0.f = (*(volatile f32 *) (u32) (sp + 100));
    a1 = (s32) ((u32) sp + 0x70U);
    (*(volatile f32 *) (u32) (sp + 112)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 116)) = f0.f; func_008E7FF0(a0, a1, f12.f);
    v0 = (s32) 0x3f0000U;
    a0 = v0 | 0x9; v0 = func_001F08B0(a0);
    a3 = (*(volatile u8 *) (u32) (s2 + 1));
    a2 = v0;
    a0 = (s32) ((u32) s2 + 0x6f0U);
    a1 = (s32) ((u32) sp + 0x70U); func_008E7DC0(a0, a1, a2, a3, f12.f);
    v0 = s1 & 0xff;
    a0 = (s32) ((u32) s2 + 0x6f0U);
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v1 = (s32) ((u32) v1 + (u32) s0);
    a3 = (*(volatile u8 *) (u32) (v0 + 208));
    a2 = (*(volatile s32 *) (u32) (v1 + 688));
    a1 = (s32) ((u32) sp + 0x70U); func_008E7970(a0, a1, a2, a3, a4, a5, a6, a7, f12.f);
L_008CC13C:;
    v0 = 0; goto L_008CC2FC;
L_008CC144:;
    if (v0 != a1) { v0 = (*(volatile u8 *) (u32) (s1 + 842)); goto L_008CC200; }
    v0 = (s32) ((u32) a0 << 1);
    s0 = (*(volatile s32 *) (u32) (s2 + 1140));
    v0 = (s32) ((u32) v0 + (u32) s1);
    { s32 c_ = s0 == 0; s1 = (*(volatile u8 *) (u32) (v0 + 828)); if (c_) goto L_008CC1F8; }
    a0 = (s32) ((u32) sp + 0x40U); func_008E7620(a0, a1, a2, a3, f12.f);
    f0.f = (*(volatile f32 *) (u32) (sp + 76));
    v0 = (s32) 0x40000000U;
    f1.i = (s32) v0;
    a0 = (s32) ((u32) sp + 0x50U);
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (sp + 76)) = f0.f;
    a2 = (*(volatile u8 *) (u32) (s2 + 1));
    a1 = 2; func_008C5230(a0, a1, a2, a3, f12.f);
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x40U); func_008C9AB0(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 64));
    a0 = (s32) ((u32) s2 + 0x6f0U);
    f0.f = (*(volatile f32 *) (u32) (sp + 68));
    a1 = (s32) ((u32) sp + 0x50U);
    (*(volatile f32 *) (u32) (sp + 80)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 84)) = f0.f; func_008E7FF0(a0, a1, f12.f);
    v0 = (s32) 0x3f0000U;
    a0 = v0 | 0x9; v0 = func_001F08B0(a0);
    a3 = (*(volatile u8 *) (u32) (s2 + 1));
    a2 = v0;
    a0 = (s32) ((u32) s2 + 0x6f0U);
    a1 = (s32) ((u32) sp + 0x50U); func_008E7DC0(a0, a1, a2, a3, f12.f);
    v0 = s1 & 0xff;
    a0 = (s32) ((u32) s2 + 0x6f0U);
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v1 = (s32) ((u32) v1 + (u32) s0);
    a3 = (*(volatile u8 *) (u32) (v0 + 208));
    a2 = (*(volatile s32 *) (u32) (v1 + 688));
    a1 = (s32) ((u32) sp + 0x50U); func_008E7970(a0, a1, a2, a3, a4, a5, a6, a7, f12.f);
L_008CC1F8:;
    v0 = 0; goto L_008CC2FC;
L_008CC200:;
    a0 = (s32) ((u32) a0 + 0x1U);
    v0 = a0 < v0;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x2U); if (c_) goto L_008CC084; }
L_008CC210:;
    v1 = (s32) ((u32) a1 + (u32) s1);
    v0 = (*(volatile u8 *) (u32) (v1 + 133));
    if (v0 == 0) { a0 = (s32) ((u32) a1 + (u32) s1); goto L_008CC234; }
    v1 = (*(volatile u8 *) (u32) (v1 + 304));
    v0 = 10;
    if (v1 != v0) { v0 = 0; goto L_008CC2FC; }
    a0 = (s32) ((u32) a1 + (u32) s1);
L_008CC234:;
    v0 = (*(volatile u8 *) (u32) (a0 + 336));
    at = v0 < 2;
    if (at == 0) goto L_008CC2F8;
    v0 = (*(volatile u8 *) (u32) (a0 + 368));
    if (v0 != 0) goto L_008CC2F8;
    v0 = (*(volatile u8 *) (u32) (a0 + 101));
    if (v0 == 0) { v1 = (s32) ((u32) a1 + (u32) s1); goto L_008CC294; }
    v1 = (*(volatile u8 *) (u32) (a0 + 400));
    v0 = v0 & 0xff;
    at = v1 < v0;
    if (at == 0) { a0 = s2; goto L_008CC280; }
    v0 = (*(volatile u8 *) (u32) (a0 + 432));
    if (v0 <= 0) goto L_008CC290;
    a0 = s2;
L_008CC280:;
    func_008CC360(a0, a1, a2, a3, a4, a5, a6, a7, f12.f);
    goto L_008CC2F8;
L_008CC290:;
    v1 = (s32) ((u32) a1 + (u32) s1);
L_008CC294:;
    v0 = 11;
    v1 = (*(volatile u8 *) (u32) (v1 + 304));
    if (v1 == v0) { a0 = s2; goto L_008CC2C0; }
    v0 = 10;
    if (v1 == v0) goto L_008CC2BC;
    v0 = 13;
    if (v1 != v0) goto L_008CC2F8;
L_008CC2BC:;
    a0 = s2;
L_008CC2C0:;
    func_008CC360(a0, a1, a2, a3, a4, a5, a6, a7, f12.f);
    goto L_008CC2F8;
L_008CC2D0:;
    a1 = 1; func_008D1C10(a0, a1);
    v0 = (*(volatile u8 *) (u32) (s2 + 23));
    if (v0 == 0) { v0 = 1; goto L_008CC2FC; }
    a0 = s2; func_008CC520(a0, a1, a2, a3, f12.f);
    v0 = 1;
    goto L_008CC2FC;
L_008CC2F8:;
    v0 = 0;
L_008CC2FC:;
    return v0;
}
