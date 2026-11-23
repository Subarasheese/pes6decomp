/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Team_ResolveSpecialId(s64);
s64 func_00223960(s64);
s64 func_00223AE0(void);
s64 D_0021EE40(s64 a0, s64 a1, s64 a2, s64 a3);

s64 Pes6Team_GetHomeStadium(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;

    s0 = a0 & 0xffff;
    { s32 c_ = s0 < 0; v0 = (s64) ((u64) 0 + (u64) (s64) 255); if (c_) goto L_0021EE64; }
    at = s0 < 57;
    if (at != 0) goto L_0021EEC4;
L_0021EE64:;
    v1 = s0 < 57;
    if (v1 != 0) { v1 = s0 < 204; goto L_0021EE80; }
    at = s0 < 64;
    if (at != 0) goto L_0021EEC4;
    v1 = s0 < 204;
L_0021EE80:;
    if (v1 != 0) { v1 = s0 < 254; goto L_0021EE98; }
    at = s0 < 221;
    if (at != 0) goto L_0021EEC4;
    v1 = s0 < 254;
L_0021EE98:;
    if (v1 != 0) { v1 = s0 < 272; goto L_0021EEB0; }
    at = s0 < 270;
    if (at != 0) goto L_0021EEC4;
    v1 = s0 < 272;
L_0021EEB0:;
    if (v1 != 0) { v1 = s0 < 64; goto L_0021EEE0; }
    at = s0 < 274;
    if (at == 0) goto L_0021EEDC;
L_0021EEC4:;
    v0 = (s32) 0x540000U;
    v1 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xffff8330U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0); goto L_0021F028;
L_0021EEDC:;
    v1 = s0 < 64;
L_0021EEE0:;
    if (v1 != 0) { v1 = (s32) ((u32) s0 + 0xfffffedaU); goto L_0021EF78; }
    at = s0 < 204;
    if (at == 0) goto L_0021EF74;
    if (a1 != 0) goto L_0021EF5C;
    if (v1 != 0) { v0 = (s32) ((u32) s0 + 0xfffffedaU); goto L_0021EF3C; }
    at = s0 < 204;
    if (at == 0) goto L_0021EF38;
    v0 = func_00223AE0();
    a0 = (s32) ((u32) s0 + 0xffffffc0U);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_0021EF54;
L_0021EF38:;
    v0 = (s32) ((u32) s0 + 0xfffffedaU);
L_0021EF3C:;
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { v0 = 0; goto L_0021EF54; }
    v0 = func_00223960(a0);
    v0 = (*(volatile s32 *) (u32) v0);
L_0021EF54:;
    v0 = (*(volatile u8 *) (u32) (v0 + 81)); goto L_0021F028;
L_0021EF5C:;
    v0 = (s32) 0x540000U;
    v1 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xffff8330U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0); goto L_0021F028;
L_0021EF74:;
    v1 = (s32) ((u32) s0 + 0xfffffedaU);
L_0021EF78:;
    at = (u64) v1 < (u64) (s64) 2;
    if (at == 0) { at = s0 < 296; goto L_0021F00C; }
    if (a1 != 0) goto L_0021EFF0;
    v0 = s0 < 64;
    if (v0 != 0) { v0 = (s32) ((u32) s0 + 0xfffffedaU); goto L_0021EFD0; }
    at = s0 < 204;
    if (at == 0) goto L_0021EFCC;
    v0 = func_00223AE0();
    a0 = (s32) ((u32) s0 + 0xffffffc0U);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_0021EFE8;
L_0021EFCC:;
    v0 = (s32) ((u32) s0 + 0xfffffedaU);
L_0021EFD0:;
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { v0 = 0; goto L_0021EFE8; }
    v0 = func_00223960(a0);
    v0 = (*(volatile s32 *) (u32) v0);
L_0021EFE8:;
    v0 = (*(volatile u8 *) (u32) (v0 + 81)); goto L_0021F028;
L_0021EFF0:;
    v0 = Pes6Team_ResolveSpecialId(a0);
    a0 = v0 & 0xffff;
    a1 = 1; v0 = D_0021EE40(a0, a1, a2, a3);
    v0 = v0 & 0xff; goto L_0021F028;
L_0021F00C:;
    if (at == 0) { ; goto L_0021F02C; }
    v0 = (s32) 0x540000U;
    v1 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xffff8330U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
L_0021F028:;
L_0021F02C:;
    return v0;
}
