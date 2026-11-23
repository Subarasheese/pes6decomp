/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Player_GetParams(s64, s64, s64, s64);
s64 func_00210DF0(void);
s64 func_002282E0(s64, s64);
s64 func_002283E0(s64, s64);
s64 func_00228570(s64, s64);
s64 func_00970870(s64, s64, s64, s64);

s64 func_00228710(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 hi = 0, lo = 0;

    s2 = 0;
    s0 = a0; v0 = func_00210DF0();
    v1 = 2;
    if (v0 != v1) { a0 = s0; goto L_00228780; }
    v1 = s0 & 0xffff;
    v0 = v1 < 28672;
    if (v0 != 0) { a0 = s0; goto L_00228770; }
    at = v1 < 28704;
    if (at == 0) goto L_0022876C;
    a0 = s0; v0 = func_00970870(a0, a1, a2, a3);
    s1 = v0; goto L_0022878C;
L_0022876C:;
    a0 = s0;
L_00228770:;
    v0 = Pes6Player_GetParams(a0, a1, a2, a3);
    s1 = v0; goto L_0022878C;
L_00228780:;
    v0 = Pes6Player_GetParams(a0, a1, a2, a3);
    s1 = v0;
L_0022878C:;
    if (s1 != 0) { s0 = 0; goto L_0022879C; }
    v0 = 1; goto L_00228938;
L_0022879C:;
    a0 = s1;
L_002287A0:;
    a1 = s0; v0 = func_002282E0(a0, a1);
    if (v0 == 0) goto L_00228840;
    v0 = 6;
    if (s0 == v0) goto L_00228810;
    v0 = 5;
    if (s0 == v0) goto L_00228810;
    v0 = 4;
    if (s0 == v0) goto L_00228810;
    v1 = 10;
    if (s0 == v1) goto L_00228810;
    v0 = 3;
    if (s0 == v0) goto L_00228808;
    v0 = 2;
    if (s0 == v0) goto L_00228808;
    if (s0 == 0) goto L_00228808;
    goto L_00228828;
L_00228808:;
    s2 = (s64) ((u64) 0 + (u64) (s64) 50); goto L_00228840;
L_00228810:;
    v0 = s2 & 0xffff;
    at = v0 < 30;
    if (at == 0) goto L_00228840;
    s2 = (s64) ((u64) 0 + (u64) (s64) 30); goto L_00228840;
L_00228828:;
    v0 = s2 & 0xffff;
    at = v0 < 50;
    if (at == 0) goto L_00228840;
    s2 = v1 & 0xffff;
L_00228840:;
    s0 = (s32) ((u32) s0 + 0x1U);
    at = s0 < 11;
    if (at != 0) { a0 = s1; goto L_002287A0; }
    s0 = 0;
L_00228854:;
    v0 = (s32) ((u32) s0 + 0xffffffe6U);
    at = (u64) v0 < (u64) (s64) 3;
    if (at == 0) { a1 = s0 & 0xff; goto L_00228878; }
    a1 = s0 & 0xff;
    a0 = s1; v0 = func_00228570(a0, a1);
    v1 = v0 & 0xff; goto L_002288A8;
L_00228878:;
    a0 = s1; v0 = func_00228570(a0, a1);
    a0 = v0 & 0xff;
    v0 = (s32) 0x66660000U;
    v1 = (s32) ((u32) a0 >> 31);
    v0 = v0 | 0x6667;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = hi;
    v0 = (s32) v0 >> 2;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = v0 & 0xff;
    v1 = v0 & 0xff;
L_002288A8:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + 0xffff9a20U);
    at = s0 < 29;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u16 *) (u32) v0);
    v0 = (s32) ((u32) s2 + (u32) v0);
    { s32 c_ = at != 0; s2 = v0 & 0xffff; if (c_) goto L_00228854; }
    s3 = 0;
    s0 = 0;
    a1 = s0 & 0xff;
L_002288DC:;
    a0 = s1; v0 = func_002283E0(a0, a1);
    if (v0 == 0) goto L_002288F0;
    s3 = (s32) ((u32) s3 + 0x1U);
L_002288F0:;
    s0 = (s32) ((u32) s0 + 0x1U);
    at = s0 < 22;
    if (at != 0) { a1 = s0 & 0xff; goto L_002288DC; }
    v0 = (s32) ((u32) s3 << 1);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v0 = v0 & 0xffff;
    v0 = (s32) ((u32) s2 + (u32) v0);
    s2 = v0 & 0xffff;
    if (s2 != 0) { v0 = s2 & 0xffff; goto L_00228924; }
    s2 = (s64) ((u64) 0 + (u64) (s64) 1);
    v0 = s2 & 0xffff;
L_00228924:;
    at = v0 < 5001;
    if (at != 0) { v0 = s2; goto L_00228938; }
    s2 = (s64) ((u64) 0 + (u64) (s64) 5000);
    v0 = s2;
L_00228938:;
    return v0;
}
