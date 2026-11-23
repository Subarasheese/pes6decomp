/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_006231C0(s64);
s64 func_00639BF0(s64);
void func_0063B6D0(s64);
void memcpy(s64, s64, s64);

void func_0063D8C0(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;
    s64 hi = 0, lo = 0;

    s2 = a0;
    a0 = (*(volatile s32 *) (u32) (a0 + 16)); v0 = func_00639BF0(a0);
    s1 = v0;
    { s32 c_ = s1 < 0; a0 = 0; if (c_) goto L_0063D90C; }
    at = s1 < 36;
    if (at == 0) goto L_0063D90C;
    v0 = (s32) ((u32) s1 << 2);
    v1 = (*(volatile s32 *) (u32) (gp + -20972));
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (s32) ((u32) v0 << 10);
    a0 = (s32) ((u32) v1 + (u32) v0);
L_0063D90C:;
    v0 = (s32) 0x660000U;
    a1 = (*(volatile s32 *) (u32) (v0 + -4208));
    a2 = 5120; memcpy(a0, a1, a2);
    { s32 c_ = s1 < 0; v1 = (s64) ((u64) 0 + (u64) (s64) 14); if (c_) goto L_0063D95C; }
    at = s1 < 36;
    if (at == 0) goto L_0063D95C;
    { s32 c_ = s1 < 0; v0 = 0; if (c_) goto L_0063D958; }
    at = s1 < 36;
    if (at == 0) { v1 = (*(volatile u8 *) (u32) (v0 + 12)); goto L_0063D95C; }
    v0 = (s32) ((u32) s1 << 2);
    v1 = (*(volatile s32 *) (u32) (gp + -20972));
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (s32) ((u32) v0 << 10);
    v0 = (s32) ((u32) v1 + (u32) v0);
L_0063D958:;
    v1 = (*(volatile u8 *) (u32) (v0 + 12));
L_0063D95C:;
    if (s1 < 0) { v0 = 0; goto L_0063D984; }
    at = s1 < 36;
    if (at == 0) goto L_0063D980;
    v0 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0xffffd870U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    (*(volatile u8 *) (u32) v0) = (u8) v1;
L_0063D980:;
    v0 = 0;
L_0063D984:;
    if (s1 < 0) { s0 = (*(volatile u8 *) (u32) (v0 + 9)); goto L_0063D9B0; }
    at = s1 < 36;
    if (at == 0) goto L_0063D9AC;
    v0 = (s32) ((u32) s1 << 2);
    v1 = (*(volatile s32 *) (u32) (gp + -20972));
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (s32) ((u32) v0 << 10);
    v0 = (s32) ((u32) v1 + (u32) v0);
L_0063D9AC:;
    s0 = (*(volatile u8 *) (u32) (v0 + 9));
L_0063D9B0:;
    { s32 c_ = s1 < 0; v0 = (s64) ((u64) 0 + (u64) (s64) 14); if (c_) goto L_0063D9D4; }
    at = s1 < 36;
    if (at == 0) { a0 = v0 & 0xff; goto L_0063D9D8; }
    v0 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0xffffd870U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (*(volatile u8 *) (u32) v0);
L_0063D9D4:;
    a0 = v0 & 0xff;
L_0063D9D8:;
    v0 = 13;
    if (a0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 14); goto L_0063DA68; }
    v0 = func_006231C0(a0);
    v0 = v0 & 0xff;
    if (s0 == v0) goto L_0063DA64;
    if (s1 < 0) goto L_0063DA3C;
    at = s1 < 36;
    if (at == 0) goto L_0063DA3C;
    { s32 c_ = s1 < 0; v1 = 0; if (c_) goto L_0063DA34; }
    at = s1 < 36;
    if (at == 0) { v0 = 13; goto L_0063DA38; }
    v0 = (s32) ((u32) s1 << 2);
    v1 = (*(volatile s32 *) (u32) (gp + -20972));
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (s32) ((u32) v0 << 10);
    v1 = (s32) ((u32) v1 + (u32) v0);
