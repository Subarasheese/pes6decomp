/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001A58E0(s32, s32);
s32 func_00BF6260(void);
s32 func_00BF6270(void);

void func_00B5DBD0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };
    volatile union { f32 f; s32 i; } f23 = { 0 };
    volatile union { f32 f; s32 i; } f24 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    v0 = func_00BF6270();
    v1 = 255;
    if (v0 == v1) { a0 = 1; goto L_00B5DC1C; }
    v0 = func_00BF6270();
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    a0 = hi;
L_00B5DC1C:;
    v1 = (s32) ((u32) a0 << 3);
    a2 = (s32) 0x590000U;
    a0 = (s32) ((u32) v1 + (u32) a0);
    a2 = (s32) ((u32) a2 + 0xffffe5b0U);
    a1 = (s32) ((u32) a0 << 6);
    v1 = (s32) 0xcc0000U;
    a0 = (*(volatile u8 *) (u32) (v1 + -13514));
    v1 = 4;
    { s32 c_ = a0 == v1; a1 = (s32) ((u32) a2 + (u32) a1); if (c_) goto L_00B5DD60; }
    f2.f = (*(volatile f32 *) (u32) (a2 + 224));
    s1 = (s32) 0x590000U;
    f1.f = (*(volatile f32 *) (u32) (a1 + 224));
    fcc = f1.f < f2.f;
    { s32 c_ = !fcc; s1 = (s32) ((u32) s1 + 0xffffe7f0U); if (c_) goto L_00B5DC74; }
    v1 = (s32) 0x44e00000U;
    f0.i = (s32) v1;
    f23.f = f0.f + f2.f;
    f21.f = f1.f - f0.f; goto L_00B5DC88;
L_00B5DC74:;
    v1 = (s32) 0x44e00000U;
    f0.i = (s32) v1;
    f21.f = f2.f - f0.f;
    f23.f = f0.f + f1.f;
L_00B5DC88:;
    f2.f = (*(volatile f32 *) (u32) (a2 + 232));
    f1.f = (*(volatile f32 *) (u32) (a1 + 232));
    fcc = f1.f < f2.f;
    if (!fcc) { v1 = (s32) 0x44e00000U; goto L_00B5DCB4; }
    v1 = (s32) 0x44e00000U;
    f0.i = (s32) v1;
    f22.f = f0.f + f2.f;
    f20.f = f1.f - f0.f; goto L_00B5DCC4;
L_00B5DCB4:;
    f0.i = (s32) v1;
    f20.f = f2.f - f0.f;
    f22.f = f0.f + f1.f;
L_00B5DCC4:;
    s0 = 0;
L_00B5DCC8:;
    f0.f = (*(volatile f32 *) (u32) (s1 + 224));
    fcc = f21.f <= f0.f;
    if (!fcc) goto L_00B5DD48;
    fcc = f0.f <= f23.f;
    if (!fcc) goto L_00B5DD48;
    f0.f = (*(volatile f32 *) (u32) (s1 + 232));
    fcc = f20.f <= f0.f;
    if (!fcc) goto L_00B5DD48;
    fcc = f0.f <= f22.f;
    if (!fcc) goto L_00B5DD48;
    s2 = (*(volatile u8 *) (u32) s1); v0 = func_00BF6270();
    if (s2 == v0) goto L_00B5DD48;
    s2 = (*(volatile u8 *) (u32) s1); v0 = func_00BF6260();
    if (s2 == v0) goto L_00B5DD48;
    v1 = (*(volatile u16 *) (u32) (s1 + 24));
    v1 = v1 < 12;
    if (v1 != 0) goto L_00B5DD48;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    (*(volatile u8 *) (u32) (v0 + 44)) = (u8) 0;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_001A58E0(a0, a1);
L_00B5DD48:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 22;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x240U); if (c_) goto L_00B5DCC8; }
    goto L_00B5DEE8;
L_00B5DD60:;
    f2.f = (*(volatile f32 *) (u32) (a1 + 224));
    f1.i = (s32) 0;
    fcc = f2.f <= f1.f;
    if (!fcc) { f0.f = (*(volatile f32 *) (u32) (a1 + 232)); goto L_00B5DEF0; }
L_00B5DD78:;
    f1.i = (s32) 0;
    fcc = f2.f <= f1.f;
    if (!fcc) { f0.f = (*(volatile f32 *) (u32) (a1 + 232)); goto L_00B5DF10; }
