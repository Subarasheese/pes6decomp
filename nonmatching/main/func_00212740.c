/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001DE2F0(s32, s32, s32, s32, f32);
s32 func_001E6E10(s32);
void func_001EE630(s32, s32);
void func_001EEAC0(s32, s32);
void func_001EF370(s32, s32);
void func_001F1810(s32, s32);
s32 func_001F1A20(s32, s32, s32, s32);
s32 func_001F2410(s32, s32, s32, s32);
void func_001F3D10(s32, s32);
void func_002E1580(s32, s32);
void func_002E1D10(s32, s32, s32, s32);

f32 func_00212740(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[48];
    s32 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = a1;
    s2 = a2;
    a2 = (s32) 0x3b0000U;
    s1 = a4;
    s0 = a5;
    a2 = (s32) ((u32) a2 + 0xffff8f30U);
    a1 = (s32) ((u32) sp + 0x120U);
    a0 = 32;
L_00212780:;
    v1 = (*(volatile s8 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s8 *) (u32) (a2 + 1));
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    (*(volatile u8 *) (u32) (a1 + 1)) = (u8) v0;
    a2 = (s32) ((u32) a2 + 0x2U);
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x2U); if (c_) goto L_00212780; }
    a2 = (s32) 0x3b0000U;
    a1 = (s32) ((u32) sp + 0xe0U);
    a2 = (s32) ((u32) a2 + 0xffff8f70U);
    a0 = 32;
L_002127B0:;
    v1 = (*(volatile s8 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s8 *) (u32) (a2 + 1));
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    (*(volatile u8 *) (u32) (a1 + 1)) = (u8) v0;
    a2 = (s32) ((u32) a2 + 0x2U);
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x2U); if (c_) goto L_002127B0; }
    a2 = (s32) 0x3b0000U;
    a1 = (s32) ((u32) sp + 0xa0U);
    a2 = (s32) ((u32) a2 + 0xffff8fb0U);
    a0 = 32;
L_002127E0:;
    v1 = (*(volatile s8 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s8 *) (u32) (a2 + 1));
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    (*(volatile u8 *) (u32) (a1 + 1)) = (u8) v0;
    a2 = (s32) ((u32) a2 + 0x2U);
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x2U); if (c_) goto L_002127E0; }
    a2 = (s32) 0x3b0000U;
    a1 = (s32) ((u32) sp + 0x60U);
    a2 = (s32) ((u32) a2 + 0xffff8ff0U);
    a0 = 32;
L_00212810:;
    v1 = (*(volatile s8 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s8 *) (u32) (a2 + 1));
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    (*(volatile u8 *) (u32) (a1 + 1)) = (u8) v0;
    a2 = (s32) ((u32) a2 + 0x2U);
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x2U); if (c_) goto L_00212810; }
    v1 = (s32) ((u32) sp + 0x178U);
    { s32 c_ = v1 == 0; v0 = 8; if (c_) goto L_00212858; }
L_0021283C:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_0021283C;
L_00212858:;
    if (s1 != 0) { (*(volatile u8 *) (u32) (s4 + 1)) = (u8) a3; goto L_0021286C; }
    f0.i = (s32) 0;
    goto L_00212A0C;
L_0021286C:;
    v0 = (*(volatile u8 *) (u32) (s4 + 1));
    if (v0 == 0) { a3 = (*(volatile s32 *) (u32) s3); goto L_002128C0; }
    a3 = (*(volatile s32 *) (u32) s3);
    a0 = (s32) ((u32) s4 + 0x28U);
    a1 = 3;
    a2 = 20; func_002E1D10(a0, a1, a2, a3);
    a0 = (s32) ((u32) s4 + 0x28U);
    a1 = (s32) ((u32) sp + 0xe0U); func_002E1580(a0, a1);
    a3 = (*(volatile s32 *) (u32) s3);
    a0 = (s32) ((u32) s4 + 0x4U);
    a1 = 3;
    a2 = 19; func_002E1D10(a0, a1, a2, a3);
    a0 = (s32) ((u32) s4 + 0x4U);
    a1 = (s32) ((u32) sp + 0x120U); func_002E1580(a0, a1);
    v1 = (*(volatile u8 *) (u32) (s4 + 1)); goto L_00212900;
