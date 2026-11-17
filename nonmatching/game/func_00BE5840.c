/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00209A00(s32, s32, s32);
s32 func_009B3480(s32, s32, s32, s32, f32, f32);
void func_00B2A6E0(s32, s32, s32, s32, f32, f32);
s32 func_00B35C60(s32);
void func_00B35E10(s32, s32, s32);
void func_00B364D0(s32);
void func_00BD3CF0(s32, s32, s32, s32, f32, f32);

void func_00BE5840(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    v0 = (*(volatile s32 *) (u32) a0);
    f12.f = (*(volatile f32 *) (u32) (v0 + 108));
    f13.f = (*(volatile f32 *) (u32) (v0 + 112));
    s0 = a0; func_00BD3CF0(a0, a1, a2, a3, f12.f, f13.f);
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    v1 = 5;
    a0 = (*(volatile u8 *) (u32) (a0 + 18));
    if (a0 == v1) { a0 = s0; goto L_00BE587C; }
L_00BE5874:;
    goto L_00BE5948;
L_00BE587C:;
    v0 = func_00B35C60(a0);
    v1 = (*(volatile s32 *) (u32) s0);
    a0 = s0;
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    (*(volatile u8 *) (u32) (v1 + 45)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = (s32) ((u32) v0 + 0x6cU);
    a2 = (s32) ((u32) v0 + 0x70U); func_00B35E10(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) s0);
    f13.f = (*(volatile f32 *) (u32) (a0 + 112));
    f12.f = (*(volatile f32 *) (u32) (a0 + 108)); v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    v1 = (*(volatile s32 *) (u32) s0);
    a1 = 1268;
    (*(volatile u16 *) (u32) (v1 + 44)) = (u16) v0;
    v0 = (*(volatile s32 *) (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a2 = 0; func_00209A00(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) s0);
    v1 = 165;
    a0 = 2;
    (*(volatile u16 *) (u32) (v0 + 24)) = (u16) v1; func_00B364D0(a0);
    a2 = (s32) 0xcc0000U;
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x28U);
    a2 = (s32) ((u32) a2 + 0xffffcafeU);
    a3 = 128; func_00B2A6E0(a0, a1, a2, a3, f12.f, f13.f);
    f1.f = (*(volatile f32 *) (u32) (sp + 40));
    a3 = (s32) 0xcc0000U;
    f0.f = (*(volatile f32 *) (u32) (sp + 44));
    a2 = (s32) 0xcc0000U;
    a1 = (s32) 0xcc0000U;
    a0 = (s32) 0xcc0000U;
    v1 = (s32) 0xcc0000U;
    (*(volatile f32 *) (u32) (a3 + -13568)) = f1.f;
    (*(volatile f32 *) (u32) (a2 + -13564)) = f0.f;
    a2 = (*(volatile s32 *) (u32) s0);
    f0.f = (*(volatile f32 *) (u32) (a2 + 224));
    (*(volatile f32 *) (u32) (a1 + -13580)) = f0.f;
    a1 = (*(volatile s32 *) (u32) s0);
    f0.f = (*(volatile f32 *) (u32) (a1 + 232));
    (*(volatile f32 *) (u32) (a0 + -13576)) = f0.f;
    a0 = (*(volatile s32 *) (u32) s0);
    a0 = (*(volatile u16 *) (u32) (a0 + 38));
    (*(volatile u16 *) (u32) (v1 + -13572)) = (u16) a0; goto L_00BE5874;
L_00BE5948:;
    return;
}
