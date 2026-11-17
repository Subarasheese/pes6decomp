/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00BDBA60(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    a2 = (*(volatile u8 *) (u32) (a0 + 19));
    a1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 + 0x1ee8U);
    v1 = (*(volatile u8 *) (u32) a0);
    a1 = (s32) ((u32) a1 + (u32) a2);
    a1 = (*(volatile u8 *) (u32) a1);
    { s32 c_ = v1 == a1; v0 = 0; if (c_) goto L_00BDBADC; }
    v1 = 255;
    if (a1 == v1) { a2 = 1; goto L_00BDBA98; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a1 / (s32) v1); hi = (s32) ((s32) a1 % (s32) v1); lo = q_; }
    a2 = hi;
L_00BDBA98:;
    a1 = (*(volatile s16 *) (u32) (a0 + 20));
    f1.f = (*(volatile f32 *) (u32) (a0 + 224));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0xffffe690U);
    a0 = (s32) ((u32) a2 << 3);
    a0 = (s32) ((u32) a0 + (u32) a2);
    a0 = (s32) ((u32) a0 << 6);
    f2.i = (s32) a1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    f0.f = (*(volatile f32 *) (u32) v1);
    f2.f = (f32) f2.i;
    f1.f = f2.f * f1.f;
    f0.f = f2.f * f0.f;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00BDBADC;
    v0 = 1;
L_00BDBADC:;
    return v0;
}
