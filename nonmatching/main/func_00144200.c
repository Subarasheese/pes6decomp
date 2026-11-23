/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6GfxRing_Alloc(s64);
void func_00132970(s64);
void func_00132980(s64);
void func_001329A0(s64, s64);
void func_001329C0(s64, s64);
void func_001329E0(s64, s64);
void func_00132A00(s64, s64);
void func_00142040(s64, s64, s64);
s64 sceDmaSync(s64, s64, s64, s64, s64, s64, s64, s64);
s64 sceVu0MulMatrix(s64, s64, s64);

void func_00144200(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    s64 gp = 0x3ef370;
    s64 frame[16];
    s64 sp = (s32) (u32) frame;

    v1 = (s32) 0x10000000U;
    a1 = (s32) 0x500000U;
    v0 = (s32) 0x500000U;
    a0 = v1 | 0xd400;
    s0 = (*(volatile s32 *) (u32) (v0 + -8440));
    a1 = (s32) ((u32) a1 + 0x880U);
    a3 = (*(volatile s32 *) (u32) (gp + -32564));
    a2 = 100;
    v0 = (s32) 0x10010000U;
    (*(volatile u32 *) (u32) (v0 + -11136)) = (u32) a3; func_00142040(a0, a1, a2);
    a0 = 1600; v0 = Pes6GfxRing_Alloc(a0);
    (*(volatile u32 *) (u32) (gp + -23400)) = (u32) v0;
    a1 = 0;
    v0 = (s32) 0x10000000U;
    a2 = 0;
    a0 = v0 | 0xd400; v0 = sceDmaSync(a0, a1, a2, a3, a4, a5, a6, a7);
    a3 = (*(volatile s32 *) (u32) (gp + -32560));
    v0 = (s32) 0x10010000U;
    v1 = (s32) 0x10000000U;
    a1 = (s32) 0x500000U;
    a1 = (s32) ((u32) a1 + 0x620U);
    a0 = v1 | 0xd400;
    a2 = 36;
    (*(volatile u32 *) (u32) (v0 + -11136)) = (u32) a3; func_00142040(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (gp + -32564));
    a1 = 0;
    s1 = (s32) ((u32) v0 + 0x400U);
    a0 = s1; func_00132A00(a0, a1);
    a0 = (s32) ((u32) s1 + 0x40U);
    a1 = 0; func_001329E0(a0, a1);
    v0 = (s32) 0x500000U;
    a0 = (s32) ((u32) s1 + 0x80U);
    { u32 a_ = (u32) (v0 + -8784) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a1 = 0;
    { u32 a_ = (u32) (s1 + 48) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } func_001329C0(a0, a1);
    a0 = (s32) ((u32) s1 + 0xc0U);
    a1 = 0; func_001329A0(a0, a1);
    v0 = (*(volatile s32 *) (u32) (gp + -32564));
    a1 = (s32) 0x500000U;
    a2 = (s32) 0x500000U;
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = (s32) ((u32) a1 + 0xffffdf20U);
    a2 = (s32) ((u32) a2 + 0xffffdec0U);
    s1 = (s32) ((u32) v0 + 0x500U); v0 = sceVu0MulMatrix(a0, a1, a2);
    { u32 a_ = (u32) (sp + 64) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a1 = 0;
    { u32 a_ = (u32) (s1 + 0) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    { u32 a_ = (u32) (sp + 80) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (s1 + 16) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    { u32 a_ = (u32) (sp + 96) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (s1 + 32) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (*(volatile s32 *) (u32) (gp + -32564));
    a0 = (s32) ((u32) v0 + 0x540U); func_00132970(a0);
    a1 = (*(volatile s32 *) (u32) (gp + -23412));
    v1 = (s32) 0x10000000U;
    a0 = v1 | 0xd000;
    s0 = (s64) ((u64) s0 << 32);
    a3 = (*(volatile s32 *) (u32) (gp + -32564));
    s0 = (s64) ((u64) s0 >> 32);
    v0 = (s32) 0x10010000U;
    v1 = (*(volatile s64 *) (u32) (a1 + 304));
    (*(volatile u64 *) (u32) (a3 + 1440)) = (u64) v1;
    (*(volatile u64 *) (u32) (a3 + 1504)) = (u64) s0;
    (*(volatile u32 *) (u32) (v0 + -12160)) = (u32) a3;
    a1 = (*(volatile s32 *) (u32) (gp + -23400));
    a2 = 100; func_00142040(a0, a1, a2);
    v0 = (s32) 0x10000000U;
    a1 = 0;
    a0 = v0 | 0xd400;
    a2 = 0; v0 = sceDmaSync(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (*(volatile s32 *) (u32) (gp + -32560));
    a0 = (s32) ((u32) sp + 0x30U);
    s1 = (s32) ((u32) v0 + 0x120U); func_00132980(a0);
    { u32 a_ = (u32) (sp + 48) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) 0x500000U;
    { u32 a_ = (u32) (s1 + 112) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v0 = (*(volatile u8 *) (u32) (v0 + -8266));
    if (v0 == 0) goto L_00144394;
    v0 = (s32) 0x500000U;
    v1 = (*(volatile s32 *) (u32) (gp + -32560));
    v0 = (*(volatile s64 *) (u32) (v0 + -8320));
    (*(volatile u64 *) (u32) (v1 + 544)) = (u64) v0; goto L_001443A8;
L_00144394:;
    v0 = (s32) 0x500000U;
    v1 = (*(volatile s32 *) (u32) (gp + -32560));
    v0 = (*(volatile s64 *) (u32) (v0 + -8320));
    (*(volatile u64 *) (u32) (v1 + 112)) = (u64) v0;
    (*(volatile u64 *) (u32) (v1 + 128)) = (u64) s0;
L_001443A8:;
    v0 = (s32) 0x10000000U;
    a1 = 0;
    a0 = v0 | 0xd000;
    a2 = 0; v0 = sceDmaSync(a0, a1, a2, a3, a4, a5, a6, a7);
    return;
}
