/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6OptionData_GetBlock304(void);

void func_00931310(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, t8 = 0, t9 = 0, fp = 0;
    u64 qh_v1 = 0;
    u64 qh_a1 = 0;
    u64 qh_a3 = 0;
    u64 qh_a5 = 0;
    u64 qh_s5 = 0;
    u64 qh_s6 = 0;
    s64 frame[48];
    s64 sp = (s32) (u32) frame;

    v0 = Pes6OptionData_GetBlock304();
    v1 = 1;
    a1 = 2;
    (*(volatile u8 *) (u32) v0) = (u8) v1;
    a0 = 8;
    (*(volatile u8 *) (u32) (v0 + 1)) = (u8) 0;
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 2)) = (u8) 0;
    a7 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 3)) = (u8) 0;
    a6 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 4)) = (u8) 0;
    a5 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 5)) = (u8) a1;
    a3 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 6)) = (u8) 0;
    s5 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 7)) = (u8) a0;
    a4 = (s32) 0x590000U;
    t4 = (*(volatile u16 *) (u32) (v1 + 7662));
    a2 = (s32) 0x590000U;
    a1 = (s32) 0x590000U;
    a0 = (s32) 0x590000U;
    s4 = (s32) 0x590000U;
    s3 = (s32) 0x590000U;
    t4 = t4 | 0x1;
    v1 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (a7 + 7662)) = (u16) t4;
    s2 = (s32) 0x590000U;
    a6 = (*(volatile u16 *) (u32) (a6 + 7662));
    s1 = (s32) 0x590000U;
    s0 = (s32) 0x590000U;
    t9 = (s32) 0x590000U;
    t8 = (s32) 0x590000U;
    t7 = (s32) 0x590000U;
    a6 = a6 ^ 0x1;
    t6 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (a5 + 7662)) = (u16) a6;
    t5 = (s32) 0x590000U;
    a3 = (*(volatile u16 *) (u32) (a3 + 7662));
    t4 = (s32) 0x590000U;
    a7 = (s32) 0x590000U;
    a6 = (s32) 0x590000U;
    a5 = (s32) 0x590000U;
    fp = (s32) 0x590000U;
    s6 = a3 | 0x1;
    s7 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (s5 + 7662)) = (u16) s6;
    a3 = (s32) 0x590000U;
    s6 = (s32) 0x590000U;
    s5 = (*(volatile u16 *) (u32) (a4 + 7662));
    { u32 a_ = (u32) (sp + 336) & ~15U; *(volatile u64 *) a_ = (u64) s6; *(volatile u64 *) (a_ + 8) = qh_s6; }
    s6 = (s32) 0x590000U;
    { u32 a_ = (u32) (sp + 368) & ~15U; *(volatile u64 *) a_ = (u64) a3; *(volatile u64 *) (a_ + 8) = qh_a3; }
    { u32 a_ = (u32) (sp + 320) & ~15U; *(volatile u64 *) a_ = (u64) s6; *(volatile u64 *) (a_ + 8) = qh_s6; }
    a3 = (s32) 0x590000U;
    s6 = (s32) 0x590000U;
    { u32 a_ = (u32) (sp + 352) & ~15U; *(volatile u64 *) a_ = (u64) a3; *(volatile u64 *) (a_ + 8) = qh_a3; }
    { u32 a_ = (u32) (sp + 304) & ~15U; *(volatile u64 *) a_ = (u64) s6; *(volatile u64 *) (a_ + 8) = qh_s6; }
    a4 = (s32) 0x590000U;
    s6 = s5 | 0x2;
    a3 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (a2 + 7662)) = (u16) s6;
    s5 = (s32) 0x590000U;
    s6 = (s32) 0x590000U;
    { u32 a_ = (u32) (sp + 288) & ~15U; *(volatile u64 *) a_ = (u64) s5; *(volatile u64 *) (a_ + 8) = qh_s5; }
    { u32 a_ = (u32) (sp + 272) & ~15U; *(volatile u64 *) a_ = (u64) s6; *(volatile u64 *) (a_ + 8) = qh_s6; }
    a2 = (s32) 0x590000U;
    s6 = (s32) 0x590000U;
    s5 = (*(volatile u16 *) (u32) (a1 + 7662));
    { u32 a_ = (u32) (sp + 256) & ~15U; *(volatile u64 *) a_ = (u64) s6; *(volatile u64 *) (a_ + 8) = qh_s6; }
    s6 = (s32) 0x590000U;
    { u32 a_ = (u32) (sp + 240) & ~15U; *(volatile u64 *) a_ = (u64) s6; *(volatile u64 *) (a_ + 8) = qh_s6; }
    a1 = (s32) 0x590000U;
    s6 = (s32) 0x590000U;
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) s6; *(volatile u64 *) (a_ + 8) = qh_s6; }
    s6 = s5 ^ 0x2;
    (*(volatile u16 *) (u32) (a0 + 7662)) = (u16) s6;
    s5 = (s32) 0x590000U;
    s6 = (s32) 0x590000U;
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) s5; *(volatile u64 *) (a_ + 8) = qh_s5; }
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) s6; *(volatile u64 *) (a_ + 8) = qh_s6; }
    a0 = (s32) 0x590000U;
    s6 = (s32) 0x590000U;
    s5 = (*(volatile u16 *) (u32) (v1 + 7662));
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) s6; *(volatile u64 *) (a_ + 8) = qh_s6; }
    s6 = (s32) 0x590000U;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) s6; *(volatile u64 *) (a_ + 8) = qh_s6; }
    v1 = (s32) 0x590000U;
    s6 = s5 | 0x40;
    (*(volatile u16 *) (u32) (s4 + 7662)) = (u16) s6;
    s5 = (s32) 0x590000U;
    s3 = (*(volatile u16 *) (u32) (s3 + 7662));
    s4 = (s32) 0x590000U;
    s6 = (s64) ((u64) 0 + (u64) (s64) 1);
    s3 = s3 ^ 0x40;
    (*(volatile u16 *) (u32) (s2 + 7662)) = (u16) s3;
    s1 = (*(volatile u16 *) (u32) (s1 + 7662));
    s1 = s1 | 0x4;
    (*(volatile u16 *) (u32) (s0 + 7662)) = (u16) s1;
    s0 = (*(volatile u16 *) (u32) (t9 + 7662));
    s0 = s0 ^ 0x4;
    (*(volatile u16 *) (u32) (t8 + 7662)) = (u16) s0;
    t7 = (*(volatile u16 *) (u32) (t7 + 7662));
    t7 = t7 | 0x4;
    (*(volatile u16 *) (u32) (t6 + 7662)) = (u16) t7;
    t5 = (*(volatile u16 *) (u32) (t5 + 7662));
    t5 = t5 | 0x8;
    (*(volatile u16 *) (u32) (t4 + 7662)) = (u16) t5;
    a7 = (*(volatile u16 *) (u32) (a7 + 7662));
    a7 = a7 ^ 0x8;
    (*(volatile u16 *) (u32) (a6 + 7662)) = (u16) a7;
    a5 = (*(volatile u16 *) (u32) (a5 + 7662));
    a5 = a5 | 0x8;
    (*(volatile u16 *) (u32) (fp + 7662)) = (u16) a5;
    { u32 a_ = (u32) (sp + 368) & ~15U; a5 = *(volatile s64 *) a_; qh_a5 = *(volatile u64 *) (a_ + 8); }
    a5 = (*(volatile u16 *) (u32) (a5 + 7662));
    a6 = a5 | 0x10;
    { u32 a_ = (u32) (sp + 352) & ~15U; a5 = *(volatile s64 *) a_; qh_a5 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u16 *) (u32) (a5 + 7662)) = (u16) a6;
    a4 = (*(volatile u16 *) (u32) (a4 + 7662));
    a4 = a4 ^ 0x10;
    (*(volatile u16 *) (u32) (a3 + 7662)) = (u16) a4;
    { u32 a_ = (u32) (sp + 336) & ~15U; a3 = *(volatile s64 *) a_; qh_a3 = *(volatile u64 *) (a_ + 8); }
    a3 = (*(volatile u16 *) (u32) (a3 + 7662));
    a4 = a3 | 0x10;
    { u32 a_ = (u32) (sp + 320) & ~15U; a3 = *(volatile s64 *) a_; qh_a3 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u16 *) (u32) (a3 + 7662)) = (u16) a4;
    { u32 a_ = (u32) (sp + 304) & ~15U; a3 = *(volatile s64 *) a_; qh_a3 = *(volatile u64 *) (a_ + 8); }
    a3 = (*(volatile u16 *) (u32) (a3 + 7662));
    a4 = a3 | 0x20;
    { u32 a_ = (u32) (sp + 288) & ~15U; a3 = *(volatile s64 *) a_; qh_a3 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u16 *) (u32) (a3 + 7662)) = (u16) a4;
    a2 = (*(volatile u16 *) (u32) (a2 + 7662));
    a2 = a2 ^ 0x20;
    (*(volatile u16 *) (u32) (a1 + 7662)) = (u16) a2;
    { u32 a_ = (u32) (sp + 272) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    a1 = (*(volatile u16 *) (u32) (a1 + 7662));
    a2 = a1 | 0x20;
    { u32 a_ = (u32) (sp + 256) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u16 *) (u32) (a1 + 7662)) = (u16) a2;
    { u32 a_ = (u32) (sp + 240) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    a1 = (*(volatile u16 *) (u32) (a1 + 7662));
    a2 = a1 | 0x100;
    { u32 a_ = (u32) (sp + 224) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u16 *) (u32) (a1 + 7662)) = (u16) a2;
    { u32 a_ = (u32) (sp + 208) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    a1 = (*(volatile u16 *) (u32) (a1 + 7662));
    a1 = a1 ^ 0x100;
    (*(volatile u16 *) (u32) (a0 + 7662)) = (u16) a1;
    v1 = (*(volatile u16 *) (u32) (v1 + 7662));
    v1 = v1 | 0x100;
    (*(volatile u16 *) (u32) (s7 + 7662)) = (u16) v1;
    { u32 a_ = (u32) (sp + 192) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (*(volatile u16 *) (u32) (v1 + 7662));
    a0 = v1 | 0x200;
    { u32 a_ = (u32) (sp + 176) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u16 *) (u32) (v1 + 7662)) = (u16) a0;
    { u32 a_ = (u32) (sp + 160) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (*(volatile u16 *) (u32) (v1 + 7662));
    v1 = v1 ^ 0x200;
    (*(volatile u16 *) (u32) (s5 + 7662)) = (u16) v1;
    v1 = (*(volatile u16 *) (u32) (s4 + 7662));
    (*(volatile u16 *) (u32) (v0 + 8)) = (u16) v1;
    a0 = (*(volatile u8 *) (u32) (v0 + 10));
    v1 = -2;
    v1 = a0 & v1;
    v1 = v1 | s6;
    (*(volatile u8 *) (u32) (v0 + 10)) = (u8) v1;
    a0 = (*(volatile u8 *) (u32) (v0 + 10));
    v1 = -3;
    a0 = a0 & v1;
    v1 = (s64) ((u64) 0 + (u64) (s64) 2);
    v1 = a0 | v1;
    (*(volatile u8 *) (u32) (v0 + 10)) = (u8) v1;
    (*(volatile u16 *) (u32) (v0 + 16)) = (u16) 0;
    v1 = 1;
    (*(volatile u16 *) (u32) (v0 + 18)) = (u16) 0;
    (*(volatile u8 *) (u32) (v0 + 20)) = (u8) v1;
    (*(volatile u8 *) (u32) (v0 + 22)) = (u8) 0;
    (*(volatile u8 *) (u32) (v0 + 23)) = (u8) 0;
    (*(volatile u8 *) (u32) (v0 + 32)) = (u8) v1;
    (*(volatile u8 *) (u32) (v0 + 33)) = (u8) v1;
    return;
}
