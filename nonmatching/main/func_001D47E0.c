/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00103BB8(s64, s64, s64);
s64 func_00129BA0(s64, s64, s64, s64, f32, f32, f32);
s64 func_00129C20(s64, s64, s64, s64, f32, f32, f32);
s64 func_00129C60(s64, s64, s64, s64, f32, f32, f32);

void func_001D47E0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, f32 fa12, f32 fa13, f32 fa14) {
    s64 v0 = 0, v1 = 0;
    u64 qh_a1 = 0;
    u64 qh_a2 = 0;
    u64 qh_a3 = 0;
    u64 qh_a4 = 0;
    u64 qh_a5 = 0;
    u64 qh_a6 = 0;
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    union { f32 f; s32 i; } f14 = { fa14 };
    s64 frame[26];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x530000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -21758));
    if (v0 == 0) goto L_001D48E0;
    v0 = func_00129C60(a0, a1, a2, a3, f12.f, f13.f, f14.f);
    v1 = (s32) 0x370000U;
    a0 = (s32) 0x370000U;
    { u32 a_ = (u32) (v1 + 23344) & ~15U; a4 = *(volatile s64 *) a_; qh_a4 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a0 + 23360) & ~15U; a3 = *(volatile s64 *) a_; qh_a3 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) 0x370000U;
    { u32 a_ = (u32) (sp + 16) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; }
    { u32 a_ = (u32) (v1 + 23376) & ~15U; a2 = *(volatile s64 *) a_; qh_a2 = *(volatile u64 *) (a_ + 8); }
    a0 = (s32) 0x370000U;
    { u32 a_ = (u32) (a0 + 23392) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (sp + 80) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; }
    { u32 a_ = (u32) (sp + 32) & ~15U; *(volatile u64 *) a_ = (u64) a3; *(volatile u64 *) (a_ + 8) = qh_a3; }
    { u32 a_ = (u32) (sp + 96) & ~15U; *(volatile u64 *) a_ = (u64) a3; *(volatile u64 *) (a_ + 8) = qh_a3; }
    v1 = (s32) 0x530000U;
    { u32 a_ = (u32) (sp + 48) & ~15U; *(volatile u64 *) a_ = (u64) a2; *(volatile u64 *) (a_ + 8) = qh_a2; }
    v1 = (*(volatile u8 *) (u32) (v1 + -21758));
    a0 = 1;
    { u32 a_ = (u32) (sp + 112) & ~15U; *(volatile u64 *) a_ = (u64) a2; *(volatile u64 *) (a_ + 8) = qh_a2; }
    { u32 a_ = (u32) (sp + 64) & ~15U; *(volatile u64 *) a_ = (u64) a1; *(volatile u64 *) (a_ + 8) = qh_a1; }
    { s32 c_ = v1 != a0; { u32 a_ = (u32) (sp + 128) & ~15U; *(volatile u64 *) a_ = (u64) a1; *(volatile u64 *) (a_ + 8) = qh_a1; } if (c_) goto L_001D4868; }
    a0 = (s32) 0xc1a00000U;
    v1 = (s32) 0x41a00000U;
    (*(volatile u32 *) (u32) (sp + 120)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 80)) = (u32) a0;
    (*(volatile u32 *) (u32) (sp + 100)) = (u32) a0; goto L_001D4884;
L_001D4868:;
    a0 = (s32) 0xbe4c0000U;
    v1 = (s32) 0x3e4c0000U;
    v1 = v1 | 0xcccd;
    a0 = a0 | 0xcccd;
    (*(volatile u32 *) (u32) (sp + 80)) = (u32) a0;
    (*(volatile u32 *) (u32) (sp + 100)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 120)) = (u32) v1;
L_001D4884:;
    a1 = v0;
    a0 = (s32) ((u32) sp + 0x90U);
    a2 = (s32) ((u32) sp + 0x50U); v0 = func_00103BB8(a0, a1, a2);
    v0 = func_00129BA0(a0, a1, a2, a3, f12.f, f13.f, f14.f);
    a0 = (s32) ((u32) sp + 0x50U);
    a1 = v0;
    a2 = (s32) ((u32) sp + 0x90U); v0 = func_00103BB8(a0, a1, a2);
    { u32 a_ = (u32) (sp + 80) & ~15U; a6 = *(volatile s64 *) a_; qh_a6 = *(volatile u64 *) (a_ + 8); }
    a2 = (s32) 0x400000U;
    { u32 a_ = (u32) (sp + 96) & ~15U; a5 = *(volatile s64 *) a_; qh_a5 = *(volatile u64 *) (a_ + 8); }
    a1 = (s32) 0x400000U;
    { u32 a_ = (u32) (sp + 112) & ~15U; a4 = *(volatile s64 *) a_; qh_a4 = *(volatile u64 *) (a_ + 8); }
    a0 = (s32) 0x400000U;
    { u32 a_ = (u32) (sp + 128) & ~15U; a3 = *(volatile s64 *) a_; qh_a3 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) 0x400000U;
    { u32 a_ = (u32) (a2 + -20384) & ~15U; *(volatile u64 *) a_ = (u64) a6; *(volatile u64 *) (a_ + 8) = qh_a6; }
    { u32 a_ = (u32) (a1 + -20368) & ~15U; *(volatile u64 *) a_ = (u64) a5; *(volatile u64 *) (a_ + 8) = qh_a5; }
    { u32 a_ = (u32) (a0 + -20352) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; }
    { u32 a_ = (u32) (v1 + -20336) & ~15U; *(volatile u64 *) a_ = (u64) a3; *(volatile u64 *) (a_ + 8) = qh_a3; } goto L_001D4918;
L_001D48E0:;
    v0 = func_00129C20(a0, a1, a2, a3, f12.f, f13.f, f14.f);
    { u32 a_ = (u32) (v0 + 16) & ~15U; a6 = *(volatile s64 *) a_; qh_a6 = *(volatile u64 *) (a_ + 8); }
    a2 = (s32) 0x400000U;
    { u32 a_ = (u32) (v0 + 32) & ~15U; a5 = *(volatile s64 *) a_; qh_a5 = *(volatile u64 *) (a_ + 8); }
    a1 = (s32) 0x400000U;
    { u32 a_ = (u32) (v0 + 48) & ~15U; a4 = *(volatile s64 *) a_; qh_a4 = *(volatile u64 *) (a_ + 8); }
    a0 = (s32) 0x400000U;
    { u32 a_ = (u32) (v0 + 0) & ~15U; a3 = *(volatile s64 *) a_; qh_a3 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) 0x400000U;
    { u32 a_ = (u32) (a2 + -20384) & ~15U; *(volatile u64 *) a_ = (u64) a3; *(volatile u64 *) (a_ + 8) = qh_a3; }
    { u32 a_ = (u32) (a1 + -20368) & ~15U; *(volatile u64 *) a_ = (u64) a6; *(volatile u64 *) (a_ + 8) = qh_a6; }
    { u32 a_ = (u32) (a0 + -20352) & ~15U; *(volatile u64 *) a_ = (u64) a5; *(volatile u64 *) (a_ + 8) = qh_a5; }
    { u32 a_ = (u32) (v1 + -20336) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; }
L_001D4918:;
    return;
}
