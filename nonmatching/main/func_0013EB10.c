/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00103050(s64, s64, s64, s64);
void func_001031F0(s64, s64);
void func_00103208(s64);
void func_001032B0(s64, s64, s64);
s64 func_00146CA0(s64);

void func_0013EB10(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_a1 = 0;
    s64 frame[36];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x500000U;
    s5 = a0;
    v1 = (*(volatile s32 *) (u32) (v0 + -9212));
    (*(volatile u32 *) (u32) (sp + 284)) = (u32) a1;
    v0 = (*(volatile s32 *) (u32) (v1 + 28));
    s2 = (*(volatile s16 *) (u32) (v1 + 12));
    s3 = (*(volatile s32 *) (u32) (v1 + 24));
    s4 = (*(volatile s16 *) (u32) (v1 + 14));
    { u32 a_ = (u32) (sp + 256) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (*(volatile s32 *) (u32) (v1 + 32));
    a0 = s2;
    { u32 a_ = (u32) (sp + 240) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_00146CA0(a0);
    s1 = v0;
    a0 = s4; v0 = func_00146CA0(a0);
    s0 = v0;
    { s32 c_ = s2 >= 0; a0 = (s32) s2 >> 1; if (c_) goto L_0013EB90; }
    v0 = (s32) ((u32) s2 + 0x1U);
    a0 = (s32) v0 >> 1;
L_0013EB90:;
    v1 = 2048;
    v0 = (s32) ((u32) a0 + 0x800U);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v0 = (s32) ((u32) v0 << 4);
    s6 = (s32) ((u32) v1 << 4);
    v0 = (s32) ((u32) v0 + 0xfffffff8U);
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    fp = (s32) ((u32) s6 + 0xfffffff8U);
    { s32 c_ = s4 >= 0; a0 = (s32) s4 >> 1; if (c_) goto L_0013EBC0; }
    v0 = (s32) ((u32) s4 + 0x1U);
    a0 = (s32) v0 >> 1;
L_0013EBC0:;
    v0 = (s32) ((u32) a0 + 0x800U);
    v1 = 2048;
    v0 = (s32) ((u32) v0 << 4);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v0 = (s32) ((u32) v0 + 0xfffffff8U);
    s7 = (s32) ((u32) v1 << 4);
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a0 = s5;
    v0 = (s32) ((u32) s7 + 0xfffffff8U);
    a1 = 0;
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a2 = 0;
    v0 = (s32) ((u32) s2 << 4);
    a3 = 0;
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) s4 << 4);
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } func_00103050(a0, a1, a2, a3);
    v0 = (s32) 0x370000U;
    { u32 a_ = (u32) (v0 + 25600) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    a0 = s5; func_001031F0(a0, a1);
    v1 = 1;
    v0 = (s32) 0x3a000000U;
    v1 = (s64) ((u64) v1 << 32);
    a0 = s5;
    a1 = 78;
    a2 = v0 | v1; func_001032B0(a0, a1, a2);
    v0 = (s32) ((u32) s4 + 0xffffffffU);
    v1 = (s32) ((u32) s2 + 0xffffffffU);
    v1 = (s64) ((u64) v1 << 32);
    v0 = (s64) ((u64) v0 << 32);
    v1 = v1 >> 32;
    v0 = v0 >> 32;
    v1 = (s64) ((u64) v1 << 16);
    v0 = (s64) ((u64) v0 << 48);
    a2 = v1 | v0;
    a0 = s5;
    a1 = 64; func_001032B0(a0, a1, a2);
    v0 = (s64) ((u64) s7 << 32);
    v1 = (s64) ((u64) s6 << 32);
    v0 = v0 >> 32;
    v1 = v1 >> 32;
    v0 = (s64) ((u64) v0 << 32);
    a0 = s5;
    a2 = v1 | v0;
    a1 = 24; func_001032B0(a0, a1, a2);
    a0 = s5;
    a1 = 20;
    a2 = 1; func_001032B0(a0, a1, a2);
    v1 = 128;
    a0 = s5;
    v0 = (s64) ((u64) v1 << 32);
    a1 = 59;
    a2 = v1 | v0; func_001032B0(a0, a1, a2);
    a0 = s5;
    a1 = 8;
    a2 = 0; func_001032B0(a0, a1, a2);
    a0 = s5;
    a1 = 66;
    a2 = 68; func_001032B0(a0, a1, a2);
    v0 = 0x8080;
    a0 = s5;
    v0 = (s64) ((u64) v0 << 16);
    a1 = 1;
    a2 = v0 | 0x8080; func_001032B0(a0, a1, a2);
    v0 = (s32) 0x30000U;
    a0 = s5;
    a1 = 71;
    a2 = v0 | 0x3; func_001032B0(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 284));
    if (v0 == 0) goto L_0013EE30;
    { s32 c_ = s2 >= 0; v0 = (s32) s2 >> 6; if (c_) goto L_0013ED18; }
    v0 = (s32) ((u32) s2 + 0x3fU);
    v0 = (s32) v0 >> 6;
