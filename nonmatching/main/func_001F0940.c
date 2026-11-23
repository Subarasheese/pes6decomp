/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Sprite_SetPositionZ(s32, f32);
void func_001D7CE0(s32, s32);
void func_001D7D60(s32, s32);
void func_001D9410(s32, s32, s32, s32);
s32 func_001E62C0(void);

s32 func_001F0940(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s0 = (*(volatile s32 *) (u32) (a0 + 72));
    s1 = a1; v0 = func_001E62C0();
    v1 = v0 & 0x2;
    v0 = 2;
    if (v1 == v0) { a1 = (*(volatile u8 *) (u32) (s2 + 2)); goto L_001F0988; }
    (*(volatile u8 *) (u32) (s2 + 1)) = (u8) 0;
L_001F0980:;
    v0 = (*(volatile s32 *) (u32) (s0 + 80)); goto L_001F0A20;
L_001F0988:;
    a0 = s0;
    s3 = (s32) ((u32) s2 + 0x2U); func_001D7D60(a0, a1);
    v0 = (*(volatile u8 *) (u32) s3);
    if (v0 != 0) { f20.f = (*(volatile f32 *) (u32) (s1 + 8)); goto L_001F09A8; }
    v0 = 0; goto L_001F0A20;
L_001F09A8:;
    a0 = s0;
    f12.i = f20.i; Pes6Sprite_SetPositionZ(a0, f12.f);
    v0 = (*(volatile u8 *) (u32) (s2 + 1));
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_001F0A10;
    f4.f = (*(volatile f32 *) (u32) (s2 + 8));
    a0 = s0;
    f0.f = (*(volatile f32 *) (u32) s1);
    a1 = (s32) ((u32) sp + 0x60U);
    f3.f = (*(volatile f32 *) (u32) (s2 + 12));
    f2.f = (*(volatile f32 *) (u32) (s2 + 16));
    f1.f = (*(volatile f32 *) (u32) (s2 + 20));
    (*(volatile f32 *) (u32) (sp + 112)) = f4.f;
    f0.f = f0.f + f4.f;
    (*(volatile f32 *) (u32) (sp + 96)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s1 + 4));
    (*(volatile f32 *) (u32) (sp + 116)) = f3.f;
    (*(volatile f32 *) (u32) (sp + 120)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 124)) = f1.f;
    f0.f = f0.f + f3.f;
    (*(volatile u32 *) (u32) (sp + 108)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 100)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 104)) = f20.f; func_001D7CE0(a0, a1);
L_001F0A10:;
    a0 = s0; func_001D9410(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (s2 + 1)) = (u8) 0; goto L_001F0980;
L_001F0A20:;
    return v0;
}
