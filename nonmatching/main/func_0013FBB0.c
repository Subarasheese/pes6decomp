/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00103050(s64, s64, s64, s64);
void func_001031F0(s64, s64);
void func_00103208(s64);
void func_001032B0(s64, s64, s64);
s64 func_00146CA0(s64);

void func_0013FBB0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_a1 = 0;
    s64 frame[28];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x500000U;
    s5 = a0;
    a0 = (s32) 0x370000U;
    a0 = (s32) ((u32) a0 + 0x6350U);
    a2 = (*(volatile s32 *) (u32) (v0 + -9220));
    v0 = (s32) 0x500000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -9216));
    v0 = (s32) ((u32) a2 << 2);
    a1 = (s32) ((u32) v0 + (u32) a2);
    v0 = (s32) ((u32) v1 << 2);
    a1 = (s32) ((u32) a1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (s32) ((u32) a1 + (u32) a2);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) v0 << 2);
    s1 = (s32) ((u32) a0 + (u32) v1);
    s0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) (s1 + 32));
    s4 = (*(volatile u16 *) (u32) (s1 + 12));
    fp = (*(volatile u16 *) (u32) (s1 + 14));
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a0 = s4; v0 = func_00146CA0(a0);
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a0 = fp; v0 = func_00146CA0(a0);
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (*(volatile u16 *) (u32) (s1 + 16));
    s3 = (*(volatile u16 *) (u32) (s0 + 12));
    s2 = (*(volatile u16 *) (u32) (s0 + 14));
    s7 = (*(volatile u16 *) (u32) (s0 + 16));
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) 0x500000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -9200));
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s0);
    s6 = (*(volatile s32 *) (u32) (v0 + 24));
    { s32 c_ = s3 >= 0; s1 = (s32) s3 >> 1; if (c_) goto L_0013FC90; }
    v0 = (s32) ((u32) s3 + 0x1U);
    s1 = (s32) v0 >> 1;
L_0013FC90:;
    { s32 c_ = s2 >= 0; s0 = (s32) s2 >> 1; if (c_) goto L_0013FCA0; }
    v0 = (s32) ((u32) s2 + 0x1U);
    s0 = (s32) v0 >> 1;
