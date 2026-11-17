/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00153FC0(s32, s32, s32, s32);

s32 func_0017F560(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    a4 = 0;
    if (a0 == 0) goto L_0017F598;
    if (a2 == 0) goto L_0017F598;
    a3 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) a3 + (u32) a0);
    v0 = (*(volatile s32 *) (u32) (v0 + 96));
    if (v0 == 0) { v0 = 1; goto L_0017F5A0; }
    goto L_0017F608;
L_0017F598:;
    v0 = 0; goto L_0017F604;
L_0017F5A0:;
    if (a1 == v0) { v1 = (*(volatile s32 *) (u32) (a0 + 88)); goto L_0017F5D0; }
    if (a1 == 0) { v1 = (*(volatile s32 *) (u32) (a0 + 88)); goto L_0017F5B8; }
    v0 = (s32) ((u32) a3 + (u32) a0); goto L_0017F5E8;
L_0017F5B8:;
    v0 = (s32) 0xfeff0000U;
    v0 = v0 | 0xffff;
    a4 = 64;
    v0 = v1 & v0;
    (*(volatile u32 *) (u32) (a0 + 88)) = (u32) v0; goto L_0017F5E4;
L_0017F5D0:;
    v0 = (s32) 0xfdff0000U;
    v0 = v0 | 0xffff;
    a4 = 16;
    v0 = v1 & v0;
    (*(volatile u32 *) (u32) (a0 + 88)) = (u32) v0;
L_0017F5E4:;
    v0 = (s32) ((u32) a3 + (u32) a0);
L_0017F5E8:;
    a1 = a4;
    (*(volatile u32 *) (u32) (v0 + 104)) = (u32) a2;
    a0 = (*(volatile s32 *) (u32) (v0 + 112));
    s0 = (s32) ((u32) v0 + 0x60U); v0 = func_00153FC0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) s0);
L_0017F604:;
L_0017F608:;
    return v0;
}
