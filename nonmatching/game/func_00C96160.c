/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_002A8930(void);
void func_002A8940(s32, f32);
s32 func_00BBB8C0(s32);

void func_00C96160(s32 a0, s32 a1, s32 a2, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;
    f32 acc = 0;

    v1 = (s32) 0xcc0000U;
    a0 = 32;
    a2 = (*(volatile u16 *) (u32) (gp + -19116));
    a1 = (*(volatile u8 *) (u32) (v1 + -13513));
    v1 = (s32) ((u32) a2 + 0x1U);
    { s32 c_ = a1 != a0; (*(volatile u16 *) (u32) (gp + -19116)) = (u16) v1; if (c_) goto L_00C96224; }
    a1 = v1 & 0xffff;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v1 + 7140));
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    if (a1 != v1) goto L_00C961C4;
    a0 = 10; v0 = func_00BBB8C0(a0);
    at = v0 < 5;
    if (at == 0) goto L_00C961C4;
    a0 = 6;
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + 10048)) = (u8) a0; goto L_00C9637C;
L_00C961C4:;
    v1 = (s32) 0x590000U;
    a1 = (*(volatile u16 *) (u32) (gp + -19116));
    a0 = (*(volatile u8 *) (u32) (v1 + 7140));
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = a1 < v1;
    if (v1 != 0) { ; goto L_00C96380; }
    f0.f = func_002A8930();
    v1 = (s32) 0x44610000U;
    f1.i = (s32) v1;
    fcc = f0.f <= f1.f;
    if (fcc) goto L_00C9637C;
    f0.f = func_002A8930();
    v0 = (s32) 0x40800000U;
    f1.i = (s32) v0;
    f12.f = f0.f - f1.f; func_002A8940(a0, f12.f);
    goto L_00C9637C;
L_00C96224:;
    a1 = v1 & 0xffff;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v1 + 7140));
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    if (a1 != v1) goto L_00C96324;
    a0 = 10; v0 = func_00BBB8C0(a0);
    at = v0 < 5;
    if (at == 0) goto L_00C96324;
    v1 = (s32) 0x590000U;
    a0 = (s32) 0x3fc00000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 7140));
    f3.i = (s32) a0;
    if (v1 < 0) { a0 = (s32) ((u32) v1 >> 1); goto L_00C96278; }
    f0.i = (s32) v1;
    f2.f = (f32) f0.i; goto L_00C96290;
L_00C96278:;
    v1 = v1 & 0x1;
    a0 = a0 | v1;
    f0.i = (s32) a0;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00C96290:;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 7700));
    if (v1 < 0) { a0 = (s32) ((u32) v1 >> 1); goto L_00C962AC; }
    f0.i = (s32) v1;
    f1.f = (f32) f0.i; goto L_00C962C4;
L_00C962AC:;
    v1 = v1 & 0x1;
    a0 = a0 | v1;
    f0.i = (s32) a0;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_00C962C4:;
    f0.i = (s32) 0;
    v1 = (s32) 0x4f000000U;
    acc = f0.f + f1.f;
    f1.f = acc - f3.f * f2.f;
    f0.i = (s32) v1;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_00C962F8; }
    f0.i = (s32) f1.f;
    a1 = f0.i;
    goto L_00C9630C;
L_00C962F8:;
    v1 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a1 = f0.i;
    a1 = a1 | v1;
L_00C9630C:;
    v1 = (s32) 0x590000U;
    a0 = 6;
    (*(volatile u32 *) (u32) (v1 + 7700)) = (u32) a1;
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + 10048)) = (u8) a0; goto L_00C9637C;
L_00C96324:;
    v1 = (s32) 0x590000U;
    a1 = (*(volatile u16 *) (u32) (gp + -19116));
    a0 = (*(volatile u8 *) (u32) (v1 + 7140));
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = a1 < v1;
    if (v1 != 0) goto L_00C9637C;
    f0.f = func_002A8930();
    v1 = (s32) 0x44610000U;
    f1.i = (s32) v1;
    fcc = f0.f <= f1.f;
    if (fcc) goto L_00C9637C;
    f0.f = func_002A8930();
    v0 = (s32) 0x40800000U;
    f1.i = (s32) v0;
    f12.f = f0.f - f1.f; func_002A8940(a0, f12.f);
L_00C9637C:;
L_00C96380:;
    return;
}
