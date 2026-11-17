/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001A54F0(s32);
s32 func_001A5550(s32);
s32 func_001A55C0(s32);
s32 func_001A5620(s32);
s32 func_001FCF60(s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_001FDF00(s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_009B4080(s32, s32, s32, s32);

s32 func_002017C0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s32 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    union { f32 f; s32 i; } f14 = { fa14 };
    union { f32 f; s32 i; } f15 = { fa15 };
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    s4 = a0;
    a0 = (s32) ((u32) sp + 0x90U);
    v0 = func_001A55C0(a0);
    f2.f = (*(volatile f32 *) (u32) (sp + 144));
    a0 = (s32) ((u32) sp + 0x90U);
    f1.f = (*(volatile f32 *) (u32) (sp + 148));
    f0.f = (*(volatile f32 *) (u32) (sp + 152));
    (*(volatile f32 *) (u32) (sp + 112)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 116)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 120)) = f0.f; v0 = func_001A54F0(a0);
    v0 = (s32) 0x590000U;
    v1 = 7;
    s3 = (*(volatile u8 *) (u32) (v0 + 7756));
    f0.f = (*(volatile f32 *) (u32) (sp + 144));
    f1.f = (*(volatile f32 *) (u32) (sp + 148));
    v0 = (s32) 0x590000U;
    s1 = (*(volatile u16 *) (u32) (v0 + 10058));
    (*(volatile f32 *) (u32) (sp + 128)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (sp + 152));
    (*(volatile f32 *) (u32) (sp + 132)) = f1.f;
    v0 = (s32) 0x590000U;
    s0 = (*(volatile u8 *) (u32) (v0 + 10051));
    (*(volatile f32 *) (u32) (sp + 136)) = f0.f;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    { s32 c_ = s0 != v1; s2 = (*(volatile u16 *) (u32) (v0 + 132)); if (c_) goto L_00201858; }
    v1 = 6;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 10051)) = (u8) v1;
L_00201858:;
    v0 = func_009B4080(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + 7756)) = (u8) v0;
    v0 = (s32) 0x590000U;
    s5 = (*(volatile u8 *) (u32) (gp + -22948));
    (*(volatile u16 *) (u32) (a0 + 132)) = (u16) 0;
    (*(volatile u8 *) (u32) (v0 + 10050)) = (u8) 0; v0 = func_009B4080(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (s5 != v0) goto L_00201894;
    if (s4 == 0) { a0 = (s32) ((u32) sp + 0x70U); goto L_002018A0; }
L_00201894:;
    v0 = func_001FCF60(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    a0 = (s32) ((u32) sp + 0x70U);
L_002018A0:;
    v0 = func_001FDF00(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    f2.f = (*(volatile f32 *) (u32) (sp + 112));
    a0 = (s32) ((u32) sp + 0x90U);
    f1.f = (*(volatile f32 *) (u32) (sp + 116));
    f0.f = (*(volatile f32 *) (u32) (sp + 120));
    (*(volatile f32 *) (u32) (sp + 144)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 148)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 152)) = f0.f; v0 = func_001A5620(a0);
    f2.f = (*(volatile f32 *) (u32) (sp + 128));
    a0 = (s32) ((u32) sp + 0x90U);
    f1.f = (*(volatile f32 *) (u32) (sp + 132));
    f0.f = (*(volatile f32 *) (u32) (sp + 136));
    (*(volatile f32 *) (u32) (sp + 144)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 148)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 152)) = f0.f; v0 = func_001A5550(a0);
    v1 = 4;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 10050)) = (u8) v1;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile u8 *) (u32) (v0 + 7756)) = (u8) s3;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (a0 + 132)) = (u16) s2;
    (*(volatile u16 *) (u32) (v1 + 10058)) = (u16) s1;
    (*(volatile u8 *) (u32) (v0 + 10051)) = (u8) s0; v0 = func_009B4080(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (gp + -22948)) = (u8) v0;
    return v0;
}
