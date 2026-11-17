/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EF900(s32, s32);
void func_001F7030(s32, s32);
s32 func_001F70D0(s32, s32, s32, s32);
s32 func_001F7B30(s32);
void func_00C71380(s32, s32, s32, s32);
void func_00C719E0(s32, s32, s32, s32, s32, s32);
void func_00C71AB0(s32, s32, s32, s32, s32, s32);
s32 func_00C86030(void);

void func_00C70FE0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s32 hi = 0, lo = 0;

    a0 = 0xffff;
    v0 = (s32) 0xcd0000U;
    v1 = (s32) 0xcd0000U;
    (*(volatile u16 *) (u32) (v0 + -17146)) = (u16) a0;
    v0 = (s32) 0xcd0000U;
    (*(volatile u16 *) (u32) (v1 + -17142)) = (u16) a0;
    (*(volatile u16 *) (u32) (v0 + -17138)) = (u16) a0;
    v1 = (s32) 0xcd0000U;
    v0 = (s32) 0xcd0000U;
    (*(volatile u16 *) (u32) (v1 + -17134)) = (u16) a0;
    (*(volatile u16 *) (u32) (v0 + -17130)) = (u16) a0;
    v1 = 255;
    v0 = (s32) 0xcd0000U;
    (*(volatile u8 *) (u32) (v0 + -17128)) = (u8) v1;
    v0 = (s32) 0xcd0000U;
    (*(volatile u8 *) (u32) (v0 + -17126)) = (u8) v1;
    v0 = (s32) 0xcd0000U;
    (*(volatile u8 *) (u32) (v0 + -17127)) = (u8) v1;
    v0 = (s32) 0xcd0000U;
    (*(volatile u8 *) (u32) (v0 + -17125)) = (u8) v1;
    v0 = (s32) 0xcd0000U;
    (*(volatile u8 *) (u32) (v0 + -17122)) = (u8) v1;
    v0 = (s32) 0xcd0000U;
    (*(volatile u8 *) (u32) (v0 + -17119)) = (u8) v1; v0 = func_00C86030();
    a0 = v0; v0 = func_001F7B30(a0);
    a0 = v0; v0 = func_001F70D0(a0, a1, a2, a3);
    v1 = (s32) 0xcd0000U;
    a0 = v0;
    (*(volatile u32 *) (u32) (v1 + -17192)) = (u32) v0;
    a1 = 2; func_001F7030(a0, a1);
    func_00C71AB0(a0, a1, a2, a3, a4, a5);
    func_00C71380(a0, a1, a2, a3);
    func_00C719E0(a0, a1, a2, a3, a4, a5);
    s0 = (s32) 0xcd0000U;
    s1 = 0;
    s0 = (s32) ((u32) s0 + 0xffffcf98U);
L_00C710AC:;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = 0; func_001EF900(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 6;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00C710AC; }
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -12368));
    a1 = 0; func_001EF900(a0, a1);
    s3 = (s32) 0xcd0000U;
    s5 = 0;
    s3 = (s32) ((u32) s3 + 0xffffbcd0U);
    s2 = 75;
L_00C710E8:;
    v1 = (*(volatile u16 *) (u32) (s3 + 52));
    v0 = (s32) 0x66660000U;
    v0 = v0 | 0x6667;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = hi;
    v1 = (s32) ((u32) v1 >> 31);
    v0 = (s32) v0 >> 2;
    v0 = (s32) ((u32) v0 + (u32) v1);
    if (v0 == 0) { s0 = 1; goto L_00C71114; }
    s0 = 2;
L_00C71114:;
    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) s2 << 2);
    v0 = (s32) ((u32) v0 + 0xffffce30U);
    s4 = 0;
    v0 = (s32) ((u32) v0 + (u32) v1);
    { s32 c_ = s0 <= 0; s1 = (s32) ((u32) v0 + 0x1cU); if (c_) goto L_00C71150; }
L_00C71130:;
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = 0; func_001EF900(a0, a1);
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < s0;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00C71130; }
L_00C71150:;
    s5 = (s32) ((u32) s5 + 0x1U);
    v0 = s5 < 2;
    s3 = (s32) ((u32) s3 + 0x4U);
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x2U); if (c_) goto L_00C710E8; }
    s0 = (s32) 0xcd0000U;
    s1 = 0;
    s0 = (s32) ((u32) s0 + 0xffffcf88U);
L_00C71170:;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = 0; func_001EF900(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 4;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00C71170; }
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffcf74U);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_001EF900(a0, a1);
    return;
}
