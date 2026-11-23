/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021CA90(s32, s32, s32, s32, s32);
void func_0021CD70(s32, s32);

s32 func_00218930(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    v0 = (*(volatile s32 *) (u32) (a0 + 200));
    s0 = (s32) 0x220000U;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0xffff87c0U); if (c_) goto L_00218968; }
    s2 = -126;
L_00218960:;
    v0 = s2; goto L_00218B64;
L_00218968:;
    a0 = 1;
    a1 = (s32) ((u32) sp + 0x5cU);
    a2 = (s32) ((u32) sp + 0x58U);
    a3 = 14;
    a4 = s3; v0 = func_0021CA90(a0, a1, a2, a3, a4);
    s2 = v0;
    v0 = -126;
    if (s2 != v0) goto L_00218960;
    v0 = (s32) 0x540000U;
    a0 = (*(volatile s16 *) (u32) (s3 + 12));
    a1 = (*(volatile s32 *) (u32) (v0 + -32252));
    a4 = 0;
    v1 = (*(volatile s16 *) (u32) (s3 + 14));
    (*(volatile u16 *) (u32) (sp + 84)) = (u16) a0;
    at = 0 < a1;
    { s32 c_ = at == 0; (*(volatile u16 *) (u32) (sp + 86)) = (u16) v1; if (c_) goto L_002189BC; }
    v0 = (s32) 0x540000U;
    a4 = (*(volatile s32 *) (u32) (v0 + -32256));
L_002189BC:;
    v0 = (s32) 0x540000U;
    a0 = 0;
    v0 = (*(volatile s32 *) (u32) (v0 + -32256));
    { s32 c_ = v0 == 0; a2 = 0; if (c_) goto L_00218A80; }
    a2 = a1; goto L_00218A80;
    v1 = (s32) ((u32) sp + 0x56U);
L_002189DC:;
    v1 = (*(volatile s16 *) (u32) v1);
    if (v1 == v0) goto L_00218A28;
    at = 0 < a2;
    { s32 c_ = at == 0; a3 = 0; if (c_) goto L_00218A28; }
L_002189F4:;
    v0 = (*(volatile s16 *) (u32) (a4 + 2));
    if (v0 != v1) goto L_00218A14;
    v0 = (*(volatile s16 *) (u32) a4);
    if (v0 != a1) goto L_00218A14;
    a0 = a4; goto L_00218A28;
L_00218A14:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < a2;
    { s32 c_ = v0 != 0; a4 = (s32) ((u32) a4 + 0x10U); if (c_) goto L_002189F4; }
L_00218A28:;
    a1 = (*(volatile s32 *) (u32) (sp + 88));
    { s32 c_ = a1 < 0; s1 = 0; if (c_) goto L_00218A98; }
L_00218A34:;
    if (s1 == 0) goto L_00218960;
    (*(volatile u32 *) (u32) (s3 + 32)) = (u32) s1;
    a4 = 0;
    a2 = (*(volatile s32 *) (u32) (s3 + 168));
    a0 = (*(volatile s32 *) (u32) (s3 + 172));
    v1 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = v1 == a0; a3 = 0; if (c_) goto L_00218B34; }
    a1 = a2;
L_00218A5C:;
    a1 = (s32) ((u32) a1 + 0x4U);
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != a0) goto L_00218A5C;
    goto L_00218B34;
L_00218A80:;
    a1 = (*(volatile s16 *) (u32) (sp + 84));
    v0 = -1;
    if (a1 == v0) goto L_00218A28;
    v1 = (s32) ((u32) sp + 0x56U); goto L_002189DC;
L_00218A98:;
    { s32 c_ = a1 <= 0; v0 = a1; if (c_) goto L_00218B10; }
    v0 = 0; goto L_00218B10;
    v0 = -10;
L_00218AAC:;
    v0 = (s32) ((u32) 0 - (u32) v0);
    v1 = (s32) 0x3b0000U;
    a2 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff9430U);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v0 = -125;
    s1 = (*(volatile s32 *) (u32) v1);
    if (s1 == v0) goto L_00218B24;
    v0 = -124;
    if (s1 == v0) goto L_00218B24;
    v0 = -127;
    if (s1 == v0) goto L_00218B24;
L_00218AE8:;
    v0 = (s32) 0x530000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 31568));
    if (v0 != 0) goto L_00218A34;
    v1 = 1;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + 31568)) = (u32) v1;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + 31572)) = (u32) s1; goto L_00218A34;
L_00218B10:;
    at = a1 < -10;
    if (at == 0) goto L_00218AAC;
    v0 = -10; goto L_00218AAC;
L_00218B24:;
    func_0021CD70(a0, a1);
    goto L_00218AE8;
L_00218B34:;
    if (v1 == s0) goto L_00218B58;
L_00218B3C:;
    a2 = (s32) ((u32) a2 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != s0) goto L_00218B3C;
L_00218B58:;
    s2 = (s32) ((u32) a3 - (u32) a4);
    goto L_00218960;
L_00218B64:;
    return v0;
}
