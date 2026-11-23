/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
s32 Pes6Process_Create(s32, s32, s32, s32, s32);
s32 Pes6Process_GetWork(s32);
void func_001BBC50(s32, s32, s32, s32);
s32 func_001D5A10(s32);
s32 func_001D7A20(s32, s32, s32);
void func_001D7BE0(s32, s32);
void func_001D7CE0(s32, s32);
void func_001D7D60(s32, s32);
void func_001D7E40(s32, s32, s32, s32);
s32 func_001D7F90(s32, s32, s32, s32);

s32 func_00363E60(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    a1 = 48;
    s1 = a0;
    a0 = 1; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s1 + 16));
    s0 = v0; v0 = func_001D5A10(a0);
    (*(volatile u32 *) (u32) (s0 + 28)) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) (s1 + 20));
    v0 = -1;
    if (v1 == v0) { a0 = (*(volatile s32 *) (u32) (s0 + 28)); goto L_00363EF0; }
    a0 = (*(volatile s32 *) (u32) (s0 + 28)); v0 = func_001D7F90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 32)) = (u32) v0;
    a1 = (*(volatile s32 *) (u32) (s1 + 20));
    a0 = v0; func_001D7E40(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    a1 = 1; func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    a1 = (s32) ((u32) sp + 0x30U); func_001D7BE0(a0, a1);
    f0.f = (*(volatile f32 *) (u32) s1);
    (*(volatile f32 *) (u32) (sp + 48)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s1 + 4));
    (*(volatile f32 *) (u32) (sp + 52)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    a1 = (s32) ((u32) sp + 0x30U); func_001D7CE0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 28));
L_00363EF0:;
    v0 = func_001D7F90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v0;
    a1 = (*(volatile s32 *) (u32) (s1 + 24));
    a0 = v0; func_001D7E40(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 36));
    a1 = 1; func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 36));
    a1 = (s32) ((u32) sp + 0x30U); func_001D7BE0(a0, a1);
    f0.f = (*(volatile f32 *) (u32) s1);
    (*(volatile f32 *) (u32) (sp + 48)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s1 + 4));
    (*(volatile f32 *) (u32) (sp + 52)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 36));
    a1 = (s32) ((u32) sp + 0x30U); func_001D7CE0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (s1 + 28));
    v0 = -1;
    if (v1 == v0) { v0 = (*(volatile s32 *) (u32) (s1 + 8)); goto L_00363F9C; }
    a0 = (*(volatile s32 *) (u32) (s0 + 28)); v0 = func_001D7F90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 40)) = (u32) v0;
    a1 = (*(volatile s32 *) (u32) (s1 + 28));
    a0 = v0; func_001D7E40(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 40));
    a1 = 1; func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 40));
    a1 = (s32) ((u32) sp + 0x30U); func_001D7BE0(a0, a1);
    f0.f = (*(volatile f32 *) (u32) s1);
    (*(volatile f32 *) (u32) (sp + 48)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s1 + 4));
    (*(volatile f32 *) (u32) (sp + 52)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 40));
    a1 = (s32) ((u32) sp + 0x30U); func_001D7CE0(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s1 + 8));
L_00363F9C:;
    (*(volatile u32 *) (u32) (s0 + 20)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s1 + 12));
    (*(volatile u32 *) (u32) (s0 + 24)) = (u32) v0;
    a2 = (*(volatile u16 *) (u32) (s1 + 32));
    a0 = (*(volatile s32 *) (u32) (s0 + 36));
    a1 = (s32) ((u32) sp + 0x40U); v0 = func_001D7A20(a0, a1, a2);
    f3.f = (*(volatile f32 *) (u32) (sp + 64));
    a0 = (s32) 0x360000U;
    f2.f = (*(volatile f32 *) (u32) (sp + 68));
    a0 = (s32) ((u32) a0 + 0x3cc0U);
    f1.f = (*(volatile f32 *) (u32) (sp + 72));
    a5 = (s32) 0x3e0000U;
    f0.f = (*(volatile f32 *) (u32) (sp + 76));
    a1 = a0;
    a2 = 0;
    a3 = 4;
    a4 = 0;
    a5 = (s32) ((u32) a5 + 0x6f20U);
    (*(volatile f32 *) (u32) (s0 + 4)) = f3.f;
    (*(volatile f32 *) (u32) (s0 + 8)) = f2.f;
    (*(volatile f32 *) (u32) (s0 + 12)) = f1.f;
    (*(volatile f32 *) (u32) (s0 + 16)) = f0.f;
    v0 = (*(volatile s32 *) (u32) (s1 + 12));
    (*(volatile u32 *) (u32) s0) = (u32) v0; v0 = Pes6Process_Create(a0, a1, a2, a3, a4);
    (*(volatile u32 *) (u32) (s0 + 44)) = (u32) v0;
    a0 = v0; func_001BBC50(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 44)); v0 = Pes6Process_GetWork(a0);
    (*(volatile u32 *) (u32) v0) = (u32) s0;
    v0 = s0;
    return v0;
}
