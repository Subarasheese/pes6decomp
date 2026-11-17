/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00B2ACF0(s32, s32, s32, s32);
void func_00B84790(s32, s32, s32, s32, s32, f32);

void func_00B6BD20(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;

    s0 = a0; func_00B2ACF0(a0, a1, a2, a3);
    a2 = (*(volatile s32 *) (u32) s0);
    v1 = 1442;
    a3 = (*(volatile s32 *) (u32) (a2 + 4));
    a1 = (*(volatile u16 *) (u32) (a3 + 48));
    if (a1 == v1) { f12.f = (*(volatile f32 *) (u32) (a3 + 56)); goto L_00B6BDC4; }
    v1 = 1441;
    if (a1 == v1) { f12.f = (*(volatile f32 *) (u32) (a3 + 56)); goto L_00B6BD60; }
    goto L_00B6BE24;
L_00B6BD60:;
    v1 = (s32) 0x43160000U;
    f0.i = (s32) v1;
    fcc = f12.f < f0.f;
    if (!fcc) goto L_00B6BE20;
    v0 = (*(volatile s32 *) (u32) (a2 + 4));
    a0 = s0;
    a2 = (*(volatile u16 *) (u32) (a2 + 38));
    a3 = (*(volatile u8 *) (u32) (v0 + 45));
    a4 = 1; func_00B84790(a0, a1, a2, a3, a4, f12.f);
    v1 = (s32) 0x590000U;
    a1 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (v1 + 7788));
    a0 = (s32) 0x590000U;
    (*(volatile f32 *) (u32) (a1 + 16)) = f0.f;
    v1 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (a0 + 7792));
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile f32 *) (u32) (a0 + 20)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 7796));
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile f32 *) (u32) (v1 + 24)) = f0.f; goto L_00B6BE20;
L_00B6BDC4:;
    v1 = (s32) 0x43020000U;
    f0.i = (s32) v1;
    fcc = f12.f < f0.f;
    if (!fcc) goto L_00B6BE20;
    a2 = (*(volatile u16 *) (u32) (a2 + 38));
    a0 = s0;
    a3 = (*(volatile u8 *) (u32) (a3 + 45));
    a4 = 1; func_00B84790(a0, a1, a2, a3, a4, f12.f);
    v1 = (s32) 0x590000U;
    a1 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (v1 + 7788));
    a0 = (s32) 0x590000U;
    (*(volatile f32 *) (u32) (a1 + 16)) = f0.f;
    v1 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (a0 + 7792));
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile f32 *) (u32) (a0 + 20)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 7796));
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile f32 *) (u32) (v1 + 24)) = f0.f;
L_00B6BE20:;
L_00B6BE24:;
    return;
}
