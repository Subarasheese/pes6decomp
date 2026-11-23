/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_008B9430(void);
void func_008C5230(s32, s32, s32, s32, f32);
void func_008C9AB0(s32, s32);
void func_008D85C0(s32, s32, s32, s32, f32);
void func_008D87E0(s32, s32, s32);
void func_008D8AA0(s32, s32, s32, s32);
void func_008D8AF0(s32, s32, s32, s32, s32, f32);

void func_008CCD00(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v0 = 8;
    s1 = a0;
    (*(volatile u8 *) (u32) (a0 + 26)) = (u8) v0;
    s0 = 0;
    (*(volatile u8 *) (u32) (a0 + 27)) = (u8) v0;
    a0 = s0 & 0xff;
L_008CCD28:;
    a2 = 1;
    v0 = (s32) ((u32) s1 + (u32) a0);
    v1 = (s32) ((u32) v0 + 0x1cU);
    v0 = (*(volatile u8 *) (u32) (v0 + 28));
    if (v0 == a2) goto L_008CCD60;
    (*(volatile u8 *) (u32) v1) = (u8) a2;
    v0 = (s32) 0x8f0000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffd970U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) s1 + 0x6b4U); func_008D87E0(a0, a1, a2);
L_008CCD60:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 8;
    if (v0 != 0) { a0 = s0 & 0xff; goto L_008CCD28; }
    a0 = (s32) ((u32) s1 + 0x6b4U); func_008D8AA0(a0, a1, a2, a3);
    a0 = (s32) ((u32) sp + 0x30U); func_008D85C0(a0, a1, a2, a3, f12.f);
    a2 = (*(volatile u8 *) (u32) (s1 + 1));
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = 2; func_008C5230(a0, a1, a2, a3, f12.f);
    a0 = s1;
    a1 = (s32) ((u32) sp + 0x30U); func_008C9AB0(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 48));
    f0.f = (*(volatile f32 *) (u32) (sp + 52));
    (*(volatile f32 *) (u32) (sp + 64)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 68)) = f0.f; v0 = func_008B9430();
    v1 = (*(volatile s32 *) (u32) (s1 + 1140));
    a0 = (s32) ((u32) s1 + 0x6b4U);
    a2 = (*(volatile u8 *) (u32) (s1 + 1));
    a1 = (s32) ((u32) sp + 0x40U);
    a3 = (*(volatile u8 *) (u32) v1);
    a4 = v0; func_008D8AF0(a0, a1, a2, a3, a4, f12.f);
    v1 = 8;
    (*(volatile u8 *) (u32) (s1 + 25)) = (u8) v1;
    return;
}