L_00B5DD8C:;
    f1.i = (s32) 0;
    fcc = f2.f < f1.f;
    if (fcc) { f0.f = (*(volatile f32 *) (u32) (a1 + 232)); goto L_00B5DF30; }
L_00B5DDA0:;
    f1.i = (s32) 0;
    fcc = f2.f < f1.f;
    if (!fcc) goto L_00B5DDD4;
    f0.f = (*(volatile f32 *) (u32) (a1 + 232));
    fcc = f0.f < f1.f;
    if (!fcc) goto L_00B5DDD4;
    v1 = (s32) 0xc6260000U;
    v1 = v1 | 0x6400;
    f21.i = (s32) v1;
    f20.i = f1.i;
L_00B5DDD4:;
    f0.f = (*(volatile f32 *) (u32) (a2 + 224));
    s1 = (s32) 0x590000U;
    fcc = f21.f < f0.f;
    { s32 c_ = !fcc; s1 = (s32) ((u32) s1 + 0xffffe7f0U); if (c_) goto L_00B5DE08; }
    a0 = (s32) 0x44a00000U;
    v1 = (s32) 0x44800000U;
    f2.i = (s32) a0;
    f1.i = (s32) v1;
    f24.f = f2.f + f0.f;
    f23.f = f21.f - f1.f; goto L_00B5DE24;
L_00B5DE08:;
    a0 = (s32) 0x44a00000U;
    v1 = (s32) 0x44800000U;
    f2.i = (s32) a0;
    f1.i = (s32) v1;
    f23.f = f0.f - f2.f;
    f24.f = f1.f + f21.f;
L_00B5DE24:;
    f0.f = (*(volatile f32 *) (u32) (a2 + 232));
    fcc = f20.f < f0.f;
    if (!fcc) { f21.f = f0.f - f2.f; goto L_00B5DE40; }
    f22.f = f2.f + f0.f;
    f21.f = f20.f - f1.f; goto L_00B5DE44;
L_00B5DE40:;
    f22.f = f1.f + f20.f;
L_00B5DE44:;
    s0 = 0;
L_00B5DE48:;
    f0.f = (*(volatile f32 *) (u32) (s1 + 224));
    fcc = f23.f <= f0.f;
    if (!fcc) goto L_00B5DED8;
    fcc = f0.f <= f24.f;
    if (!fcc) goto L_00B5DED8;
    f0.f = (*(volatile f32 *) (u32) (s1 + 232));
    fcc = f21.f <= f0.f;
    if (!fcc) goto L_00B5DED8;
    fcc = f0.f <= f22.f;
    if (!fcc) goto L_00B5DED8;
    v1 = (*(volatile u8 *) (u32) (s1 + 16));
    if (v1 == 0) goto L_00B5DED8;
    s2 = (*(volatile u8 *) (u32) s1); v0 = func_00BF6270();
    if (s2 == v0) goto L_00B5DED8;
    s2 = (*(volatile u8 *) (u32) s1); v0 = func_00BF6260();
    if (s2 == v0) goto L_00B5DED8;
    v1 = (*(volatile u16 *) (u32) (s1 + 24));
    v1 = v1 < 12;
    if (v1 != 0) goto L_00B5DED8;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    (*(volatile u8 *) (u32) (v0 + 44)) = (u8) 0;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_001A58E0(a0, a1);
L_00B5DED8:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 22;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x240U); if (c_) goto L_00B5DE48; }
L_00B5DEE8:;
    goto L_00B5DF50;
L_00B5DEF0:;
    fcc = f0.f <= f1.f;
    if (fcc) goto L_00B5DD78;
    v1 = (s32) 0x46260000U;
    v1 = v1 | 0x6400;
    f21.i = (s32) v1;
    f20.i = f1.i; goto L_00B5DDD4;
L_00B5DF10:;
    fcc = f0.f < f1.f;
    if (!fcc) goto L_00B5DD8C;
    v1 = (s32) 0x46260000U;
    v1 = v1 | 0x6400;
    f21.i = (s32) v1;
    f20.i = f1.i; goto L_00B5DDD4;
L_00B5DF30:;
    fcc = f0.f <= f1.f;
    if (fcc) goto L_00B5DDA0;
    v1 = (s32) 0xc6260000U;
    v1 = v1 | 0x6400;
    f21.i = (s32) v1;
    f20.i = f1.i; goto L_00B5DDD4;
L_00B5DF50:;
    return;
}
