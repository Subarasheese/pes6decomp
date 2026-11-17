/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Ball_Update(f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_001A5BB0(s32);
void func_001A5E00(s32, s32, s32, s32, s32);
void func_001A5F50(s32, s32);
s32 func_00208250(s32);
s32 func_0027B5C0(s32);
void func_0027C230(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_0027C990(s32, s32);
void func_009E1CB0(s32, s32, s32, s32);
void func_00AD0A20(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_00B2A420(s32);
void func_00B6C0F0(s32, s32, f32);
void func_00B6C390(s32, s32, s32, s32, f32, f32);
void func_00B6C4B0(s32, s32, s32, s32, f32, f32);
s32 func_00BF6270(void);
s32 func_00BF6280(void);

void func_00B6A1D0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };

    v0 = func_00BF6280();
    v1 = 7;
    if (v0 == v1) goto L_00B6A200;
    v0 = func_00BF6280();
    v1 = 6;
    if (v0 != v1) goto L_00B6A210;
L_00B6A200:;
    func_00AD0A20(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f);
    Pes6Ball_Update(f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f);
L_00B6A210:;
    v1 = (*(volatile u8 *) (u32) (gp + -19472));
    at = (u64) v1 < (u64) (s64) 6;
    if (at == 0) goto L_00B6A3A4;
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffffd320U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xb6a23cU) goto L_00B6A23C; if (t_ == 0xb6a248U) goto L_00B6A248; if (t_ == 0xb6a2a0U) goto L_00B6A2A0; if (t_ == 0xb6a2ecU) goto L_00B6A2EC; if (t_ == 0xb6a30cU) goto L_00B6A30C; if (t_ == 0xb6a328U) goto L_00B6A328; }
L_00B6A23C:;
    v1 = 1;
    (*(volatile u8 *) (u32) (gp + -19472)) = (u8) v1; goto L_00B6A3A4;
L_00B6A248:;
    v0 = func_00BF6280();
    v1 = 5;
    if (v0 == v1) goto L_00B6A274;
    v1 = 6;
    if (v0 == v1) { a0 = 174; goto L_00B6A278; }
    v1 = 7;
    if (v0 == v1) { a0 = 174; goto L_00B6A278; }
L_00B6A274:;
    a0 = 182;
L_00B6A278:;
    v0 = func_00208250(a0);
    a1 = v0;
    a0 = 5; func_001A5F50(a0, a1);
    a0 = 5; func_001A5E00(a0, a1, a2, a3, a4);
    v1 = 2;
    (*(volatile u8 *) (u32) (gp + -19472)) = (u8) v1; goto L_00B6A3A4;
L_00B6A2A0:;
    a0 = 5; v0 = func_001A5BB0(a0);
    if (v0 == 0) goto L_00B6A3A4;
    v0 = func_00BF6280();
    v1 = 6;
    if (v0 == v1) goto L_00B6A2D8;
    v1 = 7;
    if (v0 == v1) goto L_00B6A2D8;
    v1 = 5; goto L_00B6A2E4;
L_00B6A2D8:;
    v1 = 3;
    (*(volatile u8 *) (u32) (gp + -19472)) = (u8) v1; goto L_00B6A3A4;
L_00B6A2E4:;
    (*(volatile u8 *) (u32) (gp + -19472)) = (u8) v1; goto L_00B6A3A4;
L_00B6A2EC:;
    a0 = 107; v0 = func_0027B5C0(a0);
    a0 = v0;
    a1 = 5; func_0027C230(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 4;
    (*(volatile u8 *) (u32) (gp + -19472)) = (u8) v1; goto L_00B6A3A4;
L_00B6A30C:;
    a0 = 5; v0 = func_0027C990(a0, a1);
    if (v0 == 0) goto L_00B6A3A4;
    v1 = 5;
    (*(volatile u8 *) (u32) (gp + -19472)) = (u8) v1; goto L_00B6A3A4;
L_00B6A328:;
    v0 = func_00BF6270();
    a0 = v0; v0 = func_00B2A420(a0);
    s0 = v0; v0 = func_00BF6280();
    v1 = 5;
    if (v0 == v1) goto L_00B6A38C;
    v1 = 6;
    if (v0 == v1) { a0 = s0; goto L_00B6A37C; }
    v1 = 7;
    if (v0 == v1) { a0 = s0; goto L_00B6A36C; }
    a0 = s0; goto L_00B6A390;
L_00B6A36C:;
    func_00B6C390(a0, a1, a2, a3, f12.f, f13.f);
    a0 = 3; goto L_00B6A39C;
L_00B6A37C:;
    func_00B6C4B0(a0, a1, a2, a3, f12.f, f13.f);
    goto L_00B6A398;
L_00B6A38C:;
    a0 = s0;
L_00B6A390:;
    func_00B6C0F0(a0, a1, f12.f);
L_00B6A398:;
    a0 = 3;
L_00B6A39C:;
    func_009E1CB0(a0, a1, a2, a3);
L_00B6A3A4:;
    return;
}
