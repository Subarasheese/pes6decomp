/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001EDC80(s64, s64);
void func_001EEE60(s64, s64);
void func_001EF900(s64, s64);
s64 func_0020D080(s64, s64);
s64 func_002F9320(s64, s64);
s64 func_002F9370(s64);
s64 func_002F96F0(s64, s64);
void func_002FA170(s64, s64, s64, s64, s64, s64);

void func_00C7FE60(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    s64 gp = 0x3ef370;
    s64 frame[28];
    s64 sp = (s32) (u32) frame;

    v1 = (s32) 0xcd0000U;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0xffffc080U);
    fp = a2;
    s7 = a1;
    s4 = a0;
    a0 = (s32) 0xcd0000U;
    a0 = (s32) ((u32) a0 + 0xffffc094U);
    s1 = (s32) ((u32) a3 << 5);
    a2 = (*(volatile s32 *) (u32) (gp + -19200));
    v0 = (*(volatile u8 *) (u32) (v0 + 7628));
    a1 = (s32) ((u32) a2 << 2);
    v0 = a2 ^ v0;
    (*(volatile u32 *) (u32) (sp + 192)) = (u32) v0;
    v0 = (s32) ((u32) a1 + (u32) a2);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) a2);
    v0 = (s32) ((u32) v0 << 3);
    a0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v1 = (s32) ((u32) s1 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) v0);
    s3 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) (sp + 220)) = (u32) a4; v0 = func_002F9370(a0);
    a0 = (*(volatile s32 *) (u32) (gp + -19200));
    (*(volatile u32 *) (u32) (sp + 188)) = (u32) v0;
    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffc080U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; v0 = func_002F9320(a0, a1);
    a0 = v0;
    a1 = 0; v0 = func_002F96F0(a0, a1);
    s5 = (*(volatile s32 *) (u32) (v0 + 12));
    { s32 c_ = s3 <= 0; s2 = 0; if (c_) goto L_00C7FFD0; }
    v0 = (s32) 0xcd0000U;
    s0 = 0;
    v0 = (s32) ((u32) v0 + 0xffffc080U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
L_00C7FF50:;
    v1 = (*(volatile s32 *) (u32) (gp + -19200));
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) ((u32) v0 << 3);
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a1 = (*(volatile s32 *) (u32) (v0 + 24));
    a0 = (*(volatile s32 *) (u32) (sp + 192)); v0 = func_0020D080(a0, a1);
    s6 = v0;
    a1 = (s32) ((u32) s4 + (u32) s2);
    a0 = s5; v0 = func_001EDC80(a0, a1);
    a2 = (*(volatile s32 *) (u32) (sp + 188));
    s1 = v0;
    a1 = s6;
    a3 = (s32) ((u32) s7 + (u32) s2);
    a0 = s1;
    a4 = fp;
    a5 = 0; func_002FA170(a0, a1, a2, a3, a4, a5);
    a1 = (*(volatile s32 *) (u32) (sp + 220));
    a0 = s1; func_001EEE60(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < s3;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00C7FF50; }
L_00C7FFD0:;
    at = s3 < 7;
    if (at == 0) goto L_00C80008;
    a1 = (s32) ((u32) s4 + (u32) s3);
L_00C7FFE0:;
    a0 = s5; v0 = func_001EDC80(a0, a1);
    a0 = v0;
    a1 = 0; func_001EF900(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < 7;
    if (v1 != 0) { a1 = (s32) ((u32) s4 + (u32) s3); goto L_00C7FFE0; }
L_00C80008:;
    return;
}
