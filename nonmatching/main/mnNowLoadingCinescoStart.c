/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001CDAA0(void);
void func_001D7BE0(s32, s32);
void func_001D7CE0(s32, s32);
void func_001D7D60(s32, s32);
void func_001EE5D0(s32, s32);
void func_001EF860(s32, s32);

s32 mnNowLoadingCinescoStart(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;
    s64 frame[4];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x530000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -25960));
    if (v0 == 0) goto L_001BD340;
    v0 = 1; goto L_001BD49C;
L_001BD340:;
    v0 = (s32) 0x530000U;
    v1 = (s32) 0x34000000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -25964));
    f0.i = (s32) v1;
    fcc = f1.f < f0.f;
    if (!fcc) { v1 = (s32) 0x3f800000U; goto L_001BD368; }
    v0 = 0; goto L_001BD49C;
L_001BD368:;
    v0 = (s32) 0x530000U;
    f0.i = (s32) v1;
    f1.f = f1.f - f0.f;
    f0.i = (s32) 0;
    fcc = f0.f <= f1.f;
    { s32 c_ = fcc; (*(volatile f32 *) (u32) (v0 + -25964)) = f1.f; if (c_) goto L_001BD394; }
    goto L_001BD398;
L_001BD394:;
    f0.i = f1.i;
L_001BD398:;
    v0 = (s32) 0x530000U;
    v1 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -25976));
    (*(volatile f32 *) (u32) (v1 + -25964)) = f0.f;
    a1 = (s32) ((u32) sp + 0x10U); func_001EE5D0(a0, a1);
    v0 = func_001CDAA0();
    if (v0 != 0) { v0 = 71; goto L_001BD3C4; }
    v0 = 39;
L_001BD3C4:;
    v0 = (s32) ((u32) 0 - (u32) v0);
    v1 = (s32) 0x530000U;
    f0.i = (s32) v0;
    a1 = (s32) ((u32) sp + 0x10U);
    f1.f = (f32) f0.i;
    v0 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -25976));
    f0.f = (*(volatile f32 *) (u32) (v1 + -25964));
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (sp + 20)) = f0.f; func_001EF860(a0, a1);
    v0 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -25972));
    a1 = (s32) ((u32) sp + 0x10U); func_001EE5D0(a0, a1);
    v0 = func_001CDAA0();
    if (v0 != 0) { v0 = 71; goto L_001BD414; }
    v0 = 39;
L_001BD414:;
    f0.i = (s32) v0;
    v1 = (s32) 0x530000U;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -25972));
    a1 = (s32) ((u32) sp + 0x10U);
    f0.f = (*(volatile f32 *) (u32) (v1 + -25964));
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (sp + 20)) = f0.f; func_001EF860(a0, a1);
    v0 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -25968));
    a1 = (s32) ((u32) sp + 0x10U); func_001D7BE0(a0, a1);
    v0 = func_001CDAA0();
    if (v0 != 0) { v0 = 71; goto L_001BD460; }
    v0 = 39;
L_001BD460:;
    f0.i = (s32) v0;
    v1 = (s32) 0x530000U;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -25968));
    a1 = (s32) ((u32) sp + 0x10U);
    f0.f = (*(volatile f32 *) (u32) (v1 + -25964));
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (sp + 20)) = f0.f; func_001D7CE0(a0, a1);
    v0 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -25968));
    a1 = 1; func_001D7D60(a0, a1);
    v0 = 0;
L_001BD49C:;
    return v0;
}
