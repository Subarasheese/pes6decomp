/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Texture_GetClut(s32);
s32 Pes6Texture_GetPsm(s32);
void memcpy(s32, s32, s32);

void func_0014DB80(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s0 = a0;
    { s32 c_ = s0 == 0; s1 = a1; if (c_) goto L_0014DF54; }
    if (s1 == 0) goto L_0014DF54;
    v0 = Pes6Texture_GetClut(a0);
    a0 = s0;
    s0 = v0; v0 = Pes6Texture_GetPsm(a0);
    v1 = 20;
    if (v0 == v1) { a1 = s0; goto L_0014DF3C; }
    v1 = 19;
    if (v0 == v1) goto L_0014DBD8;
    v0 = 0; goto L_0014DF58;
L_0014DBD8:;
    v0 = (s32) 0x370000U;
    a0 = 0;
    v1 = s1;
    v0 = (s32) ((u32) v0 + 0x6a70U);
L_0014DBE8:;
    a4 = a0 & 0xff;
    { s32 c_ = a4 >= 0; a2 = a4 & 0x1f; if (c_) goto L_0014DC00; }
    if (a2 == 0) goto L_0014DC00;
    a2 = (s32) ((u32) a2 + 0xffffffe0U);
L_0014DC00:;
    { s32 c_ = a2 >= 0; a1 = (s32) a2 >> 3; if (c_) goto L_0014DC10; }
    a1 = (s32) ((u32) a2 + 0x7U);
    a1 = (s32) a1 >> 3;
L_0014DC10:;
    a2 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) a0 + 0x1U);
    a2 = (s32) ((u32) v0 + (u32) a2);
    a3 = a1 & 0xff;
    a1 = (*(volatile s32 *) (u32) a2);
    a1 = (s32) ((u32) a4 + (u32) a1);
    a2 = a3 & 0x1f;
    a1 = a1 & 0xff;
    a1 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) s0 + (u32) a1);
    a6 = (*(volatile u8 *) (u32) a1);
    a5 = (*(volatile u8 *) (u32) (a1 + 1));
    a4 = (*(volatile u8 *) (u32) (a1 + 2));
    a1 = (*(volatile u8 *) (u32) (a1 + 3));
    (*(volatile u8 *) (u32) v1) = (u8) a6;
    (*(volatile u8 *) (u32) (v1 + 1)) = (u8) a5;
    (*(volatile u8 *) (u32) (v1 + 2)) = (u8) a4;
    { s32 c_ = a3 >= 0; (*(volatile u8 *) (u32) (v1 + 3)) = (u8) a1; if (c_) goto L_0014DC68; }
    if (a2 == 0) goto L_0014DC68;
    a2 = (s32) ((u32) a2 + 0xffffffe0U);
L_0014DC68:;
    { s32 c_ = a2 >= 0; a1 = (s32) a2 >> 3; if (c_) goto L_0014DC78; }
    a1 = (s32) ((u32) a2 + 0x7U);
    a1 = (s32) a1 >> 3;
L_0014DC78:;
    a2 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) a0 + 0x2U);
    a2 = (s32) ((u32) v0 + (u32) a2);
    a4 = a1 & 0xff;
    a1 = (*(volatile s32 *) (u32) a2);
    a1 = (s32) ((u32) a3 + (u32) a1);
    a2 = a4 & 0x1f;
    a1 = a1 & 0xff;
    a1 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) s0 + (u32) a1);
    a6 = (*(volatile u8 *) (u32) a1);
    a5 = (*(volatile u8 *) (u32) (a1 + 1));
    a3 = (*(volatile u8 *) (u32) (a1 + 2));
    a1 = (*(volatile u8 *) (u32) (a1 + 3));
    (*(volatile u8 *) (u32) (v1 + 4)) = (u8) a6;
    (*(volatile u8 *) (u32) (v1 + 5)) = (u8) a5;
    (*(volatile u8 *) (u32) (v1 + 6)) = (u8) a3;
    { s32 c_ = a4 >= 0; (*(volatile u8 *) (u32) (v1 + 7)) = (u8) a1; if (c_) goto L_0014DCD0; }
    if (a2 == 0) goto L_0014DCD0;
    a2 = (s32) ((u32) a2 + 0xffffffe0U);
L_0014DCD0:;
    { s32 c_ = a2 >= 0; a1 = (s32) a2 >> 3; if (c_) goto L_0014DCE0; }
    a1 = (s32) ((u32) a2 + 0x7U);
    a1 = (s32) a1 >> 3;
