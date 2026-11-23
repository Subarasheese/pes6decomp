/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0011D020(f32);
void func_001B4F60(s32, s32, s32, s32, s32);
s32 func_0020C940(void);
void func_002D57E0(s32, s32, s32, s32);
s32 func_002F96F0(s32, s32);
void func_002FA370(s32, s32, s32);
void func_002FA3B0(s32, s32, s32, s32, s32);

void func_00924690(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    s2 = a2;
    s1 = a3;
    v0 = func_0020C940();
    s0 = v0;
    v0 = (*(volatile u16 *) (u32) (v0 + 22));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_009246DC; }
    f0.i = (s32) v0;
    f20.f = (f32) f0.i; goto L_009246F4;
L_009246DC:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f20.f = (f32) f0.i;
    f20.f = f20.f + f20.f;
L_009246F4:;
    v1 = (*(volatile s32 *) (u32) (gp + -19852));
    v0 = (s32) ((u32) gp + 0xffffb278U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; v0 = func_002F96F0(a0, a1);
    s4 = v0;
    a2 = s1;
    a0 = (s32) ((u32) sp + 0x88U);
    a1 = s4; func_002FA370(a0, a1, a2);
    a1 = s4;
    a2 = s2;
    a0 = (s32) ((u32) sp + 0x70U);
    a3 = (s32) ((u32) sp + 0x88U);
    a4 = 0; func_002FA3B0(a0, a1, a2, a3, a4);
    f2.f = (*(volatile f32 *) (u32) (sp + 124));
    v0 = (s32) 0x40000000U;
    f1.i = (s32) v0;
    f0.f = (*(volatile f32 *) (u32) (sp + 116));
    f2.f = f2.f - f20.f;
    f1.f = f2.f / f1.f;
    f12.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (sp + 116)) = f12.f; func_0011D020(f12.f);
    f1.f = (*(volatile f32 *) (u32) (sp + 116));
    v0 = (s32) 0x3f800000U;
    f0.i = (s32) v0;
    a3 = 5;
    a2 = s0;
    a0 = s3;
    f0.f = f1.f - f0.f;
    a1 = (s32) ((u32) sp + 0x70U);
    a4 = a3;
    (*(volatile f32 *) (u32) (sp + 116)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 124)) = f20.f; func_001B4F60(a0, a1, a2, a3, a4);
    v1 = (*(volatile s32 *) (u32) (gp + -19852));
    a2 = (s32) 0x930000U;
    v0 = (s32) ((u32) gp + 0xffffb278U);
    a0 = s3;
    a2 = (s32) ((u32) a2 + 0xffffa800U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a1 = (*(volatile s32 *) (u32) (v0 + 32));
    a3 = 8; func_002D57E0(a0, a1, a2, a3);
    return;
}
