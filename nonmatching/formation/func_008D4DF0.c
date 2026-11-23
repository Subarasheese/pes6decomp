/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008B9AB0(s32, s32, s32, s32);
s32 func_008B9B70(s32, s32, s32, s32);
s32 func_008B9F90(s32, s32, s32, s32, f32);
s32 func_008BA000(s32, s32, s32, s32, f32);
void func_008C5230(s32, s32, s32, s32, f32);
void func_008D4520(s32, s32, s32, s32, f32);
void func_008D4690(s32, s32, s32, s32, f32);
void func_008D4D10(s32);

void func_008D4DF0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s3 = a1;
    s2 = a2;
    s1 = a3;
    s0 = a0; func_008D4D10(a0);
    (*(volatile u8 *) (u32) s0) = (u8) s3;
    a2 = s1;
    a1 = s2;
    a0 = (s32) ((u32) sp + 0x60U);
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) s2; func_008C5230(a0, a1, a2, a3, f12.f);
    (*(volatile u32 *) (u32) (sp + 104)) = (u32) 0;
    v0 = 5;
    v1 = (*(volatile s8 *) (u32) s0);
    if (v1 != v0) { a0 = s0; goto L_008D4E54; }
    v0 = (s32) 0xc37a0000U;
    (*(volatile u32 *) (u32) (sp + 104)) = (u32) v0;
    a0 = s0;
L_008D4E54:;
    a1 = (s32) ((u32) sp + 0x60U); func_008D4690(a0, a1, a2, a3, f12.f);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x60U); func_008D4520(a0, a1, a2, a3, f12.f);
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    if (v1 != 0) { ; goto L_008D4ED8; }
    v1 = (*(volatile s32 *) (u32) (s0 + 16));
    if (v1 != 0) goto L_008D4ED4;
    f12.i = (s32) 0;
    a0 = (s32) ((u32) sp + 0x50U);
    (*(volatile u32 *) (u32) (sp + 80)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 84)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 88)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 92)) = (u32) 0; v0 = func_008BA000(a0, a1, a2, a3, f12.f);
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) v0;
    f12.i = (s32) 0;
    a0 = v0;
    a1 = (s32) ((u32) sp + 0x50U); v0 = func_008B9F90(a0, a1, a2, a3, f12.f);
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) v0;
    a0 = v0;
    a1 = (s32) ((u32) sp + 0x50U);
    a2 = 0; v0 = func_008B9B70(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) v0;
    a0 = v0;
    a1 = 0; func_008B9AB0(a0, a1, a2, a3);
L_008D4ED4:;
L_008D4ED8:;
    return;
}