L_002128C0:;
    a0 = (s32) ((u32) s4 + 0x28U);
    a1 = 3;
    a2 = 22; func_002E1D10(a0, a1, a2, a3);
    a0 = (s32) ((u32) s4 + 0x28U);
    a1 = (s32) ((u32) sp + 0x60U); func_002E1580(a0, a1);
    a3 = (*(volatile s32 *) (u32) s3);
    a0 = (s32) ((u32) s4 + 0x4U);
    a1 = 3;
    a2 = 21; func_002E1D10(a0, a1, a2, a3);
    a0 = (s32) ((u32) s4 + 0x4U);
    a1 = (s32) ((u32) sp + 0xa0U); func_002E1580(a0, a1);
    v1 = (*(volatile u8 *) (u32) (s4 + 1));
L_00212900:;
    v0 = 2;
    if (v1 == v0) { a0 = (*(volatile s32 *) (u32) (s3 + 4)); goto L_002129A4; }
    v0 = -1;
    if (s0 == v0) goto L_002129A0;
    a0 = s0; v0 = func_001E6E10(a0);
    s0 = v0;
    if (s0 == 0) goto L_002129A0;
    v0 = (s32) 0x3b0000U;
    a0 = s2;
    a2 = (*(volatile s16 *) (u32) (v0 + -28624));
    v0 = (s32) 0x3b0000U;
    (*(volatile u16 *) (u32) (sp + 368)) = (u16) a2;
    a1 = (*(volatile s16 *) (u32) (v0 + -28622));
    v0 = (s32) 0x3b0000U;
    (*(volatile u16 *) (u32) (sp + 370)) = (u16) a1;
    v1 = (*(volatile s16 *) (u32) (v0 + -28620));
    v0 = (s32) 0x3b0000U;
    (*(volatile u16 *) (u32) (sp + 372)) = (u16) v1;
    v0 = (*(volatile s16 *) (u32) (v0 + -28618));
    (*(volatile u16 *) (u32) (sp + 374)) = (u16) v0; v0 = func_001F2410(a0, a1, a2, a3);
    a1 = s0;
    (*(volatile u32 *) (u32) (s4 + 120)) = (u32) v0;
    a0 = v0; func_001EEAC0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s4 + 120));
    a1 = (s32) ((u32) sp + 0x170U); func_001EE630(a0, a1);
    v0 = (s32) 0x41d00000U;
    (*(volatile u32 *) (u32) (sp + 352)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 356)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 360)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 364)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (s4 + 120));
    a1 = (s32) ((u32) sp + 0x160U); func_001EF370(a0, a1);
L_002129A0:;
    a0 = (*(volatile s32 *) (u32) (s3 + 4));
L_002129A4:;
    a1 = 23;
    a2 = (s32) ((u32) sp + 0x178U);
    a3 = s1; v0 = func_001F1A20(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s4 + 112)) = (u32) v0;
    a0 = v0;
    a1 = 1; func_001F3D10(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s4 + 112));
    a1 = 1; func_001F1810(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s4 + 120));
    if (v0 == 0) { s0 = 10; goto L_002129E0; }
    s0 = 40;
L_002129E0:;
    a0 = s1;
    a1 = 23; f0.f = func_001DE2F0(a0, a1, a2, a3, f12.f);
    f1.i = (s32) s0;
    v0 = (s32) 0x41200000U;
    f1.f = (f32) f1.i;
    f2.i = (s32) v0;
    f1.f = f2.f + f1.f;
    f0.f = f1.f + f0.f;
L_00212A0C:;
    return f0.f;
}
