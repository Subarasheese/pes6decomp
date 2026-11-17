/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009E1C90(s32);
void func_00BC5DB0(s32, s32, s32, s32, s32, s32);
s32 func_00BC6240(void);
s32 func_00BC71E0(s32, s32, s32, s32, s32, s32);

void func_00BC5EE0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    v1 = a0 & 0xff;
    a0 = 1;
    if (v1 != a0) goto L_00BC5FF0;
    v1 = (s32) 0xcc0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -10793));
    if (v1 == 0) goto L_00BC60C4;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 7629));
    v0 = (*(volatile s32 *) (u32) (v0 + 7692));
    v1 = (s32) ((u32) v1 + 0x1U);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    v1 = (s32) 0xcc0000U;
    v0 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v0 + -10793)) = (u8) 0;
    (*(volatile u32 *) (u32) (v1 + -10784)) = (u32) a1; v0 = func_009E1C90(a0);
    v1 = v0 & 0xff;
    v0 = 1;
    if (v1 == v0) goto L_00BC5FC4;
    v0 = (s32) 0x590000U;
    v1 = (s32) 0xc45c0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 7772));
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00BC5FC4;
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 7776));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00BC5F7C; }
L_00BC5F7C:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x44950000U;
    v0 = v0 | 0x6000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00BC5FC4;
    v0 = (s32) 0xcc0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -10794));
    at = v0 < 30;
    if (at == 0) goto L_00BC5FC4;
    v1 = 30;
    v0 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v0 + -10794)) = (u8) v1;
L_00BC5FC4:;
    v0 = (s32) 0xcc0000U;
    a1 = 255;
    a0 = (*(volatile s32 *) (u32) (gp + -32228));
    a2 = a1;
    a3 = (*(volatile u8 *) (u32) (v0 + -10794));
    a4 = 3;
    a5 = 0; v0 = func_00BC71E0(a0, a1, a2, a3, a4, a5);
    v1 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v1 + -10799)) = (u8) 0; goto L_00BC60C4;
L_00BC5FF0:;
    v0 = func_00BC6240();
    a1 = v0;
    at = (u64) a1 < (u64) (s64) 7;
    if (at == 0) goto L_00BC60C4;
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + 0x2290U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xbc6024U) goto L_00BC6024; if (t_ == 0xbc604cU) goto L_00BC604C; if (t_ == 0xbc6074U) goto L_00BC6074; if (t_ == 0xbc6098U) goto L_00BC6098; if (t_ == 0xbc60bcU) goto L_00BC60BC; if (t_ == 0xbc60c4U) goto L_00BC60C4; }
L_00BC6024:;
    v0 = (s32) 0xcc0000U;
    a1 = 255;
    a0 = (*(volatile s32 *) (u32) (gp + -32228));
    a2 = a1;
    a3 = (*(volatile u8 *) (u32) (v0 + -10791));
    a4 = 4;
    a5 = 0; v0 = func_00BC71E0(a0, a1, a2, a3, a4, a5);
    goto L_00BC60C8;
L_00BC604C:;
    v0 = (s32) 0xcc0000U;
    a1 = 255;
    a0 = (*(volatile s32 *) (u32) (gp + -32228));
    a2 = a1;
    a3 = (*(volatile u8 *) (u32) (v0 + -10794));
    a4 = 3;
    a5 = 0; v0 = func_00BC71E0(a0, a1, a2, a3, a4, a5);
    goto L_00BC60C4;
L_00BC6074:;
    a0 = (*(volatile s32 *) (u32) (gp + -32228));
    a1 = 255;
    a2 = a1;
    a3 = 50;
    a4 = 5;
    a5 = 0; v0 = func_00BC71E0(a0, a1, a2, a3, a4, a5);
    goto L_00BC60C4;
L_00BC6098:;
    a0 = (*(volatile s32 *) (u32) (gp + -32228));
    a1 = 255;
    a2 = a1;
    a3 = 1;
    a4 = 8;
    a5 = 0; v0 = func_00BC71E0(a0, a1, a2, a3, a4, a5);
    goto L_00BC60C4;
L_00BC60BC:;
    a0 = (*(volatile s32 *) (u32) (gp + -19444)); func_00BC5DB0(a0, a1, a2, a3, a4, a5);
L_00BC60C4:;
L_00BC60C8:;
    return;
}
