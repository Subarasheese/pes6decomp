/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001E6E10(s32);
void func_001EE5D0(s32, s32);
void func_001EE630(s32, s32);
void func_001EEAC0(s32, s32);
void func_001EF370(s32, s32);
void func_001EF860(s32, s32);
s32 func_001F2410(s32, s32, s32, s32);
void func_008BB260(s32, s32);

void func_008D5D30(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = a1;
    v1 = (*(volatile s32 *) (u32) (a0 + 104));
    { s32 c_ = v1 == 0; s2 = a2; if (c_) goto L_008D5E40; }
    a0 = 20188; v0 = func_001E6E10(a0);
    s0 = v0;
    v0 = (*(volatile s8 *) (u32) (s4 + 34));
    if (v0 == 0) { v1 = (s32) 0xc1800000U; goto L_008D5DA0; }
    v1 = (s32) 0x41800000U;
    v0 = (s32) 0xc0d00000U;
    (*(volatile u32 *) (u32) (sp + 112)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 116)) = (u32) v0;
    v1 = (s32) 0xc1a00000U;
    v0 = (s32) 0x41600000U;
    (*(volatile u32 *) (u32) (sp + 120)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 124)) = (u32) v0; goto L_008D5DBC;
L_008D5DA0:;
    v0 = (s32) 0xc0d00000U;
    (*(volatile u32 *) (u32) (sp + 112)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 116)) = (u32) v0;
    v1 = (s32) 0x41a00000U;
    v0 = (s32) 0x41600000U;
    (*(volatile u32 *) (u32) (sp + 120)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 124)) = (u32) v0;
L_008D5DBC:;
    s1 = 0;
L_008D5DC0:;
    a0 = (*(volatile s32 *) (u32) (s4 + 104)); v0 = func_001F2410(a0, a1, a2, a3);
    s5 = v0;
    a1 = (s32) ((u32) sp + 0x70U);
    a0 = s5; func_001EF370(a0, a1);
    a0 = s5;
    a1 = (s32) ((u32) sp + 0x80U); func_001EE5D0(a0, a1);
    f0.f = (*(volatile f32 *) (u32) s3);
    a0 = s5;
    a1 = (s32) ((u32) sp + 0x80U);
    (*(volatile f32 *) (u32) (sp + 128)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s3 + 4));
    (*(volatile f32 *) (u32) (sp + 132)) = f0.f; func_001EF860(a0, a1);
    if (s0 == 0) goto L_008D5E30;
    a0 = s5;
    a1 = s0; func_001EEAC0(a0, a1);
    v0 = (s32) ((u32) s2 + (u32) s1);
    a1 = (*(volatile u8 *) (u32) (v0 + 42));
    a0 = (s32) ((u32) sp + 0x98U); func_008BB260(a0, a1);
    a0 = s5;
    a1 = (s32) ((u32) sp + 0x98U); func_001EE630(a0, a1);
L_008D5E30:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 11;
    { s32 c_ = v1 != 0; s3 = (s32) ((u32) s3 + 0x8U); if (c_) goto L_008D5DC0; }
L_008D5E40:;
    return;
}
