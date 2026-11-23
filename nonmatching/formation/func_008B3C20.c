/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_008B4920(void);
s64 func_008B9380(s64);
s64 func_008B9430(void);
s64 func_008B9660(void);
void func_008C5230(s64, s64, s64, s64, f32);
void func_008CB190(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32);
void func_008CB5D0(s64, s64, s64, s64);
void func_008CBDD0(s64, s64, s64, s64);
void func_008D2FE0(s64, s64);
void func_008D3D20(s64, s64, s64, s64, s64, s64, s64, s64);
void func_008E5110(s64, s64, s64, s64, s64, s64, s64, s64);
void func_008E6650(s64, s64, s64, s64, s64, s64, s64, s64);
void func_008E6C60(s64, s64, s64, s64, s64);
void func_008E9940(s64, s64, s64, s64, f32);

void func_008B3C20(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[10];
    s64 sp = (s32) (u32) frame;

    v0 = 16;
    v1 = (s32) ((u32) sp + 0x40U);
    s1 = 0;
    { s32 c_ = v1 == 0; s0 = a0; if (c_) goto L_008B3C60; }
L_008B3C44:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_008B3C44;
L_008B3C60:;
    v0 = func_008B9430();
    if (v0 == 0) { a2 = (*(volatile u8 *) (u32) s0); goto L_008B3C78; }
    s1 = (s64) ((u64) 0 + (u64) (s64) 1);
    a2 = (*(volatile u8 *) (u32) s0);
L_008B3C78:;
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = 1; func_008C5230(a0, a1, a2, a3, f12.f);
    v0 = func_008B4920();
    if (v0 == 0) { a2 = (*(volatile u8 *) (u32) s0); goto L_008B3CC8; }
    a0 = (*(volatile u8 *) (u32) s0); v0 = func_008B9380(a0);
    if (v0 == 0) { v0 = 1; goto L_008B3CA8; }
    v0 = 0;
L_008B3CA8:;
    a2 = (*(volatile u8 *) (u32) s0);
    a3 = v0 & 0xff;
    a4 = s1;
    a0 = (s32) ((u32) s0 + 0x129cU);
    a1 = (s32) ((u32) sp + 0x30U); func_008E6C60(a0, a1, a2, a3, a4);
    a2 = (*(volatile u8 *) (u32) s0); goto L_008B3CE0;
L_008B3CC8:;
    a4 = s1;
    a3 = (*(volatile u8 *) (u32) (s0 + 2369));
    a0 = (s32) ((u32) s0 + 0x129cU);
    a1 = (s32) ((u32) sp + 0x30U); func_008E6C60(a0, a1, a2, a3, a4);
    a2 = (*(volatile u8 *) (u32) s0);
L_008B3CE0:;
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = 2; func_008C5230(a0, a1, a2, a3, f12.f);
    a2 = (*(volatile u8 *) (u32) s0);
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = (s32) ((u32) sp + 0x30U); func_008CBDD0(a0, a1, a2, a3);
    a2 = (*(volatile u8 *) (u32) s0);
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = 5; func_008C5230(a0, a1, a2, a3, f12.f);
    a2 = (*(volatile u8 *) (u32) s0);
    a0 = (s32) ((u32) s0 + 0x1d80U);
    a1 = (s32) ((u32) sp + 0x30U);
    a3 = (s32) ((u32) s0 + 0x208U); func_008E9940(a0, a1, a2, a3, f12.f);
    a2 = (*(volatile u8 *) (u32) s0);
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = 0; func_008C5230(a0, a1, a2, a3, f12.f);
    a2 = (*(volatile u8 *) (u32) s0);
    a0 = (s32) ((u32) s0 + 0x1ca8U);
    a1 = (s32) ((u32) sp + 0x30U); func_008D3D20(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = func_008B9660();
    a0 = (s64) ((u64) v0 << 48);
    a0 = a0 >> 48;
    v0 = 9;
    if (a0 == v0) { (*(volatile u8 *) (u32) (s0 + 2838)) = (u8) 0; goto L_008B3DB8; }
    v0 = 8;
    if (a0 == v0) { (*(volatile u8 *) (u32) (s0 + 2838)) = (u8) 0; goto L_008B3DA4; }
    v0 = 5;
    if (a0 == v0) { (*(volatile u8 *) (u32) (s0 + 2838)) = (u8) 0; goto L_008B3D8C; }
    v1 = 4;
    if (a0 == v1) goto L_008B3D88;
    (*(volatile u8 *) (u32) (s0 + 2838)) = (u8) 0; goto L_008B3DD0;
L_008B3D88:;
    (*(volatile u8 *) (u32) (s0 + 2838)) = (u8) 0;
L_008B3D8C:;
    v0 = 1;
    (*(volatile u8 *) (u32) (s0 + 2839)) = (u8) v0;
    v0 = 3;
    (*(volatile u8 *) (u32) (s0 + 2840)) = (u8) v0;
    (*(volatile u8 *) (u32) (s0 + 2836)) = (u8) v0; goto L_008B3DEC;
L_008B3DA4:;
    v0 = 3;
    (*(volatile u8 *) (u32) (s0 + 2839)) = (u8) v0;
    v0 = 2;
    (*(volatile u8 *) (u32) (s0 + 2836)) = (u8) v0; goto L_008B3DEC;
L_008B3DB8:;
    v0 = 2;
    (*(volatile u8 *) (u32) (s0 + 2839)) = (u8) v0;
    v0 = 3;
    (*(volatile u8 *) (u32) (s0 + 2840)) = (u8) v0;
    (*(volatile u8 *) (u32) (s0 + 2836)) = (u8) v0; goto L_008B3DEC;
L_008B3DD0:;
    v0 = 1;
    (*(volatile u8 *) (u32) (s0 + 2839)) = (u8) v0;
    v0 = 2;
    (*(volatile u8 *) (u32) (s0 + 2840)) = (u8) v0;
    v0 = 3;
    (*(volatile u8 *) (u32) (s0 + 2841)) = (u8) v0;
    (*(volatile u8 *) (u32) (s0 + 2836)) = (u8) v1;
L_008B3DEC:;
    v0 = (*(volatile u8 *) (u32) (s0 + 35));
    if (v0 == 0) { v1 = (*(volatile u16 *) (u32) (s0 + 520)); goto L_008B3E34; }
    a0 = (*(volatile u8 *) (u32) (s0 + 2836));
    v0 = a0 < 10;
    { s32 c_ = v0 != 0; v1 = 5; if (c_) goto L_008B3E0C; }
    a0 = 9;
L_008B3E0C:;
    v0 = (s32) ((u32) a0 + (u32) s0);
    (*(volatile u8 *) (u32) (v0 + 2838)) = (u8) v1;
    v0 = (*(volatile u8 *) (u32) (s0 + 2836));
    v0 = (s32) ((u32) v0 + 0x1U);
    at = v0 < 11;
    if (at != 0) goto L_008B3E2C;
    v0 = 10;
L_008B3E2C:;
    (*(volatile u8 *) (u32) (s0 + 2836)) = (u8) v0;
    v1 = (*(volatile u16 *) (u32) (s0 + 520));
L_008B3E34:;
    v0 = 0xffff;
    if (v1 == v0) { v1 = (*(volatile u8 *) (u32) (s0 + 25)); goto L_008B3E5C; }
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = (s32) ((u32) s0 + 0x208U); func_008CB190(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a0 = (s32) ((u32) s0 + 0x129cU);
    a1 = (s32) ((u32) s0 + 0x208U); func_008E6650(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (*(volatile u8 *) (u32) (s0 + 25));
L_008B3E5C:;
    v0 = 255;
    if (v1 != v0) { a0 = (s32) ((u32) s0 + 0x129cU); goto L_008B3E94; }
    a0 = (s32) ((u32) s0 + 0x129cU);
    a1 = 0; func_008E5110(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = 0; func_008CB5D0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x1ca8U);
    a1 = 0; func_008D2FE0(a0, a1);
    goto L_008B3EE0;
L_008B3E94:;
    a1 = 1; func_008E5110(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (*(volatile u8 *) (u32) (s0 + 26));
    if (v0 != 0) { a0 = (s32) ((u32) s0 + 0xb0cU); goto L_008B3EC8; }
    v0 = func_008B9660();
    v1 = (s64) ((u64) v0 << 48);
    v1 = v1 >> 48;
    v0 = 4;
    if (v1 == v0) { a0 = (s32) ((u32) s0 + 0xb0cU); goto L_008B3ED8; }
    a0 = (s32) ((u32) s0 + 0xb0cU);
L_008B3EC8:;
    a1 = 1; func_008CB5D0(a0, a1, a2, a3);
    goto L_008B3EE0;
L_008B3ED8:;
    a1 = 0; func_008CB5D0(a0, a1, a2, a3);
L_008B3EE0:;
    a0 = (s32) 0x8b0000U;
    v1 = (s32) 0x8b0000U;
    a0 = (s32) ((u32) a0 + 0x3810U);
    v1 = (s32) ((u32) v1 + 0x37c0U);
    (*(volatile u32 *) (u32) (s0 + 3092)) = (u32) a0;
    (*(volatile u32 *) (u32) (s0 + 3096)) = (u32) s0;
    (*(volatile u32 *) (u32) (s0 + 3100)) = (u32) v1;
    (*(volatile u32 *) (u32) (s0 + 3104)) = (u32) s0;
    return;
}
