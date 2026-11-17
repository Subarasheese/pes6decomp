/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00B2A420(s32);
void func_00BD3BA0(s32, s32, s32);
void func_00BD3CF0(s32, s32, s32, s32, f32, f32);
void func_00BD4040(s32, s32);
s32 func_00BF6270(void);

void func_00BE4430(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;

    v0 = (s32) 0xcc0000U;
    s0 = a0;
    a0 = (*(volatile u8 *) (u32) (v0 + -13616)); v0 = func_00B2A420(a0);
    s2 = (*(volatile s32 *) (u32) s0);
    s1 = (*(volatile u8 *) (u32) s2); v0 = func_00BF6270();
    if (s1 != v0) goto L_00BE44EC;
    v0 = 175;
    (*(volatile u16 *) (u32) (s2 + 24)) = (u16) v0;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (*(volatile s32 *) (u32) s0);
    f0.f = (*(volatile f32 *) (u32) (v1 + 16));
    (*(volatile f32 *) (u32) (v0 + 108)) = f0.f;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (*(volatile s32 *) (u32) s0);
    f0.f = (*(volatile f32 *) (u32) (v1 + 24));
    (*(volatile f32 *) (u32) (v0 + 112)) = f0.f;
L_00BE4490:;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 18));
    if (v0 != 0) { a0 = s0; goto L_00BE44C4; }
    a0 = s0;
    a1 = 3; func_00BD4040(a0, a1);
    a0 = s0;
    a1 = 4;
    a2 = 1; func_00BD3BA0(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) s0); goto L_00BE44D4;
L_00BE44C4:;
    a1 = 0;
    a2 = 0; func_00BD3BA0(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) s0);
L_00BE44D4:;
    f12.f = (*(volatile f32 *) (u32) (v0 + 108));
    f13.f = (*(volatile f32 *) (u32) (v0 + 112));
    a0 = s0; func_00BD3CF0(a0, a1, a2, a3, f12.f, f13.f);
    goto L_00BE4590;
L_00BE44EC:;
    v0 = (s32) 0xcc0000U;
    s1 = (*(volatile u8 *) (u32) (v0 + -13616)); v0 = func_00BF6270();
    if (s1 != v0) goto L_00BE4560;
    v0 = (s32) 0xcc0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -12927));
    if (v0 != 0) goto L_00BE4560;
    a0 = (*(volatile s32 *) (u32) s0);
    f0.f = (*(volatile f32 *) (u32) (a0 + 224));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45d20000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00BE4560;
    v0 = 173;
    v1 = 1;
    (*(volatile u16 *) (u32) (a0 + 24)) = (u16) v0;
    a0 = (*(volatile s32 *) (u32) s0);
    v0 = (s32) 0xcc0000U;
    (*(volatile u32 *) (u32) (a0 + 108)) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) s0);
    (*(volatile u32 *) (u32) (a0 + 112)) = (u32) 0;
    (*(volatile u8 *) (u32) (v0 + -12927)) = (u8) v1; goto L_00BE4490;
L_00BE4560:;
    v0 = (*(volatile s32 *) (u32) s0);
    v1 = 175;
    (*(volatile u16 *) (u32) (v0 + 24)) = (u16) v1;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (*(volatile s32 *) (u32) s0);
    f0.f = (*(volatile f32 *) (u32) (v1 + 16));
    (*(volatile f32 *) (u32) (v0 + 108)) = f0.f;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (*(volatile s32 *) (u32) s0);
    f0.f = (*(volatile f32 *) (u32) (v1 + 24));
    (*(volatile f32 *) (u32) (v0 + 112)) = f0.f; goto L_00BE4490;
L_00BE4590:;
    return;
}