L_0014DCE0:;
    a2 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) a0 + 0x3U);
    a2 = (s32) ((u32) v0 + (u32) a2);
    a3 = a1 & 0xff;
    a1 = (*(volatile s32 *) (u32) a2);
    a1 = (s32) ((u32) a4 + (u32) a1);
    a2 = a3 & 0x1f;
    a1 = a1 & 0xff;
    a1 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) s0 + (u32) a1);
    a6 = (*(volatile u8 *) (u32) a1);
    a5 = (*(volatile u8 *) (u32) (a1 + 1));
    a4 = (*(volatile u8 *) (u32) (a1 + 2));
    a1 = (*(volatile u8 *) (u32) (a1 + 3));
    (*(volatile u8 *) (u32) (v1 + 8)) = (u8) a6;
    (*(volatile u8 *) (u32) (v1 + 9)) = (u8) a5;
    (*(volatile u8 *) (u32) (v1 + 10)) = (u8) a4;
    { s32 c_ = a3 >= 0; (*(volatile u8 *) (u32) (v1 + 11)) = (u8) a1; if (c_) goto L_0014DD38; }
    if (a2 == 0) goto L_0014DD38;
    a2 = (s32) ((u32) a2 + 0xffffffe0U);
L_0014DD38:;
    { s32 c_ = a2 >= 0; a1 = (s32) a2 >> 3; if (c_) goto L_0014DD48; }
    a1 = (s32) ((u32) a2 + 0x7U);
    a1 = (s32) a1 >> 3;
L_0014DD48:;
    a2 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) a0 + 0x4U);
    a2 = (s32) ((u32) v0 + (u32) a2);
    a4 = a1 & 0xff;
    a1 = (*(volatile s32 *) (u32) a2);
    a1 = (s32) ((u32) a3 + (u32) a1);
    a2 = a4 & 0x1f;
    a1 = a1 & 0xff;
    a1 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) s0 + (u32) a1);
    a6 = (*(volatile u8 *) (u32) a1);
    a5 = (*(volatile u8 *) (u32) (a1 + 1));
    a3 = (*(volatile u8 *) (u32) (a1 + 2));
    a1 = (*(volatile u8 *) (u32) (a1 + 3));
    (*(volatile u8 *) (u32) (v1 + 12)) = (u8) a6;
    (*(volatile u8 *) (u32) (v1 + 13)) = (u8) a5;
    (*(volatile u8 *) (u32) (v1 + 14)) = (u8) a3;
    { s32 c_ = a4 >= 0; (*(volatile u8 *) (u32) (v1 + 15)) = (u8) a1; if (c_) goto L_0014DDA0; }
    if (a2 == 0) goto L_0014DDA0;
    a2 = (s32) ((u32) a2 + 0xffffffe0U);
L_0014DDA0:;
    { s32 c_ = a2 >= 0; a1 = (s32) a2 >> 3; if (c_) goto L_0014DDB0; }
    a1 = (s32) ((u32) a2 + 0x7U);
    a1 = (s32) a1 >> 3;
L_0014DDB0:;
    a2 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) a0 + 0x5U);
    a2 = (s32) ((u32) v0 + (u32) a2);
    a3 = a1 & 0xff;
    a1 = (*(volatile s32 *) (u32) a2);
    a1 = (s32) ((u32) a4 + (u32) a1);
    a2 = a3 & 0x1f;
    a1 = a1 & 0xff;
    a1 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) s0 + (u32) a1);
    a6 = (*(volatile u8 *) (u32) a1);
    a5 = (*(volatile u8 *) (u32) (a1 + 1));
    a4 = (*(volatile u8 *) (u32) (a1 + 2));
    a1 = (*(volatile u8 *) (u32) (a1 + 3));
    (*(volatile u8 *) (u32) (v1 + 16)) = (u8) a6;
    (*(volatile u8 *) (u32) (v1 + 17)) = (u8) a5;
    (*(volatile u8 *) (u32) (v1 + 18)) = (u8) a4;
    { s32 c_ = a3 >= 0; (*(volatile u8 *) (u32) (v1 + 19)) = (u8) a1; if (c_) goto L_0014DE08; }
    if (a2 == 0) goto L_0014DE08;
    a2 = (s32) ((u32) a2 + 0xffffffe0U);
L_0014DE08:;
    { s32 c_ = a2 >= 0; a1 = (s32) a2 >> 3; if (c_) goto L_0014DE18; }
    a1 = (s32) ((u32) a2 + 0x7U);
    a1 = (s32) a1 >> 3;