L_0013ED18:;
    s4 = (s64) ((u64) v0 << 32);
    a0 = s5;
    v0 = (s32) 0x500000U;
    s4 = s4 >> 32;
    a2 = (*(volatile s32 *) (u32) (v0 + -9212));
    a1 = 76;
    v0 = (s32) ((u32) s3 >> 11);
    v1 = (s64) ((u64) v0 << 32);
    v1 = (s64) ((u64) v1 >> 32);
    v0 = (s64) ((u64) s4 << 16);
    v0 = v1 | v0;
    v1 = (*(volatile u16 *) (u32) (a2 + 16));
    v1 = (s64) ((u64) v1 << 24);
    a2 = v1 | v0; func_001032B0(a0, a1, a2);
    { u32 a_ = (u32) (sp + 256) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a1 = 6;
    v1 = (s32) ((u32) v0 >> 6);
    a0 = (s64) ((u64) v1 << 32);
    v0 = (s64) ((u64) s4 << 14);
    a0 = (s64) ((u64) a0 >> 32);
    v1 = (s32) 0x100000U;
    a0 = a0 | v0;
    v0 = (s64) ((u64) s1 << 32);
    v1 = a0 | v1;
    v0 = v0 >> 32;
    a0 = s5;
    v0 = (s64) ((u64) v0 << 26);
    v1 = v0 | v1;
    v0 = (s64) ((u64) s0 << 32);
    v0 = v0 >> 32;
    v0 = (s64) ((u64) v0 << 30);
    a2 = v0 | v1; func_001032B0(a0, a1, a2);
    a0 = s5;
    a1 = 3;
    a2 = 0; func_001032B0(a0, a1, a2);
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (s64) ((u64) fp << 32);
    v1 = v1 >> 32;
    a0 = s5;
    a1 = 5;
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    v0 = (s64) ((u64) v0 << 16);
    a2 = v1 | v0; func_001032B0(a0, a1, a2);
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 3;
    v1 = (s64) ((u64) v0 << 32);
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = v1 >> 32;
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    v0 = (s64) ((u64) v0 << 16);
    a2 = v1 | v0; func_001032B0(a0, a1, a2);
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 5;
    v1 = (s64) ((u64) v0 << 32);
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = v1 >> 32;
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    v0 = (s64) ((u64) v0 << 16);
    a2 = v1 | v0; func_001032B0(a0, a1, a2);
L_0013EE30:;
    { s32 c_ = s2 >= 0; v0 = (s32) s2 >> 6; if (c_) goto L_0013EE40; }
    v0 = (s32) ((u32) s2 + 0x3fU);
    v0 = (s32) v0 >> 6;
L_0013EE40:;
    s2 = (s64) ((u64) v0 << 32);
    a0 = s5;
    { u32 a_ = (u32) (sp + 240) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s2 = s2 >> 32;
    a1 = 76;
    v0 = (s32) ((u32) v0 >> 11);
    v1 = (s64) ((u64) v0 << 32);
    v0 = (s32) 0x500000U;
    v1 = (s64) ((u64) v1 >> 32);
    a2 = (*(volatile s32 *) (u32) (v0 + -9212));
    v0 = (s64) ((u64) s2 << 16);
    v0 = v1 | v0;
    v1 = (*(volatile u16 *) (u32) (a2 + 16));
    v1 = (s64) ((u64) v1 << 24);
    a2 = v1 | v0; func_001032B0(a0, a1, a2);
    v0 = (s32) ((u32) s3 >> 6);
    v1 = (s64) ((u64) s2 << 14);
    a0 = (s64) ((u64) v0 << 32);
    a0 = (s64) ((u64) a0 >> 32);
    v0 = (s64) ((u64) s1 << 32);
    a1 = a0 | v1;
    v0 = v0 >> 32;
    v1 = (s64) ((u64) v0 << 26);
    a0 = (s32) 0x100000U;
    v0 = (s64) ((u64) s0 << 32);
    a0 = a1 | a0;
    v0 = v0 >> 32;
    v1 = v1 | a0;
    v0 = (s64) ((u64) v0 << 30);
    a0 = s5;
    a2 = v0 | v1;
    a1 = 6; func_001032B0(a0, a1, a2);
    a0 = s5;
    a1 = 3;
    a2 = 0; func_001032B0(a0, a1, a2);
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (s64) ((u64) fp << 32);
    v1 = v1 >> 32;
    a0 = s5;
    a1 = 5;
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    v0 = (s64) ((u64) v0 << 16);
    a2 = v1 | v0; func_001032B0(a0, a1, a2);
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 3;
    v1 = (s64) ((u64) v0 << 32);
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = v1 >> 32;
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    v0 = (s64) ((u64) v0 << 16);
    a2 = v1 | v0; func_001032B0(a0, a1, a2);
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 5;
    v1 = (s64) ((u64) v0 << 32);
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = v1 >> 32;
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    v0 = (s64) ((u64) v0 << 16);
    a2 = v1 | v0; func_001032B0(a0, a1, a2);
    v0 = (s32) 0x30000U;
    a0 = s5;
    a1 = 71;
    a2 = v0 | 0xd; func_001032B0(a0, a1, a2);
    a0 = s5; func_00103208(a0);
    return;
}
