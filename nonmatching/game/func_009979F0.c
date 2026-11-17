/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00A09950(s32);

s32 func_009979F0(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;

    v0 = 25;
    v1 = (*(volatile u8 *) (u32) (a0 + 22));
    { s32 c_ = v1 == v0; s0 = a0; if (c_) goto L_00997A6C; }
    v0 = 19;
    if (v1 == v0) goto L_00997A6C;
    v0 = 11;
    if (v1 == v0) goto L_00997A6C;
    v1 = (*(volatile u8 *) (u32) s0);
    a0 = (s32) 0x590000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0x2800U);
L_00997A34:;
    v0 = (*(volatile u8 *) (u32) (a0 + 16));
    if (v1 != v0) goto L_00997A48;
    v0 = 1; goto L_00997A5C;
L_00997A48:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < 8;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x28U); if (c_) goto L_00997A34; }
    v0 = 0;
L_00997A5C:;
    if (v0 != 0) goto L_00997A74;
    v0 = 0; goto L_00997C1C;
L_00997A6C:;
    v0 = 0; goto L_00997C1C;
L_00997A74:;
    a0 = s0; v0 = func_00A09950(a0);
    if (v0 != 0) goto L_00997AAC;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (v0 == 0) goto L_00997B80;
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = v0 & 0xff;
    if (v1 == v0) goto L_00997B80;
    v0 = 1; goto L_00997C1C;
L_00997AAC:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (v0 != 0) goto L_00997B78;
    a0 = (*(volatile u8 *) (u32) (s0 + 19));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e4fU);
    v0 = (*(volatile u8 *) (u32) s0);
    a0 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v0 == v1) goto L_00997B78;
    v0 = 255;
    if (v1 == v0) goto L_00997B00;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi; goto L_00997B04;
L_00997B00:;
    a0 = 1;
L_00997B04:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (*(volatile s32 *) (u32) (s0 + 276));
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 << 6);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) (a0 + 276));
    at = (u64) v0 < (u64) v1;
    if (at != 0) goto L_00997C18;
    v1 = (*(volatile u8 *) (u32) a0);
    a1 = 0;
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0x2800U);
L_00997B40:;
    v0 = (*(volatile u8 *) (u32) (a0 + 16));
    if (v1 != v0) goto L_00997B54;
    v0 = 1; goto L_00997B68;
L_00997B54:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < 8;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x28U); if (c_) goto L_00997B40; }
    v0 = 0;
L_00997B68:;
    if (v0 == 0) goto L_00997B78;
    v0 = 1; goto L_00997C1C;
L_00997B78:;
    v0 = 0; goto L_00997C1C;
L_00997B80:;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = 1;
    v1 = (*(volatile u16 *) (u32) (v1 + 132));
    if (v1 != v0) goto L_00997AAC;
    a1 = (*(volatile u8 *) (u32) (s0 + 19));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e4fU);
    a0 = (*(volatile u8 *) (u32) s0);
    a1 = (s32) ((u32) a1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile u8 *) (u32) v1);
    if (a0 != v1) goto L_00997C1C;
    a0 = (s32) 0x590000U;
    v1 = 255;
    a0 = (s32) ((u32) a0 + 0x1e50U);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile u8 *) (u32) a0);
    if (a0 == v1) goto L_00997AAC;
    if (a0 == v1) goto L_00997BE8;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    v0 = hi;
L_00997BE8:;
    a0 = (s32) ((u32) v0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) v0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = 11;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (v1 + 22));
    if (v1 != v0) goto L_00997AAC;
    v0 = 1; goto L_00997C1C;
L_00997C18:;
    v0 = 0;
L_00997C1C:;
    return v0;
}
