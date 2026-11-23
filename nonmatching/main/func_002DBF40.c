/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001F1EA0(s32, s32, s32, s32);
s32 func_001F1F10(s32, s32, s32, s32);
s32 func_001F2050(s32, s32, s32, s32);
void func_001F27D0(s32, s32);
s32 func_001F2880(s32, s32, s32, s32);
void func_001F3D10(s32, s32);

void func_002DBF40(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };
    f32 acc = 0;

    s0 = a0;
    if (s0 == 0) { ; goto L_002DC174; }
    if (a1 >= 0) goto L_002DBF6C;
    a1 = 0;
L_002DBF6C:;
    if (a2 > 0) goto L_002DBF78;
    a2 = 1;
L_002DBF78:;
    (*(volatile u16 *) (u32) s0) = (u16) a1;
    (*(volatile u16 *) (u32) (s0 + 2)) = (u16) a2;
    a0 = (*(volatile s16 *) (u32) s0);
    v1 = (*(volatile s16 *) (u32) (s0 + 24));
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    at = a0 < v1;
    if (at == 0) goto L_002DBFA0;
    (*(volatile u16 *) (u32) (s0 + 24)) = (u16) a0; goto L_002DBFB4;
L_002DBFA0:;
    if (v1 >= 0) goto L_002DBFAC;
    v1 = 0;
L_002DBFAC:;
    a0 = v1;
    (*(volatile u16 *) (u32) (s0 + 24)) = (u16) a0;
L_002DBFB4:;
    a0 = (*(volatile s16 *) (u32) (s0 + 2));
    v1 = (*(volatile s16 *) (u32) s0);
    at = a0 < v1;
    if (at != 0) { a0 = (s32) ((u32) v1 - (u32) a0); goto L_002DBFD0; }
    (*(volatile u16 *) (u32) (s0 + 26)) = (u16) 0; goto L_002DBFFC;
L_002DBFD0:;
    v1 = (*(volatile s16 *) (u32) (s0 + 26));
    at = a0 < v1;
    if (at == 0) goto L_002DBFE8;
    (*(volatile u16 *) (u32) (s0 + 26)) = (u16) a0; goto L_002DBFFC;
L_002DBFE8:;
    if (v1 >= 0) goto L_002DBFF4;
    v1 = 0;
L_002DBFF4:;
    a0 = v1;
    (*(volatile u16 *) (u32) (s0 + 26)) = (u16) a0;
L_002DBFFC:;
    v1 = (*(volatile u8 *) (u32) (s0 + 12));
    v1 = v1 & 0x1;
    if (v1 != 0) { v1 = 0; goto L_002DC024; }
    a0 = (*(volatile s16 *) (u32) s0);
    v1 = (*(volatile s16 *) (u32) (s0 + 2));
    at = v1 < a0;
    if (at != 0) { v1 = 1; goto L_002DC024; }
    v1 = 0;
L_002DC024:;
    if (v1 == 0) { a0 = (*(volatile s32 *) (u32) (s0 + 52)); goto L_002DC0BC; }
    v1 = (*(volatile s32 *) (u32) (s0 + 52));
    if (v1 != 0) { a0 = (*(volatile s16 *) (u32) (s0 + 24)); goto L_002DC0D4; }
    v0 = func_001F1F10(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 52)) = (u32) v0;
    a0 = v0;
    a1 = 1; func_001F3D10(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 52)); v0 = func_001F2050(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 56)) = (u32) v0;
    v0 = (*(volatile u8 *) (u32) (s0 + 12));
    v0 = (s32) v0 >> 4;
    v0 = v0 & 0x1;
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) (s0 + 56)); goto L_002DC084; }
    a0 = (*(volatile s32 *) (u32) (s0 + 56));
    a1 = 1; func_001F3D10(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 56)); goto L_002DC090;
L_002DC084:;
    a1 = 0; func_001F3D10(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 56));
L_002DC090:;
    v0 = func_001F2880(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 60)) = (u32) v0;
    a1 = (*(volatile u8 *) (u32) (s0 + 16));
    a0 = v0; func_001F27D0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 60));
    a1 = 1; func_001F3D10(a0, a1);
    goto L_002DC0D0;
L_002DC0BC:;
    func_001F1EA0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 60)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 56)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 52)) = (u32) 0;
L_002DC0D0:;
    a0 = (*(volatile s16 *) (u32) (s0 + 24));
L_002DC0D4:;
    f0.f = (*(volatile f32 *) (u32) (s0 + 4));
    v1 = (*(volatile s16 *) (u32) (s0 + 26));
    f3.i = (s32) 0;
    f1.f = (*(volatile f32 *) (u32) (s0 + 8));
    acc = f3.f + f0.f;
    v1 = (s32) ((u32) a0 - (u32) v1);
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = acc + f1.f * f0.f;
    (*(volatile f32 *) (u32) (s0 + 28)) = f0.f;
    v1 = (*(volatile s16 *) (u32) (s0 + 26));
    f0.f = (*(volatile f32 *) (u32) (s0 + 4));
    f1.f = (*(volatile f32 *) (u32) (s0 + 8));
    f2.i = (s32) v1;
    acc = f3.f + f0.f;
    f0.f = (f32) f2.i;
    f0.f = acc - f0.f * f1.f;
    (*(volatile f32 *) (u32) (s0 + 32)) = f0.f;
    v1 = (*(volatile s8 *) (u32) (s0 + 21));
    if (v1 <= 0) { s2 = 0; goto L_002DC144; }
    (*(volatile u8 *) (u32) (s0 + 21)) = (u8) 0;
    v1 = (*(volatile u8 *) (u32) (s0 + 12));
    v1 = v1 | 0x8;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) v1;
    s2 = 0;
L_002DC144:;
    s1 = s0;
L_002DC148:;
    v1 = (*(volatile s32 *) (u32) (s1 + 36));
    if (v1 == 0) goto L_002DC160;
    a1 = (*(volatile s32 *) (u32) (s1 + 44));
    { u32 t_ = (u32) v1; a0 = s0; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
L_002DC160:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 2;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_002DC148; }
L_002DC174:;
    return;
}
