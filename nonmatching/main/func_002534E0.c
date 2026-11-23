/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00250BF0(s64, s64, s64, s64);
s64 func_00251860(s64);

void func_002534E0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0;
    s64 gp = 0x3ef370;
    s64 hi = 0, lo = 0;

    (*(volatile u32 *) (u32) (gp + -22520)) = (u32) 0;
    a0 = 0;
L_002534F0:;
    a0 = (s64) ((u64) a0 << 32);
    v1 = 212;
    a0 = a0 >> 32;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = (s32) 0x580000U;
    v1 = (s32) ((u32) v1 + 0x50e0U);
    a2 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) (a2 + 24));
    if (v1 == 0) goto L_00253720;
    a0 = (*(volatile s32 *) (u32) (a2 + 56));
    v1 = 1;
    if (a0 == v1) goto L_002535A0;
    a1 = 2;
    if (a0 != a1) goto L_00253580;
    a0 = (*(volatile s32 *) (u32) (a2 + 152));
    v1 = -1;
    if (a0 == v1) goto L_00253580;
    v0 = (s32) 0x580000U;
    v1 = (s32) 0x580000U;
    (*(volatile u32 *) (u32) (v0 + 17344)) = (u32) a1;
    v0 = (s32) 0x580000U;
    (*(volatile u32 *) (u32) (v1 + 17336)) = (u32) a0;
    (*(volatile u32 *) (u32) (v0 + 17364)) = (u32) 0;
    a0 = (s32) 0x580000U;
    v1 = 5;
    v0 = (s32) 0x580000U;
    (*(volatile u32 *) (u32) (v0 + 17352)) = (u32) v1;
    a0 = (s32) ((u32) a0 + 0x43b0U);
    v1 = (*(volatile s32 *) (u32) (gp + -22476));
    v0 = (s32) 0x580000U;
    (*(volatile u32 *) (u32) (v0 + 17348)) = (u32) v1; func_00250BF0(a0, a1, a2, a3);
L_00253580:;
    a1 = (*(volatile s32 *) (u32) (gp + -22520));
    a0 = 212;
    v1 = (s32) 0x580000U;
    v1 = (s32) ((u32) v1 + 0x50e0U);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) (v1 + 56)) = (u32) 0; goto L_00253720;
L_002535A0:;
    v0 = (*(volatile s32 *) (u32) (gp + -22480));
    if (v0 != 0) goto L_002535E8;
    a0 = 0; v0 = func_00251860(a0);
    if (v0 != 0) goto L_00253720;
    a1 = (*(volatile s32 *) (u32) (gp + -22520));
    a0 = 212;
    v1 = (s32) 0x580000U;
    v0 = 1;
    v1 = (s32) ((u32) v1 + 0x50e0U);
    (*(volatile u32 *) (u32) (gp + -22480)) = (u32) v0;
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    a3 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) (a3 + 152)) = (u32) 0;
    v0 = (s32) ((u32) a3 + 0x98U); goto L_00253620;
L_002535E8:;
    a0 = 2; v0 = func_00251860(a0);
    if (v0 != 0) goto L_00253720;
    a1 = (*(volatile s32 *) (u32) (gp + -22520));
    a0 = 212;
    v1 = (s32) 0x580000U;
    v0 = 2;
    v1 = (s32) ((u32) v1 + 0x50e0U);
    (*(volatile u32 *) (u32) (gp + -22480)) = (u32) 0;
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    a3 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) (a3 + 152)) = (u32) v0;
    v0 = (s32) ((u32) a3 + 0x98U);
L_00253620:;
    a2 = (*(volatile s32 *) (u32) v0);
    v1 = 2;
    v0 = (s32) 0x580000U;
    (*(volatile u32 *) (u32) (v0 + 17344)) = (u32) v1;
    v0 = (s32) 0x580000U;
    v1 = (s32) 0x580000U;
    v0 = (s32) ((u32) v0 + 0x50e0U);
    (*(volatile u32 *) (u32) (v1 + 17336)) = (u32) a2;
    a0 = (s32) ((u32) v0 + (u32) a0);
    a1 = (*(volatile s32 *) (u32) (a0 + 200));
    v0 = (s32) 0x580000U;
    a0 = (*(volatile s32 *) (u32) (a0 + 208));
    { s32 c_ = a0 != 0; (*(volatile u32 *) (u32) (v0 + 17364)) = (u32) a1; if (c_) goto L_00253700; }
    v1 = (*(volatile s32 *) (u32) (a3 + 204));
    v0 = 1;
    if (v1 == v0) goto L_00253710;
    v1 = (*(volatile s32 *) (u32) a3);
    v0 = (s32) 0x580000U;
    (*(volatile u32 *) (u32) (v0 + 17332)) = (u32) v1;
L_00253678:;
    v0 = (s32) 0x580000U;
    (*(volatile u32 *) (u32) (v0 + 17352)) = (u32) 0;
    a0 = (s32) 0x580000U;
    v0 = (s32) 0x580000U;
    a3 = (*(volatile s32 *) (u32) (a3 + 84));
    (*(volatile u32 *) (u32) (v0 + 17348)) = (u32) 0;
    a1 = (s32) 0x580000U;
    a2 = 1;
    v0 = (s32) 0x580000U;
    (*(volatile u32 *) (u32) (v0 + 17360)) = (u32) a2;
    v1 = (s32) 0x580000U;
    (*(volatile u32 *) (u32) (a0 + 17376)) = (u32) 0;
    v0 = (s32) 0x580000U;
    a0 = (s32) 0x580000U;
    (*(volatile u32 *) (u32) (v1 + 17368)) = (u32) a2;
    (*(volatile u32 *) (u32) (a1 + 17328)) = (u32) a3;
    a0 = (s32) ((u32) a0 + 0x43b0U);
    (*(volatile u32 *) (u32) (v0 + 17372)) = (u32) a2; func_00250BF0(a0, a1, a2, a3);
    a2 = (*(volatile s32 *) (u32) (gp + -22520));
    a1 = 212;
    a0 = (s32) 0x580000U;
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0x50e0U);
    v1 = (s32) ((u32) v1 + 0xffff8d90U);
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    a0 = (s32) ((u32) a0 + (u32) a1);
    a1 = (*(volatile s32 *) (u32) (a0 + 84));
    a0 = (*(volatile s32 *) (u32) (a0 + 152));
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) a1; goto L_00253580;
L_00253700:;
    v0 = (s32) 0x580000U;
    (*(volatile u32 *) (u32) (v0 + 17332)) = (u32) a0; goto L_00253678;
L_00253710:;
    v0 = (s32) 0x580000U;
    (*(volatile u32 *) (u32) (v0 + 17332)) = (u32) 0; goto L_00253678;
L_00253720:;
    v1 = (*(volatile s32 *) (u32) (gp + -22520));
    a0 = (s32) ((u32) v1 + 0x1U);
    v1 = a0 < 4;
    { s32 c_ = v1 != 0; (*(volatile u32 *) (u32) (gp + -22520)) = (u32) a0; if (c_) goto L_002534F0; }
    return;
}
