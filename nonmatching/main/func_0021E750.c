/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001A33F0(s32, s32);
s32 func_0021E940(s32, s32, s32, s32);
s32 func_0021EB50(s32, s32, s32, s32);
s32 func_00237530(s32);

s32 func_0021E750(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s1 = a0;
    v1 = s1 & 0xffff;
    if (v1 < 0) goto L_0021E77C;
    at = v1 < 57;
    if (at != 0) { a0 = s1; goto L_0021E7F8; }
L_0021E77C:;
    v0 = v1 < 57;
    if (v0 != 0) { v0 = v1 < 64; goto L_0021E798; }
    at = v1 < 64;
    if (at != 0) goto L_0021E7F4;
    v0 = v1 < 64;
L_0021E798:;
    if (v0 != 0) { v0 = v1 < 204; goto L_0021E7B0; }
    at = v1 < 204;
    if (at != 0) goto L_0021E7F4;
    v0 = v1 < 204;
L_0021E7B0:;
    if (v0 != 0) { v0 = v1 < 254; goto L_0021E7C8; }
    at = v1 < 221;
    if (at != 0) goto L_0021E7F4;
    v0 = v1 < 254;
L_0021E7C8:;
    if (v0 != 0) { v0 = v1 < 272; goto L_0021E7E0; }
    at = v1 < 270;
    if (at != 0) goto L_0021E7F4;
    v0 = v1 < 272;
L_0021E7E0:;
    if (v0 != 0) { v0 = (s32) ((u32) v1 + 0xfffffedaU); goto L_0021E86C; }
    at = v1 < 274;
    if (at == 0) goto L_0021E868;
L_0021E7F4:;
    a0 = s1;
L_0021E7F8:;
    a1 = 1; v0 = func_0021EB50(a0, a1, a2, a3);
    s0 = v0 & 0xff;
    a0 = s1;
    a1 = 0; v0 = func_0021EB50(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = s0 & 0xff;
    if (v0 == v1) { v1 = s1 & 0xffff; goto L_0021E850; }
    a0 = s1;
    a1 = 0; v0 = func_0021EB50(a0, a1, a2, a3);
    a0 = s1;
    s0 = v0 & 0xff; v0 = func_0021E940(a0, a1, a2, a3);
    v1 = s0 & 0xff;
    a1 = v0;
    a0 = v1 & 0xf; v0 = func_001A33F0(a0, a1);
    goto L_0021E92C;
L_0021E850:;
    v0 = (s32) 0x540000U;
    v0 = (s32) ((u32) v0 + 0xffff8a30U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0); goto L_0021E928;
L_0021E868:;
    v0 = (s32) ((u32) v1 + 0xfffffedaU);
L_0021E86C:;
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { v0 = (s32) 0x2000000U; goto L_0021E928; }
    a0 = s1; v0 = func_00237530(a0);
    s0 = v0;
    v0 = (*(volatile u16 *) (u32) (v0 + 368));
    v0 = (s32) ((u32) v0 + 0xfffffedaU);
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { a0 = s1; goto L_0021E8BC; }
    a0 = s1;
    a1 = 0; v0 = func_0021EB50(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    a1 = (s32) 0x3000000U;
    a0 = v0 & 0xf; v0 = func_001A33F0(a0, a1);
    goto L_0021E928;
L_0021E8BC:;
    a1 = 1; v0 = func_0021EB50(a0, a1, a2, a3);
    s2 = v0 & 0xff;
    a0 = s1;
    a1 = 0; v0 = func_0021EB50(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = s2 & 0xff;
    if (v0 == v1) { v1 = (*(volatile u16 *) (u32) (s0 + 368)); goto L_0021E914; }
    a0 = s1;
    a1 = 0; v0 = func_0021EB50(a0, a1, a2, a3);
    a0 = (*(volatile u16 *) (u32) (s0 + 368));
    s0 = v0 & 0xff; v0 = func_0021E940(a0, a1, a2, a3);
    v1 = s0 & 0xff;
    a1 = v0;
    a0 = v1 & 0xf; v0 = func_001A33F0(a0, a1);
    goto L_0021E928;
L_0021E914:;
    v0 = (s32) 0x540000U;
    v0 = (s32) ((u32) v0 + 0xffff8a30U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
L_0021E928:;
L_0021E92C:;
    return v0;
}
