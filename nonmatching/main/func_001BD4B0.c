/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Sprite_SetPositionZ(s32, f32);
void func_001B4F10(s32, f32);
s32 func_001B5350(s32, s32, s32, s32, f32, f32);
s32 func_001CDAA0(void);
s32 func_001D5A10(s32);
void func_001D7840(s32, s32);
void func_001D7C20(s32, s32, s32, s32);
void func_001D7D60(s32, s32);
void func_001D7D80(s32, s32, s32, s32);
void func_001D7E40(s32, s32, s32, s32);
s32 func_001D7F90(s32, s32, s32, s32);
void func_001ED840(s32, s32);
void func_001ED880(s32, f32);
void func_001EDA30(s32, s32);
void func_001EDAE0(s32, s32);
void func_001EDD90(s32, s32, s32, s32);
s32 func_001EE0D0(s32, s32, s32, s32);
void func_001EEE60(s32, s32);

s32 func_001BD4B0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    v0 = func_001EE0D0(a0, a1, a2, a3);
    s0 = v0;
    v1 = (s32) ((u32) sp + 0x40U);
    { s32 c_ = v1 == 0; v0 = 16; if (c_) goto L_001BD4F0; }
L_001BD4D4:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_001BD4D4;
L_001BD4F0:;
    v1 = (s32) ((u32) sp + 0x30U);
    { s32 c_ = v1 == 0; v0 = 16; if (c_) goto L_001BD518; }
L_001BD4FC:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_001BD4FC;
L_001BD518:;
    v0 = (s32) 0x10000U;
    a1 = (*(volatile u8 *) (u32) (gp + -32480));
    a0 = v0 | 0x40;
    v1 = (*(volatile u8 *) (u32) (gp + -32479));
    v0 = (*(volatile u8 *) (u32) (gp + -32478));
    (*(volatile u8 *) (u32) (sp + 92)) = (u8) a1;
    (*(volatile u8 *) (u32) (sp + 93)) = (u8) v1;
    (*(volatile u8 *) (u32) (sp + 94)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (gp + -32477));
    (*(volatile u8 *) (u32) (sp + 95)) = (u8) v0; v0 = func_001D5A10(a0);
    a0 = v0; v0 = func_001D7F90(a0, a1, a2, a3);
    s1 = v0;
    a1 = 3;
    a0 = s1; func_001D7E40(a0, a1, a2, a3);
    a0 = s1;
    a1 = 0; func_001D7D80(a0, a1, a2, a3);
    a0 = s1;
    a1 = 0; func_001D7D60(a0, a1);
    a0 = s1;
    a1 = 1; func_001D7C20(a0, a1, a2, a3);
    v0 = (s32) 0xc77f0000U;
    v0 = v0 | 0xff00;
    f12.i = (s32) v0;
    a0 = s1; Pes6Sprite_SetPositionZ(a0, f12.f);
    a0 = s1;
    a1 = 1; func_001D7840(a0, a1);
    v0 = (s32) 0x530000U;
    v1 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -25980));
    { s32 c_ = a0 == 0; (*(volatile u32 *) (u32) (v1 + -25968)) = (u32) s1; if (c_) goto L_001BD5BC; }
    func_001EDD90(a0, a1, a2, a3);
L_001BD5BC:;
    v0 = (s32) 0x3f0000U;
    a0 = (*(volatile s16 *) (u32) (v0 + 30612));
    v1 = (s32) ((u32) 0 - (u32) a0);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 1; if (c_) goto L_001BD5D8; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_001BD5D8:;
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    v0 = (s32) 0x3f0000U;
    v0 = (*(volatile s16 *) (u32) (v0 + 30614));
    v1 = (s32) ((u32) 0 - (u32) v0);
    v0 = (s32) v1 >> 1;
    { s32 c_ = v1 >= 0; (*(volatile f32 *) (u32) (sp + 64)) = f0.f; if (c_) goto L_001BD604; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_001BD604:;
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (sp + 68)) = f0.f;
    f0.i = (s32) a0;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (sp + 72)) = f0.f; v0 = func_001CDAA0();
    if (v0 != 0) { v0 = 71; goto L_001BD634; }
    v0 = 39;
