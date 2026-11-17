/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00A0ACA0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 fcc = 0;

    a2 = (*(volatile s16 *) (u32) (a0 + 20));
    v1 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    a0 = (*(volatile u8 *) (u32) (v1 + 9963));
    f1.i = (s32) a2;
    a3 = (s32) ((u32) v0 + 0x47cU);
    f2.f = (f32) f1.i;
    v1 = (s32) 0xc6500000U;
    a0 = (s32) ((u32) a0 << 2);
    v1 = v1 | 0x6400;
    f0.i = (s32) v1;
    v1 = (s32) ((u32) a3 + (u32) a0);
    f1.f = (*(volatile f32 *) (u32) v1);
    f1.f = f2.f * f1.f;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00A0AD30;
    v1 = (s32) ((u32) a0 + (u32) v0);
    f0.f = (*(volatile f32 *) (u32) (v1 + 2940));
    f0.i = (s32) f0.f;
    v1 = f0.i;
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_00A0AD00; }
L_00A0AD00:;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    v1 = (s32) 0x45a10000U;
    v1 = v1 | 0x4000;
    f0.i = (s32) v1;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00A0AD30;
    v0 = 1; goto L_00A0AE48;
L_00A0AD30:;
    v1 = (s32) 0x590000U;
    a0 = (s32) 0xc6500000U;
    a1 = (*(volatile u8 *) (u32) (v1 + 9958));
    f1.i = (s32) a2;
    f2.f = (f32) f1.i;
    v1 = a0 | 0x6400;
    a0 = (s32) ((u32) a1 << 2);
    f0.i = (s32) v1;
    v1 = (s32) ((u32) a3 + (u32) a0);
    f1.f = (*(volatile f32 *) (u32) v1);
    f1.f = f2.f * f1.f;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00A0ADB8;
    v1 = (s32) ((u32) a0 + (u32) v0);
    f0.f = (*(volatile f32 *) (u32) (v1 + 2940));
    f0.i = (s32) f0.f;
    v1 = f0.i;
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_00A0AD88; }
L_00A0AD88:;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    v1 = (s32) 0x45a10000U;
    v1 = v1 | 0x4000;
    f0.i = (s32) v1;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00A0ADB8;
    v0 = 1; goto L_00A0AE48;
L_00A0ADB8:;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v1 + 9952));
    f0.i = (s32) a2;
    f2.f = (f32) f0.i;
    a1 = (s32) ((u32) a0 << 2);
    v1 = (s32) 0xc6500000U;
    a0 = (s32) ((u32) a3 + (u32) a1);
    v1 = v1 | 0x6400;
    f1.f = (*(volatile f32 *) (u32) a0);
    f0.i = (s32) v1;
    f1.f = f2.f * f1.f;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00A0AE44;
    v0 = (s32) ((u32) a1 + (u32) v0);
    f0.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00A0AE14; }
L_00A0AE14:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x45a10000U;
    v0 = v0 | 0x4000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00A0AE44;
    v0 = 1; goto L_00A0AE48;
L_00A0AE44:;
    v0 = 0;
L_00A0AE48:;
    return v0;
}
