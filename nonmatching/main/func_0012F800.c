/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_0012F800(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    s4 = a1;
    s3 = 0;
    v1 = (*(volatile s32 *) (u32) (a1 + 20));
    s0 = a0;
    s2 = (*(volatile s32 *) (u32) (a0 + 296));
    s1 = ~(v1 | 0);
    a1 = (s32) ((u32) s4 + 0x18U);
L_0012F838:;
    v1 = 1;
    v1 = (s32) ((u32) v1 << (s3 & 31));
    v1 = s1 & v1;
    if (v1 != 0) { v0 = (*(volatile s32 *) (u32) s2); goto L_0012F8A0; }
L_0012F850:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < 9;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_0012F838; }
    v1 = (*(volatile s32 *) (u32) (s4 + 20));
    a1 = (s32) ((u32) s4 + 0x18U);
    s2 = (*(volatile s32 *) (u32) (s0 + 296));
    s3 = 0;
    s1 = ~(v1 | 0);
L_0012F874:;
    v1 = 1;
    v1 = (s32) ((u32) v1 << (s3 & 31));
    v1 = s1 & v1;
    if (v1 != 0) goto L_0012F8B0;
L_0012F888:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < 9;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_0012F874; }
    goto L_0012F8C8;
L_0012F8A0:;
    { u32 t_ = (u32) v0; a0 = (s32) ((u32) s0 + 0x80U); v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    a1 = v0; goto L_0012F850;
L_0012F8B0:;
    v0 = (*(volatile s32 *) (u32) s2);
    { u32 t_ = (u32) v0; a0 = (s32) ((u32) s0 + 0xd0U); v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    a1 = v0; goto L_0012F888;
L_0012F8C8:;
    return v0;
}
