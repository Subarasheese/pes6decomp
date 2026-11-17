/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001BB080(s32, s32);
s32 func_001BB430(s32);
s32 func_001BB5F0(s32, s32);

s32 func_001BAA20(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    if (a0 <= 0) goto L_001BAAF8;
    at = (u64) a0 < (u64) (s64) 641;
    if (at == 0) { ; goto L_001BAAFC; }
    { s32 c_ = a0 <= 0; s0 = 0; if (c_) goto L_001BAA80; }
    at = (u64) a0 < (u64) (s64) 641;
    if (at == 0) goto L_001BAA80;
    v1 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (s32) 0x520000U;
    v0 = (s32) ((u32) v0 + 0x4a50U);
    v1 = (s32) ((u32) v1 << 5);
    s1 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) s1 + 0x10U); v0 = func_001BB430(a0);
    v1 = (*(volatile s32 *) (u32) (gp + -23128));
    if (v0 == v1) goto L_001BAA80;
    s0 = s1;
L_001BAA80:;
    if (s0 == 0) goto L_001BAAF8;
    v0 = (*(volatile u8 *) (u32) (s0 + 3));
    { s32 c_ = v0 <= 0; s1 = (s32) ((u32) s0 + 0x10U); if (c_) goto L_001BAAE4; }
    v1 = (*(volatile s32 *) (u32) (gp + -23132));
    a0 = (*(volatile s16 *) (u32) s0);
    { s32 c_ = v1 <= 0; a2 = 0; if (c_) goto L_001BAAE0; }
    a1 = (s32) 0x520000U;
    a1 = (s32) ((u32) a1 + 0x47d0U);
L_001BAAAC:;
    v0 = (*(volatile s16 *) (u32) a1);
    if (a0 != v0) { a2 = (s32) ((u32) a2 + 0x1U); goto L_001BAAD0; }
    v0 = (s32) 0x520000U;
    v1 = (s32) ((u32) a2 << 1);
    v0 = (s32) ((u32) v0 + 0x47d0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u16 *) (u32) v0) = (u16) 0; goto L_001BAAE0;
L_001BAAD0:;
    v0 = a2 < v1;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x2U); if (c_) goto L_001BAAAC; }
L_001BAAE0:;
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) 0;
L_001BAAE4:;
    a0 = s1; v0 = func_001BB080(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -23128));
    a1 = s1; v0 = func_001BB5F0(a0, a1);
L_001BAAF8:;
L_001BAAFC:;
    return v0;
}
