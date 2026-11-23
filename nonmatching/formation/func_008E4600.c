/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001E6E10(s32);
void func_001EE5D0(s32, s32);
void func_001EE630(s32, s32);
void func_001EEAC0(s32, s32);
void func_001EF1E0(s32, s32);
void func_001EF370(s32, s32);
void func_001EF860(s32, s32);
void func_001F23E0(s32, s32, s32, s32);
s32 func_001F2410(s32, s32, s32, s32);
void func_008BB260(s32, s32);

void func_008E4600(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s64 frame[24];
    s32 sp = (s32) (u32) frame;

    v1 = (*(volatile s32 *) (u32) (a0 + 1792));
    s0 = (*(volatile s32 *) (u32) (a0 + 484));
    { s32 c_ = v1 == 0; s5 = a0; if (c_) goto L_008E4774; }
    a0 = 20188; v0 = func_001E6E10(a0);
    s6 = v0;
    s4 = 0;
    s2 = s5;
    s1 = s5;
L_008E464C:;
    a1 = (*(volatile s32 *) (u32) (s2 + 1796));
    a0 = (*(volatile s32 *) (u32) (s5 + 1792)); func_001F23E0(a0, a1, a2, a3);
    if (s0 == 0) goto L_008E4760;
    a0 = (*(volatile u16 *) (u32) s0);
    v1 = 0xffff;
    if (a0 == v1) goto L_008E4760;
    a0 = (*(volatile s32 *) (u32) (s5 + 1792)); v0 = func_001F2410(a0, a1, a2, a3);
    s3 = v0;
    (*(volatile u32 *) (u32) (s2 + 1796)) = (u32) s3;
    v0 = (*(volatile u8 *) (u32) (s5 + 1));
    if (v0 == 0) goto L_008E46B0;
    v1 = (s32) 0x41400000U;
    v0 = (s32) 0xc0900000U;
    (*(volatile u32 *) (u32) (sp + 128)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 132)) = (u32) v0;
    v1 = (s32) 0xc1800000U;
    v0 = (s32) 0x41200000U;
    (*(volatile u32 *) (u32) (sp + 136)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 140)) = (u32) v0; goto L_008E46D0;
L_008E46B0:;
    v0 = (s32) 0xc1400000U;
    (*(volatile u32 *) (u32) (sp + 128)) = (u32) v0;
    v0 = (s32) 0xc0900000U;
    (*(volatile u32 *) (u32) (sp + 132)) = (u32) v0;
    v0 = (s32) 0x41800000U;
    (*(volatile u32 *) (u32) (sp + 136)) = (u32) v0;
    v0 = (s32) 0x41200000U;
    (*(volatile u32 *) (u32) (sp + 140)) = (u32) v0;
L_008E46D0:;
    a0 = s3;
    a1 = (s32) ((u32) sp + 0x80U); func_001EF370(a0, a1);
    a0 = s3;
    a1 = (s32) ((u32) sp + 0x90U); func_001EE5D0(a0, a1);
    f0.f = (*(volatile f32 *) (u32) (s1 + 4));
    a0 = s3;
    a1 = (s32) ((u32) sp + 0x90U);
    (*(volatile f32 *) (u32) (sp + 144)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s1 + 8));
    (*(volatile f32 *) (u32) (sp + 148)) = f0.f; func_001EF860(a0, a1);
    v1 = (*(volatile u8 *) (u32) (s5 + 483));
    if (v1 == 0) goto L_008E4730;
    v0 = (s32) 0xbfc90000U;
    a0 = s3;
    v0 = v0 | 0xfdb;
    a1 = (s32) ((u32) sp + 0xa8U);
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 168)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 172)) = (u32) 0; func_001EF1E0(a0, a1);
L_008E4730:;
    if (s6 == 0) goto L_008E4760;
    a0 = s3;
    a1 = s6; func_001EEAC0(a0, a1);
    v0 = (s32) ((u32) s0 + (u32) s4);
    a1 = (*(volatile u8 *) (u32) (v0 + 147));
    a0 = (s32) ((u32) sp + 0xb8U); func_008BB260(a0, a1);
    a0 = s3;
    a1 = (s32) ((u32) sp + 0xb8U); func_001EE630(a0, a1);
L_008E4760:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = s4 < 11;
    s2 = (s32) ((u32) s2 + 0x4U);
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x8U); if (c_) goto L_008E464C; }
L_008E4774:;
    return;
}
