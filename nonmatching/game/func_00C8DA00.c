/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s64, s64, s64, s64, s64, s64, s64);
s64 func_002DB830(s64);
s64 func_002DB940(s64);
void func_002DF0A0(s64, s64, s64, f32, f32);
void func_002DF8E0(s64, s64, s64, s64);
void func_00C8DD90(s64, s64, s64, s64, s64, s64, s64);
void func_00C8E1C0(s64, s64, s64, s64);
void func_00C8F830(s64, s64, s64, s64, s64, s64, s64, s64);
s64 func_00C8FA50(s64);
void func_00C8FBC0(s64, s64, s64, s64, s64, s64, s64, s64);

void func_00C8DA00(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12, f32 fa13) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    f32 acc = 0;
    s64 frame[10];
    s64 sp = (s32) (u32) frame;

    v0 = (*(volatile u8 *) (u32) (a0 + 4));
    { s32 c_ = v0 == 0; s0 = a0; if (c_) goto L_00C8DA28; }
    a0 = s0; goto L_00C8DAEC;
L_00C8DA28:;
    a0 = (*(volatile s32 *) (u32) (s0 + 372)); v0 = func_002DB940(a0);
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) v0;
    a0 = (*(volatile s32 *) (u32) (s0 + 372)); v0 = func_002DB940(a0);
    a0 = (*(volatile s32 *) (u32) (s0 + 372));
    s2 = (s64) ((u64) v0 << 48);
    s2 = s2 >> 48; v0 = func_002DB830(a0);
    s1 = (s64) ((u64) v0 << 48);
    v0 = (*(volatile u8 *) (u32) (s0 + 1));
    s1 = s1 >> 48;
    if (v0 == s1) { v0 = (s32) ((u32) s2 - (u32) s1); goto L_00C8DA6C; }
    a0 = s0; func_00C8F830(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) ((u32) s2 - (u32) s1);
L_00C8DA6C:;
    v0 = (s64) ((u64) v0 << 48);
    v0 = v0 >> 48;
    f0.i = (s32) v0;
    f2.f = (f32) f0.i;
    f5.f = (*(volatile f32 *) (u32) (s0 + 132));
    f4.f = (*(volatile f32 *) (u32) (s0 + 136));
    f3.f = (*(volatile f32 *) (u32) (s0 + 140));
    f1.f = (*(volatile f32 *) (u32) (s0 + 144));
    f0.i = (s32) 0;
    (*(volatile f32 *) (u32) (sp + 64)) = f5.f;
    (*(volatile f32 *) (u32) (sp + 68)) = f4.f;
    (*(volatile f32 *) (u32) (sp + 72)) = f3.f;
    (*(volatile f32 *) (u32) (sp + 76)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (sp + 68));
    f3.f = (*(volatile f32 *) (u32) (s0 + 128));
    acc = f0.f + f1.f;
    f0.f = acc + f3.f * f2.f;
    (*(volatile f32 *) (u32) (sp + 68)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 180));
    a1 = (s32) ((u32) sp + 0x40U); func_002DF0A0(a0, a1, a2, f12.f, f13.f);
    a0 = (*(volatile s32 *) (u32) (s0 + 180));
    a1 = 1; func_002DF8E0(a0, a1, a2, a3);
    v0 = 1;
    a0 = s0;
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) v0; func_00C8FBC0(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = 1;
    (*(volatile u8 *) (u32) (s0 + 4)) = (u8) v0;
    a0 = s0;
L_00C8DAEC:;
    func_00C8DD90(a0, a1, a2, a3, a4, a5, a6);
    a0 = (*(volatile u8 *) (u32) (s0 + 5));
    v1 = a0 < 8;
    if (v1 != 0) goto L_00C8DB0C;
    a0 = 0; goto L_00C8DB20;
L_00C8DB0C:;
    v1 = (s32) 0xcd0000U;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffd550U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) v1);
L_00C8DB20:;
    v1 = a0 & 0x20;
    if (v1 == 0) { v1 = a0 & 0x40; goto L_00C8DB7C; }
    a0 = s0; v0 = func_00C8FA50(a0);
    if (v0 == 0) { v0 = (s32) 0x8c000000U; goto L_00C8DB6C; }
    v0 = (s32) 0x84020000U;
    a0 = v0 | 0x8400; SD_call(a0, a1, a2, a3, a4, a5, a6);
    v0 = 255;
    a0 = s0;
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) v0;
    a1 = 0;
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 4)) = (u8) 0; func_00C8E1C0(a0, a1, a2, a3);
    goto L_00C8DBB8;
L_00C8DB6C:;
    a0 = v0 | 0x8005; SD_call(a0, a1, a2, a3, a4, a5, a6);
    goto L_00C8DBB4;
L_00C8DB7C:;
    if (v1 == 0) goto L_00C8DBB4;
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0x8401; SD_call(a0, a1, a2, a3, a4, a5, a6);
    a0 = s0; func_00C8FBC0(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = 255;
    a0 = s0;
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) v0;
    a1 = 0;
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 4)) = (u8) 0; func_00C8E1C0(a0, a1, a2, a3);
L_00C8DBB4:;
L_00C8DBB8:;
    return;
}
