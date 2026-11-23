/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
void func_001B9C60(s32, s32, s32, s32);
s32 func_001B9CA0(s32, s32, s32, s32, f32, f32);
s32 func_001F2050(s32, s32, s32, s32);
void func_001F2290(s32, s32);
s32 func_001F2330(s32, s32, s32, s32);
void func_001F3C80(s32);
void func_001F3D10(s32, s32);
void func_002EF440(s32, s32, s32);
void func_002EFBD0(s32, s32);
void func_002EFCF0(s32, s32, s32, s32);
void func_002F0110(s32, f32);
void func_002F01B0(s32);

s32 func_002F6380(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    a1 = 200;
    s1 = a0;
    a0 = 1; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    v1 = 23;
    { s32 c_ = s1 == v1; s0 = v0; if (c_) goto L_002F63C0; }
    v0 = 33;
    if (s1 == v0) { (*(volatile u8 *) (u32) (s0 + 4)) = (u8) s1; goto L_002F63C4; }
    (*(volatile u8 *) (u32) (s0 + 4)) = (u8) v1; goto L_002F63C4;
L_002F63C0:;
    (*(volatile u8 *) (u32) (s0 + 4)) = (u8) s1;
L_002F63C4:;
    a0 = (s32) ((u32) s0 + 0x10U); func_002F01B0(a0);
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 1; func_002EFCF0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 112)); v0 = func_001F2050(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 168)) = (u32) v0;
    a0 = v0;
    a1 = 0; func_001F3D10(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 168)); v0 = func_001F2330(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 172)) = (u32) v0;
    a0 = v0;
    a1 = 1; func_001F2290(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 172));
    a1 = 1; func_001F3D10(a0, a1);
    if (s0 == 0) { v1 = (s32) 0xc35c0000U; goto L_002F648C; }
    v0 = (s32) 0x44890000U;
    v0 = v0 | 0x8000;
    f12.i = (s32) v0;
    a0 = (s32) ((u32) s0 + 0x10U); func_002F0110(a0, f12.f);
    v0 = (s32) 0x44890000U;
    v0 = v0 | 0x4000;
    f12.i = (s32) v0;
    a0 = (*(volatile s32 *) (u32) (s0 + 168)); func_001F3C80(a0);
    a0 = (*(volatile s32 *) (u32) (s0 + 176));
    if (a0 == 0) goto L_002F6488;
    func_001B9C60(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 0;
    a2 = (s32) ((u32) sp + 0x30U); func_002EF440(a0, a1, a2);
    v0 = (s32) 0x44890000U;
    v1 = v0 | 0x6000;
    v0 = v0 | 0x2000;
    f12.i = (s32) v1;
    f13.i = (s32) v0;
    a0 = (s32) ((u32) sp + 0x30U); v0 = func_001B9CA0(a0, a1, a2, a3, f12.f, f13.f);
    (*(volatile u32 *) (u32) (s0 + 176)) = (u32) v0;
L_002F6488:;
    v1 = (s32) 0xc35c0000U;
L_002F648C:;
    v0 = (s32) 0xc32a0000U;
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) v1;
    a0 = (s32) ((u32) s0 + 0x10U);
    (*(volatile u32 *) (u32) (sp + 68)) = (u32) v0;
    v1 = (s32) 0x43dc0000U;
    v0 = (s32) 0x43a00000U;
    (*(volatile u32 *) (u32) (sp + 72)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) v0;
    a1 = (s32) ((u32) sp + 0x40U); func_002EFBD0(a0, a1);
    v0 = s0;
    return v0;
}
