/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00207390(s32, s32);
void func_00209A00(s32, s32, s32);
void func_00930240(s32);
s32 func_009B30B0(s32, s32);
s32 func_009B3480(s32, s32, s32, s32, f32, f32);
s32 func_00BC13A0(s32, s32, s32, s32);
void func_00BF14F0(s32, s32, s32, s32, f32, f32, f32, f32);

void func_009EFCA0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };

    a2 = (s32) 0x590000U;
    v0 = 1;
    a2 = (s32) ((u32) a2 + 0x2980U);
    (*(volatile u8 *) (u32) (a0 + 76)) = (u8) 0;
    s0 = a0;
    (*(volatile u32 *) (u32) (a0 + 156)) = (u32) v0;
    a3 = (*(volatile u8 *) (u32) (a0 + 18));
    a1 = (*(volatile u8 *) (u32) (a0 + 17));
    v0 = (*(volatile s32 *) (u32) (a0 + 4));
    v1 = (s32) ((u32) a3 << 4);
    a3 = (s32) ((u32) v1 - (u32) a3);
    v1 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) v1 - (u32) a1);
    v1 = (s32) ((u32) a3 << 3);
    a3 = (s32) ((u32) v1 - (u32) a3);
    v1 = (s32) ((u32) a1 << 3);
    v1 = (s32) ((u32) v1 - (u32) a1);
    a1 = (s32) ((u32) a3 << 8);
    v1 = (s32) ((u32) v1 << 3);
    a1 = (s32) ((u32) a2 + (u32) a1);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile u8 *) (u32) (v1 + 104));
    v1 = v1 & 0x1;
    v1 = v1 & 0x1;
    (*(volatile u8 *) (u32) (v0 + 45)) = (u8) v1; func_00BF14F0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    f1.f = (*(volatile f32 *) (u32) (s0 + 156));
    a0 = s0;
    f0.f = (*(volatile f32 *) (u32) (s0 + 160));
    f12.f = (f32) f1.i;
    f13.f = (f32) f0.i; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    a0 = (*(volatile u16 *) (u32) (s0 + 42));
    s1 = v0 & 0xffff;
    a1 = s1; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 17;
    if (at != 0) { a0 = 32; goto L_009EFE18; }
    a4 = (*(volatile u16 *) (u32) (s0 + 42));
    a3 = s1 & 0xffff;
    a0 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (s0 + 18));
    v1 = (*(volatile u8 *) (u32) (s0 + 17));
    v0 = (s32) 0x10000U;
    a2 = 0x8001;
    a0 = (s32) ((u32) a0 + 0x2980U);
    a3 = (s32) ((u32) a3 - (u32) a4);
    v0 = (s32) ((u32) a3 + (u32) v0);
    a3 = v0 & 0xffff;
    v0 = (s32) ((u32) a1 << 4);
    a3 = a3 < a2;
    a2 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 4);
    a1 = (s32) ((u32) a2 << 3);
    v1 = (s32) ((u32) v0 - (u32) v1);
    a1 = (s32) ((u32) a1 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    a1 = (s32) ((u32) a1 << 8);
    v0 = (s32) ((u32) v0 - (u32) v1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile u8 *) (u32) (v0 + 104));
    v0 = v0 & 0x1;
    v0 = v0 & 0x1;
    if (a3 != v0) { a0 = 33; goto L_009EFDD4; }
    a0 = 31; v0 = func_00BC13A0(a0, a1, a2, a3);
    v0 = v0 & 0xffff; goto L_009EFDE0;
L_009EFDD4:;
    v0 = func_00BC13A0(a0, a1, a2, a3);
    v0 = v0 & 0xffff;
L_009EFDE0:;
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = v0 & 0xffff;
    a2 = 0; func_00209A00(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = 6; func_00207390(a0, a1);
    a0 = s0; func_00930240(a0);
    a0 = 48;
    v1 = 33;
    (*(volatile u8 *) (u32) (s0 + 22)) = (u8) a0;
    (*(volatile u16 *) (u32) (s0 + 24)) = (u16) v1; goto L_009EFE28;
L_009EFE18:;
    v0 = func_00BC13A0(a0, a1, a2, a3);
    v0 = v0 & 0xffff; goto L_009EFDE0;
L_009EFE28:;
    return;
}
