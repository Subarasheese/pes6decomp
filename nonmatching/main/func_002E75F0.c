/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B9830(s32, s32);
void func_001EEE60(s32, s32);
void func_001EF370(s32, s32);
void func_001EF860(s32, s32);
void func_001EF900(s32, s32);
void func_001F2290(s32, s32);
s32 func_001F2330(s32, s32, s32, s32);
s32 func_001F2410(s32, s32, s32, s32);
void func_001F3D10(s32, s32);
void memcpy(s32, s32, s32);

void func_002E75F0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    s1 = a1;
    v1 = (*(volatile u8 *) (u32) (gp + -32058));
    v0 = (s32) ((u32) s1 << 2);
    a2 = (*(volatile u8 *) (u32) (gp + -32060));
    a1 = (*(volatile u8 *) (u32) (gp + -32059));
    (*(volatile u8 *) (u32) (sp + 142)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (gp + -32057));
    (*(volatile u8 *) (u32) (sp + 140)) = (u8) a2;
    (*(volatile u8 *) (u32) (sp + 141)) = (u8) a1;
    (*(volatile u8 *) (u32) (sp + 143)) = (u8) v1;
    v1 = (*(volatile s32 *) (u32) a0);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) (v0 + 16));
    { s32 c_ = v0 == 0; s2 = a0; if (c_) goto L_002E765C; }
    v0 = (*(volatile s32 *) (u32) (v1 + 4));
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (s2 + 28)); goto L_002E7690; }
    v0 = 1;
    if (s1 != v0) goto L_002E768C;
L_002E765C:;
    v0 = (s32) ((u32) s1 << 4);
    s1 = 0;
    s0 = (s32) ((u32) s2 + (u32) v0);
L_002E7668:;
    a0 = (*(volatile s32 *) (u32) (s0 + 56));
    a1 = 0; func_001EF900(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 2;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_002E7668; }
    goto L_002E77D4;
L_002E768C:;
    v0 = (*(volatile s32 *) (u32) (s2 + 28));
L_002E7690:;
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (s2 + 28)); goto L_002E76B4; }
    a0 = (*(volatile s32 *) (u32) (s2 + 24)); v0 = func_001F2330(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s2 + 28)) = (u32) v0;
    a0 = v0;
    a1 = 1; func_001F2290(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s2 + 28));
L_002E76B4:;
    a1 = 1; func_001F3D10(a0, a1);
    s0 = (s32) ((u32) s1 << 4);
    v0 = (s32) ((u32) s0 + (u32) s2);
    s3 = (s32) ((u32) v0 + 0x38U);
    v0 = (*(volatile s32 *) (u32) (v0 + 56));
    if (v0 != 0) { v0 = (s32) ((u32) s0 + (u32) s2); goto L_002E76E4; }
    a0 = (*(volatile s32 *) (u32) (s2 + 28)); v0 = func_001F2410(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s3) = (u32) v0;
    v0 = (s32) ((u32) s0 + (u32) s2);
L_002E76E4:;
    a1 = (*(volatile s32 *) (u32) (v0 + 48));
    a0 = (*(volatile s32 *) (u32) s3); func_001B9830(a0, a1);
    v0 = (*(volatile s32 *) (u32) s2);
    { s32 c_ = s1 != 0; v0 = (*(volatile s32 *) (u32) v0); if (c_) goto L_002E7720; }
    v1 = (s32) ((u32) v0 << 4);
    a0 = (s32) ((u32) sp + 0x60U);
    v0 = (s32) 0x3b0000U;
    a2 = 16;
    v0 = (s32) ((u32) v0 + 0x3870U);
    a1 = (s32) ((u32) v0 + (u32) v1); memcpy(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 104)); goto L_002E7740;
L_002E7720:;
    v1 = (s32) ((u32) v0 << 4);
    a0 = (s32) ((u32) sp + 0x60U);
    v0 = (s32) 0x3b0000U;
    a2 = 16;
    v0 = (s32) ((u32) v0 + 0x38a0U);
    a1 = (s32) ((u32) v0 + (u32) v1); memcpy(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 104));
L_002E7740:;
    v0 = (s32) ((u32) s0 + (u32) s2);
    f0.f = (*(volatile f32 *) (u32) (sp + 108));
    (*(volatile u32 *) (u32) (sp + 112)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 116)) = (u32) 0;
    s1 = (s32) ((u32) v0 + 0x38U);
    (*(volatile f32 *) (u32) (sp + 120)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 124)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (v0 + 56));
    a1 = (s32) ((u32) sp + 0x70U); func_001EF370(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 96));
    (*(volatile u32 *) (u32) (sp + 88)) = (u32) 0;
    f0.f = (*(volatile f32 *) (u32) (sp + 100));
    (*(volatile u32 *) (u32) (sp + 92)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 80)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 84)) = f0.f;
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = (s32) ((u32) sp + 0x50U); func_001EF860(a0, a1);
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = (s32) ((u32) sp + 0x8cU); func_001EEE60(a0, a1);
    s3 = 0;
    s1 = (s32) ((u32) s2 + (u32) s0);
L_002E77A0:;
    v0 = (*(volatile u8 *) (u32) (s2 + 20));
    a0 = (*(volatile s32 *) (u32) (s1 + 56));
    a1 = v0 & 0x1; func_001EF900(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 2;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_002E77A0; }
    v0 = (s32) ((u32) s0 + (u32) s2);
    a0 = (*(volatile s32 *) (u32) (v0 + 60));
    a1 = 0; func_001EF900(a0, a1);
L_002E77D4:;
    return;
}
