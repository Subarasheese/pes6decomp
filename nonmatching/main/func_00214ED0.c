/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021CA90(s32, s32, s32, s32, s32);
void func_0021CD70(s32, s32);

s32 func_00214ED0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    a3 = 15;
    a1 = (s32) ((u32) sp + 0x5cU);
    a2 = (s32) ((u32) sp + 0x58U);
    s3 = a0;
    a0 = 1;
    a4 = s3;
    s0 = (s32) 0x210000U;
    s0 = (s32) ((u32) s0 + 0x4d80U); v0 = func_0021CA90(a0, a1, a2, a3, a4);
    s2 = v0;
    v0 = -126;
    if (s2 != v0) goto L_002150C4;
    v0 = (s32) 0x540000U;
    a0 = (*(volatile s16 *) (u32) (s3 + 12));
    a1 = (*(volatile s32 *) (u32) (v0 + -32252));
    a4 = 0;
    v1 = (*(volatile s16 *) (u32) (s3 + 14));
    (*(volatile u16 *) (u32) (sp + 84)) = (u16) a0;
    at = 0 < a1;
    { s32 c_ = at == 0; (*(volatile u16 *) (u32) (sp + 86)) = (u16) v1; if (c_) goto L_00214F48; }
    v0 = (s32) 0x540000U;
    a4 = (*(volatile s32 *) (u32) (v0 + -32256));
L_00214F48:;
    v0 = (s32) 0x540000U;
    a0 = 0;
    v0 = (*(volatile s32 *) (u32) (v0 + -32256));
    { s32 c_ = v0 == 0; a2 = 0; if (c_) goto L_00215008; }
    a2 = a1; goto L_00215008;
L_00214F64:;
    v1 = (*(volatile s16 *) (u32) v1);
    if (v1 == v0) goto L_00214FB0;
    at = 0 < a2;
    { s32 c_ = at == 0; a3 = 0; if (c_) goto L_00214FB0; }
L_00214F7C:;
    v0 = (*(volatile s16 *) (u32) (a4 + 2));
    if (v0 != v1) goto L_00214F9C;
    v0 = (*(volatile s16 *) (u32) a4);
    if (v0 != a1) goto L_00214F9C;
    a0 = a4; goto L_00214FB0;
L_00214F9C:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < a2;
    { s32 c_ = v0 != 0; a4 = (s32) ((u32) a4 + 0x10U); if (c_) goto L_00214F7C; }
L_00214FB0:;
    a1 = (*(volatile s32 *) (u32) (sp + 88));
    { s32 c_ = a1 < 0; s1 = 0; if (c_) goto L_00215020; }
L_00214FBC:;
    if (s1 == 0) goto L_002150C4;
    (*(volatile u32 *) (u32) (s3 + 32)) = (u32) s1;
    a4 = 0;
    a2 = (*(volatile s32 *) (u32) (s3 + 168));
    a0 = (*(volatile s32 *) (u32) (s3 + 172));
    v1 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = v1 == a0; a3 = 0; if (c_) goto L_00215098; }
    a1 = a2;
L_00214FE4:;
    a1 = (s32) ((u32) a1 + 0x4U);
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != a0) goto L_00214FE4;
    goto L_00215098;
L_00215008:;
    a1 = (*(volatile s16 *) (u32) (sp + 84));
    v0 = -1;
    if (a1 == v0) goto L_00214FB0;
    v1 = (s32) ((u32) sp + 0x56U); goto L_00214F64;
L_00215020:;
    { s32 c_ = a1 <= 0; v0 = a1; if (c_) goto L_00215074; }
    v0 = 0; goto L_00215074;
L_00215030:;
    v0 = (s32) ((u32) 0 - (u32) v0);
    v1 = (s32) 0x3b0000U;
    a2 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff9760U);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v0 = -125;
    s1 = (*(volatile s32 *) (u32) v1);
    if (s1 == v0) goto L_00215088;
    v0 = -124;
    if (s1 == v0) goto L_00215088;
    v0 = -127;
    if (s1 == v0) goto L_00215088;
L_0021506C:;
    goto L_00214FBC;
L_00215074:;
    at = a1 < -10;
    if (at == 0) goto L_00215030;
    v0 = -10; goto L_00215030;
L_00215088:;
    func_0021CD70(a0, a1);
    goto L_0021506C;
L_00215098:;
    if (v1 == s0) goto L_002150C0;
L_002150A0:;
    a2 = (s32) ((u32) a2 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != s0) goto L_002150A0;
L_002150C0:;
    s2 = (s32) ((u32) a3 - (u32) a4);
L_002150C4:;
    v0 = s2;
    return v0;
}
