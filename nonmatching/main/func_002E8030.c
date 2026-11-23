/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001E6E10(s32);
void func_001EE630(s32, s32);
void func_001EEAC0(s32, s32);
void func_001EEE60(s32, s32);
void func_001EF370(s32, s32);
void func_001EF860(s32, s32);
void func_001EF900(s32, s32);
void func_001F2290(s32, s32);
s32 func_001F2330(s32, s32, s32, s32);
s32 func_001F2410(s32, s32, s32, s32);
void func_001F3D10(s32, s32);
void memcpy(s32, s32, s32);

void func_002E8030(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 frame[26];
    s32 sp = (s32) (u32) frame;

    s6 = a2;
    s1 = a0;
    s0 = a1;
    v1 = (*(volatile s32 *) (u32) a0);
    v0 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) (v0 + 16));
    { s32 c_ = v0 == 0; f20.i = f12.i; if (c_) goto L_002E8088; }
    v0 = (*(volatile s32 *) (u32) v1);
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (s1 + 28)); goto L_002E80B8; }
L_002E8088:;
    v0 = (s32) ((u32) s0 << 4);
    s2 = 0;
    s0 = (s32) ((u32) s1 + (u32) v0);
L_002E8094:;
    a0 = (*(volatile s32 *) (u32) (s0 + 56));
    a1 = 0; func_001EF900(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 2;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_002E8094; }
    goto L_002E829C;
L_002E80B8:;
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (s1 + 28)); goto L_002E80DC; }
    a0 = (*(volatile s32 *) (u32) (s1 + 24)); v0 = func_001F2330(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s1 + 28)) = (u32) v0;
    a0 = v0;
    a1 = 1; func_001F2290(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s1 + 28));
L_002E80DC:;
    a1 = 1; func_001F3D10(a0, a1);
    s3 = (s32) ((u32) s0 << 4);
    s5 = 0;
    s4 = (s32) ((u32) s1 + (u32) s3);
    s2 = s4;
L_002E80F4:;
    v0 = (*(volatile s32 *) (u32) (s2 + 56));
    if (v0 != 0) goto L_002E8110;
    a0 = (*(volatile s32 *) (u32) (s1 + 28)); v0 = func_001F2410(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s2 + 56)) = (u32) v0;
L_002E8110:;
    s5 = (s32) ((u32) s5 + 0x1U);
    v0 = s5 < 2;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_002E80F4; }
    a0 = 20000; v0 = func_001E6E10(a0);
    s5 = v0;
    v0 = (s32) ((u32) s3 + (u32) s1);
    a1 = s5;
    a0 = (*(volatile s32 *) (u32) (v0 + 56));
    s2 = (s32) ((u32) v0 + 0x38U); func_001EEAC0(a0, a1);
    a0 = (*(volatile s32 *) (u32) s2);
    a1 = (s32) 0x3b0000U;
    a1 = (s32) ((u32) a1 + 0x38e0U); func_001EE630(a0, a1);
    v0 = (*(volatile s32 *) (u32) s1);
    { s32 c_ = s0 != 0; v0 = (*(volatile s32 *) (u32) v0); if (c_) goto L_002E8180; }
    v1 = (s32) ((u32) v0 << 4);
    a0 = (s32) ((u32) sp + 0xb0U);
    v0 = (s32) 0x3b0000U;
    a2 = 16;
    v0 = (s32) ((u32) v0 + 0x37e0U);
    a1 = (s32) ((u32) v0 + (u32) v1); memcpy(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 184)); goto L_002E81A0;
L_002E8180:;
    v1 = (s32) ((u32) v0 << 4);
    a0 = (s32) ((u32) sp + 0xb0U);
    v0 = (s32) 0x3b0000U;
    a2 = 16;
    v0 = (s32) ((u32) v0 + 0x3810U);
    a1 = (s32) ((u32) v0 + (u32) v1); memcpy(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 184));
L_002E81A0:;
    v1 = (s32) 0xbf800000U;
    v0 = (s32) 0x40000000U;
    (*(volatile u32 *) (u32) (sp + 192)) = (u32) 0;
    f0.i = (s32) v0;
    (*(volatile u32 *) (u32) (sp + 196)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 200)) = f1.f;
    v0 = (s32) ((u32) s3 + (u32) s1);
    f1.f = f0.f + f1.f;
    (*(volatile u32 *) (u32) (sp + 160)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 164)) = (u32) v1;
    s0 = (s32) ((u32) v0 + 0x38U);
    f2.f = (*(volatile f32 *) (u32) (sp + 188));
    (*(volatile f32 *) (u32) (sp + 168)) = f1.f;
    f0.f = f0.f + f2.f;
    (*(volatile f32 *) (u32) (sp + 204)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 172)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (v0 + 56));
    a1 = (s32) ((u32) sp + 0xa0U); func_001EF370(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 176));
    v0 = (s32) 0x3f800000U;
    f0.f = (*(volatile f32 *) (u32) (sp + 180));
    (*(volatile u32 *) (u32) (sp + 152)) = (u32) 0;
    f2.i = (s32) v0;
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) 0;
    f1.f = f1.f - f2.f;
    f0.f = f0.f - f2.f;
    (*(volatile f32 *) (u32) (sp + 144)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 148)) = f0.f;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = (s32) ((u32) sp + 0x90U); func_001EF860(a0, a1);
    v0 = (s32) ((u32) s3 + (u32) s1);
    a1 = s5;
    a0 = (*(volatile s32 *) (u32) (v0 + 60));
    s0 = (s32) ((u32) v0 + 0x3cU); func_001EEAC0(a0, a1);
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = (s32) 0x3b0000U;
    a1 = (s32) ((u32) a1 + 0x38e8U); func_001EE630(a0, a1);
    f0.f = (*(volatile f32 *) (u32) (sp + 200));
    f0.f = f0.f * f20.f;
    (*(volatile f32 *) (u32) (sp + 200)) = f0.f;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = (s32) ((u32) sp + 0xc0U); func_001EF370(a0, a1);
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = (s32) ((u32) sp + 0x90U); func_001EF860(a0, a1);
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = s6; func_001EEE60(a0, a1);
    s0 = 0;
L_002E8278:;
    v0 = (*(volatile u8 *) (u32) (s1 + 20));
    a0 = (*(volatile s32 *) (u32) (s4 + 56));
    a1 = v0 & 0x1; func_001EF900(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 2;
    { s32 c_ = v1 != 0; s4 = (s32) ((u32) s4 + 0x4U); if (c_) goto L_002E8278; }
L_002E829C:;
    return;
}
