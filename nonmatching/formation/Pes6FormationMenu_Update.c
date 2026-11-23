/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6File_AllChannelsIdle(void);
s64 func_001B6A30(s64, s64, s64, s64);
s64 func_001F87E0(s64, s64);
s64 func_0080B2E0(s64, s64, s64, s64);
s64 func_008214E0(s64, s64, s64, s64);
s64 func_008472D0(s64, s64, s64, s64);
void func_0084A620(s64, s64, s64, s64);
s64 func_00858C20(s64, s64, s64, s64);
s64 func_00858FA0(s64, s64, s64, s64);
s64 func_00858FD0(s64, s64, s64, s64);
s64 func_008B7D60(s64, s64, s64, s64);
s64 func_008B7FE0(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32);
s64 func_008B8380(s64, s64, s64, s64, s64, s64, s64, s64);
s64 func_008B85C0(s64, s64, s64, s64, s64, s64, s64, s64, f32);
s64 func_008B8E70(s64, s64, s64, s64, s64, s64, s64, s64);
void func_008BF130(s64, s64);
void func_008D8F40(void);

s64 Pes6FormationMenu_Update(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[60];
    s64 sp = (s32) (u32) frame;

    s3 = 0;
    v1 = (*(volatile s32 *) (u32) (gp + -20092));
    v0 = (*(volatile u8 *) (u32) (gp + -20100));
    v1 = (s32) ((u32) v1 + 0x1U);
    at = (u64) v0 < (u64) (s64) 9;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (gp + -20092)) = (u32) v1; if (c_) goto L_008B99C0; }
    v1 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffcaf0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x8b9724U) goto L_008B9724; if (t_ == 0x8b973cU) goto L_008B973C; if (t_ == 0x8b9754U) goto L_008B9754; if (t_ == 0x8b978cU) goto L_008B978C; if (t_ == 0x8b97a8U) goto L_008B97A8; if (t_ == 0x8b97e4U) goto L_008B97E4; if (t_ == 0x8b98a0U) goto L_008B98A0; if (t_ == 0x8b99acU) goto L_008B99AC; if (t_ == 0x8b99bcU) goto L_008B99BC; }
L_008B9724:;
    v0 = func_008B8E70(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) goto L_008B99C0;
    v0 = 1;
    (*(volatile u8 *) (u32) (gp + -20100)) = (u8) v0;
L_008B973C:;
    v0 = Pes6File_AllChannelsIdle();
    if (v0 == 0) goto L_008B99C0;
    v0 = 2;
    (*(volatile u8 *) (u32) (gp + -20100)) = (u8) v0;
L_008B9754:;
    v0 = func_008B85C0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f);
    if (v0 == 0) goto L_008B99C0;
    v0 = (s32) 0x8f0000U;
    v0 = (*(volatile u16 *) (u32) (v0 + -7792));
    v0 = v0 & 0x80;
    v0 = (u64) 0 < (u64) v0;
    if (v0 == 0) { v0 = 3; goto L_008B9788; }
    a0 = 0; func_0084A620(a0, a1, a2, a3);
    v0 = 3;
L_008B9788:;
    (*(volatile u8 *) (u32) (gp + -20100)) = (u8) v0;
L_008B978C:;
    v0 = func_008B8380(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) goto L_008B99C0;
    v0 = 4;
    (*(volatile u8 *) (u32) (gp + -20100)) = (u8) v0; goto L_008B99C0;
L_008B97A8:;
    v0 = func_008B7FE0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    if (v0 == 0) goto L_008B99C0;
    v0 = (s32) 0x8f0000U;
    v0 = (*(volatile u16 *) (u32) (v0 + -7792));
    v0 = v0 & 0x80;
    v0 = (u64) 0 < (u64) v0;
    if (v0 == 0) { v0 = 6; goto L_008B97DC; }
    v0 = 5;
    (*(volatile u8 *) (u32) (gp + -20100)) = (u8) v0; goto L_008B99C0;
L_008B97DC:;
    (*(volatile u8 *) (u32) (gp + -20100)) = (u8) v0; goto L_008B99C0;
L_008B97E4:;
    s2 = (s32) 0x8f0000U;
    s4 = 0;
    s2 = (s32) ((u32) s2 + 0xffffe750U);
