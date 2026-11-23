/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00BDB8B0(s64, s64, s64, s64);

s64 func_00910F70(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[22];
    s64 sp = (s32) (u32) frame;

    s7 = 0;
    s6 = 2;
    s3 = 0;
L_00910FA8:;
    v0 = 255;
    if (s6 == v0) { a0 = 1; goto L_00910FC4; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s7 / (s32) v0); hi = (s32) ((s32) s7 % (s32) v0); lo = q_; }
    v0 = hi;
    a0 = (s32) ((u32) v0 + 0x2U);
L_00910FC4:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = s3 ^ 0x1;
    s5 = (s32) ((u32) v0 + (u32) v1);
    s2 = 0;
    v0 = (s32) ((u32) a0 << 2);
    v1 = 23;
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v0 << 1);
    a0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) a0 + 0x2U);
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    v0 = hi;
    fp = (s32) ((u32) v0 + 0x2U);
L_0091100C:;
    a0 = s5; v0 = func_00BDB8B0(a0, a1, a2, a3);
    if (v0 == 0) goto L_00911100;
    v0 = (s32) 0x7fff0000U;
    v1 = 255;
    s0 = v0 | 0xffff;
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { s32 c_ = v0 == v1; (*(volatile u8 *) (u32) (s5 + 473)) = (u8) 0; if (c_) goto L_0091103C; }
    a0 = fp; goto L_00911040;
L_0091103C:;
    a0 = 1;
L_00911040:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s1 = 0;
    s4 = (s32) ((u32) v0 + (u32) v1);
L_0091105C:;
    a0 = s4; v0 = func_00BDB8B0(a0, a1, a2, a3);
    if (v0 == 0) goto L_009110F0;
    a0 = (*(volatile u8 *) (u32) (s4 + 469));
    v1 = (*(volatile u8 *) (u32) s5);
    if (a0 != v1) goto L_009110F0;
    a0 = (*(volatile u8 *) (u32) (s4 + 477));
    v1 = 39;
    if (a0 != v1) goto L_009110F0;
    if (a0 != v1) goto L_009110C0;
    a0 = (*(volatile u8 *) (u32) (s4 + 478));
    v1 = 9;
    if (a0 == v1) goto L_009110F0;
    v1 = 8;
    if (a0 == v1) goto L_009110F0;
    v1 = 6;
    if (a0 == v1) goto L_009110F0;
L_009110C0:;
    a0 = (*(volatile u8 *) (u32) s4);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) s5 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) (v1 + 344));
    at = (u64) v1 < (u64) s0;
    if (at == 0) goto L_009110F0;
    (*(volatile u8 *) (u32) (s5 + 473)) = (u8) a0;
    v1 = (*(volatile u8 *) (u32) s4);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) s5 + (u32) v1);
    s0 = (*(volatile s32 *) (u32) (v1 + 344));
L_009110F0:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 10;
    { s32 c_ = v1 != 0; s4 = (s32) ((u32) s4 + 0x240U); if (c_) goto L_0091105C; }
L_00911100:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 10;
    { s32 c_ = v1 != 0; s5 = (s32) ((u32) s5 + 0x240U); if (c_) goto L_0091100C; }
    s3 = (s32) ((u32) s3 + 0x1U);
    s6 = (s32) ((u32) s6 + 0xbU);
    v1 = s3 < 2;
    { s32 c_ = v1 != 0; s7 = (s32) ((u32) s7 + 0xbU); if (c_) goto L_00910FA8; }
    return v0;
}
