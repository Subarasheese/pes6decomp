/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);
s32 func_008B2880(void);
void func_008C5230(s32, s32, s32, s32, f32);
void func_008C8DD0(s32, s32);
void func_008C8E60(s32, s32, s32, s32, f32);
void func_008C9AB0(s32, s32);
s32 func_008CB0C0(s32);
s32 func_008D1EC0(s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

void func_008CC360(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    s1 = (*(volatile s32 *) (u32) (a0 + 1140));
    s3 = a0; v0 = func_008CB0C0(a0);
    v1 = (s32) ((u32) v0 + (u32) s1);
    s0 = (*(volatile u8 *) (u32) (v1 + 1));
    a1 = (s32) ((u32) s0 + (u32) s1);
    a0 = (*(volatile u8 *) (u32) (a1 + 101));
    { s32 c_ = a0 == 0; s2 = (*(volatile u8 *) (u32) (a1 + 304)); if (c_) goto L_008CC3DC; }
    v1 = 11;
    if (s2 == v1) { v1 = 15; goto L_008CC3E0; }
    v1 = 10;
    if (s2 == v1) goto L_008CC3DC;
    v1 = a0 & 0xff;
    a0 = (*(volatile u8 *) (u32) (a1 + 400));
    v1 = a0 < v1;
    if (v1 != 0) { v1 = (*(volatile u8 *) (u32) (a1 + 432)); goto L_008CC3D0; }
    s2 = 14; goto L_008CC3DC;
L_008CC3D0:;
    if (v1 <= 0) goto L_008CC3DC;
    s2 = 15;
L_008CC3DC:;
    v1 = 15;
L_008CC3E0:;
    if (s2 == v1) { a0 = (s32) ((u32) s3 + 0x480U); goto L_008CC414; }
    v1 = 14;
    if (s2 == v1) goto L_008CC410;
    v1 = 13;
    if (s2 == v1) goto L_008CC410;
    v1 = (s32) ((u32) s0 + (u32) s1);
    v1 = (*(volatile u8 *) (u32) (v1 + 528));
    if (v1 == 0) { ; goto L_008CC504; }
L_008CC410:;
    a0 = (s32) ((u32) s3 + 0x480U);
L_008CC414:;
    v0 = func_008D1EC0(a0);
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_008CC430; }
    f0.i = (s32) v0;
    f0.f = (f32) f0.i; goto L_008CC448;
L_008CC430:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_008CC448:;
    (*(volatile f32 *) (u32) (sp + 156)) = f0.f;
    a0 = s3;
    a1 = (s32) ((u32) sp + 0x90U); func_008C9AB0(a0, a1);
    a2 = (*(volatile u8 *) (u32) (s3 + 1));
    a0 = (s32) ((u32) sp + 0xa0U);
    a1 = 2; func_008C5230(a0, a1, a2, a3, f12.f);
    f1.f = (*(volatile f32 *) (u32) (sp + 144));
    a0 = (s32) ((u32) s3 + 0x78cU);
    f0.f = (*(volatile f32 *) (u32) (sp + 148));
    a1 = s2;
    (*(volatile f32 *) (u32) (sp + 160)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 164)) = f0.f;
    a3 = (*(volatile u8 *) (u32) (s3 + 1));
    a2 = (s32) ((u32) sp + 0xa0U); func_008C8E60(a0, a1, a2, a3, f12.f);
    v0 = 10;
    if (s2 == v0) goto L_008CC4C8;
    v0 = 11;
    if (s2 == v0) goto L_008CC4C8;
    v0 = 13;
    if (s2 == v0) { v0 = (s32) 0x3f0000U; goto L_008CC4B8; }
    v0 = (s32) 0x3f0000U; goto L_008CC4EC;
L_008CC4B8:;
    a0 = v0 | 0x10; v0 = func_001F08B0(a0);
    a0 = (s32) ((u32) s3 + 0x78cU); goto L_008CC4F8;
L_008CC4C8:;
    v0 = func_008B2880();
    v1 = (s32) ((u32) s0 + (u32) s1);
    a1 = v0;
    a2 = (*(volatile u8 *) (u32) (v1 + 528));
    a0 = (s32) ((u32) sp + 0x50U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) ((u32) sp + 0x50U); goto L_008CC4F4;
L_008CC4EC:;
    a0 = v0 | 0x1e; v0 = func_001F08B0(a0);
L_008CC4F4:;
    a0 = (s32) ((u32) s3 + 0x78cU);
L_008CC4F8:;
    a1 = v0; func_008C8DD0(a0, a1);
L_008CC504:;
    return;
}
