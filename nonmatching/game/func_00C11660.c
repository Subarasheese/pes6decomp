/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00C11660(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };

    f0.i = (s32) 0;
    if (a0 == 0) goto L_00C11820;
    v0 = 0;
L_00C11670:;
    a2 = (s32) ((u32) a0 + (u32) v0);
    v1 = (*(volatile u8 *) (u32) a2);
    if (v1 < 0) { a1 = (s32) ((u32) v1 >> 1); goto L_00C1168C; }
    f1.i = (s32) v1;
    f1.f = (f32) f1.i; goto L_00C116A4;
L_00C1168C:;
    v1 = v1 & 0x1;
    a1 = a1 | v1;
    f1.i = (s32) a1;
    f1.f = (f32) f1.i;
    f1.f = f1.f + f1.f;
L_00C116A4:;
    v1 = (*(volatile u8 *) (u32) (a2 + 1));
    { s32 c_ = v1 < 0; f0.f = f0.f + f1.f; if (c_) goto L_00C116BC; }
    f1.i = (s32) v1;
    f1.f = (f32) f1.i; goto L_00C116D8;
L_00C116BC:;
    a1 = (s32) ((u32) v1 >> 1);
    v1 = v1 & 0x1;
    a1 = a1 | v1;
    f1.i = (s32) a1;
    f1.f = (f32) f1.i;
    f1.f = f1.f + f1.f;
L_00C116D8:;
    v1 = (*(volatile u8 *) (u32) (a2 + 2));
    { s32 c_ = v1 < 0; f0.f = f0.f + f1.f; if (c_) goto L_00C116F0; }
    f1.i = (s32) v1;
    f1.f = (f32) f1.i; goto L_00C1170C;
L_00C116F0:;
    a1 = (s32) ((u32) v1 >> 1);
    v1 = v1 & 0x1;
    a1 = a1 | v1;
    f1.i = (s32) a1;
    f1.f = (f32) f1.i;
    f1.f = f1.f + f1.f;
L_00C1170C:;
    v1 = (*(volatile u8 *) (u32) (a2 + 3));
    { s32 c_ = v1 < 0; f0.f = f0.f + f1.f; if (c_) goto L_00C11724; }
    f1.i = (s32) v1;
    f1.f = (f32) f1.i; goto L_00C11740;
L_00C11724:;
    a1 = (s32) ((u32) v1 >> 1);
    v1 = v1 & 0x1;
    a1 = a1 | v1;
    f1.i = (s32) a1;
    f1.f = (f32) f1.i;
    f1.f = f1.f + f1.f;
L_00C11740:;
    v1 = (*(volatile u8 *) (u32) (a2 + 4));
    { s32 c_ = v1 < 0; f0.f = f0.f + f1.f; if (c_) goto L_00C11758; }
    f1.i = (s32) v1;
    f1.f = (f32) f1.i; goto L_00C11774;
L_00C11758:;
    a1 = (s32) ((u32) v1 >> 1);
    v1 = v1 & 0x1;
    a1 = a1 | v1;
    f1.i = (s32) a1;
    f1.f = (f32) f1.i;
    f1.f = f1.f + f1.f;
L_00C11774:;
    v1 = (*(volatile u8 *) (u32) (a2 + 5));
    { s32 c_ = v1 < 0; f0.f = f0.f + f1.f; if (c_) goto L_00C1178C; }
    f1.i = (s32) v1;
    f1.f = (f32) f1.i; goto L_00C117A8;
L_00C1178C:;
    a1 = (s32) ((u32) v1 >> 1);
    v1 = v1 & 0x1;
    a1 = a1 | v1;
    f1.i = (s32) a1;
    f1.f = (f32) f1.i;
    f1.f = f1.f + f1.f;
L_00C117A8:;
    v1 = (*(volatile u8 *) (u32) (a2 + 6));
    { s32 c_ = v1 < 0; f0.f = f0.f + f1.f; if (c_) goto L_00C117C0; }
    f1.i = (s32) v1;
    f1.f = (f32) f1.i; goto L_00C117DC;
L_00C117C0:;
    a1 = (s32) ((u32) v1 >> 1);
    v1 = v1 & 0x1;
    a1 = a1 | v1;
    f1.i = (s32) a1;
    f1.f = (f32) f1.i;
    f1.f = f1.f + f1.f;
L_00C117DC:;
    v1 = (*(volatile u8 *) (u32) (a2 + 7));
    { s32 c_ = v1 < 0; f0.f = f0.f + f1.f; if (c_) goto L_00C117F4; }
    f1.i = (s32) v1;
    f1.f = (f32) f1.i; goto L_00C11810;
L_00C117F4:;
    a1 = (s32) ((u32) v1 >> 1);
    v1 = v1 & 0x1;
    a1 = a1 | v1;
    f1.i = (s32) a1;
    f1.f = (f32) f1.i;
    f1.f = f1.f + f1.f;
L_00C11810:;
    v0 = (s32) ((u32) v0 + 0x8U);
    v1 = v0 < 48;
    { s32 c_ = v1 != 0; f0.f = f0.f + f1.f; if (c_) goto L_00C11670; }
L_00C11820:;
    return v0;
}
