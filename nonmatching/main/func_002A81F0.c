/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_002A82B0(s32, s32, s32, s32);

void func_002A81F0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;

    v0 = (s32) 0x5e0000U;
    a2 = 1;
    (*(volatile u32 *) (u32) (v0 + 7996)) = (u32) a1;
    v1 = (s32) 0x5e0000U;
    v0 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v1 + 8036)) = (u8) a2;
    (*(volatile u8 *) (u32) (v0 + 8037)) = (u8) 0; f0.f = func_002A82B0(a0, a1, a2, a3);
    f1.i = (s32) 0;
    a0 = (s32) 0x5e0000U;
    v1 = (s32) 0x5e0000U;
    fcc = f1.f == f0.f;
    (*(volatile u32 *) (u32) (v1 + 7988)) = (u32) 0;
    { s32 c_ = fcc; (*(volatile f32 *) (u32) (a0 + 7992)) = f0.f; if (c_) goto L_002A8294; }
L_002A8234:;
    a0 = (s32) 0x5e0000U;
    a1 = (s32) 0x5e0000U;
    f0.f = (*(volatile f32 *) (u32) (a0 + 7992));
    v1 = (s32) 0x5e0000U;
    a2 = 0;
    a1 = (s32) ((u32) a1 + 0x16c0U);
    (*(volatile f32 *) (u32) (v1 + 8016)) = f0.f;
    a0 = 255;
L_002A8254:;
    (*(volatile u8 *) (u32) (a1 + 688)) = (u8) a0;
    a2 = (s32) ((u32) a2 + 0x7U);
    (*(volatile u8 *) (u32) (a1 + 689)) = (u8) a0;
    v1 = a2 < 36;
    (*(volatile u8 *) (u32) (a1 + 690)) = (u8) a0;
    (*(volatile u8 *) (u32) (a1 + 691)) = (u8) a0;
    (*(volatile u8 *) (u32) (a1 + 692)) = (u8) a0;
    (*(volatile u8 *) (u32) (a1 + 693)) = (u8) a0;
    (*(volatile u8 *) (u32) (a1 + 694)) = (u8) a0;
    { s32 c_ = v1 != 0; a1 = (s32) ((u32) a1 + 0x7U); if (c_) goto L_002A8254; }
    v1 = (s32) 0x5e0000U;
    v1 = (s32) ((u32) v1 + 0x1970U);
    v1 = (s32) ((u32) v1 + (u32) a2);
    (*(volatile u8 *) (u32) v1) = (u8) a0; goto L_002A82A4;
L_002A8294:;
    a0 = (s32) 0x3f800000U;
    v1 = (s32) 0x5e0000U;
    (*(volatile u32 *) (u32) (v1 + 7992)) = (u32) a0; goto L_002A8234;
L_002A82A4:;
    return;
}
