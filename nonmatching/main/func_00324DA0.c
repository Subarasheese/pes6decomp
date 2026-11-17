/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0022D200(s32, s32);

s32 func_00324DA0(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s32 gp = 0x3ef370;

    s6 = (s32) 0x590000U;
    s5 = 0;
    s6 = (s32) ((u32) s6 + 0x2980U);
    s2 = a0;
L_00324DD4:;
    s3 = 0;
    s1 = s6;
    { s32 c_ = s5 >= 0; s0 = s5 & 0x1; if (c_) goto L_00324DF0; }
    if (s0 == 0) goto L_00324DF0;
    s0 = (s32) ((u32) s0 + 0xfffffffeU);
L_00324DF0:;
    v1 = (*(volatile u16 *) (u32) (s1 + 70));
    a1 = 0;
    a0 = s2;
L_00324E00:;
    v0 = (*(volatile u16 *) (u32) (a0 + 200));
    if (v0 != v1) goto L_00324E28;
    if (v1 == 0) goto L_00324E28;
    v0 = (s32) ((u32) a1 << 5);
    v1 = 1;
    v0 = (s32) ((u32) s2 + (u32) v0);
    s4 = (s32) ((u32) v0 + 0xc8U); goto L_00324E40;
L_00324E28:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < 32;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x20U); if (c_) goto L_00324E00; }
    v1 = 0;
L_00324E40:;
    if (v1 == 0) goto L_00324F10;
    v0 = (*(volatile s32 *) (u32) (gp + -31680));
    v0 = (s32) ((u32) s0 + (u32) v0);
    a0 = (*(volatile u8 *) (u32) (v0 + 44));
    a1 = (*(volatile u16 *) (u32) s4); v0 = func_0022D200(a0, a1);
    v0 = v0 & 0xffff;
    at = (u64) v0 < (u64) (s64) 11;
    if (at == 0) goto L_00324F10;
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x1640U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x324e88U) goto L_00324E88; if (t_ == 0x324ea0U) goto L_00324EA0; if (t_ == 0x324eb8U) goto L_00324EB8; if (t_ == 0x324ed0U) goto L_00324ED0; if (t_ == 0x324ee8U) goto L_00324EE8; if (t_ == 0x324f00U) goto L_00324F00; if (t_ == 0x324f10U) goto L_00324F10; }
L_00324E88:;
    v1 = (*(volatile s32 *) (u32) (s4 + 28));
    v0 = (s32) 0x20000U;
    v0 = v1 | v0;
    (*(volatile u32 *) (u32) (s4 + 28)) = (u32) v0; goto L_00324F10;
L_00324EA0:;
    v1 = (*(volatile s32 *) (u32) (s4 + 28));
    v0 = (s32) 0x40000U;
    v0 = v1 | v0;
    (*(volatile u32 *) (u32) (s4 + 28)) = (u32) v0; goto L_00324F10;
L_00324EB8:;
    v1 = (*(volatile s32 *) (u32) (s4 + 28));
    v0 = (s32) 0x80000U;
    v0 = v1 | v0;
    (*(volatile u32 *) (u32) (s4 + 28)) = (u32) v0; goto L_00324F10;
L_00324ED0:;
    v1 = (*(volatile s32 *) (u32) (s4 + 28));
    v0 = (s32) 0x100000U;
    v0 = v1 | v0;
    (*(volatile u32 *) (u32) (s4 + 28)) = (u32) v0; goto L_00324F10;
L_00324EE8:;
    v1 = (*(volatile s32 *) (u32) (s4 + 28));
    v0 = (s32) 0x200000U;
    v0 = v1 | v0;
    (*(volatile u32 *) (u32) (s4 + 28)) = (u32) v0; goto L_00324F10;
L_00324F00:;
    v1 = (*(volatile s32 *) (u32) (s4 + 28));
    v0 = (s32) 0x400000U;
    v0 = v1 | v0;
    (*(volatile u32 *) (u32) (s4 + 28)) = (u32) v0;
L_00324F10:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 32;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x348U); if (c_) goto L_00324DF0; }
    s5 = (s32) ((u32) s5 + 0x1U);
    s6 = (s32) ((u32) s6 + 0x6900U);
    v0 = s5 < 2;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x400U); if (c_) goto L_00324DD4; }
    v0 = 1;
    return v0;
}
