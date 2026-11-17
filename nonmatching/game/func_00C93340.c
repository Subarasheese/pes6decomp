/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001864E0(s64);
void func_0019DD80(s64, s64);
void func_0019DDD0(s64);
void func_0019DDF0(s64, s64);
void func_0019DF40(s64);
s64 func_0020B690(s64, s64, s64, s64, s64);
s64 func_002D55B0(s64);
void func_002D5630(s64, s64);
s64 func_002D5870(s64);
s64 func_002D58A0(s64);
void func_002D5960(s64, s64);
void func_002D5980(s64, s64);

s64 func_00C93340(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;

    v0 = (s32) 0xcd0000U;
    s0 = (*(volatile s32 *) (u32) (v0 + -10000));
    at = (u64) s0 < (u64) (s64) 6;
    { s32 c_ = at == 0; s1 = 0; if (c_) goto L_00C93530; }
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) s0 << 2);
    v1 = (s32) ((u32) v1 + 0x5140U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xc93384U) goto L_00C93384; if (t_ == 0xc933b8U) goto L_00C933B8; if (t_ == 0xc9345cU) goto L_00C9345C; if (t_ == 0xc93494U) goto L_00C93494; if (t_ == 0xc934ccU) goto L_00C934CC; if (t_ == 0xc934f4U) goto L_00C934F4; }
L_00C93384:;
    s2 = (s32) 0xcd0000U;
    a1 = 0;
    s2 = (s32) ((u32) s2 + 0xffffd8f4U);
    a0 = s2; func_002D5980(a0, a1);
    a0 = s2;
    a1 = 0; func_002D5960(a0, a1);
    a0 = (s32) 0xcd0000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffd8fcU); func_002D5630(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U);
L_00C933B8:;
    a0 = 2; func_0019DF40(a0);
    a0 = 0; v0 = func_0020B690(a0, a1, a2, a3, a4);
    a1 = v0;
    a0 = 0; func_0019DD80(a0, a1);
    a0 = 1; v0 = func_0020B690(a0, a1, a2, a3, a4);
    a1 = v0;
    a0 = 1; func_0019DD80(a0, a1);
    a0 = 0; func_0019DDD0(a0);
    a1 = (s32) 0xcb0000U;
    a0 = 0;
    a1 = (s32) ((u32) a1 + 0xffff8ab0U); func_0019DDF0(a0, a1);
    a1 = (s32) 0xcb0000U;
    a0 = 1;
    a1 = (s32) ((u32) a1 + 0xffff8ac0U); func_0019DDF0(a0, a1);
    a0 = 0x8000; func_001864E0(a0);
    s2 = (s32) 0xcd0000U;
    a1 = (*(volatile s32 *) (u32) (gp + -30860));
    s2 = (s32) ((u32) s2 + 0xffffd8f4U);
    a0 = s2; func_002D5980(a0, a1);
    a0 = s2;
    a1 = 16; func_002D5960(a0, a1);
    v0 = (s32) 0xcd0000U;
    v1 = -2;
    a1 = (*(volatile u8 *) (u32) (v0 + -9980));
    a0 = (s64) ((u64) 0 + (u64) (s64) 1);
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = a1 & v1;
    v0 = (s32) 0xcd0000U;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (v0 + -9980)) = (u8) v1;
L_00C9345C:;
    a0 = (s32) 0xcd0000U;
    a0 = (s32) ((u32) a0 + 0xffffd8f4U); v0 = func_002D5870(a0);
    if (v0 == 0) { s0 = (s32) ((u32) s0 + 0x1U); goto L_00C93534; }
    v0 = (s32) 0xcd0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -9980));
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) goto L_00C93534;
    s0 = (s32) ((u32) s0 + 0x1U);
    goto L_00C93534;
L_00C93494:;
    a0 = (s32) 0xcd0000U;
    a0 = (s32) ((u32) a0 + 0xffffd8fcU); v0 = func_002D55B0(a0);
    if (v0 != 0) { s0 = (s32) ((u32) s0 + 0x1U); goto L_00C93534; }
    v0 = (s32) 0xcd0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -9980));
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) goto L_00C93534;
    s0 = (s32) ((u32) s0 + 0x1U);
    goto L_00C93534;
L_00C934CC:;
    s2 = (s32) 0xcd0000U;
    a1 = 0;
    s2 = (s32) ((u32) s2 + 0xffffd8f4U);
    a0 = s2; func_002D5980(a0, a1);
    a0 = s2;
    a1 = 40; func_002D5960(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U); goto L_00C93534;
L_00C934F4:;
    a0 = (s32) 0xcd0000U;
    a0 = (s32) ((u32) a0 + 0xffffd8f4U); v0 = func_002D5870(a0);
    if (v0 != 0) goto L_00C93534;
    v0 = (s32) 0xcd0000U;
    v1 = -2;
    a1 = (*(volatile u8 *) (u32) (v0 + -9980));
    a0 = 0 & 0x1;
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = a1 & v1;
    v0 = (s32) 0xcd0000U;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (v0 + -9980)) = (u8) v1; goto L_00C93534;
L_00C93530:;
    s1 = 1;
L_00C93534:;
    v0 = (s32) 0xcd0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -9980));
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_00C9355C;
    a0 = (s32) 0xcd0000U;
    a0 = (s32) ((u32) a0 + 0xffffd8f4U); v0 = func_002D58A0(a0);
    a0 = v0 & 0xff; func_0019DDD0(a0);
L_00C9355C:;
    v1 = (s32) 0xcd0000U;
    v0 = s1;
    (*(volatile u32 *) (u32) (v1 + -10000)) = (u32) s0;
    return v0;
}
