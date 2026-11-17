/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00154290(s32, s32);
s32 func_00154380(s32);
s32 func_001EF370(s32, s32);
s32 func_002D40F0(s32, s32, s32, s32);
s32 func_002D4280(s32, s32);
s32 func_009B4390(s32, s32, s32, s32);
s32 func_009B44E0(s32, s32, s32, s32);
s32 func_009B4580(s32, s32, s32, s32);

s32 func_002D3CB0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    s32 hi = 0, lo = 0;

    v1 = (s32) 0x5e0000U;
    a1 = (*(volatile u8 *) (u32) (v1 + 23904));
    v1 = 2;
    a1 = a1 & 0x2;
    if (a1 != v1) { ; goto L_002D3EA0; }
    v1 = (s32) 0x5e0000U;
    v0 = (s32) 0x5e0000U;
    v1 = (*(volatile u16 *) (u32) (v1 + 23906));
    s1 = a0;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u16 *) (u32) (v0 + 23906)) = (u16) v1; v0 = func_00154380(a0);
    s0 = v0;
    v1 = (s32) 0x5e0000U;
    v0 = (s32) 0x5e0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 23908));
    v0 = (s32) 0x5e0000U;
    (*(volatile u32 *) (u32) (v0 + 23908)) = (u32) s0;
    v0 = s0 ^ a0;
    (*(volatile u32 *) (u32) (v1 + 23912)) = (u32) v0; v0 = func_002D4280(a0, a1);
    v1 = (s32) 0x5e0000U;
    a0 = 1;
    v1 = (*(volatile u8 *) (u32) (v1 + 23904));
    v1 = v1 & 0x1;
    if (v1 != a0) { v1 = s0 & 0x8; goto L_002D3E9C; }
    v1 = s0 & 0x8;
    if (v1 != 0) goto L_002D3E9C;
    a0 = s1;
    a1 = 20; v0 = func_00154290(a0, a1);
    if (v0 != 0) goto L_002D3D6C;
    v0 = func_009B4390(a0, a1, a2, a3);
    s0 = v0 & 0xffff; v0 = func_009B44E0(a0, a1, a2, a3);
    v0 = v0 & 0xffff;
    if (s0 != v0) goto L_002D3D80;
L_002D3D6C:;
    v1 = (s32) 0x5e0000U;
    v0 = (s32) 0x5e0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 23904));
    v1 = v1 & 0xfb;
    (*(volatile u8 *) (u32) (v0 + 23904)) = (u8) v1;
L_002D3D80:;
    v0 = (s32) 0x5e0000U;
    v1 = 4;
    v0 = (*(volatile u8 *) (u32) (v0 + 23904));
    v0 = v0 & 0x4;
    if (v0 != v1) goto L_002D3DB8;
    v0 = (s32) 0x5e0000U;
    v1 = -9;
    a0 = (*(volatile s32 *) (u32) (v0 + 23916));
    a0 = a0 | 0x4;
    v0 = (s32) 0x5e0000U;
    v1 = a0 & v1;
    (*(volatile u32 *) (u32) (v0 + 23916)) = (u32) v1; goto L_002D3DD4;
L_002D3DB8:;
    v0 = (s32) 0x5e0000U;
    v1 = -5;
    a0 = (*(volatile s32 *) (u32) (v0 + 23916));
    a0 = a0 | 0x8;
    v0 = (s32) 0x5e0000U;
    v1 = a0 & v1;
    (*(volatile u32 *) (u32) (v0 + 23916)) = (u32) v1;
L_002D3DD4:;
    v0 = (*(volatile s32 *) (u32) (gp + -22000));
    if (v0 == 0) goto L_002D3E8C;
    v0 = func_009B4390(a0, a1, a2, a3);
    v0 = v0 & 0xffff;
    s0 = (s32) ((u32) v0 + 0x12cU); v0 = func_009B4580(a0, a1, a2, a3);
    v0 = v0 & 0xffff;
    v1 = 300;
    a0 = (s32) ((u32) s0 - (u32) v0);
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    v0 = (s32) 0x5e0000U;
    (*(volatile u32 *) (u32) (v0 + 23888)) = (u32) 0;
    v0 = (s32) 0x5e0000U;
    (*(volatile u32 *) (u32) (v0 + 23892)) = (u32) 0;
    v0 = hi;
    v0 = (s32) ((u32) v0 + 0x1U);
    v0 = v0 & 0xffff;
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_002D3E34; }
    f0.i = (s32) v0;
    f1.f = (f32) f0.i; goto L_002D3E4C;
L_002D3E34:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_002D3E4C:;
    v0 = (s32) 0x43960000U;
    a1 = (s32) 0x5e0000U;
    f0.i = (s32) v0;
    a3 = (s32) 0x5e0000U;
    f2.f = f1.f / f0.f;
    v1 = (s32) 0x5e0000U;
    a0 = (*(volatile s32 *) (u32) (gp + -22000));
    a2 = (s32) 0x5e0000U;
    v0 = (s32) 0x5e0000U;
    a1 = (s32) ((u32) a1 + 0x5d50U);
    f1.f = (*(volatile f32 *) (u32) (a3 + 23928));
    f0.f = (*(volatile f32 *) (u32) (v1 + 23932));
    f1.f = f1.f * f2.f;
    (*(volatile f32 *) (u32) (a2 + 23896)) = f1.f;
    (*(volatile f32 *) (u32) (v0 + 23900)) = f0.f; v0 = func_001EF370(a0, a1);
L_002D3E8C:;
    v0 = func_002D40F0(a0, a1, a2, a3);
    goto L_002D3E9C;
L_002D3E9C:;
L_002D3EA0:;
    return v0;
}