L_0013FCA0:;
    a0 = s5;
    a1 = 0;
    a2 = 0;
    a3 = 0; func_00103050(a0, a1, a2, a3);
    v0 = (s32) 0x370000U;
    { u32 a_ = (u32) (v0 + 25536) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    a0 = s5; func_001031F0(a0, a1);
    { s32 c_ = s3 >= 0; v0 = (s32) s3 >> 6; if (c_) goto L_0013FCD4; }
    v0 = (s32) ((u32) s3 + 0x3fU);
    v0 = (s32) v0 >> 6;
L_0013FCD4:;
    v1 = (s64) ((u64) v0 << 32);
    a0 = s5;
    v0 = (s32) ((u32) s6 >> 11);
    v1 = v1 >> 32;
    v0 = (s64) ((u64) v0 << 32);
    v1 = (s64) ((u64) v1 << 16);
    v0 = (s64) ((u64) v0 >> 32);
    a1 = 76;
    v1 = v0 | v1;
    v0 = (s64) ((u64) s7 << 32);
    v0 = v0 >> 32;
    v0 = (s64) ((u64) v0 << 24);
    a2 = v0 | v1; func_001032B0(a0, a1, a2);
    v0 = 1;
    a0 = s5;
    a1 = 78;
    a2 = (s64) ((u64) v0 << 32); func_001032B0(a0, a1, a2);
    v0 = 2048;
    a0 = s5;
    v1 = (s32) ((u32) v0 - (u32) s0);
    a1 = 24;
    v0 = (s32) ((u32) v0 - (u32) s1);
    s6 = (s32) ((u32) v1 << 4);
    s7 = (s32) ((u32) v0 << 4);
    v0 = (s64) ((u64) s6 << 32);
    a2 = s7 | v0; func_001032B0(a0, a1, a2);
    v1 = (s32) ((u32) s3 + 0xffffffffU);
    v0 = (s32) ((u32) s2 + 0xffffffffU);
    v1 = (s64) ((u64) v1 << 32);
    v0 = (s64) ((u64) v0 << 32);
    v1 = v1 >> 32;
    v0 = v0 >> 32;
    v1 = (s64) ((u64) v1 << 16);
    v0 = (s64) ((u64) v0 << 48);
    a2 = v1 | v0;
    a0 = s5;
    a1 = 64; func_001032B0(a0, a1, a2);
    v0 = (s32) 0x30000U;
    a0 = s5;
    a1 = 71;
    a2 = v0 | 0x3001; func_001032B0(a0, a1, a2);
    { s32 c_ = s4 >= 0; v0 = (s32) s4 >> 6; if (c_) goto L_0013FD9C; }
    v0 = (s32) ((u32) s4 + 0x3fU);
    v0 = (s32) v0 >> 6;
L_0013FD9C:;
    v1 = (s64) ((u64) v0 << 32);
    a1 = 6;
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = v1 >> 32;
    v1 = (s64) ((u64) v1 << 14);
    v0 = (s32) ((u32) v0 >> 6);
    v0 = (s64) ((u64) v0 << 32);
    v0 = (s64) ((u64) v0 >> 32);
    a0 = v0 | v1;
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    v1 = (s64) ((u64) v0 << 20);
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = v1 | a0;
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    v0 = (s64) ((u64) v0 << 26);
    a0 = v0 | v1;
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    v1 = (s64) ((u64) v0 << 30);
    v0 = 12;
    v1 = v1 | a0;
    v0 = (s64) ((u64) v0 << 32);
    a0 = s5;
    a2 = v1 | v0; func_001032B0(a0, a1, a2);
    a0 = s5;
    a1 = 20;
    a2 = 1; func_001032B0(a0, a1, a2);
    a0 = s5;
    a1 = 8;
    a2 = 0; func_001032B0(a0, a1, a2);
    a0 = s5;
    a1 = 0;
    a2 = 278; func_001032B0(a0, a1, a2);
    v0 = 0x8080;
    a0 = s5;
    v0 = (s64) ((u64) v0 << 16);
    a1 = 1;
    a2 = v0 | 0x8000; func_001032B0(a0, a1, a2);
    a0 = s5;
    a1 = 3;
    a2 = 0; func_001032B0(a0, a1, a2);
    v0 = (s32) ((u32) s6 + 0xfffffff8U);
    v1 = (s32) ((u32) s7 + 0xfffffff8U);
    v0 = (s64) ((u64) v0 << 32);
    v1 = (s64) ((u64) v1 << 32);
    v0 = v0 >> 32;
    v1 = v1 >> 32;
    v0 = (s64) ((u64) v0 << 16);
    a0 = s5;
    a2 = v1 | v0;
    a1 = 5; func_001032B0(a0, a1, a2);
    v0 = (s32) ((u32) fp << 4);
    v1 = (s32) ((u32) s4 << 4);
    v0 = (s64) ((u64) v0 << 16);
    a0 = s5;
    a2 = v1 | v0;
    a1 = 3; func_001032B0(a0, a1, a2);
    v0 = (s32) ((u32) s0 + 0x800U);
    v1 = (s32) ((u32) s1 + 0x800U);
    v0 = (s32) ((u32) v0 << 4);
    v1 = (s32) ((u32) v1 << 4);
    v0 = (s32) ((u32) v0 + 0xfffffff8U);
    v1 = (s32) ((u32) v1 + 0xfffffff8U);
    v0 = (s64) ((u64) v0 << 32);
    v1 = (s64) ((u64) v1 << 32);
    v0 = v0 >> 32;
    v1 = v1 >> 32;
    v0 = (s64) ((u64) v0 << 16);
    a0 = s5;
    a2 = v1 | v0;
    a1 = 5; func_001032B0(a0, a1, a2);
    a0 = s5; func_00103208(a0);
    return;
}
