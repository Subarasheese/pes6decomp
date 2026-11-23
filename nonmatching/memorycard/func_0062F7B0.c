/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);
s32 func_00220B70(s32);

s32 func_0062F7B0(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s2 = a1;
    { s32 c_ = s2 == 0; s1 = a2; if (c_) goto L_0062F7D8; }
    if (s1 != 0) { v0 = (*(volatile u8 *) (u32) (a0 + 52)); goto L_0062F7E0; }
L_0062F7D8:;
    v0 = 0; goto L_0062F918;
L_0062F7E0:;
    v0 = (s32) ((u32) v0 + 0xffffffe4U);
    a0 = -1;
    at = (u64) v0 < (u64) (s64) 12;
    s0 = a0;
    { s32 c_ = at == 0; a1 = a0; if (c_) goto L_0062F814; }
    v1 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffaca0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x62f814U) goto L_0062F814; if (t_ == 0x62f81cU) goto L_0062F81C; if (t_ == 0x62f824U) goto L_0062F824; if (t_ == 0x62f82cU) goto L_0062F82C; if (t_ == 0x62f834U) goto L_0062F834; if (t_ == 0x62f83cU) goto L_0062F83C; if (t_ == 0x62f844U) goto L_0062F844; if (t_ == 0x62f850U) goto L_0062F850; if (t_ == 0x62f85cU) goto L_0062F85C; if (t_ == 0x62f868U) goto L_0062F868; }
L_0062F814:;
    a1 = 9; goto L_0062F86C;
L_0062F81C:;
    a0 = 0; goto L_0062F86C;
L_0062F824:;
    a1 = 7; goto L_0062F86C;
L_0062F82C:;
    a0 = 1; goto L_0062F86C;
L_0062F834:;
    a1 = 14; goto L_0062F86C;
L_0062F83C:;
    a1 = 13; goto L_0062F86C;
L_0062F844:;
    s0 = 1;
    a0 = 2; goto L_0062F86C;
L_0062F850:;
    s0 = 2;
    a0 = s0; goto L_0062F86C;
L_0062F85C:;
    s0 = 3;
    a0 = 2; goto L_0062F86C;
L_0062F868:;
    a0 = 3;
L_0062F86C:;
    v0 = 9;
    if (a1 == v0) goto L_0062F884;
    v0 = 7;
    if (a1 != v0) { v0 = -1; goto L_0062F89C; }
L_0062F884:;
    v1 = (s32) 0x650000U;
    v0 = 0;
    v1 = (s32) ((u32) v1 + 0x7898U);
    (*(volatile u32 *) (u32) s2) = (u32) v1;
    (*(volatile u32 *) (u32) s1) = (u32) 0; goto L_0062F918;
L_0062F89C:;
    if (a1 != v0) goto L_0062F8C4;
    v0 = (s32) 0x660000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffab80U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_00220B70(a0);
    (*(volatile u32 *) (u32) s2) = (u32) v0; goto L_0062F8E0;
L_0062F8C4:;
    v0 = (s32) 0x660000U;
    v1 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffa1f0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
    (*(volatile u32 *) (u32) s2) = (u32) v0;
L_0062F8E0:;
    v0 = -1;
    if (s0 != v0) goto L_0062F8F8;
    (*(volatile u32 *) (u32) s1) = (u32) 0;
    v0 = 0; goto L_0062F918;
L_0062F8F8:;
    v0 = (s32) 0x660000U;
    v1 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffa1f0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    v0 = 1;
L_0062F918:;
    return v0;
}
