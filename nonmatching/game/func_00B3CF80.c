/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B3C10(s32);
void func_00278B80(s32, s32, f32);
void func_00278C20(s32);
s32 func_002DCA30(void);
s32 func_008472D0(s32, s32, s32, s32);
void func_00849420(s32, s32, s32, s32);
void func_00853B50(s32, s32, s32, s32);
void func_00973EC0(s32, s32, f32, f32);
s32 func_00B2A420(s32);
void func_00B364E0(void);
void func_00B37240(void);
void func_00B37260(void);
void func_00B3D420(f32, f32);
void func_00B42A20(s32, s32, s32, s32);
void func_00B82670(void);
void func_00BA92A0(s32);
void func_00BBB960(s32);
s32 func_00BF6270(void);
s32 func_00C01090(s32);
void func_00C379F0(void);

void func_00B3CF80(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;

    v0 = func_002DCA30();
    if (v0 == 0) goto L_00B3D100;
    v0 = func_00BF6270();
    v1 = 255;
    if (v0 == v1) { a0 = 1; goto L_00B3CFC4; }
    v0 = func_00BF6270();
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    a0 = hi;
L_00B3CFC4:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) (v0 + 17));
    v0 = (*(volatile u8 *) (u32) (v0 + 18));
    if (v0 == 0) { v0 = 0; goto L_00B3CFF0; }
    v0 = 64;
L_00B3CFF0:;
    s0 = v1 | v0;
    a0 = 1; v0 = func_00C01090(a0);
    if (v0 == 0) { v0 = 0; goto L_00B3D008; }
    v0 = 128;
L_00B3D008:;
    s0 = s0 | v0;
    v0 = (s32) 0x8b0000U;
    v1 = (*(volatile s16 *) (u32) (v0 + 5362));
    f0.i = (s32) v1;
    v0 = (s32) 0x590000U;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (v0 + 9944)) = f0.f; v0 = func_008472D0(a0, a1, a2, a3);
    a4 = (*(volatile s16 *) (u32) v0);
    a2 = s0 & 0xff;
    a0 = 1;
    a1 = 2;
    a3 = 0;
    a5 = 0;
    a6 = 0;
    a7 = 0; func_00853B50(a0, a1, a2, a3);
    v0 = (s32) 0x8b0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 5212)); func_00BBB960(a0);
    s0 = (s32) 0x8b0000U;
    s1 = 0;
    s0 = (s32) ((u32) s0 + 0x1180U);
L_00B3D064:;
    v0 = 255;
    if (s1 == v0) { a0 = 1; goto L_00B3D07C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s1 / (s32) v0); hi = (s32) ((s32) s1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00B3D07C:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a1 = s0;
    a2 = 0;
    a0 = (s32) ((u32) v0 + (u32) v1);
    a3 = 1; func_00849420(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 23;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x1aU); if (c_) goto L_00B3D064; }
    s0 = 0;
L_00B3D0B8:;
    v0 = 255;
    if (s0 == v0) { a0 = 1; goto L_00B3D0D0; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s0 / (s32) v0); hi = (s32) ((s32) s0 % (s32) v0); lo = q_; }
    a0 = hi;
L_00B3D0D0:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a1 = 1;
    a0 = (s32) ((u32) v0 + (u32) v1); func_00973EC0(a0, a1, f12.f, f13.f);
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 23;
    if (v0 != 0) goto L_00B3D0B8;
L_00B3D100:;
    func_00B37260();
    func_00B37240();
    func_00B82670();
    func_00C379F0();
    v0 = func_00BF6270();
    a0 = v0; func_00BA92A0(a0);
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + 7954)) = (u8) 0;
    (*(volatile u8 *) (u32) (v0 + 7604)) = (u8) 0; func_00B42A20(a0, a1, a2, a3);
    func_00B364E0();
    func_00B3D420(f12.f, f13.f);
    s1 = 0;
L_00B3D158:;
    a0 = s1; v0 = func_00B2A420(a0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 3;
    s0 = v0;
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (a0 + 102)) = (u8) a1;
    a0 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 9392));
    v1 = (*(volatile u8 *) (u32) (a0 + 18));
    if (v1 == v0) goto L_00B3D1D0;
L_00B3D188:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 23;
    if (v0 != 0) goto L_00B3D158;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 9392)); func_001B3C10(a0);
    a0 = 1; func_00278C20(a0);
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x3f190000U;
    a1 = (*(volatile u8 *) (u32) (v0 + 7140));
    v0 = v1 | 0x999a;
    f12.i = (s32) v0;
    a0 = 8; func_00278B80(a0, a1, f12.f);
    goto L_00B3D200;
L_00B3D1D0:;
    v0 = func_00BF6270();
    if (s1 != v0) goto L_00B3D1F0;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v1 = 1;
    (*(volatile u8 *) (u32) (v0 + 83)) = (u8) v1; goto L_00B3D188;
L_00B3D1F0:;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v1 = 2;
    (*(volatile u8 *) (u32) (v0 + 83)) = (u8) v1; goto L_00B3D188;
L_00B3D200:;
    return;
}
