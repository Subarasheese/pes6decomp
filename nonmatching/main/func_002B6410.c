/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002B64B0(s32, s32, s32, s32, f32);
s32 func_002B6700(s32, s32, s32, s32);
s32 func_002B6D10(s32, s32, s32, s32);
s32 func_002B7080(s32, s32, s32, s32);
s32 func_002B7490(s32, s32, s32, s32, f32);

s32 func_002B6410(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0;
    union { f32 f; s32 i; } f12 = { fa12 };

    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 10050));
    v1 = (s32) ((u32) v1 + 0xfffffff2U);
    at = (u64) v1 < (u64) (s64) 6;
    if (at == 0) goto L_002B64A0;
    a0 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffffa340U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x2b644cU) goto L_002B644C; if (t_ == 0x2b6464U) goto L_002B6464; if (t_ == 0x2b6478U) goto L_002B6478; if (t_ == 0x2b6488U) goto L_002B6488; if (t_ == 0x2b6498U) goto L_002B6498; }
L_002B644C:;
    a0 = 0;
    a1 = 0;
    a2 = 0; v0 = func_002B7490(a0, a1, a2, a3, f12.f);
    goto L_002B64A4;
L_002B6464:;
    a0 = 0;
    a1 = 0; v0 = func_002B7080(a0, a1, a2, a3);
    goto L_002B64A0;
L_002B6478:;
    v0 = func_002B6D10(a0, a1, a2, a3);
    goto L_002B64A0;
L_002B6488:;
    v0 = func_002B6700(a0, a1, a2, a3);
    goto L_002B64A0;
L_002B6498:;
    v0 = func_002B64B0(a0, a1, a2, a3, f12.f);
L_002B64A0:;
L_002B64A4:;
    return v0;
}
