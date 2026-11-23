/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001D79A0(s32, s32);
s32 func_001D7A20(s32, s32, s32);
s32 func_001F08B0(s32);
void func_002DB5E0(s32);
void func_002DC190(s32, s32, s32);
void func_002DC1B0(s32, s32, s32);
s32 func_008B9C10(s32, s32, s32, f32);
s32 func_008B9F90(s32, s32, s32, s32, f32);
s32 func_008BA000(s32, s32, s32, s32, f32);
void func_008C2F00(s32, s32, s32, s32, f32);
void func_008C3000(s32, s32, s32, s32, f32);
void func_008C38A0(s32);
void func_008C5230(s32, s32, s32, s32, f32);
s32 func_008C5740(s32);
void func_008C57D0(s32, s32, s32, s32, f32);
void func_008C5900(s32, s32, s32, s32);
void func_008C59E0(s32, s32);
void func_008C5DF0(s32, s32, s32, s32, f32, f32);

void func_008C39A0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    s2 = a1;
    s1 = a2;
    s0 = a0;
    func_008C38A0(a0);
    a0 = (s32) ((u32) sp + 0x70U);
    a1 = 0;
    a2 = s2; func_008C5230(a0, a1, a2, a3, f12.f);
    a2 = s2;
    a0 = (s32) ((u32) s0 + 0x68U);
    a1 = 1;
    a3 = (s32) ((u32) sp + 0x70U); func_008C5DF0(a0, a1, a2, a3, f12.f, f13.f);
    a0 = (s32) ((u32) s0 + 0x68U);
    a1 = 0; func_008C5900(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x68U);
    a1 = 0; func_008C59E0(a0, a1);
    if (s1 == 0) { a0 = s0; goto L_008C3A30; }
    v0 = (s32) 0x3f0000U;
    a0 = v0 | 0x34; v0 = func_001F08B0(a0);
    a2 = v0;
    a0 = (s32) ((u32) s0 + 0x68U);
    a1 = (s32) ((u32) sp + 0x70U);
    a3 = 1; func_008C57D0(a0, a1, a2, a3, f12.f);
    a0 = s0;
L_008C3A30:;
    a1 = (s32) ((u32) sp + 0x70U); func_008C3000(a0, a1, a2, a3, f12.f);
    v0 = (*(volatile s32 *) (u32) (s0 + 92));
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) (s0 + 92)); goto L_008C3AFC; }
    v0 = (*(volatile s32 *) (u32) (s0 + 80));
    if (v0 != 0) goto L_008C3AF8;
    a0 = (s32) ((u32) s0 + 0x68U); v0 = func_008C5740(a0);
    a0 = v0;
    a1 = (s32) ((u32) sp + 0x60U);
    a2 = 15; v0 = func_001D7A20(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s0 + 4));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_008C3A80; }
    f0.i = (s32) v0;
    f13.f = (f32) f0.i; goto L_008C3A98;
L_008C3A80:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f13.f = (f32) f0.i;
    f13.f = f13.f + f13.f;
L_008C3A98:;
    a1 = 10;
    a0 = (s32) ((u32) sp + 0x60U);
    f12.i = (s32) 0;
    a2 = a1; v0 = func_008B9C10(a0, a1, a2, f12.f);
    a1 = (s32) 0x8c0000U;
    (*(volatile u32 *) (u32) (s0 + 80)) = (u32) v0;
    a0 = v0;
    a1 = (s32) ((u32) a1 + 0x2e50U);
    a2 = s0; func_002DC1B0(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s0 + 80));
    a1 = (s32) 0x8c0000U;
    a1 = (s32) ((u32) a1 + 0x2ef0U);
    a2 = s0; func_002DC190(a0, a1, a2);
    a0 = (s32) ((u32) s0 + 0x68U); v0 = func_008C5740(a0);
    a0 = v0;
    a1 = 15; f0.f = func_001D79A0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 80));
    f12.i = f0.i; func_002DB5E0(a0);
L_008C3AF8:;
    a0 = (*(volatile s32 *) (u32) (s0 + 92));
L_008C3AFC:;
    if (a0 == 0) { a0 = s0; goto L_008C3B48; }
    a1 = 22; f0.f = func_001D79A0(a0, a1);
    f20.i = f0.i;
    a0 = (s32) ((u32) sp + 0x50U);
    f12.i = f20.i;
    (*(volatile u32 *) (u32) (sp + 80)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 84)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 88)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 92)) = (u32) 0; v0 = func_008BA000(a0, a1, a2, a3, f12.f);
    f12.i = f20.i;
    (*(volatile u32 *) (u32) (s0 + 24)) = (u32) v0;
    a0 = v0;
    a1 = (s32) ((u32) sp + 0x50U); v0 = func_008B9F90(a0, a1, a2, a3, f12.f);
    (*(volatile u32 *) (u32) (s0 + 28)) = (u32) v0;
    a0 = s0;
L_008C3B48:;
    func_008C2F00(a0, a1, a2, a3, f12.f);
    return;
}