L_0063DA34:;
    v0 = 13;
L_0063DA38:;
    (*(volatile u8 *) (u32) (v1 + 12)) = (u8) v0;
L_0063DA3C:;
    if (s1 < 0) goto L_0063DA64;
    at = s1 < 36;
    if (at == 0) goto L_0063DA64;
    v0 = (s32) 0x660000U;
    v1 = 13;
    v0 = (s32) ((u32) v0 + 0xffffd870U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    (*(volatile u8 *) (u32) v0) = (u8) v1;
L_0063DA64:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 14);
L_0063DA68:;
    if (s1 < 0) { v0 = v0 & 0xff; goto L_0063DA90; }
    at = s1 < 36;
    if (at == 0) goto L_0063DA8C;
    v0 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0xffffd870U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (*(volatile u8 *) (u32) v0);
L_0063DA8C:;
    v0 = v0 & 0xff;
L_0063DA90:;
    if (v0 != 0) { v0 = (s64) ((u64) 0 + (u64) (s64) 14); goto L_0063DAD0; }
    at = s1 < 35;
    if (at == 0) goto L_0063DACC;
    if (s1 < 0) goto L_0063DACC;
    at = s1 < 36;
    if (at == 0) goto L_0063DACC;
    v0 = (s32) 0x660000U;
    v1 = 13;
    v0 = (s32) ((u32) v0 + 0xffffd870U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    (*(volatile u8 *) (u32) v0) = (u8) v1;
L_0063DACC:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 14);
L_0063DAD0:;
    if (s1 < 0) { v0 = v0 & 0xff; goto L_0063DAF8; }
    at = s1 < 36;
    if (at == 0) goto L_0063DAF4;
    v0 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0xffffd870U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (*(volatile u8 *) (u32) v0);
L_0063DAF4:;
    v0 = v0 & 0xff;
L_0063DAF8:;
    v0 = v0 < 16;
    if (v0 != 0) { a0 = (s64) ((u64) 0 + (u64) (s64) 14); goto L_0063DB30; }
    if (s1 < 0) goto L_0063DB2C;
    at = s1 < 36;
    if (at == 0) goto L_0063DB2C;
    v0 = (s32) 0x660000U;
    v1 = 13;
    v0 = (s32) ((u32) v0 + 0xffffd870U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    (*(volatile u8 *) (u32) v0) = (u8) v1;
L_0063DB2C:;
    a0 = (s64) ((u64) 0 + (u64) (s64) 14);
L_0063DB30:;
    if (s1 < 0) goto L_0063DB54;
    at = s1 < 36;
    if (at == 0) goto L_0063DB54;
    v0 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0xffffd870U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile u8 *) (u32) v0);
L_0063DB54:;
    if (s1 < 0) { v0 = (*(volatile s32 *) (u32) (s2 + 16)); goto L_0063DB98; }
    at = s1 < 36;
    if (at == 0) goto L_0063DB94;
    { s32 c_ = s1 < 0; v0 = 0; if (c_) goto L_0063DB90; }
    at = s1 < 36;
    if (at == 0) { (*(volatile u8 *) (u32) (v0 + 12)) = (u8) a0; goto L_0063DB94; }
    v0 = (s32) ((u32) s1 << 2);
    v1 = (*(volatile s32 *) (u32) (gp + -20972));
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (s32) ((u32) v0 << 10);
    v0 = (s32) ((u32) v1 + (u32) v0);
L_0063DB90:;
    (*(volatile u8 *) (u32) (v0 + 12)) = (u8) a0;
L_0063DB94:;
    v0 = (*(volatile s32 *) (u32) (s2 + 16));
L_0063DB98:;
    v1 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (s2 + 16)) = (u32) v1;
    v0 = (*(volatile u16 *) (u32) (s2 + 20));
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; } func_0063B6D0(a0);
    return;
}
