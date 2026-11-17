/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002AC7F0(s32, s32, s32, s32, f32, f32);

s32 func_002B98C0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };

    v0 = (s32) 0x3a830000U;
    v0 = v0 | 0x126f;
    f1.f = (*(volatile f32 *) (u32) (a0 + 8));
    a1 = (s32) 0x5e0000U;
    f0.i = (s32) v0;
    a1 = (s32) ((u32) a1 + 0x30e0U);
    f1.f = (f32) f1.i;
    a0 = (*(volatile s32 *) (u32) (a0 + 4));
    f12.f = f0.f * f1.f; v0 = func_002AC7F0(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) goto L_002B9900;
L_002B98F8:;
    v0 = 0; goto L_002B991C;
L_002B9900:;
    v0 = (s32) 0x5e0000U;
    v1 = (s32) 0x5e0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 12152));
    v1 = (s32) ((u32) v1 + 0x2f9cU);
    v0 = (s32) ((u32) v1 + (u32) v0);
    (*(volatile u8 *) (u32) v0) = (u8) 0; goto L_002B98F8;
L_002B991C:;
    return v0;
}
