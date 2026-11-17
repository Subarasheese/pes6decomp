/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001E4F30(s32, s32);
s32 func_001EBF50(s32, s32, s32, s32);
s32 memset(s32, s32, s32);

s32 func_001E2080(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    a1 = 0;
    a2 = 72;
    s1 = a0;
    a0 = (s32) 0x530000U;
    a0 = (s32) ((u32) a0 + 0xffffae80U); v0 = memset(a0, a1, a2);
    a7 = (*(volatile s32 *) (u32) (s1 + 8));
    a6 = (s32) 0x530000U;
    a0 = (s32) 0x530000U;
    a5 = (s32) 0x530000U;
    a4 = (s32) 0x530000U;
    a3 = (s32) 0x530000U;
    v1 = (s32) 0x530000U;
    v0 = (s32) 0x530000U;
    a0 = (s32) ((u32) a0 + 0xffffae70U);
    a1 = 0;
    a2 = 12;
    (*(volatile u32 *) (u32) (a6 + -20836)) = (u32) a7;
    a6 = (*(volatile s32 *) (u32) (s1 + 24));
    (*(volatile u32 *) (u32) (a5 + -20828)) = (u32) a6;
    (*(volatile u32 *) (u32) (a4 + -20820)) = (u32) 0;
    (*(volatile u32 *) (u32) (a3 + -20816)) = (u32) 0;
    f0.f = (*(volatile f32 *) (u32) (s1 + 44));
    (*(volatile f32 *) (u32) (v1 + -20812)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s1 + 48));
    (*(volatile f32 *) (u32) (v0 + -20808)) = f0.f; v0 = memset(a0, a1, a2);
    (*(volatile u16 *) (u32) (s1 + 70)) = (u16) 0;
    v0 = (s32) 0x3a0000U;
    f3.f = (*(volatile f32 *) (u32) (v0 + -27824));
    v1 = (s32) 0x3a0000U;
    s0 = (*(volatile s32 *) (u32) (s1 + 8));
    f1.f = (*(volatile f32 *) (u32) (v1 + -27816));
    a0 = (s32) ((u32) sp + 0x38U);
    a1 = (s32) ((u32) sp + 0x34U);
    v0 = (s32) 0x3a0000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + -27820));
    (*(volatile f32 *) (u32) (sp + 48)) = f3.f;
    (*(volatile f32 *) (u32) a0) = f1.f;
    v0 = (s32) 0x3a0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -27812));
    (*(volatile f32 *) (u32) a1) = f2.f;
    (*(volatile f32 *) (u32) (sp + 60)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s1 + 28));
    (*(volatile f32 *) (u32) (sp + 48)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s1 + 32));
    (*(volatile f32 *) (u32) a1) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s1 + 84));
    (*(volatile f32 *) (u32) a0) = f0.f;
L_001E2154:;
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x30U); v0 = func_001E4F30(a0, a1);
    v1 = v0 & 0xff;
    { s32 c_ = v1 != 0; (*(volatile u8 *) (u32) (s0 + 166)) = (u8) v0; if (c_) goto L_001E2184; }
L_001E2170:;
    s0 = (*(volatile s32 *) (u32) s0);
    if (s0 != 0) goto L_001E2154;
    goto L_001E21A8;
L_001E2184:;
    a0 = (s32) ((u32) s0 + 0x50U);
    a1 = (s32) ((u32) s0 + 0x10U);
    a2 = (s32) ((u32) sp + 0x30U);
    a3 = 4; v0 = func_001EBF50(a0, a1, a2, a3);
    v1 = (*(volatile u16 *) (u32) (s1 + 70));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u16 *) (u32) (s1 + 70)) = (u16) v1; goto L_001E2170;
L_001E21A8:;
    return v0;
}
