/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Heap_Alloc(s64, s64, s64, s64);

s64 func_0017C500(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    u64 qh_v1 = 0;
    u64 qh_a0 = 0;
    u64 qh_a1 = 0;
    u64 qh_a2 = 0;

    s5 = a0;
    s4 = a1;
    s3 = a2;
    s2 = a3;
    { s32 c_ = s5 == 0; s1 = a4; if (c_) goto L_0017C544; }
    s5 = (s32) ((u32) s5 + 0x2U);
L_0017C544:;
    v0 = (s32) ((u32) s3 << 3);
    v1 = (s32) ((u32) s1 + (u32) s2);
    a0 = (s32) ((u32) v0 - (u32) s3);
    s0 = (s32) ((u32) s4 << 3);
    v0 = (s32) ((u32) v1 << 2);
    s6 = (s32) ((u32) s5 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s7 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 << 2);
    a1 = 1;
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (s32) ((u32) v0 + 0x140U);
    v0 = (s32) ((u32) v0 + (u32) s6);
    a0 = (s32) ((u32) v0 + (u32) s7); v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (v0 + 1)) = (u8) 0;
    a3 = (s32) 0x3f800000U;
    (*(volatile u8 *) (u32) v0) = (u8) 0;
    a2 = (s32) 0x370000U;
    (*(volatile u32 *) (u32) (v0 + 208)) = (u32) 0;
    a1 = (s32) 0x370000U;
    (*(volatile u32 *) (u32) (v0 + 212)) = (u32) 0;
    a0 = (s32) 0x370000U;
    (*(volatile u32 *) (u32) (v0 + 216)) = (u32) 0;
    v1 = (s32) 0x370000U;
    (*(volatile u32 *) (u32) (v0 + 220)) = (u32) a3;
    a4 = (s32) ((u32) v0 + 0x140U);
    (*(volatile u32 *) (u32) (v0 + 224)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + 228)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + 232)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + 236)) = (u32) a3;
    (*(volatile u32 *) (u32) (v0 + 256)) = (u32) a3;
    (*(volatile u32 *) (u32) (v0 + 260)) = (u32) a3;
    (*(volatile u32 *) (u32) (v0 + 264)) = (u32) a3;
    (*(volatile u32 *) (u32) (v0 + 268)) = (u32) a3;
    { u32 a_ = (u32) (a2 + 23344) & ~15U; a2 = *(volatile s64 *) a_; qh_a2 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a1 + 23360) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a0 + 23376) & ~15U; a0 = *(volatile s64 *) a_; qh_a0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (v1 + 23392) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (v0 + 144) & ~15U; *(volatile u64 *) a_ = (u64) a2; *(volatile u64 *) (a_ + 8) = qh_a2; }
    { u32 a_ = (u32) (v0 + 160) & ~15U; *(volatile u64 *) a_ = (u64) a1; *(volatile u64 *) (a_ + 8) = qh_a1; }
    { u32 a_ = (u32) (v0 + 176) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; }
    { u32 a_ = (u32) (v0 + 192) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    { s32 c_ = s5 == 0; (*(volatile u8 *) (u32) (v0 + 3)) = (u8) s5; if (c_) goto L_0017C6FC; }
    v1 = (s32) ((u32) s5 + 0xfffffffeU);
    (*(volatile u32 *) (u32) (v0 + 12)) = (u32) a4;
    a0 = (s32) ((u32) v1 << 3);
    v1 = (*(volatile s32 *) (u32) (v0 + 12));
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) (v0 + 16)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (v0 + 12));
    a4 = (s32) ((u32) v1 + (u32) s6);
L_0017C618:;
    { s32 c_ = s4 == 0; (*(volatile u8 *) (u32) (v0 + 4)) = (u8) s4; if (c_) goto L_0017C630; }
    (*(volatile u32 *) (u32) (v0 + 20)) = (u32) a4;
    v1 = (*(volatile s32 *) (u32) (v0 + 20));
    a4 = (s32) ((u32) v1 + (u32) s0); goto L_0017C634;
