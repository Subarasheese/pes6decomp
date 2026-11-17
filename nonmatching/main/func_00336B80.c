/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_0030EBB0(s32, s32, f32);
s32 func_0030EE80(s32);
s32 func_003109B0(void);
s32 func_00333600(s32);
s32 func_00341910(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_00336B80(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s3 = a3;
    s2 = a0;
    s1 = a1;
    s0 = a2;
    a0 = 3;
    v0 = func_00333600(a0);
    if (v0 == 0) { v0 = (*(volatile u8 *) (u32) (s3 + 120)); goto L_00336BC4; }
    v0 = func_003109B0();
L_00336BC4:;
    s3 = v0 & 0xff;
    a0 = (s32) ((u32) sp + 0x60U); v0 = func_0030EE80(a0);
    f0.f = (*(volatile f32 *) (u32) (sp + 100));
    v0 = (s32) 0xbf800000U;
    f1.i = (s32) v0;
    a0 = s3;
    f12.f = (*(volatile f32 *) (u32) (sp + 104));
    a1 = 1;
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (sp + 100)) = f0.f; f0.f = func_0030EBB0(a0, a1, f12.f);
    (*(volatile f32 *) (u32) (sp + 104)) = f0.f;
    f20.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x44700000U;
    v0 = v0 | 0xc000;
    f0.i = (s32) v0;
    fcc = f20.f < f0.f;
    if (!fcc) { a0 = 1; goto L_00336C20; }
    v0 = 1; goto L_00336C8C;
L_00336C20:;
    a1 = 5;
    a2 = 10; v0 = func_00341910(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) { f1.f = (*(volatile f32 *) (u32) (sp + 100)); goto L_00336C58; }
    f1.f = (*(volatile f32 *) (u32) (sp + 104));
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (!fcc) { v0 = 3; goto L_00336C50; }
    v0 = 4;
L_00336C50:;
    f0.f = (*(volatile f32 *) (u32) (s2 + 76)); goto L_00336C90;
L_00336C58:;
    v0 = (s32) 0x44220000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) { v0 = 0; goto L_00336C8C; }
    f1.f = (*(volatile f32 *) (u32) (sp + 104));
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (!fcc) { v0 = 3; goto L_00336C8C; }
    v0 = 4;
L_00336C8C:;
    f0.f = (*(volatile f32 *) (u32) (s2 + 76));
L_00336C90:;
    fcc = f20.f <= f0.f;
    if (fcc) { f0.f = (*(volatile f32 *) (u32) (s2 + 80)); goto L_00336CA4; }
    v1 = 4; goto L_00336CE0;
L_00336CA4:;
    fcc = f20.f <= f0.f;
    if (fcc) { f1.f = (*(volatile f32 *) (u32) (sp + 100)); goto L_00336CB8; }
    v1 = 3; goto L_00336CE0;
L_00336CB8:;
    f0.f = (*(volatile f32 *) (u32) (s2 + 84));
    fcc = f1.f <= f0.f;
    if (fcc) { f0.f = (*(volatile f32 *) (u32) (s2 + 88)); goto L_00336CD0; }
    v1 = 4; goto L_00336CE0;
L_00336CD0:;
    fcc = f1.f <= f0.f;
    if (fcc) { v1 = 2; goto L_00336CE0; }
    v1 = 3;
L_00336CE0:;
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    (*(volatile u32 *) (u32) s1) = (u32) v1;
    v0 = 1;
    return v0;
}
