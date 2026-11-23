/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);
void func_008C5230(s32, s32, s32, s32, f32);
void func_008D3490(s32, s32, s32, s32);
void func_008D3D20(s32, s32, s32, s32, s32, s32, s32, s32);

void func_008B3910(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    a1 = 7;
    a2 = (*(volatile u8 *) (u32) a0);
    s0 = a0;
    a0 = (s32) ((u32) sp + 0x20U); func_008C5230(a0, a1, a2, a3, f12.f);
    a2 = (*(volatile u8 *) (u32) s0);
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = 0; func_008C5230(a0, a1, a2, a3, f12.f);
    f1.f = (*(volatile f32 *) (u32) (sp + 44));
    a0 = (s32) ((u32) s0 + 0x1d8cU);
    f0.f = (*(volatile f32 *) (u32) (sp + 60));
    f2.f = (*(volatile f32 *) (u32) (sp + 56));
    f0.f = f1.f - f0.f;
    f0.f = f2.f + f0.f;
    (*(volatile f32 *) (u32) (sp + 56)) = f0.f;
    a2 = (*(volatile u8 *) (u32) s0);
    a1 = (s32) ((u32) sp + 0x30U); func_008D3D20(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile u8 *) (u32) (gp + -31372));
    v1 = (*(volatile u8 *) (u32) (gp + -31371));
    (*(volatile u8 *) (u32) (sp + 76)) = (u8) a0;
    (*(volatile u8 *) (u32) (sp + 77)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (s0 + 41));
    if (v1 != 0) { ; goto L_008B39B0; }
    v1 = 1;
    v0 = (s32) 0x3f0000U;
    (*(volatile u8 *) (u32) (s0 + 41)) = (u8) v1;
    a0 = v0 | 0x14; v0 = func_001F08B0(a0);
    a0 = (s32) ((u32) s0 + 0x1d8cU);
    a1 = (s32) ((u32) sp + 0x4cU);
    a2 = v0;
    a3 = 1; func_008D3490(a0, a1, a2, a3);
L_008B39B0:;
    return;
}
