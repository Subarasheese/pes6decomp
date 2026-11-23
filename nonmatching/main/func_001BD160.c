/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001CDAA0(void);
void func_001D76B0(s32, s32);
void func_001D7F10(s32, s32, s32, s32);
void func_001EDD90(s32, s32, s32, s32);
void func_001EE5D0(s32, s32);
void func_001EF860(s32, s32);

s32 func_001BD160(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s32 fcc = 0;
    s64 frame[4];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x3f800000U;
    f2.i = (s32) v0;
    v0 = (s32) 0x530000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -25964));
    f1.f = f2.f - f1.f;
    v0 = (s32) 0x34000000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_001BD1CC;
    v0 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -25980));
    if (a0 == 0) { v0 = 1; goto L_001BD314; }
    func_001EDD90(a0, a1, a2, a3);
    v0 = (s32) 0x530000U;
    v1 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -25968));
    (*(volatile u32 *) (u32) (v1 + -25980)) = (u32) 0; func_001D7F10(a0, a1, a2, a3);
    v0 = 1;
    goto L_001BD314;
L_001BD1CC:;
    v0 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -25976));
    a1 = (s32) ((u32) sp + 0x10U); func_001EE5D0(a0, a1);
    v0 = func_001CDAA0();
    if (v0 != 0) { v0 = 71; goto L_001BD1F0; }
    v0 = 39;
L_001BD1F0:;
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
    if (v0 != 0) { v0 = 71; goto L_001BD240; }
    v0 = 39;
L_001BD240:;
    f0.i = (s32) v0;
    v1 = (s32) 0x530000U;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -25972));
    a1 = (s32) ((u32) sp + 0x10U);
    f0.f = (*(volatile f32 *) (u32) (v1 + -25964));
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (sp + 20)) = f0.f; func_001EF860(a0, a1);
    v0 = (s32) 0x43190000U;
    v1 = (s32) 0x3f800000U;
    f3.i = (s32) v0;
    v0 = (s32) 0x530000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -25964));
    f2.i = (s32) v1;
    v1 = (s32) 0x4f000000U;
    f1.f = f2.f - f1.f;
    f1.f = f3.f * f1.f;
    f0.i = (s32) v1;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_001BD2B0; }
    f0.i = (s32) f1.f;
    a1 = f0.i;
    a1 = a1 & 0xff; goto L_001BD2C8;
L_001BD2B0:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a1 = f0.i;
    a1 = a1 | v0;
    a1 = a1 & 0xff;
L_001BD2C8:;
    v0 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -25968)); func_001D76B0(a0, a1);
    v0 = (s32) 0x530000U;
    v1 = (s32) 0x3f800000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -25964));
    f1.i = (s32) v1;
    f0.f = f0.f + f1.f;
    v0 = (s32) 0x530000U;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; (*(volatile f32 *) (u32) (v0 + -25964)) = f0.f; if (c_) goto L_001BD304; }
    goto L_001BD308;
L_001BD304:;
    f0.i = f1.i;
L_001BD308:;
    v1 = (s32) 0x530000U;
    v0 = 0;
    (*(volatile f32 *) (u32) (v1 + -25964)) = f0.f;
L_001BD314:;
    return v0;
}
