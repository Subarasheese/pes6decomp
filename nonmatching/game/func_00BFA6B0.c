/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00277220(s32, s32);
void func_002CA3C0(s32, s32);

void func_00BFA6B0(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 hi = 0, lo = 0;

    v1 = a0 & 0xff;
    v0 = 255;
    { s32 c_ = v1 == v0; s1 = 0; if (c_) goto L_00BFA6E8; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi; goto L_00BFA6EC;
L_00BFA6E8:;
    a0 = 1;
L_00BFA6EC:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = (s32) 0x590000U;
    s2 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) a0 + 0x2980U);
    a2 = (*(volatile u8 *) (u32) (s2 + 18));
    a1 = 1;
    v1 = (*(volatile u8 *) (u32) (s2 + 17));
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = (s32) ((u32) v0 + 0xf0U);
    a0 = s0; v0 = func_00277220(a0, a1);
    at = 0 < v0;
    if (at == 0) goto L_00BFA7EC;
    a0 = (*(volatile u8 *) (u32) (s0 + 1));
    v1 = 4;
    if (a0 == v1) { a0 = (*(volatile u8 *) (u32) (s0 + 2)); goto L_00BFA784; }
    v1 = 2;
    if (a0 == v1) { s1 = 1; goto L_00BFA794; }
    goto L_00BFA794;
L_00BFA784:;
    v1 = 5;
    if (a0 != v1) goto L_00BFA794;
    s1 = 1;
L_00BFA794:;
    if (s1 == 0) goto L_00BFA7EC;
    v1 = (*(volatile u8 *) (u32) s0);
    v1 = (s32) ((u32) v1 + 0xfffffff6U);
    at = (u64) v1 < (u64) (s64) 6;
    if (at == 0) goto L_00BFA7EC;
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0x29d0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xbfa7ccU) goto L_00BFA7CC; if (t_ == 0xbfa7e0U) goto L_00BFA7E0; }
L_00BFA7CC:;
    a0 = s2;
    a1 = 1; func_002CA3C0(a0, a1);
    goto L_00BFA7F0;
L_00BFA7E0:;
    a0 = s2;
    a1 = 2; func_002CA3C0(a0, a1);
L_00BFA7EC:;
L_00BFA7F0:;
    return;
}
