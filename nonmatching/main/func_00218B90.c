/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021CA90(s32, s32, s32, s32, s32);
void func_0021CD70(s32, s32);

s32 func_00218B90(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    a3 = 10;
    a1 = (s32) ((u32) sp + 0x5cU);
    a2 = (s32) ((u32) sp + 0x58U);
    s3 = a0;
    a0 = 1;
    a4 = s3;
    s0 = (s32) 0x220000U;
    s0 = (s32) ((u32) s0 + 0xffff87c0U); v0 = func_0021CA90(a0, a1, a2, a3, a4);
    s2 = v0;
    v0 = -126;
    if (s2 != v0) goto L_00218E9C;
    v0 = (s32) 0x540000U;
    a0 = (*(volatile s16 *) (u32) (s3 + 12));
    a1 = (*(volatile s32 *) (u32) (v0 + -32252));
    a4 = 0;
    v1 = (*(volatile s16 *) (u32) (s3 + 14));
    (*(volatile u16 *) (u32) (sp + 84)) = (u16) a0;
    at = 0 < a1;
    { s32 c_ = at == 0; (*(volatile u16 *) (u32) (sp + 86)) = (u16) v1; if (c_) goto L_00218C08; }
    v0 = (s32) 0x540000U;
    a4 = (*(volatile s32 *) (u32) (v0 + -32256));
L_00218C08:;
    v0 = (s32) 0x540000U;
    a0 = 0;
    v0 = (*(volatile s32 *) (u32) (v0 + -32256));
    { s32 c_ = v0 == 0; a2 = 0; if (c_) goto L_00218D24; }
    a2 = a1; goto L_00218D24;
L_00218C24:;
    v1 = (*(volatile s16 *) (u32) v1);
    if (v1 == v0) goto L_00218C70;
    at = 0 < a2;
    { s32 c_ = at == 0; a3 = 0; if (c_) goto L_00218C70; }
L_00218C3C:;
    v0 = (*(volatile s16 *) (u32) (a4 + 2));
    if (v0 != v1) goto L_00218C5C;
    v0 = (*(volatile s16 *) (u32) a4);
    if (v0 != a1) goto L_00218C5C;
    a0 = a4; goto L_00218C70;
L_00218C5C:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < a2;
    { s32 c_ = v0 != 0; a4 = (s32) ((u32) a4 + 0x10U); if (c_) goto L_00218C3C; }
L_00218C70:;
    a1 = (*(volatile s32 *) (u32) (sp + 88));
    { s32 c_ = a1 < 0; s1 = 0; if (c_) goto L_00218D70; }
    v0 = (*(volatile s32 *) (u32) (s3 + 188));
    if (v0 == 0) goto L_00218CC8;
    a2 = (*(volatile s32 *) (u32) (s3 + 168));
    a4 = 0;
    v1 = (*(volatile s32 *) (u32) (s3 + 172));
    a0 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = a0 == v1; a3 = 0; if (c_) goto L_00218D3C; }
    a1 = a2;
L_00218CA4:;
    a1 = (s32) ((u32) a1 + 0x4U);
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != v1) goto L_00218CA4;
    goto L_00218D3C;
L_00218CC8:;
    if (s1 != 0) { (*(volatile u32 *) (u32) (s3 + 32)) = (u32) s1; goto L_00218E08; }
L_00218CD0:;
    v0 = (s32) 0x530000U;
    v1 = 1;
    v0 = (*(volatile s32 *) (u32) (v0 + 31568));
    if (v0 != v1) goto L_00218E9C;
    a2 = (*(volatile s32 *) (u32) (s3 + 168));
    a4 = 0;
    a0 = (*(volatile s32 *) (u32) (s3 + 172));
    v1 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = v1 == a0; a3 = 0; if (c_) goto L_00218E70; }
    a1 = a2;
L_00218D00:;
    a1 = (s32) ((u32) a1 + 0x4U);
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != a0) goto L_00218D00;
    goto L_00218E70;
L_00218D24:;
    a1 = (*(volatile s16 *) (u32) (sp + 84));
    v0 = -1;
    if (a1 == v0) goto L_00218C70;
    v1 = (s32) ((u32) sp + 0x56U); goto L_00218C24;
L_00218D3C:;
    v1 = (s32) 0x220000U;
    v1 = (s32) ((u32) v1 + 0xffff8810U);
    if (a0 == v1) goto L_00218D68;
L_00218D4C:;
    a2 = (s32) ((u32) a2 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != v1) goto L_00218D4C;
L_00218D68:;
    s2 = (s32) ((u32) a3 - (u32) a4); goto L_00218CC8;
L_00218D70:;
    { s32 c_ = a1 <= 0; v0 = a1; if (c_) goto L_00218DE4; }
    v0 = 0; goto L_00218DE4;
L_00218D80:;
    v0 = (s32) ((u32) 0 - (u32) v0);
    v1 = (s32) 0x3b0000U;
    a2 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff9400U);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v0 = -125;
    s1 = (*(volatile s32 *) (u32) v1);
    if (s1 == v0) goto L_00218DF8;
    v0 = -124;
    if (s1 == v0) goto L_00218DF8;
    v0 = -127;
    if (s1 == v0) goto L_00218DF8;
L_00218DBC:;
    v0 = (s32) 0x530000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 31568));
    if (v0 != 0) goto L_00218CC8;
    v1 = 1;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + 31568)) = (u32) v1;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + 31572)) = (u32) s1; goto L_00218CC8;
L_00218DE4:;
    at = a1 < -10;
    if (at == 0) goto L_00218D80;
    v0 = -10; goto L_00218D80;
L_00218DF8:;
    func_0021CD70(a0, a1);
    goto L_00218DBC;
L_00218E08:;
    a4 = 0;
    a2 = (*(volatile s32 *) (u32) (s3 + 168));
    a0 = (*(volatile s32 *) (u32) (s3 + 172));
    v1 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = v1 == a0; a3 = 0; if (c_) goto L_00218E40; }
    a1 = a2;
L_00218E24:;
    a1 = (s32) ((u32) a1 + 0x4U);
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != a0) goto L_00218E24;
L_00218E40:;
    if (v1 == s0) goto L_00218E68;
L_00218E48:;
    a2 = (s32) ((u32) a2 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != s0) goto L_00218E48;
L_00218E68:;
    s2 = (s32) ((u32) a3 - (u32) a4); goto L_00218CD0;
L_00218E70:;
    if (v1 == s0) goto L_00218E98;
L_00218E78:;
    a2 = (s32) ((u32) a2 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != s0) goto L_00218E78;
L_00218E98:;
    s2 = (s32) ((u32) a3 - (u32) a4);
L_00218E9C:;
    v0 = s2;
    return v0;
}
