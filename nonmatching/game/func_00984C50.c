/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002AE670(s32);
void func_00C236B0(s32);
s32 func_00C23A50(s32, s32);

void func_00984C50(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    v1 = 8;
    s1 = a0;
    a0 = a1 & 0xff;
    if (a0 == v1) goto L_00984D20;
    v1 = 4;
    if (a0 == v1) goto L_00984CF4;
    v1 = 2;
    if (a0 == v1) goto L_00984CC8;
    v1 = 1;
    if (a0 == v1) goto L_00984C9C;
    goto L_00984D48;
L_00984C9C:;
    a2 = s1 & 0xff;
    v1 = (s32) 0x5a0000U;
    a0 = (s32) ((u32) a2 << 4);
    v1 = (s32) ((u32) v1 + 0x2170U);
    a2 = (s32) ((u32) a0 - (u32) a2);
    a0 = (s32) ((u32) a2 << 2);
    a0 = (s32) ((u32) a0 - (u32) a2);
    a0 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a2 = (*(volatile u8 *) (u32) v1); goto L_00984D48;
L_00984CC8:;
    a2 = s1 & 0xff;
    v1 = (s32) 0x5a0000U;
    a0 = (s32) ((u32) a2 << 4);
    v1 = (s32) ((u32) v1 + 0x2171U);
    a2 = (s32) ((u32) a0 - (u32) a2);
    a0 = (s32) ((u32) a2 << 2);
    a0 = (s32) ((u32) a0 - (u32) a2);
    a0 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a2 = (*(volatile u8 *) (u32) v1); goto L_00984D48;
L_00984CF4:;
    a2 = s1 & 0xff;
    v1 = (s32) 0x5a0000U;
    a0 = (s32) ((u32) a2 << 4);
    v1 = (s32) ((u32) v1 + 0x2172U);
    a2 = (s32) ((u32) a0 - (u32) a2);
    a0 = (s32) ((u32) a2 << 2);
    a0 = (s32) ((u32) a0 - (u32) a2);
    a0 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a2 = (*(volatile u8 *) (u32) v1); goto L_00984D48;
L_00984D20:;
    a2 = s1 & 0xff;
    v1 = (s32) 0x5a0000U;
    a0 = (s32) ((u32) a2 << 4);
    v1 = (s32) ((u32) v1 + 0x2173U);
    a2 = (s32) ((u32) a0 - (u32) a2);
    a0 = (s32) ((u32) a2 << 2);
    a0 = (s32) ((u32) a0 - (u32) a2);
    a0 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a2 = (*(volatile u8 *) (u32) v1);
L_00984D48:;
    a0 = (s32) 0x590000U;
    v1 = a2 & 0xff;
    s0 = s1 & 0xff;
    a0 = (s32) ((u32) a0 + 0x1ef2U);
    a2 = (s32) ((u32) a0 + (u32) s0);
    at = (u64) v1 < (u64) (s64) 10;
    a0 = (*(volatile u8 *) (u32) a2);
    a0 = a0 | a1;
    { s32 c_ = at == 0; (*(volatile u8 *) (u32) a2) = (u8) a0; if (c_) goto L_00984E78; }
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffffa180U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x984d8cU) goto L_00984D8C; if (t_ == 0x984da0U) goto L_00984DA0; if (t_ == 0x984dd8U) goto L_00984DD8; }
L_00984D8C:;
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1ef0U);
    v1 = (s32) ((u32) v1 + (u32) s0);
    (*(volatile u8 *) (u32) v1) = (u8) 0; goto L_00984E78;
L_00984DA0:;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 7972));
    at = (u64) v1 < (u64) (s64) 8;
    if (at == 0) goto L_00984E78;
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffffa160U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x984d8cU) goto L_00984D8C; if (t_ == 0x984da0U) goto L_00984DA0; if (t_ == 0x984dd0U) goto L_00984DD0; if (t_ == 0x984dd8U) goto L_00984DD8; if (t_ == 0x984de0U) goto L_00984DE0; }
L_00984DD0:;
    goto L_00984E78;
L_00984DD8:;
    goto L_00984E78;
L_00984DE0:;
    a0 = 120; v0 = func_002AE670(a0);
    a0 = (s32) 0x590000U;
    v1 = s0;
    a0 = (s32) ((u32) a0 + 0x1ef0U);
    a0 = (s32) ((u32) a0 + (u32) s0);
    s0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) a0) = (u8) v0;
    s0 = (s32) ((u32) s0 + 0xffffea30U);
    a0 = (*(volatile u8 *) (u32) (s0 + 18));
    if (a0 == v1) goto L_00984E18;
    s0 = (s32) 0x590000U;
    s0 = (s32) ((u32) s0 + 0x2f0U);
L_00984E18:;
    a0 = (*(volatile u8 *) (u32) (s0 + 18));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e67U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == 0) goto L_00984E78;
    s1 = 0;
L_00984E38:;
    a0 = s0;
    a1 = 3; v0 = func_00C23A50(a0, a1);
    if (v0 == 0) goto L_00984E68;
L_00984E50:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 10;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x240U); if (c_) goto L_00984E38; }
    goto L_00984E78;
L_00984E68:;
    a0 = s0; func_00C236B0(a0);
    goto L_00984E50;
L_00984E78:;
    return;
}
