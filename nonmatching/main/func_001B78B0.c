/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001B70A0(s32, s32, s32, s32, f32);

s32 func_001B78B0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    v0 = 1;
    if (a0 == v0) goto L_001B78F0;
    if (a0 == 0) goto L_001B78CC;
    goto L_001B7910;
L_001B78CC:;
    v1 = (s32) 0x3f0000U;
    v0 = (s32) 0x520000U;
    v1 = (*(volatile s16 *) (u32) (v1 + 30612));
    v1 = (s32) ((u32) v1 + 0xffffffecU);
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (v0 + 18328)) = f0.f; goto L_001B7910;
L_001B78F0:;
    v1 = (s32) 0x3f0000U;
    v0 = (s32) 0x520000U;
    v1 = (*(volatile s16 *) (u32) (v1 + 30612));
    v1 = (s32) ((u32) v1 + 0xffffff88U);
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (v0 + 18328)) = f0.f;
L_001B7910:;
    v0 = func_001B70A0(a0, a1, a2, a3, f12.f); return v0;
}
