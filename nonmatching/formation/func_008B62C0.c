/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s64);
void func_001B7A60(s64, s64, s64, s64);
void func_001B7B80(s64, s64, s64, s64);
void func_001B7D40(s64, s64, s64, s64);
void func_008B38E0(s64, s64, s64, s64);
void func_008B3910(s64, s64, s64, s64, f32);
void func_008B39C0(s64);
void func_008B3A10(s64);
void func_008B6080(s64, s64, s64, s64);
s64 func_008BC370(s64);
s64 func_008BC3B0(void);
void func_008C5230(s64, s64, s64, s64, f32);
void func_008C6690(s64, s64, s64, s64);
void func_008C68F0(s64, s64, s64, s64, s64, s64, s64, s64);
void func_008C6970(s64, s64, s64, s64, s64, s64, s64, s64);
void func_008C7370(s64, s64, s64, s64, s64, s64, s64, s64);
s64 func_008C8B70(s64, s64, s64, s64);
void func_008C8C70(s64, s64, s64, s64);
s64 func_008CB640(s64);
void func_008CDC20(s64, s64, s64, s64);
s64 func_008D90A0(s64, s64, s64, s64);
void func_008DCE30(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32);
void func_008E5F90(s64, s64, s64, s64, s64, s64, s64, s64);

void func_008B62C0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12, f32 fa13) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[10];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x8f0000U;
    v1 = 255;
    v0 = (*(volatile u8 *) (u32) (v0 + -6295));
    { s32 c_ = v0 != v1; s2 = a0; if (c_) goto L_008B6300; }
    v0 = (s32) 0x8f0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 6541));
    if (v0 != v1) { v0 = (*(volatile u8 *) (u32) (s2 + 26)); goto L_008B6304; }
    v0 = 1; goto L_008B66A0;
L_008B6300:;
    v0 = (*(volatile u8 *) (u32) (s2 + 26));
L_008B6304:;
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) (s2 + 38)); goto L_008B640C; }
    v0 = (*(volatile u8 *) (u32) (s2 + 37));
    if (v0 == 0) goto L_008B6408;
    v0 = (*(volatile u8 *) (u32) (s2 + 38));
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) (s2 + 39)); goto L_008B63F0; }
    v1 = (*(volatile u8 *) (u32) (s2 + 11));
    v0 = 29;
    v1 = (s32) ((u32) v1 + (u32) s2);
    v1 = (*(volatile u8 *) (u32) (v1 + 1));
    if (v1 == v0) { v0 = (*(volatile u8 *) (u32) (s2 + 39)); goto L_008B6354; }
    v0 = 28;
    if (v1 == v0) goto L_008B6350;
    v0 = 1; goto L_008B636C;
L_008B6350:;
    v0 = (*(volatile u8 *) (u32) (s2 + 39));
L_008B6354:;
    if (v0 == 0) { v0 = (*(volatile u8 *) (u32) (s2 + 26)); goto L_008B6424; }
    a0 = s2; func_008C7370(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008B6420;
L_008B636C:;
    a0 = (s32) ((u32) sp + 0x40U);
    (*(volatile u8 *) (u32) (s2 + 38)) = (u8) v0;
    a2 = (*(volatile u8 *) (u32) s2);
    a1 = 2; func_008C5230(a0, a1, a2, a3, f12.f);
    f1.f = (*(volatile f32 *) (u32) (sp + 72));
    v0 = (s32) 0xc4fa0000U;
    f0.i = (s32) v0;
    a0 = (s32) ((u32) s2 + 0x23b4U);
    a1 = (s32) ((u32) sp + 0x40U);
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (sp + 72)) = f0.f;
    a2 = (*(volatile u8 *) (u32) s2);
    a3 = (s32) ((u32) s2 + 0x208U); func_008C6970(a0, a1, a2, a3, a4, a5, a6, a7);
    s1 = 0;
    s0 = 0;