L_0014DE18:;
    a2 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) a0 + 0x6U);
    a2 = (s32) ((u32) v0 + (u32) a2);
    a4 = a1 & 0xff;
    a1 = (*(volatile s32 *) (u32) a2);
    a1 = (s32) ((u32) a3 + (u32) a1);
    a2 = a4 & 0x1f;
    a1 = a1 & 0xff;
    a1 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) s0 + (u32) a1);
    a6 = (*(volatile u8 *) (u32) a1);
    a5 = (*(volatile u8 *) (u32) (a1 + 1));
    a3 = (*(volatile u8 *) (u32) (a1 + 2));
    a1 = (*(volatile u8 *) (u32) (a1 + 3));
    (*(volatile u8 *) (u32) (v1 + 20)) = (u8) a6;
    (*(volatile u8 *) (u32) (v1 + 21)) = (u8) a5;
    (*(volatile u8 *) (u32) (v1 + 22)) = (u8) a3;
    { s32 c_ = a4 >= 0; (*(volatile u8 *) (u32) (v1 + 23)) = (u8) a1; if (c_) goto L_0014DE70; }
    if (a2 == 0) goto L_0014DE70;
    a2 = (s32) ((u32) a2 + 0xffffffe0U);
L_0014DE70:;
    { s32 c_ = a2 >= 0; a1 = (s32) a2 >> 3; if (c_) goto L_0014DE80; }
    a1 = (s32) ((u32) a2 + 0x7U);
    a1 = (s32) a1 >> 3;
L_0014DE80:;
    a2 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) a0 + 0x7U);
    a2 = (s32) ((u32) v0 + (u32) a2);
    a3 = a1 & 0xff;
    a1 = (*(volatile s32 *) (u32) a2);
    a1 = (s32) ((u32) a4 + (u32) a1);
    a2 = a3 & 0x1f;
    a1 = a1 & 0xff;
    a1 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) s0 + (u32) a1);
    a6 = (*(volatile u8 *) (u32) a1);
    a5 = (*(volatile u8 *) (u32) (a1 + 1));
    a4 = (*(volatile u8 *) (u32) (a1 + 2));
    a1 = (*(volatile u8 *) (u32) (a1 + 3));
    (*(volatile u8 *) (u32) (v1 + 24)) = (u8) a6;
    (*(volatile u8 *) (u32) (v1 + 25)) = (u8) a5;
    (*(volatile u8 *) (u32) (v1 + 26)) = (u8) a4;
    { s32 c_ = a3 >= 0; (*(volatile u8 *) (u32) (v1 + 27)) = (u8) a1; if (c_) goto L_0014DED8; }
    if (a2 == 0) goto L_0014DED8;
    a2 = (s32) ((u32) a2 + 0xffffffe0U);
L_0014DED8:;
    { s32 c_ = a2 >= 0; a1 = (s32) a2 >> 3; if (c_) goto L_0014DEE8; }
    a1 = (s32) ((u32) a2 + 0x7U);
    a1 = (s32) a1 >> 3;
L_0014DEE8:;
    a1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + 0x8U);
    a2 = (s32) ((u32) v0 + (u32) a1);
    a2 = (*(volatile s32 *) (u32) a2);
    a1 = a0 < 256;
    a2 = (s32) ((u32) a3 + (u32) a2);
    a2 = a2 & 0xff;
    a2 = (s32) ((u32) a2 << 2);
    a2 = (s32) ((u32) s0 + (u32) a2);
    a5 = (*(volatile u8 *) (u32) a2);
    a4 = (*(volatile u8 *) (u32) (a2 + 1));
    a3 = (*(volatile u8 *) (u32) (a2 + 2));
    a2 = (*(volatile u8 *) (u32) (a2 + 3));
    (*(volatile u8 *) (u32) (v1 + 28)) = (u8) a5;
    (*(volatile u8 *) (u32) (v1 + 29)) = (u8) a4;
    (*(volatile u8 *) (u32) (v1 + 30)) = (u8) a3;
    (*(volatile u8 *) (u32) (v1 + 31)) = (u8) a2;
    { s32 c_ = a1 != 0; v1 = (s32) ((u32) v1 + 0x20U); if (c_) goto L_0014DBE8; }
    v0 = s1; goto L_0014DF4C;
L_0014DF3C:;
    a0 = s1;
    a2 = 64; memcpy(a0, a1, a2);
    v0 = s1;
L_0014DF4C:;
    goto L_0014DF5C;
L_0014DF54:;
    v0 = 0;
L_0014DF58:;
L_0014DF5C:;
    return;
}
