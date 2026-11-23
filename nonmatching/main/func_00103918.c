/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6PacketStream_AppendGsAD(s64, s64, s64);
void Pes6PacketStream_AppendWord(s64, s64);
s64 Pes6PacketStream_ReserveWords(s64, s64);
void func_00103538(s64, s64);
void func_00103590(s64, s64, s64, s64, s64, s64);
void func_00103778(s64, s64);
void func_00103790(s64);
void func_00103850(s64, s64, s64);
void func_00103B00(s64, s64);
void func_00103B58(s64);

void func_00103918(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_a1 = 0;
    s64 frame[24];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x3c0000U;
    v1 = (s32) ((u32) v0 + 0x3908U);
    s7 = a0;
    fp = a5;
    s6 = a6;
    s5 = a7;
    s4 = a4;
    s3 = a2 & 0xff;
    s1 = a3 & 0xffff;
    s0 = a1 & 0xffff;
    a0 = (*(volatile s64 *) (u32) (v0 + 14600));
    a1 = 0;
    t4 = (*(volatile s64 *) (u32) (v1 + 8));
    (*(volatile u64 *) (u32) sp) = (u64) a0;
    s2 = (*(volatile s32 *) (u32) (sp + 192));
    a0 = s7;
    (*(volatile u64 *) (u32) (sp + 8)) = (u64) t4; func_00103538(a0, a1);
    a0 = s7;
    a1 = 0; func_00103B00(a0, a1);
    { u32 a_ = (u32) (sp + 0) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    a0 = s7; func_00103778(a0, a1);
    s0 = (s64) ((u64) s0 << 32);
    s1 = (s64) ((u64) s1 << 48);
    s0 = s0 | s1;
    s3 = (s64) ((u64) s3 << 56);
    a2 = s0 | s3;
    a0 = s7;
    a1 = 80; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    s6 = (s64) ((u64) s6 << 32);
    s5 = (s64) ((u64) s5 << 48);
    a2 = s6 | s5;
    a0 = s7;
    a1 = 81; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 200));
    s2 = (s64) ((u64) s2 << 32);
    s2 = (s64) ((u64) s2 >> 32);
    a0 = s7;
    v0 = (s64) ((u64) v0 << 32);
    a1 = 82;
    (*(volatile u64 *) (u32) (sp + 16)) = (u64) v0;
    a2 = s2 | v0; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    a0 = s7;
    a1 = 83;
    a2 = 0; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    a0 = s7; func_00103790(a0);
    a0 = s7; func_00103B58(a0);
    { s32 c_ = fp == 0; s1 = 32767; if (c_) goto L_00103AD0; }
    s5 = (s32) 0x8000000U;
    s5 = (s64) ((u64) s5 << 32);
    s5 = s5 | 0x8000;
    s3 = 0x8000;
    s3 = (s64) ((u64) s3 << 44);
    s2 = (s32) 0x51000000U;
L_00103A40:;
    v0 = (u64) s1 < (u64) fp;
    s0 = s1;
    if (v0 == 0) s0 = fp;
    a0 = s7;
    a1 = 0; func_00103538(a0, a1);
    a0 = s7;
    a1 = 2;
    a2 = 3; func_00103850(a0, a1, a2);
    a1 = (s32) 0x51000000U;
    a0 = s7;
    a1 = a1 | 0x1; Pes6PacketStream_AppendWord(a0, a1);
    a0 = s7;
    a1 = 4; v0 = Pes6PacketStream_ReserveWords(a0, a1);
    v1 = (s64) ((u64) s0 << 32);
    a1 = s0 ^ fp;
    v1 = (s64) ((u64) v1 >> 32);
    a2 = s0;
    a0 = v1 | s5;
    a4 = s0 | s2;
    v1 = v1 | s3;
    (*(volatile u64 *) (u32) (v0 + 8)) = (u64) 0;
    if (a1 == 0) v1 = a0;
    a3 = 0;
    a1 = s4;
    (*(volatile u64 *) (u32) v0) = (u64) v1;
    a0 = s7;
    a5 = 0;
    fp = (s32) ((u32) fp - (u32) s0); func_00103590(a0, a1, a2, a3, a4, a5);
    s0 = (s32) ((u32) s0 << 4);
    { s32 c_ = fp != 0; s4 = (s32) ((u32) s4 + (u32) s0); if (c_) goto L_00103A40; }
L_00103AD0:;
    return;
}