L_008B63B0:;
    v0 = (*(volatile s32 *) (u32) (s2 + 104));
    a0 = (s32) ((u32) v0 + (u32) s0); v0 = func_008BC370(a0);
    a3 = v0;
    a1 = s1 & 0xff;
    v0 = (*(volatile s32 *) (u32) (s2 + 104));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a2 = (*(volatile u16 *) (u32) v0);
    a0 = (s32) ((u32) s2 + 0x23b4U); func_008C6690(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 10;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x19aU); if (c_) goto L_008B63B0; }
    goto L_008B6420;
L_008B63F0:;
    if (v0 == 0) goto L_008B6420;
    a0 = s2; func_008C7370(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008B6420;
L_008B6408:;
    v0 = (*(volatile u8 *) (u32) (s2 + 38));
L_008B640C:;
    if (v0 == 0) goto L_008B6420;
    a0 = (s32) ((u32) s2 + 0x23b4U);
    (*(volatile u8 *) (u32) (s2 + 38)) = (u8) 0; func_008C68F0(a0, a1, a2, a3, a4, a5, a6, a7);
L_008B6420:;
    v0 = (*(volatile u8 *) (u32) (s2 + 26));
L_008B6424:;
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (s2 + 12832)); goto L_008B648C; }
    v1 = (*(volatile u8 *) (u32) (s2 + 25));
    v0 = 255;
    if (v1 == v0) { v0 = 1; goto L_008B66A0; }
    v1 = (*(volatile s32 *) (u32) (s2 + 12832));
    if (v1 == 0) { a0 = s2; goto L_008B6478; }
    v0 = (*(volatile u8 *) (u32) (v1 + 36));
    if (v0 != 0) { a0 = s2; goto L_008B6464; }
    v0 = (*(volatile u8 *) (u32) (v1 + 24));
    if (v0 == 0) goto L_008B6474;
    a0 = s2;
L_008B6464:;
    func_008B39C0(a0);
    goto L_008B6480;
L_008B6474:;
    a0 = s2;
L_008B6478:;
    func_008B3A10(a0);
L_008B6480:;
    v0 = 1;
    goto L_008B66A0;
L_008B648C:;
    if (a0 == 0) { v0 = (*(volatile u8 *) (u32) (s2 + 27)); goto L_008B64EC; }
    v1 = (*(volatile u8 *) (u32) (a0 + 25));
    v0 = 255;
    if (v1 == v0) goto L_008B64E8;
    v0 = (*(volatile u8 *) (u32) (a0 + 26));
    if (v0 != 0) goto L_008B64E8;
    v1 = (*(volatile s32 *) (u32) (gp + -20108));
    v0 = (*(volatile s32 *) (u32) (gp + -20092));
    if (v1 == v0) goto L_008B64E8;
    v0 = (*(volatile u8 *) (u32) (s2 + 36));
    if (v0 != 0) goto L_008B64E8;
    a0 = (*(volatile u8 *) (u32) (s2 + 25)); v0 = func_008D90A0(a0, a1, a2, a3);
    v0 = v0 & 0x800;
    if (v0 == 0) goto L_008B64E8;
    v0 = 1;
    (*(volatile u8 *) (u32) (s2 + 27)) = (u8) v0;
L_008B64E8:;
    v0 = (*(volatile u8 *) (u32) (s2 + 27));
L_008B64EC:;
    if (v0 == 0) { a0 = (s32) ((u32) s2 + 0x309cU); goto L_008B65C8; }
    a0 = s2;
    (*(volatile u8 *) (u32) (s2 + 26)) = (u8) 0; func_008B3910(a0, a1, a2, a3, f12.f);
    v0 = (*(volatile s32 *) (u32) (s2 + 12832));
    v1 = 1;
    (*(volatile u8 *) (u32) (v0 + 26)) = (u8) v1;
    a0 = (*(volatile s32 *) (u32) (s2 + 12832)); func_008B38E0(a0, a1, a2, a3);
    v0 = (s32) 0x84000000U;
    (*(volatile u8 *) (u32) (s2 + 27)) = (u8) 0;
    a0 = v0 | 0xf802;
    v0 = (*(volatile s32 *) (u32) (gp + -20092));
    (*(volatile u32 *) (u32) (gp + -20108)) = (u32) v0; SD_call(a0);
    s0 = (*(volatile s32 *) (u32) (s2 + 12832)); v0 = func_008BC3B0();
    if (v0 == 0) goto L_008B6560;
    v0 = (*(volatile u8 *) (u32) (s0 + 26));
    if (v0 == 0) { v0 = 0; goto L_008B658C; }
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffe194U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0); goto L_008B658C;
L_008B6560:;
    v0 = (s32) 0x8f0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -7788));
    if (v0 != 0) { v0 = 1; goto L_008B658C; }
    v0 = (s32) 0x8f0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -7787));
    if (v0 != 0) goto L_008B6588;
    v0 = 0; goto L_008B658C;
