/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Camera_GetViewMatrix(s64, s64, s64, s64);
void Pes6Camera_SetMatrix(s64);
s64 func_0019FD20(s64);
s64 func_0019FD30(s64);
void func_001CE940(s64, s64, s64, s64, f32);
void func_001CEA10(s64, s64, s64, s64);
void func_001CEAB0(void);
void func_001CEB90(void);
void func_001CEC30(void);
void func_001CEC70(void);
void func_001CECC0(s64);
void func_001CF0A0(s64, s64, s64, s64);
void func_001D3260(s64, s64, s64, s64);
s64 sceVu0MulMatrix(s64, s64, s64);

void func_0018D640(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, f32 fa12) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    u64 qh_v0 = 0;
    u64 qh_a3 = 0;
    u64 qh_a4 = 0;
    u64 qh_a5 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[24];
    s64 sp = (s32) (u32) frame;

    s0 = a0;
    { s32 c_ = s0 == 0; s1 = a1; if (c_) goto L_0018D71C; }
    v0 = Pes6Camera_GetViewMatrix(a0, a1, a2, a3);
    { u32 a_ = (u32) (v0 + 0) & ~15U; a5 = *(volatile s64 *) a_; qh_a5 = *(volatile u64 *) (a_ + 8); }
    s2 = (s32) ((u32) s1 << 2);
    { u32 a_ = (u32) (v0 + 16) & ~15U; a4 = *(volatile s64 *) a_; qh_a4 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) ((u32) s2 + (u32) s0);
    { u32 a_ = (u32) (v0 + 32) & ~15U; a3 = *(volatile s64 *) a_; qh_a3 = *(volatile u64 *) (a_ + 8); }
    a1 = (s32) ((u32) sp + 0x80U);
    a0 = (s32) ((u32) sp + 0x40U);
    { u32 a_ = (u32) (v0 + 48) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (sp + 128) & ~15U; *(volatile u64 *) a_ = (u64) a5; *(volatile u64 *) (a_ + 8) = qh_a5; }
    { u32 a_ = (u32) (sp + 144) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; }
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) a3; *(volatile u64 *) (a_ + 8) = qh_a3; }
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    s1 = (*(volatile s32 *) (u32) (v1 + 4));
    a2 = (s32) ((u32) s0 + 0x20U); v0 = sceVu0MulMatrix(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x40U); Pes6Camera_SetMatrix(a0);
    v0 = (s32) ((u32) s2 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v0 + 12)); func_001CECC0(a0);
    func_001CEB90();
    func_001CEC30();
    func_001CEAB0();
    a2 = (*(volatile s32 *) (u32) (s0 + 20));
    a0 = 2;
    a1 = 10063; func_001CE940(a0, a1, a2, a3, f12.f);
    a0 = s1; v0 = func_0019FD30(a0);
    a0 = v0; func_001CF0A0(a0, a1, a2, a3);
    a1 = (*(volatile s32 *) (u32) (s0 + 24));
    a0 = 10062; func_001CEA10(a0, a1, a2, a3);
    a0 = s1; v0 = func_0019FD20(a0);
    a0 = v0; func_001D3260(a0, a1, a2, a3);
    func_001CEC70();
    a0 = (s32) ((u32) sp + 0x80U); Pes6Camera_SetMatrix(a0);
L_0018D71C:;
    return;
}
