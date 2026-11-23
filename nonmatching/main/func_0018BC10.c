/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001CEAB0(void);
void func_001CEB90(void);
void func_001CEBF0(void);
void func_001CEC30(void);
void func_001CEC60(s64);
void func_001CEC70(void);
void func_001CECC0(s64);
void func_001CED30(s64, s64, s64, s64, f32);

void func_0018BC10(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, f32 fa12) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[32];
    s64 sp = (s32) (u32) frame;

    a0 = 512;
    func_001CECC0(a0);
    func_001CEB90();
    func_001CEC30();
    v1 = 128;
    v0 = 161;
    v1 = (s64) ((u64) v1 << 32);
    a0 = v0 | v1; func_001CEC60(a0);
    func_001CEAB0();
    v0 = 20;
    s3 = (s32) ((u32) sp + 0xf4U);
    (*(volatile u8 *) (u32) s3) = (u8) v0;
    s0 = (s32) ((u32) sp + 0xfcU);
    (*(volatile u8 *) (u32) (sp + 246)) = (u8) v0;
    s2 = (s32) ((u32) sp + 0xf8U);
    (*(volatile u8 *) (u32) (sp + 245)) = (u8) v0;
    v1 = 48;
    v0 = (s32) ((u32) s0 + 0x1U);
    s5 = (s32) ((u32) sp + 0xf2U);
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    s4 = (s32) ((u32) sp + 0xf1U);
    v0 = (s32) ((u32) sp + 0xf3U);
    (*(volatile u8 *) (u32) s5) = (u8) v1;
    a0 = (*(volatile u8 *) (u32) v0);
    s1 = (s32) ((u32) s2 + 0x1U);
    (*(volatile u8 *) (u32) s4) = (u8) v1;
    s6 = (s32) ((u32) s2 + 0x2U);
    (*(volatile u8 *) (u32) (sp + 240)) = (u8) v1;
    s7 = (s32) ((u32) s2 + 0x3U);
    v1 = (*(volatile u8 *) (u32) (s3 + 1));
    fp = (s32) ((u32) s3 + 0x1U);
    a4 = (*(volatile u8 *) (u32) (sp + 240));
    a3 = (*(volatile u8 *) (u32) s4);
    v0 = (s32) ((u32) s3 + 0x2U);
    a2 = (*(volatile u8 *) (u32) s5);
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) s0 + 0x2U);
    a1 = (*(volatile u8 *) (u32) s3);
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) s3 + 0x3U);
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) v1;
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) s0 + 0x3U);
    v1 = (*(volatile u8 *) (u32) (s3 + 2));
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) 0x44c80000U;
    (*(volatile u8 *) (u32) (s2 + 3)) = (u8) a0;
    f12.i = (s32) v0;
    (*(volatile u8 *) (u32) s2) = (u8) a4;
    (*(volatile u8 *) (u32) (s2 + 1)) = (u8) a3;
    a0 = (s32) ((u32) sp + 0xf0U);
    v0 = (*(volatile u8 *) (u32) (s3 + 3));
    (*(volatile u8 *) (u32) (s2 + 2)) = (u8) a2;
    (*(volatile u8 *) (u32) s0) = (u8) a1;
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) v1;
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) v0; func_001CED30(a0, a1, a2, a3, f12.f);
    a0 = 72; func_001CEC60(a0);
    func_001CEBF0();
    func_001CEAB0();
    v1 = 255;
    v0 = (s32) ((u32) sp + 0xf3U);
    (*(volatile u8 *) (u32) v0) = (u8) v1;
    a2 = 50;
    v1 = (*(volatile u8 *) (u32) v0);
    f12.i = (s32) 0;
    (*(volatile u8 *) (u32) s5) = (u8) a2;
    a0 = (s32) ((u32) sp + 0xf0U);
    a1 = (*(volatile u8 *) (u32) s5);
    (*(volatile u8 *) (u32) s4) = (u8) a2;
    (*(volatile u8 *) (u32) (sp + 240)) = (u8) a2;
    a2 = (*(volatile u8 *) (u32) s4);
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) s7) = (u8) v1;
    (*(volatile u8 *) (u32) s6) = (u8) a1;
    (*(volatile u8 *) (u32) fp) = (u8) a2;
    (*(volatile u8 *) (u32) v0) = (u8) v1;
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) s1) = (u8) a2;
    (*(volatile u8 *) (u32) v0) = (u8) v1;
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) v0) = (u8) a1;
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) v0) = (u8) a1;
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) v0) = (u8) a2;
    v0 = (*(volatile u8 *) (u32) (sp + 240));
    (*(volatile u8 *) (u32) s3) = (u8) v0;
    (*(volatile u8 *) (u32) s2) = (u8) v0;
    (*(volatile u8 *) (u32) s0) = (u8) v0; func_001CED30(a0, a1, a2, a3, f12.f);
    func_001CEC70();
    return;
}