L_008B6588:;
    v0 = 1;
L_008B658C:;
    if (v0 == 0) { a0 = 13; goto L_008B65AC; }
    v0 = (s32) 0x6c0000U;
    a0 = 13;
    a1 = v0 | 0x30; func_001B7D40(a0, a1, a2, a3);
    v0 = 0; goto L_008B65C0;
L_008B65AC:;
    func_001B7B80(a0, a1, a2, a3);
    a0 = 1; func_001B7A60(a0, a1, a2, a3);
    v0 = 0;
L_008B65C0:;
    goto L_008B66A0;
L_008B65C8:;
    v0 = func_008C8B70(a0, a1, a2, a3);
    if (v0 != 0) { a1 = (*(volatile u8 *) (u32) (s2 + 25)); goto L_008B6678; }
    a0 = (*(volatile u8 *) (u32) (s2 + 25)); v0 = func_008D90A0(a0, a1, a2, a3);
    v1 = 8192;
    if (v0 != v1) goto L_008B6674;
    s0 = (*(volatile u8 *) (u32) (s2 + 23));
    v0 = 14;
    if (s0 != v0) { a2 = (*(volatile u8 *) (u32) (s2 + 25)); goto L_008B6664; }
    a0 = (s32) ((u32) s2 + 0xb0cU); v0 = func_008CB640(a0);
    v1 = 3;
    if (v0 == v1) { s0 = (s64) ((u64) 0 + (u64) (s64) 20); goto L_008B6630; }
    v1 = 2;
    if (v0 == v1) { s0 = (s64) ((u64) 0 + (u64) (s64) 18); goto L_008B6630; }
    v1 = 1;
    if (v0 == v1) { s0 = (s64) ((u64) 0 + (u64) (s64) 16); goto L_008B6630; }
    if (v0 == 0) { s0 = (s64) ((u64) 0 + (u64) (s64) 15); goto L_008B6630; }
L_008B6630:;
    v0 = (*(volatile u8 *) (u32) (s2 + 2371));
    if (v0 == 0) goto L_008B6660;
    v1 = s0 & 0xff;
    v0 = 16;
    if (v1 != v0) { v0 = 18; goto L_008B6654; }
    s0 = (s64) ((u64) 0 + (u64) (s64) 17); goto L_008B6660;
L_008B6654:;
    if (v1 != v0) goto L_008B6660;
    s0 = (s64) ((u64) 0 + (u64) (s64) 19);
L_008B6660:;
    a2 = (*(volatile u8 *) (u32) (s2 + 25));
L_008B6664:;
    a1 = s0 & 0xff;
    a3 = (*(volatile u8 *) (u32) s2);
    a0 = (s32) ((u32) s2 + 0x309cU); func_008C8C70(a0, a1, a2, a3);
L_008B6674:;
    a1 = (*(volatile u8 *) (u32) (s2 + 25));
L_008B6678:;
    a0 = (s32) ((u32) s2 + 0x2168U); func_008DCE30(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a1 = (*(volatile u8 *) (u32) (s2 + 25));
    a0 = (s32) ((u32) s2 + 0x129cU); func_008E5F90(a0, a1, a2, a3, a4, a5, a6, a7);
    a1 = (*(volatile u8 *) (u32) (s2 + 25));
    a0 = (s32) ((u32) s2 + 0xb0cU); func_008CDC20(a0, a1, a2, a3);
    a0 = s2; func_008B6080(a0, a1, a2, a3);
L_008B66A0:;
    return;
}
