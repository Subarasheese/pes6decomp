/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_002A58B0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;

    v0 = (s32) ((u32) a2 << 1);
    v0 = (s32) ((u32) v0 + (u32) a2);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) a1 + (u32) v0);
    f1.f = (*(volatile f32 *) (u32) v0);
    f0.f = (*(volatile f32 *) (u32) a0);
    fcc = f0.f < f1.f;
    { s32 c_ = fcc; v1 = 1; if (c_) goto L_002A58D8; }
    v1 = 0;
L_002A58D8:;
    v0 = v1 & 0xff; return v0;
}
