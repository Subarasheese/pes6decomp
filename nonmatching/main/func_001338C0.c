/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_001338C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };

    v1 = (*(volatile u8 *) (u32) (a0 + 5));
    at = 0 < v1;
    { s32 c_ = at == 0; a2 = 0; if (c_) goto L_00133A08; }
    at = v1 < 9;
    { s32 c_ = at != 0; v0 = (s32) ((u32) v1 + 0xfffffff8U); if (c_) goto L_001339D0; }
    at = v1 < 0;
    a5 = 0;
    { s32 c_ = at != 0; a3 = 0; if (c_) goto L_00133A10; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = v1 < at;
    if (at == 0) goto L_00133A10;
    a3 = 1; goto L_00133A10;
L_00133908:;
    a3 = v1 & a3;
    { s32 c_ = a3 != 0; a4 = 1; if (c_) goto L_00133920; }
    if (a3 == 0) goto L_00133920;
    a4 = 0;
L_00133920:;
    if (a4 == 0) goto L_0013392C;
    a5 = 1;
L_0013392C:;
    if (a5 == 0) goto L_001339D0;
    a6 = 0;
    a5 = a1;
L_0013393C:;
    a4 = (*(volatile s32 *) (u32) (a0 + 12));
    a2 = (s32) ((u32) a2 + 0x8U);
    a3 = a2 < v0;
    a4 = (s32) ((u32) a4 + (u32) a6);
    f0.f = (*(volatile f32 *) (u32) a4);
    (*(volatile f32 *) (u32) a5) = f0.f;
    a4 = (*(volatile s32 *) (u32) (a0 + 12));
    a4 = (s32) ((u32) a4 + (u32) a6);
    f0.f = (*(volatile f32 *) (u32) (a4 + 4));
    (*(volatile f32 *) (u32) (a5 + 4)) = f0.f;
    a4 = (*(volatile s32 *) (u32) (a0 + 12));
    a4 = (s32) ((u32) a4 + (u32) a6);
    f0.f = (*(volatile f32 *) (u32) (a4 + 8));
    (*(volatile f32 *) (u32) (a5 + 8)) = f0.f;
    a4 = (*(volatile s32 *) (u32) (a0 + 12));
    a4 = (s32) ((u32) a4 + (u32) a6);
    f0.f = (*(volatile f32 *) (u32) (a4 + 12));
    (*(volatile f32 *) (u32) (a5 + 12)) = f0.f;
    a4 = (*(volatile s32 *) (u32) (a0 + 12));
    a4 = (s32) ((u32) a4 + (u32) a6);
    f0.f = (*(volatile f32 *) (u32) (a4 + 16));
    (*(volatile f32 *) (u32) (a5 + 16)) = f0.f;
    a4 = (*(volatile s32 *) (u32) (a0 + 12));
    a4 = (s32) ((u32) a4 + (u32) a6);
    f0.f = (*(volatile f32 *) (u32) (a4 + 20));
    (*(volatile f32 *) (u32) (a5 + 20)) = f0.f;
    a4 = (*(volatile s32 *) (u32) (a0 + 12));
    a4 = (s32) ((u32) a4 + (u32) a6);
    f0.f = (*(volatile f32 *) (u32) (a4 + 24));
    (*(volatile f32 *) (u32) (a5 + 24)) = f0.f;
    a4 = (*(volatile s32 *) (u32) (a0 + 12));
    a4 = (s32) ((u32) a4 + (u32) a6);
    f0.f = (*(volatile f32 *) (u32) (a4 + 28));
    a6 = (s32) ((u32) a6 + 0x20U);
    (*(volatile f32 *) (u32) (a5 + 28)) = f0.f;
    { s32 c_ = a3 != 0; a5 = (s32) ((u32) a5 + 0x20U); if (c_) goto L_0013393C; }
L_001339D0:;
    at = a2 < v1;
    if (at == 0) goto L_00133A08;
    a5 = (s32) ((u32) a2 << 2);
    a4 = (s32) ((u32) a1 + (u32) a5);
L_001339E4:;
    a3 = (*(volatile s32 *) (u32) (a0 + 12));
    a2 = (s32) ((u32) a2 + 0x1U);
    v0 = a2 < v1;
    a3 = (s32) ((u32) a3 + (u32) a5);
    f0.f = (*(volatile f32 *) (u32) a3);
    a5 = (s32) ((u32) a5 + 0x4U);
    (*(volatile f32 *) (u32) a4) = f0.f;
    { s32 c_ = v0 != 0; a4 = (s32) ((u32) a4 + 0x4U); if (c_) goto L_001339E4; }
L_00133A08:;
    v0 = a1; goto L_00133A20;
L_00133A10:;
    if (a3 == 0) goto L_0013392C;
    a3 = (s32) 0x80000000U; goto L_00133908;
L_00133A20:;
    return v0;
}
