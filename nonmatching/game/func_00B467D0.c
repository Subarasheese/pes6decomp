/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00207D10(s32);
s32 func_00207D80(s32, s32);
void func_00208610(s32, s32, s32);
void func_0027B200(s32, s32, s32);
void func_00B2ACF0(s32, s32, s32, s32);
s32 func_00BAC710(s32, s32, s32, s32);
s32 func_00BBB990(s32, s32);
s32 func_00BBB9C0(s32, s32);
void func_00BD4040(s32, s32);

void func_00B467D0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };

    s0 = a0; func_00B2ACF0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) s0);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    a0 = (*(volatile u16 *) (u32) (v0 + 48)); v0 = func_00BAC710(a0, a1, a2, a3);
    v1 = 124;
    if (v0 == v1) { v0 = (*(volatile s32 *) (u32) s0); goto L_00B468BC; }
    v1 = 123;
    if (v0 == v1) { v0 = (*(volatile s32 *) (u32) s0); goto L_00B46870; }
    v1 = 122;
    if (v0 == v1) { v0 = (*(volatile s32 *) (u32) s0); goto L_00B46824; }
    v0 = (*(volatile s32 *) (u32) s0); goto L_00B46904;
L_00B46824:;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = 64; v0 = func_00207D80(a0, a1);
    if (v0 == 0) goto L_00B46900;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 4;
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    a0 = (*(volatile s32 *) (u32) v0);
    a2 = 0; func_0027B200(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 3;
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    a0 = (*(volatile s32 *) (u32) v0);
    a2 = 0; func_0027B200(a0, a1, a2);
    goto L_00B46900;
L_00B46870:;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = 112; v0 = func_00207D80(a0, a1);
    if (v0 == 0) goto L_00B46900;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 4;
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    a0 = (*(volatile s32 *) (u32) v0);
    a2 = 0; func_0027B200(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 3;
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    a0 = (*(volatile s32 *) (u32) v0);
    a2 = 0; func_0027B200(a0, a1, a2);
    goto L_00B46900;
L_00B468BC:;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = 60; v0 = func_00207D80(a0, a1);
    if (v0 == 0) goto L_00B46900;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 4;
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    a0 = (*(volatile s32 *) (u32) v0);
    a2 = 0; func_0027B200(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 3;
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    a0 = (*(volatile s32 *) (u32) v0);
    a2 = 0; func_0027B200(a0, a1, a2);
L_00B46900:;
    v0 = (*(volatile s32 *) (u32) s0);
L_00B46904:;
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); v0 = func_00207D10(a0);
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) s0); goto L_00B4691C; }
L_00B46914:;
    goto L_00B46998;
L_00B4691C:;
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); func_00208610(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) s0);
    v0 = (*(volatile u16 *) (u32) (v1 + 38));
    (*(volatile u16 *) (u32) (v1 + 44)) = (u16) v0;
    s1 = (*(volatile s32 *) (u32) s0);
    a0 = (*(volatile u16 *) (u32) (s1 + 38));
    a1 = 2048; v0 = func_00BBB990(a0, a1);
    f1.i = (s32) v0;
    f0.f = (*(volatile f32 *) (u32) (s1 + 224));
    f1.f = (f32) f1.i;
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (s1 + 108)) = f0.f;
    s1 = (*(volatile s32 *) (u32) s0);
    a0 = (*(volatile u16 *) (u32) (s1 + 38));
    a1 = 2048; v0 = func_00BBB9C0(a0, a1);
    f1.i = (s32) v0;
    v1 = 4;
    f0.f = (*(volatile f32 *) (u32) (s1 + 232));
    a0 = s0;
    f1.f = (f32) f1.i;
    a1 = 1;
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (s1 + 112)) = f0.f;
    v0 = (*(volatile s32 *) (u32) s0);
    (*(volatile u16 *) (u32) (v0 + 24)) = (u16) v1; func_00BD4040(a0, a1);
    goto L_00B46914;
L_00B46998:;
    return;
}
