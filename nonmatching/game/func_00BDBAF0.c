/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00BDBAF0(f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;

    v0 = 0;
    f13.i = f13.i & 0x7FFFFFFF;
    v1 = (s32) 0x45120000U;
    v1 = v1 | 0x8000;
    f0.i = (s32) v1;
    fcc = f13.f < f0.f;
    if (!fcc) goto L_00BDBB50;
    f1.i = f12.i;
    f1.i = f1.i & 0x7FFFFFFF;
    v1 = (s32) 0x463c0000U;
    v1 = v1 | 0x6400;
    f0.i = (s32) v1;
    fcc = f0.f < f1.f;
    if (!fcc) goto L_00BDBB50;
    f0.i = (s32) 0;
    fcc = f0.f < f12.f;
    if (!fcc) { v0 = -1; goto L_00BDBB50; }
    v0 = 1;
L_00BDBB50:;
    return v0;
}
