/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00145590(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00182070(s32, s32, s32, s32);

void func_00182F30(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    a0 = 18;
    a1 = 3;
    func_00182070(a0, a1, a2, a3);
    v1 = (s32) 0x520000U;
    s1 = 0;
    v1 = (*(volatile s32 *) (u32) (v1 + -84));
    s0 = 0;
    s2 = (s32) ((u32) v1 + 0x4U);
L_00182F64:;
    v1 = 4;
    if (s1 == v1) goto L_00182F90;
    v1 = (*(volatile s32 *) (u32) s2);
    v1 = (s32) ((u32) v1 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) v1);
    if (a0 == 0) goto L_00182F90;
    func_00145590(a0, a1, a2, a3, a4, a5, a6, a7);
L_00182F90:;
    s1 = (s32) ((u32) s1 + 0x1U);
    at = s1 < 6;
    { s32 c_ = at != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00182F64; }
    return;
}
