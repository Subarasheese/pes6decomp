/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Job_CopyPayloadOut(s32, s32, s32);
s32 Pes6Job_Create(s32, s32, s32);
s32 Pes6Job_SetArg(s32, s32, s32);
s32 Pes6Job_SetDone(s32);
s32 func_00341910(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_0032C1D0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 hi = 0, lo = 0;

    v0 = (*(volatile s32 *) (u32) (a0 + 60));
    v1 = (*(volatile u8 *) (u32) (v0 + 8));
    { s32 c_ = v1 != 0; s1 = a0; if (c_) goto L_0032C1FC; }
    v0 = 0; goto L_0032C310;
L_0032C1FC:;
    a0 = (*(volatile u8 *) (u32) (v0 + 120));
    v1 = 255;
    { s32 c_ = a0 == v1; s0 = (s32) ((u32) v0 + 0x74U); if (c_) goto L_0032C300; }
    v1 = (s32) 0x2e8b0000U;
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    a4 = v1 | 0xa2e9;
    a3 = (s32) ((u32) a0 >> 31);
    { s64 m_ = (s64) (s32) a4 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (*(volatile u8 *) (u32) (v0 + 184));
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a1 = hi;
    a0 = (s32) ((u32) v1 >> 31);
    { s64 m_ = (s64) (s32) a4 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) a1 >> 1;
    a1 = (s32) ((u32) v1 + (u32) a3);
    v1 = hi;
    v1 = (s32) v1 >> 1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    { s32 c_ = a1 != v1; a2 = 11; if (c_) goto L_0032C2B4; }
    v1 = (*(volatile u8 *) (u32) (v0 + 14));
    a0 = 1;
    a1 = 5;
    a2 = 10;
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) (v1 + 788));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + 788)) = (u32) v0; v0 = func_00341910(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) { a2 = 5; goto L_0032C284; }
    a2 = 11;
L_0032C284:;
    v0 = (s32) 0x80000000U;
    a1 = (s32) 0x330000U;
    a3 = (s32) 0x3e0000U;
    a1 = (s32) ((u32) a1 + 0xffffa4a0U);
    a0 = v0 | 0x10;
    a3 = (s32) ((u32) a3 + 0x17b0U); v0 = Pes6Job_Create(a0, a1, a2);
    a0 = v0;
    a1 = s1; v0 = Pes6Job_CopyPayloadOut(a0, a1, a2);
    a0 = s1; goto L_0032C304;
L_0032C2B4:;
    v1 = (*(volatile s32 *) (u32) s0);
    v0 = 10;
    if (v1 != v0) goto L_0032C300;
    v0 = (s32) 0x80000000U;
    a1 = (s32) 0x330000U;
    a3 = (s32) 0x3e0000U;
    a1 = (s32) ((u32) a1 + 0xffffc330U);
    a0 = v0 | 0xa;
    a3 = (s32) ((u32) a3 + 0x17b0U); v0 = Pes6Job_Create(a0, a1, a2);
    a2 = (*(volatile u8 *) (u32) (s0 + 4));
    s2 = v0;
    a0 = s2;
    a1 = 0; v0 = Pes6Job_SetArg(a0, a1, a2);
    a0 = s2;
    a1 = s1; v0 = Pes6Job_CopyPayloadOut(a0, a1, a2);
L_0032C300:;
    a0 = s1;
L_0032C304:;
    v0 = Pes6Job_SetDone(a0);
    v0 = 1;
L_0032C310:;
    return v0;
}
