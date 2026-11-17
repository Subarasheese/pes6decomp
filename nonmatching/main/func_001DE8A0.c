/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001DF070(s32, s32);
void func_001DF510(s32, f32, f32);
void func_001DF7B0(s32, s32, s32, s32);
s32 func_001DF9C0(s32, s32, s32, s32, s32, f32, f32);
void func_001E21D0(s32, s32, s32);
void memset(s32, s32, s32);
void strncpy(s32, s32, s32);

void func_001DE8A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v0 = 8;
    v1 = (s32) ((u32) sp + 0x38U);
    { s32 c_ = v1 == 0; s1 = 0; if (c_) goto L_001DE8DC; }
L_001DE8C0:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_001DE8C0;
L_001DE8DC:;
    v0 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -20940));
    v0 = (s32) 0x530000U;
    a2 = (*(volatile s32 *) (u32) (v0 + -20948));
    a1 = 0; v0 = func_001DF9C0(a0, a1, a2, a3, a4, f12.f, f13.f);
    s0 = v0;
    a1 = (s32) 0x530000U;
    a1 = (s32) ((u32) a1 + 0xffffae24U);
    a0 = s0; func_001DF070(a0, a1);
    v0 = (s32) 0x7f7f0000U;
    v1 = v0 | 0xffff;
    v0 = (s32) 0x530000U;
    f12.f = (*(volatile f32 *) (u32) (v0 + -20932));
    f13.i = (s32) v1;
    a0 = s0; func_001DF510(a0, f12.f, f13.f);
    v0 = (s32) 0x530000U;
    a0 = s0;
    a1 = (*(volatile u8 *) (u32) (v0 + -20928));
    a2 = (s32) ((u32) sp + 0x38U); func_001E21D0(a0, a1, a2);
    v0 = (s32) 0x530000U;
    v1 = (s32) 0x530000U;
    a3 = (*(volatile s32 *) (u32) (v0 + -20872));
    f0.f = (*(volatile f32 *) (u32) (v1 + -20876));
    a2 = (*(volatile s32 *) (u32) (sp + 56));
    a1 = (s32) 0x530000U;
    a0 = (s32) 0x530000U;
    v0 = (s32) 0x530000U;
    v1 = (s32) ((u32) a3 + 0xffffffffU);
    f1.f = (*(volatile f32 *) (u32) (v0 + -20880));
    (*(volatile u8 *) (u32) (a1 + -20927)) = (u8) v1;
    v0 = (s32) 0x530000U;
    (*(volatile f32 *) (u32) (a0 + -20904)) = f1.f;
    { s32 c_ = a2 == 0; (*(volatile f32 *) (u32) (v0 + -20916)) = f0.f; if (c_) goto L_001DE9A8; }
    v1 = (*(volatile s32 *) (u32) (sp + 60));
    v0 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -20944));
    a1 = 0;
    s1 = (s32) ((u32) v1 - (u32) a2);
    a2 = (s32) ((u32) s1 + 0x1U); memset(a0, a1, a2);
    v0 = (s32) 0x530000U;
    a1 = (*(volatile s32 *) (u32) (sp + 56));
    a0 = (*(volatile s32 *) (u32) (v0 + -20944));
    a2 = s1; strncpy(a0, a1, a2);
    s1 = 1;
L_001DE9A8:;
    a0 = s0; func_001DF7B0(a0, a1, a2, a3);
    v0 = s1;
    return;
}