L_001BD634:;
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    v0 = (s32) 0x3f0000U;
    v0 = (*(volatile s16 *) (u32) (v0 + 30612));
    v1 = (s32) ((u32) 0 - (u32) v0);
    v0 = (s32) v1 >> 1;
    { s32 c_ = v1 >= 0; (*(volatile f32 *) (u32) (sp + 76)) = f0.f; if (c_) goto L_001BD660; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_001BD660:;
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (sp + 48)) = f0.f; v0 = func_001CDAA0();
    if (v0 != 0) { a0 = 71; goto L_001BD680; }
    a0 = 39;
L_001BD680:;
    v0 = (s32) 0x3f0000U;
    v1 = (*(volatile s16 *) (u32) (v0 + 30614));
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 1; if (c_) goto L_001BD698; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_001BD698:;
    v1 = (s32) ((u32) v0 - (u32) a0);
    f0.i = (s32) v1;
    v0 = (s32) 0x3f0000U;
    f0.f = (f32) f0.i;
    v0 = (*(volatile s16 *) (u32) (v0 + 30612));
    (*(volatile f32 *) (u32) (sp + 52)) = f0.f;
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (sp + 56)) = f0.f; v0 = func_001CDAA0();
    if (v0 != 0) { v0 = 71; goto L_001BD6D0; }
    v0 = 39;
L_001BD6D0:;
    f0.i = (s32) v0;
    a0 = s0;
    f0.f = (f32) f0.i;
    a1 = 0;
    (*(volatile f32 *) (u32) (sp + 60)) = f0.f; func_001EDA30(a0, a1);
    a0 = s0;
    a1 = 1; func_001EDAE0(a0, a1);
    f12.i = (s32) 0;
    a0 = s0; func_001ED880(a0, f12.f);
    a0 = s0;
    a1 = 1; func_001ED840(a0, a1);
    v0 = func_001CDAA0();
    if (v0 != 0) { v0 = 71; goto L_001BD720; }
    v0 = 39;
L_001BD720:;
    v0 = (s32) ((u32) 0 - (u32) v0);
    a0 = (s32) ((u32) sp + 0x40U);
    f0.i = (s32) v0;
    a1 = 0;
    f13.f = (f32) f0.i;
    a2 = s0;
    f12.i = (s32) 0;
    a3 = 0; v0 = func_001B5350(a0, a1, a2, a3, f12.f, f13.f);
    v1 = (s32) 0x530000U;
    a0 = v0;
    f12.i = (s32) 0;
    (*(volatile u32 *) (u32) (v1 + -25976)) = (u32) v0; func_001B4F10(a0, f12.f);
    v0 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -25976));
    a1 = (s32) ((u32) sp + 0x5cU); func_001EEE60(a0, a1);
    v0 = func_001CDAA0();
    if (v0 != 0) { v0 = 71; goto L_001BD77C; }
    v0 = 39;
L_001BD77C:;
    f0.i = (s32) v0;
    a0 = (s32) ((u32) sp + 0x30U);
    f13.f = (f32) f0.i;
    a1 = 0;
    a2 = s0;
    f12.i = (s32) 0;
    a3 = 0; v0 = func_001B5350(a0, a1, a2, a3, f12.f, f13.f);
    v1 = (s32) 0x530000U;
    a0 = v0;
    f12.i = (s32) 0;
    (*(volatile u32 *) (u32) (v1 + -25972)) = (u32) v0; func_001B4F10(a0, f12.f);
    v0 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -25972));
    a1 = (s32) ((u32) sp + 0x5cU); func_001EEE60(a0, a1);
    v0 = (s32) 0x530000U;
    v1 = (s32) 0x3f800000U;
    (*(volatile u32 *) (u32) (v0 + -25980)) = (u32) s0;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + -25964)) = (u32) v1;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + -25960)) = (u32) 0;
    v0 = 1;
    return v0;
}
