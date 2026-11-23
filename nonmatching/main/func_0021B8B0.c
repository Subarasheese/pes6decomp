/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021CA90(s32, s32, s32, s32, s32);
void func_0021CD70(s32, s32);

s32 func_0021B8B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x540000U;
    a3 = 0;
    s4 = a0;
    s3 = a1;
    s1 = 0;
    a1 = (*(volatile s16 *) (u32) (a0 + 12));
    v1 = (*(volatile s16 *) (u32) (a0 + 14));
    (*(volatile u16 *) (u32) (sp + 100)) = (u16) a1;
    a0 = (*(volatile s32 *) (u32) (v0 + -32252));
    at = 0 < a0;
    { s32 c_ = at == 0; (*(volatile u16 *) (u32) (sp + 102)) = (u16) v1; if (c_) goto L_0021B904; }
    v0 = (s32) 0x540000U;
    a3 = (*(volatile s32 *) (u32) (v0 + -32256));
L_0021B904:;
    v0 = (s32) 0x540000U;
    s0 = 0;
    v0 = (*(volatile s32 *) (u32) (v0 + -32256));
    { s32 c_ = v0 == 0; a1 = 0; if (c_) goto L_0021B9EC; }
    a1 = a0; goto L_0021B9EC;
L_0021B920:;
    v1 = (*(volatile s16 *) (u32) v1);
    if (v1 == v0) goto L_0021B968;
    at = 0 < a1;
    { s32 c_ = at == 0; a2 = 0; if (c_) goto L_0021B968; }
L_0021B938:;
    v0 = (*(volatile s16 *) (u32) (a3 + 2));
    if (v0 != v1) goto L_0021B958;
    v0 = (*(volatile s16 *) (u32) a3);
    if (v0 != a0) goto L_0021B958;
    s0 = a3; goto L_0021B968;
L_0021B958:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v0 = a2 < a1;
    { s32 c_ = v0 != 0; a3 = (s32) ((u32) a3 + 0x10U); if (c_) goto L_0021B938; }
L_0021B968:;
    a0 = 1;
    a1 = (s32) ((u32) sp + 0x6cU);
    a2 = (s32) ((u32) sp + 0x68U);
    a3 = 18;
    a4 = s4; v0 = func_0021CA90(a0, a1, a2, a3, a4);
    s2 = v0;
    v0 = -126;
    if (s2 != v0) goto L_0021BAA4;
    a1 = (*(volatile s32 *) (u32) (sp + 104));
    if (a1 < 0) { v0 = a1; goto L_0021BA04; }
    (*(volatile u32 *) (u32) (s4 + 196)) = (u32) a1;
L_0021B9A0:;
    if (s1 == 0) goto L_0021BAA4;
    (*(volatile u32 *) (u32) (s4 + 32)) = (u32) s1;
    a4 = 0;
    a2 = (*(volatile s32 *) (u32) (s4 + 168));
    a0 = (*(volatile s32 *) (u32) (s4 + 172));
    v1 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = v1 == a0; a3 = 0; if (c_) goto L_0021BA7C; }
    a1 = a2;
L_0021B9C8:;
    a1 = (s32) ((u32) a1 + 0x4U);
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != a0) goto L_0021B9C8;
    goto L_0021BA7C;
L_0021B9EC:;
    a0 = (*(volatile s16 *) (u32) (sp + 100));
    v0 = -1;
    if (a0 == v0) goto L_0021B968;
    v1 = (s32) ((u32) sp + 0x66U); goto L_0021B920;
L_0021BA04:;
    if (a1 <= 0) goto L_0021BA58;
    v0 = 0; goto L_0021BA58;
L_0021BA14:;
    v0 = (s32) ((u32) 0 - (u32) v0);
    v1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff92b0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = -125;
    s1 = (*(volatile s32 *) (u32) v1);
    if (s1 == v0) goto L_0021BA6C;
    v0 = -124;
    if (s1 == v0) goto L_0021BA6C;
    v0 = -127;
    if (s1 == v0) goto L_0021BA6C;
L_0021BA50:;
    goto L_0021B9A0;
L_0021BA58:;
    at = a1 < -10;
    if (at == 0) goto L_0021BA14;
    v0 = -10; goto L_0021BA14;
L_0021BA6C:;
    a0 = s0; func_0021CD70(a0, a1);
    goto L_0021BA50;
L_0021BA7C:;
    if (v1 == s3) goto L_0021BAA0;
L_0021BA84:;
    a2 = (s32) ((u32) a2 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != s3) goto L_0021BA84;
L_0021BAA0:;
    s2 = (s32) ((u32) a3 - (u32) a4);
L_0021BAA4:;
    v0 = s2;
    return v0;
}
