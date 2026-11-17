/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00277220(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 fcc = 0;
    s64 frame[26];
    s32 sp = (s32) (u32) frame;

    a4 = (s32) 0x3b0000U;
    a4 = (s32) ((u32) a4 + 0xffffb6d0U);
    a3 = (s32) ((u32) sp + 0x80U);
    a2 = 18;
L_00277234:;
    v1 = (*(volatile s16 *) (u32) a4);
    a2 = (s32) ((u32) a2 + 0xffffffffU);
    v0 = (*(volatile s16 *) (u32) (a4 + 2));
    (*(volatile u16 *) (u32) a3) = (u16) v1;
    (*(volatile u16 *) (u32) (a3 + 2)) = (u16) v0;
    a4 = (s32) ((u32) a4 + 0x4U);
    { s32 c_ = a2 > 0; a3 = (s32) ((u32) a3 + 0x4U); if (c_) goto L_00277234; }
    a3 = (s32) 0x3b0000U;
    a2 = (s32) ((u32) sp + 0x0U);
    a3 = (s32) ((u32) a3 + 0xffffb720U);
    v1 = 31;
L_00277264:;
    v0 = (*(volatile s32 *) (u32) a3);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u32 *) (u32) a2) = (u32) v0;
    a3 = (s32) ((u32) a3 + 0x4U);
    a2 = (s32) ((u32) a2 + 0x4U);
    if (v1 > 0) goto L_00277264;
    if (a1 == 0) { v0 = (*(volatile u8 *) (u32) (a0 + 2)); goto L_0027729C; }
    v1 = (*(volatile u8 *) (u32) (a0 + 2));
    v0 = (*(volatile u8 *) (u32) (a0 + 3));
    v0 = (s32) ((u32) v1 - (u32) v0);
    if (v0 < 0) { v0 = 0; goto L_0027729C; }
L_0027729C:;
    a1 = (*(volatile u8 *) (u32) (a0 + 1));
    v0 = (s32) ((u32) v0 << 1);
    v1 = (s32) ((u32) a1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) sp);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u16 *) (u32) (v0 + 128));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_002772D0; }
    f0.i = (s32) v0;
    f2.f = (f32) f0.i; goto L_002772E8;
L_002772D0:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_002772E8:;
    v1 = (*(volatile u8 *) (u32) a0);
    v0 = (s32) 0x4f000000U;
    f0.i = (s32) v0;
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    f1.f = (*(volatile f32 *) (u32) v0);
    f1.f = f1.f * f2.f;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_00277320; }
    f0.i = (s32) f1.f;
    v1 = f0.i;
    v1 = v1 & 0xffff; goto L_00277338;
L_00277320:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    v1 = v1 | v0;
    v1 = v1 & 0xffff;
L_00277338:;
    v0 = v1 & 0xffff;
    if (v0 <= 0) { v0 = 0; goto L_00277354; }
    at = v0 < 21;
    if (at == 0) { v0 = 2; goto L_00277354; }
    v0 = 1;
L_00277354:;
    return v0;
}
