/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021D500(s32);
void func_0021DAF0(s32, s32, s32, s32);
s32 func_006232C0(s32);
void func_00623A50(s32, s32);

void func_006251A0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    v1 = (s32) 0x650000U;
    v0 = (s32) 0x650000U;
    s2 = a0;
    s1 = a1;
    { u32 a_ = (u32) (v1 + 28488); u32 s_ = 8 * (a_ & 3); u32 w_ = *(volatile u32 *) (a_ & ~3U); u32 m_ = 0xFFFFFFFFU >> s_; a1 = (s32) (((u32) a1 & ~m_) | (w_ >> s_)); }
    a0 = (s32) 0x660000U;
    { u32 a_ = (u32) (v0 + 28491); u32 s_ = 24 - 8 * (a_ & 3); u32 w_ = *(volatile u32 *) (a_ & ~3U); a1 = (s32) ((w_ << s_) | ((u32) a1 & ((1U << s_) - 1))); }
    a0 = (s32) ((u32) a0 + 0xffffc0e0U); func_00623A50(a0, a1);
    v1 = (s32) 0x650000U;
    v0 = (s32) 0x650000U;
    { u32 a_ = (u32) (v1 + 28488); u32 s_ = 8 * (a_ & 3); u32 w_ = *(volatile u32 *) (a_ & ~3U); u32 m_ = 0xFFFFFFFFU >> s_; a0 = (s32) (((u32) a0 & ~m_) | (w_ >> s_)); }
    { u32 a_ = (u32) (v0 + 28491); u32 s_ = 24 - 8 * (a_ & 3); u32 w_ = *(volatile u32 *) (a_ & ~3U); a0 = (s32) ((w_ << s_) | ((u32) a0 & ((1U << s_) - 1))); } v0 = func_006232C0(a0);
    v1 = 2;
    if (v0 != v1) { v1 = 3; goto L_0062523C; }
    v1 = (s32) 0x650000U;
    v0 = (s32) 0x650000U;
    { u32 a_ = (u32) (v1 + 28488); u32 s_ = 8 * (a_ & 3); u32 w_ = *(volatile u32 *) (a_ & ~3U); u32 m_ = 0xFFFFFFFFU >> s_; a0 = (s32) (((u32) a0 & ~m_) | (w_ >> s_)); }
    { u32 a_ = (u32) (v0 + 28491); u32 s_ = 24 - 8 * (a_ & 3); u32 w_ = *(volatile u32 *) (a_ & ~3U); a0 = (s32) ((w_ << s_) | ((u32) a0 & ((1U << s_) - 1))); } v0 = func_0021D500(a0);
    v1 = 2;
    if (v0 == v1) { v0 = 53; goto L_0062522C; }
    v1 = 1;
    if (v0 == v1) { s0 = v1; goto L_00625290; }
    goto L_00625290;
L_0062522C:;
    s0 = v1;
    (*(volatile u8 *) (u32) s2) = (u8) v0;
    (*(volatile u8 *) (u32) s1) = (u8) 0; goto L_00625290;
L_0062523C:;
    if (v0 == v1) { v1 = 15; goto L_00625280; }
    v1 = 1;
    if (v0 == v1) { v1 = 15; goto L_00625270; }
    if (v0 == 0) { v1 = 11; goto L_00625260; }
    s0 = 2; goto L_00625290;
L_00625260:;
    v0 = 52;
    (*(volatile u8 *) (u32) s2) = (u8) v1;
    (*(volatile u8 *) (u32) s1) = (u8) v0; goto L_0062528C;
L_00625270:;
    v0 = 52;
    (*(volatile u8 *) (u32) s2) = (u8) v1;
    (*(volatile u8 *) (u32) s1) = (u8) v0; goto L_0062528C;
L_00625280:;
    v0 = 52;
    (*(volatile u8 *) (u32) s2) = (u8) v1;
    (*(volatile u8 *) (u32) s1) = (u8) v0;
L_0062528C:;
    s0 = 2;
L_00625290:;
    a0 = (s32) 0x660000U;
    a0 = (s32) ((u32) a0 + 0xffffc0e0U); func_0021DAF0(a0, a1, a2, a3);
    v0 = s0;
    return;
}
