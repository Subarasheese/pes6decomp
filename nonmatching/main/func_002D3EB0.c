/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Heap_Alloc(s64, s64, s64, s64);
s64 func_001D5A10(s64);
void func_001D7840(s64, s64);
s64 func_001D7A20(s64, s64, s64);
void func_001D7E40(s64, s64, s64, s64);
s64 func_001D7F90(s64, s64, s64, s64);
void func_001ED840(s64, s64);
void func_001ED880(s64, f32);
void func_001EDA30(s64, s64);
void func_001EDA50(s64, s64);
void func_001EDAE0(s64, s64);
s64 func_001EDD00(s64, s64, s64, s64);
s64 func_001EE0D0(s64, s64, s64, s64);
void func_001EEE60(s64, s64);
void func_001EF370(s64, s64);
void func_001EF860(s64, s64);
void func_001EF900(s64, s64);
void func_001EF920(s64, s64);

void func_002D3EB0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, f32 fa12) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    u64 qh_v0 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[18];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x5e0000U;
    a3 = (s32) 0x5e0000U;
    a0 = (s32) 0x5e0000U;
    a2 = (s32) 0x5e0000U;
    a1 = (s32) 0x5e0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 23904));
    f0.f = (*(volatile f32 *) (u32) (gp + -32108));
    v1 = (s32) 0x5e0000U;
    a4 = v0 & 0xfe;
    (*(volatile u8 *) (u32) (a3 + 23904)) = (u8) a4;
    v0 = (s32) 0x3b0000U;
    a3 = (*(volatile u8 *) (u32) (a0 + 23904));
    (*(volatile f32 *) (u32) (sp + 140)) = f0.f;
    { u32 a_ = (u32) (v0 + 8352) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a3 = a3 & 0xfd;
    a0 = (s32) 0x10000U;
    (*(volatile u8 *) (u32) (a2 + 23904)) = (u8) a3;
    a0 = a0 | 0x24f;
    { u32 a_ = (u32) (sp + 112) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (*(volatile u8 *) (u32) (a1 + 23904));
    v0 = v0 | 0x4;
    (*(volatile u8 *) (u32) (v1 + 23904)) = (u8) v0; v0 = func_001D5A10(a0);
    { s32 c_ = v0 == 0; (*(volatile u32 *) (u32) (gp + -21992)) = (u32) v0; if (c_) goto L_002D40D8; }
    v0 = (s32) 0x5e0000U;
    s0 = 17;
    a2 = (*(volatile u8 *) (u32) (v0 + 23904));
    v1 = (s32) 0x5e0000U;
    a0 = s0;
    a1 = 4;
    v0 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v0 + 23905)) = (u8) s0;
    v0 = a2 | 0x2;
    (*(volatile u8 *) (u32) (v1 + 23904)) = (u8) v0; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    { s32 c_ = v0 != 0; (*(volatile u32 *) (u32) (gp + -21988)) = (u32) v0; if (c_) goto L_002D3F64; }
    (*(volatile u32 *) (u32) (gp + -21992)) = (u32) 0; goto L_002D40D8;
L_002D3F64:;
    { s32 c_ = s0 <= 0; s2 = 0; if (c_) goto L_002D3FC0; }
    s1 = 0;
L_002D3F70:;
    a0 = (*(volatile s32 *) (u32) (gp + -21992)); v0 = func_001D7F90(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -21988));
    v1 = (s32) ((u32) v1 + (u32) s1);
    (*(volatile u32 *) (u32) v1) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (gp + -21988));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s2; func_001D7E40(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -21988));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 3; func_001D7840(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < s0;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_002D3F70; }
L_002D3FC0:;
    v0 = (*(volatile s32 *) (u32) (gp + -21988));
    a1 = (s32) ((u32) sp + 0x60U);
    a0 = (*(volatile s32 *) (u32) (v0 + 56));
    a2 = 0; v0 = func_001D7A20(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (gp + -21988));
    a1 = (s32) ((u32) sp + 0x50U);
    a0 = (*(volatile s32 *) (u32) (v0 + 56));
    a2 = 1; v0 = func_001D7A20(a0, a1, a2);
    f2.f = (*(volatile f32 *) (u32) (sp + 84));
    v0 = (s32) 0x5e0000U;
    f0.f = (*(volatile f32 *) (u32) (sp + 100));
    (*(volatile u32 *) (u32) (v0 + 23920)) = (u32) 0;
    f1.f = (*(volatile f32 *) (u32) (sp + 80));
    v0 = (s32) 0x5e0000U;
    (*(volatile u32 *) (u32) (v0 + 23924)) = (u32) 0;
    v1 = (s32) 0x5e0000U;
    f2.f = f2.f - f0.f;
    v0 = (s32) 0x5e0000U;
    (*(volatile u32 *) (u32) (sp + 88)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 84)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 80)) = (u32) 0;
    f0.f = (*(volatile f32 *) (u32) (sp + 96));
    (*(volatile f32 *) (u32) (sp + 92)) = f2.f;
    (*(volatile f32 *) (u32) (v0 + 23932)) = f2.f;
    f0.f = f1.f - f0.f;
    (*(volatile f32 *) (u32) (v1 + 23928)) = f0.f; v0 = func_001EE0D0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -22004)) = (u32) v0;
    a0 = v0;
    a1 = 1; func_001EDAE0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -22004));
    a1 = 0; func_001EDA30(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 96));
    a0 = (*(volatile s32 *) (u32) (gp + -22004));
    f0.f = (*(volatile f32 *) (u32) (sp + 100));
    a1 = (s32) ((u32) sp + 0x40U);
    (*(volatile u32 *) (u32) (sp + 72)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 64)) = f1.f;
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 68)) = f0.f; func_001EDA50(a0, a1);
    v0 = (s32) 0xc3480000U;
    f12.i = (s32) v0;
    a0 = (*(volatile s32 *) (u32) (gp + -22004)); func_001ED880(a0, f12.f);
    a0 = (*(volatile s32 *) (u32) (gp + -22004));
    a1 = 3; func_001ED840(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -22004)); v0 = func_001EDD00(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -22000)) = (u32) v0;
    a0 = v0;
    a1 = 0; func_001EF900(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -22000));
    a1 = 0; func_001EF920(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -22000));
    a1 = (s32) ((u32) sp + 0x70U); func_001EF860(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -22000));
    a1 = (s32) ((u32) sp + 0x50U); func_001EF370(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -22000));
    a1 = (s32) ((u32) sp + 0x8cU); func_001EEE60(a0, a1);
L_002D40D8:;
    return;
}