L_008B97F0:;
    v0 = (s32) 0x8f0000U;
    v0 = (*(volatile u16 *) (u32) (v0 + -7792));
    v0 = v0 & 0x80;
    v0 = (u64) 0 < (u64) v0;
    if (v0 == 0) goto L_008B9888;
    s1 = s4 & 0xff;
    a0 = s1; v0 = func_00858C20(a0, a1, a2, a3);
    s0 = (s64) ((u64) v0 << 48);
    s0 = s0 >> 48; v0 = func_008472D0(a0, a1, a2, a3);
    v0 = (*(volatile s16 *) (u32) v0);
    v0 = s0 ^ v0;
    v0 = (u64) v0 < (u64) (s64) 1;
    if (v0 != 0) goto L_008B9840;
    v0 = 1; goto L_008B9878;
L_008B9840:;
    a0 = (s32) ((u32) s2 + 0x208U);
    a1 = (s32) ((u32) sp + 0x60U); func_008BF130(a0, a1);
    a1 = s1;
    a0 = (s32) ((u32) sp + 0x60U);
    a2 = 1; v0 = func_0080B2E0(a0, a1, a2, a3);
    v1 = -1;
    if (v0 != v1) goto L_008B9870;
    v0 = 0; goto L_008B9878;
L_008B9870:;
    v0 = 1;
L_008B9878:;
    if (v0 == 0) goto L_008B9888;
    v0 = 6;
    (*(volatile u8 *) (u32) (gp + -20100)) = (u8) v0;
L_008B9888:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 2;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x3224U); if (c_) goto L_008B97F0; }
    goto L_008B99C0;
L_008B98A0:;
    v0 = (s32) 0x8f0000U;
    v0 = (*(volatile u16 *) (u32) (v0 + -7792));
    v0 = v0 & 0x80;
    v0 = (u64) 0 < (u64) v0;
    if (v0 == 0) goto L_008B98EC;
    v0 = func_008472D0(a0, a1, a2, a3);
    a1 = (*(volatile s16 *) (u32) v0);
    a0 = (s32) 0x8b0000U;
    a0 = (s32) ((u32) a0 + 0x21c0U); v0 = func_00858FD0(a0, a1, a2, a3);
    a0 = v0; v0 = func_00858FA0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) goto L_008B98EC;
    goto L_008B991C;
L_008B98EC:;
    v0 = (s32) 0x8f0000U;
    v1 = 255;
    v0 = (*(volatile u8 *) (u32) (v0 + -6295));
    if (v0 != v1) { v1 = 0; goto L_008B991C; }
    v0 = (s32) 0x8f0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 6541));
    if (v0 != v1) goto L_008B9918;
    v1 = 1; goto L_008B991C;
L_008B9918:;
    v1 = 0;
L_008B991C:;
    if (v1 != 0) { v0 = 1; goto L_008B999C; }
    v0 = (s32) 0x8f0000U;
    v1 = (*(volatile u16 *) (u32) (v0 + -7792));
    v0 = v1 & 0x200;
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) (gp + -31364)); goto L_008B9950; }
    v0 = func_008214E0(a0, a1, a2, a3);
    if (v0 != 0) goto L_008B9998;
    v0 = 0; goto L_008B999C;
L_008B9950:;
    if (a0 < 0) { a0 = 1; goto L_008B9968; }
    v0 = 49;
    if (v1 != v0) goto L_008B9980;
    a0 = 1;
L_008B9968:;
    a1 = 64; v0 = func_001F87E0(a0, a1);
    if (v0 != 0) goto L_008B9998;
    v0 = 0; goto L_008B999C;
L_008B9980:;
    v0 = func_001B6A30(a0, a1, a2, a3);
    if (v0 != 0) goto L_008B9998;
    v0 = 0; goto L_008B999C;
L_008B9998:;
    v0 = 1;
L_008B999C:;
    if (v0 == 0) goto L_008B99C0;
    v0 = 7;
    (*(volatile u8 *) (u32) (gp + -20100)) = (u8) v0;
L_008B99AC:;
    v0 = func_008B7D60(a0, a1, a2, a3);
    s3 = v0; goto L_008B99C0;
L_008B99BC:;
    s3 = 1;
L_008B99C0:;
    func_008D8F40();
    v0 = s3;
    return v0;
}
