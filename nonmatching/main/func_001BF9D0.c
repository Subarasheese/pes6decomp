/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B4F10(s32, s32, f32);
s32 func_001B5350(s32, s32, s32, s32, f32, f32);
f32 func_001E5410(void);
void func_001ED840(s32, s32);
void func_001ED880(s32, f32);
void func_001EDA30(s32, s32);
void func_001EDAE0(s32, s32);
s32 func_001EE0D0(s32, s32, s32, s32);

void func_001BF9D0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    v0 = func_001EE0D0(a0, a1, a2, a3);
    s1 = v0;
    v1 = (s32) ((u32) sp + 0x50U);
    s0 = 0;
    { s32 c_ = v1 == 0; v0 = 16; if (c_) goto L_001BFA1C; }
L_001BFA00:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_001BFA00;
L_001BFA1C:;
    v1 = (s32) 0x3a0000U;
    v0 = (s32) 0x3a0000U;
    a3 = (*(volatile s16 *) (u32) (v1 + -30992));
    a0 = (s32) ((u32) sp + 0x40U);
    a2 = (*(volatile s16 *) (u32) (v0 + -30990));
    v1 = (s32) 0x3a0000U;
    (*(volatile u16 *) (u32) (sp + 104)) = (u16) a3;
    a1 = (*(volatile s16 *) (u32) (v1 + -30988));
    v0 = (s32) 0x3a0000U;
    v0 = (*(volatile s16 *) (u32) (v0 + -30986));
    (*(volatile u16 *) (u32) (sp + 106)) = (u16) a2;
    v1 = 16;
    (*(volatile u16 *) (u32) (sp + 108)) = (u16) a1;
    { s32 c_ = a0 == 0; (*(volatile u16 *) (u32) (sp + 110)) = (u16) v0; if (c_) goto L_001BFA74; }
L_001BFA58:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_001BFA58;
L_001BFA74:;
    v0 = (s32) 0x3f0000U;
    v1 = (s32) 0x40000000U;
    v0 = (*(volatile s16 *) (u32) (v0 + 30612));
    f0.i = (s32) v1;
    v0 = (s32) ((u32) 0 - (u32) v0);
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    f0.f = f1.f / f0.f;
    (*(volatile f32 *) (u32) (sp + 64)) = f0.f; f0.f = func_001E5410();
    f1.i = f0.i ^ (s32) 0x80000000U;
    v0 = (s32) 0x40000000U;
    f0.i = (s32) v0;
    f0.f = f1.f / f0.f;
    v0 = (s32) 0x3f0000U;
    v0 = (*(volatile s16 *) (u32) (v0 + 30612));
    (*(volatile f32 *) (u32) (sp + 68)) = f0.f;
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (sp + 72)) = f0.f; f0.f = func_001E5410();
    { s32 c_ = s1 == 0; (*(volatile f32 *) (u32) (sp + 76)) = f0.f; if (c_) goto L_001BFB48; }
    a0 = s1;
    a1 = 0; func_001EDA30(a0, a1);
    a0 = s1;
    a1 = 0; func_001EDAE0(a0, a1);
    v0 = (s32) 0x3f800000U;
    f12.i = (s32) v0;
    a0 = s1; func_001ED880(a0, f12.f);
    a0 = s1;
    a1 = 1; func_001ED840(a0, a1);
    f12.f = (*(volatile f32 *) (u32) (sp + 80));
    a0 = (s32) ((u32) sp + 0x40U);
    f13.f = (*(volatile f32 *) (u32) (sp + 84));
    a1 = (s32) ((u32) sp + 0x68U);
    a2 = s1;
    a3 = 0; v0 = func_001B5350(a0, a1, a2, a3, f12.f, f13.f);
    s0 = v0;
    v0 = (s32) 0x3f800000U;
    f12.i = (s32) v0;
    a0 = s0; func_001B4F10(a0, a1, f12.f);
L_001BFB48:;
    (*(volatile u32 *) (u32) s2) = (u32) s1;
    (*(volatile u32 *) (u32) (s2 + 4)) = (u32) s0;
    return;
}