L_0017C630:;
    (*(volatile u32 *) (u32) (v0 + 20)) = (u32) 0;
L_0017C634:;
    { s32 c_ = s3 == 0; (*(volatile u8 *) (u32) (v0 + 5)) = (u8) s3; if (c_) goto L_0017C64C; }
    (*(volatile u32 *) (u32) (v0 + 24)) = (u32) a4;
    v1 = (*(volatile s32 *) (u32) (v0 + 24));
    a4 = (s32) ((u32) v1 + (u32) s7); goto L_0017C650;
L_0017C64C:;
    (*(volatile u32 *) (u32) (v0 + 24)) = (u32) 0;
L_0017C650:;
    { s32 c_ = s2 == 0; (*(volatile u8 *) (u32) (v0 + 6)) = (u8) s2; if (c_) goto L_0017C708; }
    v1 = (s32) ((u32) s2 << 2);
    (*(volatile u32 *) (u32) (v0 + 28)) = (u32) a4;
    a0 = (s32) ((u32) v1 + (u32) s2);
    v1 = (*(volatile s32 *) (u32) (v0 + 28));
    a0 = (s32) ((u32) a0 << 2);
    a4 = (s32) ((u32) v1 + (u32) a0);
L_0017C670:;
    { s32 c_ = s1 == 0; (*(volatile u8 *) (u32) (v0 + 7)) = (u8) s1; if (c_) goto L_0017C680; }
    (*(volatile u32 *) (u32) (v0 + 32)) = (u32) a4; goto L_0017C684;
L_0017C680:;
    (*(volatile u32 *) (u32) (v0 + 32)) = (u32) 0;
L_0017C684:;
    (*(volatile u8 *) (u32) (v0 + 9)) = (u8) 0;
    v1 = (s32) 0x3f800000U;
    a1 = (*(volatile s8 *) (u32) (v0 + 9));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (s32) ((u32) a1 << 3);
    a0 = (s32) ((u32) a0 + (u32) a1);
    (*(volatile u32 *) (u32) (v0 + 36)) = (u32) a0;
    a1 = (*(volatile s8 *) (u32) (v0 + 9));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (s32) ((u32) a1 << 3);
    a0 = (s32) ((u32) a0 + (u32) a1);
    (*(volatile u32 *) (u32) (v0 + 40)) = (u32) a0;
    a0 = (*(volatile s32 *) (u32) (v0 + 20));
    (*(volatile u32 *) (u32) (v0 + 44)) = (u32) a0;
    a0 = (*(volatile s32 *) (u32) (v0 + 20));
    (*(volatile u32 *) (u32) (v0 + 48)) = (u32) a0;
    a0 = (*(volatile s32 *) (u32) (v0 + 32));
    (*(volatile u32 *) (u32) (v0 + 52)) = (u32) a0;
    (*(volatile u32 *) (u32) (v0 + 284)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + 272)) = (u32) v1;
    (*(volatile u32 *) (u32) (v0 + 276)) = (u32) v1;
    (*(volatile u32 *) (u32) (v0 + 280)) = (u32) v1;
    (*(volatile u8 *) (u32) (v0 + 10)) = (u8) 0;
    (*(volatile u32 *) (u32) (v0 + 64)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + 68)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + 72)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + 76)) = (u32) v1;
    (*(volatile u32 *) (u32) (v0 + 288)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + 292)) = (u32) 0; goto L_0017C710;
L_0017C6FC:;
    (*(volatile u32 *) (u32) (v0 + 12)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + 16)) = (u32) 0; goto L_0017C618;
L_0017C708:;
    (*(volatile u32 *) (u32) (v0 + 28)) = (u32) 0; goto L_0017C670;
L_0017C710:;
    return v0;
}
