/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002DF640(s32, s32, s32, s32);
void func_002DF8E0(s32, s32, s32, s32);
s32 func_008CC830(void);

void func_008CCD10(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { 0 };
    volatile union { f32 f; s32 i; } f13 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    f32 acc = 0;

    s2 = a0;
    s1 = a1;
    v0 = func_008CC830();
    s0 = v0;
    if (s0 == 0) { ; goto L_008CCEC4; }
    v1 = (*(volatile s32 *) (u32) (s0 + 168));
    v0 = 4;
    if (v1 == v0) goto L_008CCD60;
    v0 = 6;
    if (v1 != v0) { v0 = (s32) ((u32) v1 + 0xfffffffeU); goto L_008CCDD4; }
L_008CCD60:;
    f0.i = (s32) s2;
    a0 = (*(volatile s32 *) (u32) (s0 + 112));
    f4.f = (f32) f0.i;
    a1 = 1;
    f0.i = (s32) s1;
    f1.f = (f32) f0.i;
    f0.f = (*(volatile f32 *) (u32) (s0 + 148));
    f3.i = (s32) 0;
    f5.f = (*(volatile f32 *) (u32) (s0 + 156));
    acc = f3.f + f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 152));
    f2.f = (*(volatile f32 *) (u32) (s0 + 160));
    f21.f = acc + f5.f * f4.f;
    acc = f3.f + f0.f;
    f20.f = acc + f2.f * f1.f; func_002DF8E0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 104));
    a1 = 0; func_002DF8E0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 108));
    a1 = 0; func_002DF8E0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 112));
    f12.i = f21.i;
    f13.i = f20.i; func_002DF640(a0, a1, a2, a3);
    goto L_008CCEC0;
L_008CCDD4:;
    at = (u64) v0 < (u64) (s64) 4;
    if (at == 0) goto L_008CCE54;
    f0.i = (s32) s2;
    a0 = (*(volatile s32 *) (u32) (s0 + 112));
    f4.f = (f32) f0.i;
    a1 = 0;
    f0.i = (s32) s1;
    f1.f = (f32) f0.i;
    f0.f = (*(volatile f32 *) (u32) (s0 + 132));
    f3.i = (s32) 0;
    f5.f = (*(volatile f32 *) (u32) (s0 + 140));
    acc = f3.f + f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 136));
    f2.f = (*(volatile f32 *) (u32) (s0 + 144));
    f21.f = acc + f5.f * f4.f;
    acc = f3.f + f0.f;
    f20.f = acc + f2.f * f1.f; func_002DF8E0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 108));
    a1 = 1; func_002DF8E0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 104));
    a1 = 0; func_002DF8E0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 108));
    f12.i = f21.i;
    f13.i = f20.i; func_002DF640(a0, a1, a2, a3);
    goto L_008CCEC0;
L_008CCE54:;
    f0.i = (s32) s2;
    a0 = (*(volatile s32 *) (u32) (s0 + 112));
    f4.f = (f32) f0.i;
    a1 = 0;
    f0.i = (s32) s1;
    f1.f = (f32) f0.i;
    f0.f = (*(volatile f32 *) (u32) (s0 + 116));
    f3.i = (s32) 0;
    f5.f = (*(volatile f32 *) (u32) (s0 + 124));
    acc = f3.f + f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 120));
    f2.f = (*(volatile f32 *) (u32) (s0 + 128));
    f21.f = acc + f5.f * f4.f;
    acc = f3.f + f0.f;
    f20.f = acc + f2.f * f1.f; func_002DF8E0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 108));
    a1 = 0; func_002DF8E0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 104));
    a1 = 1; func_002DF8E0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 104));
    f12.i = f21.i;
    f13.i = f20.i; func_002DF640(a0, a1, a2, a3);
L_008CCEC0:;
L_008CCEC4:;
    return;
}
