/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00B98470(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;

    v1 = (s32) 0xcc0000U;
    v1 = (*(volatile u16 *) (u32) (v1 + -12824));
    v1 = 0 < v1;
    if (v1 != 0) goto L_00B98590;
    v1 = (s32) 0xcc0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -12840));
    if (v1 != 0) goto L_00B98590;
    v1 = (s32) 0xcc0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -12848));
    if (v1 == 0) goto L_00B98554;
    v1 = (s32) 0xcc0000U;
    a0 = 255;
    a1 = (*(volatile u8 *) (u32) (v1 + -12830));
    if (a1 == a0) goto L_00B984CC;
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a1 / (s32) v1); hi = (s32) ((s32) a1 % (s32) v1); lo = q_; }
    a1 = hi; goto L_00B984D0;
L_00B984CC:;
    a1 = 1;
L_00B984D0:;
    v1 = (s32) ((u32) a1 << 3);
    a0 = (s32) 0x590000U;
    a1 = (s32) ((u32) v1 + (u32) a1);
    a0 = (s32) ((u32) a0 + 0xffffe5b0U);
    v1 = (s32) 0xcc0000U;
    a1 = (s32) ((u32) a1 << 6);
    a3 = (*(volatile s32 *) (u32) (v1 + -12844));
    a4 = (s32) ((u32) a0 + (u32) a1);
    a1 = (s32) 0x66660000U;
    a0 = (s32) 0xcc0000U;
    v1 = (s32) 0xcc0000U;
    a3 = (s32) ((u32) a3 + 0x1U);
    a2 = (*(volatile u8 *) (u32) (v1 + -12826));
    (*(volatile u32 *) (u32) (a0 + -12844)) = (u32) a3;
    v1 = a1 | 0x6667;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a1 = (s32) ((u32) a2 >> 31);
    a0 = hi;
    v1 = 8;
    a0 = (s32) a0 >> 2;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 - (u32) a0);
    at = (u64) v1 < (u64) a3;
    if (at != 0) goto L_00B9856C;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) a4);
    v1 = (*(volatile u8 *) (u32) (v1 + 7705));
    if (v1 != a0) goto L_00B98554;
    v1 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v1 + -12848)) = (u8) 0;
L_00B98554:;
    v1 = (s32) 0xcc0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -12840));
    if (v1 != 0) goto L_00B98584;
L_00B98564:;
    goto L_00B98590;
L_00B9856C:;
    a0 = 1;
    v1 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v1 + -12840)) = (u8) a0;
    v1 = (s32) 0xcc0000U;
    (*(volatile u32 *) (u32) (v1 + -12836)) = (u32) 0; goto L_00B98554;
L_00B98584:;
    v1 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v1 + -12848)) = (u8) 0; goto L_00B98564;
L_00B98590:;
    return;
}
