/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00153FE0(s32, s32);
s32 func_001886A0(void);
s32 func_00189020(s32, s32);
s32 func_00189040(void);

s32 func_0018BA30(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    s64 frame[4];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 288));
    if (v1 != 0) goto L_0018BAE4;
    v0 = func_00189040();
    if (v0 > 0) goto L_0018BA60;
L_0018BA58:;
    goto L_0018BAE8;
L_0018BA60:;
    v0 = (s32) 0x520000U;
    a0 = (*(volatile s16 *) (u32) (v0 + -78));
    a1 = 176; v0 = func_00153FE0(a0, a1);
    v1 = (s32) 0x520000U;
    { s32 c_ = v0 == 0; (*(volatile u32 *) (u32) (v1 + 288)) = (u32) v0; if (c_) goto L_0018BAE4; }
    a0 = (s32) ((u32) sp + 0x10U); v0 = func_00189020(a0, a1);
    v0 = (s32) 0x520000U;
    v1 = (s32) 0x520000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 288));
    f0.f = (*(volatile f32 *) (u32) (sp + 16));
    (*(volatile f32 *) (u32) a0) = f0.f;
    v0 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 288));
    f0.f = (*(volatile f32 *) (u32) (sp + 24));
    (*(volatile f32 *) (u32) (v1 + 8)) = f0.f;
    v0 = (*(volatile s32 *) (u32) (v0 + 288));
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) 0; v0 = func_001886A0();
    f0.i = (s32) v0;
    v1 = (s32) 0x520000U;
    a0 = (*(volatile s32 *) (u32) (v1 + 288));
    f0.f = (f32) f0.i;
    v1 = (s32) 0x520000U;
    (*(volatile f32 *) (u32) (a0 + 12)) = f0.f;
    v1 = (*(volatile s32 *) (u32) (v1 + 288));
    (*(volatile u16 *) (u32) (v1 + 44)) = (u16) 0;
    (*(volatile u16 *) (u32) (v1 + 84)) = (u16) 0;
    (*(volatile u16 *) (u32) (v1 + 124)) = (u16) 0;
    (*(volatile u16 *) (u32) (v1 + 164)) = (u16) 0; goto L_0018BA58;
L_0018BAE4:;
L_0018BAE8:;
    return v0;
}
