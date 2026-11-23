/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021CA90(s32, s32, s32, s32, s32);
void func_0021CD70(s32, s32);

s32 func_0021AED0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x540000U;
    a3 = 0;
    s4 = a0;
    s2 = 0;
    a1 = (*(volatile s16 *) (u32) (a0 + 12));
    s0 = (s32) 0x220000U;
    v1 = (*(volatile s16 *) (u32) (a0 + 14));
    s0 = (s32) ((u32) s0 + 0xffff87c0U);
    (*(volatile u16 *) (u32) (sp + 100)) = (u16) a1;
    a0 = (*(volatile s32 *) (u32) (v0 + -32252));
    at = 0 < a0;
    { s32 c_ = at == 0; (*(volatile u16 *) (u32) (sp + 102)) = (u16) v1; if (c_) goto L_0021AF28; }
    v0 = (s32) 0x540000U;
    a3 = (*(volatile s32 *) (u32) (v0 + -32256));
L_0021AF28:;
    v0 = (s32) 0x540000U;
    s1 = 0;
    v0 = (*(volatile s32 *) (u32) (v0 + -32256));
    { s32 c_ = v0 == 0; a1 = 0; if (c_) goto L_0021B000; }
    a1 = a0; goto L_0021B000;
    v1 = (s32) ((u32) sp + 0x66U);
L_0021AF48:;
    v1 = (*(volatile s16 *) (u32) v1);
    if (v1 == v0) goto L_0021AF90;
    at = 0 < a1;
    { s32 c_ = at == 0; a2 = 0; if (c_) goto L_0021AF90; }
L_0021AF60:;
    v0 = (*(volatile s16 *) (u32) (a3 + 2));
    if (v0 != v1) goto L_0021AF80;
    v0 = (*(volatile s16 *) (u32) a3);
    if (v0 != a0) goto L_0021AF80;
    s1 = a3; goto L_0021AF90;
L_0021AF80:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v0 = a2 < a1;
    { s32 c_ = v0 != 0; a3 = (s32) ((u32) a3 + 0x10U); if (c_) goto L_0021AF60; }
L_0021AF90:;
    v1 = (*(volatile s16 *) (u32) (s1 + 4));
    v0 = 3;
    { s32 c_ = v1 != v0; a0 = 0; if (c_) goto L_0021AFA4; }
    a0 = 1;
L_0021AFA4:;
    if (a0 == 0) goto L_0021B018;
    s3 = -126;
    s2 = s3;
L_0021AFB4:;
    if (s2 == 0) goto L_0021B054;
    (*(volatile u32 *) (u32) (s4 + 32)) = (u32) s2;
    a4 = 0;
    a2 = (*(volatile s32 *) (u32) (s4 + 168));
    a0 = (*(volatile s32 *) (u32) (s4 + 172));
    v1 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = v1 == a0; a3 = 0; if (c_) goto L_0021B0D8; }
    a1 = a2;
L_0021AFDC:;
    a1 = (s32) ((u32) a1 + 0x4U);
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != a0) goto L_0021AFDC;
    goto L_0021B0D8;
L_0021B000:;
    a0 = (*(volatile s16 *) (u32) (sp + 100));
    v0 = -1;
    if (a0 == v0) goto L_0021AF90;
    v1 = (s32) ((u32) sp + 0x66U); goto L_0021AF48;
L_0021B018:;
    a0 = 1;
    a1 = (s32) ((u32) sp + 0x6cU);
    a2 = (s32) ((u32) sp + 0x68U);
    a3 = 13;
    a4 = s4; v0 = func_0021CA90(a0, a1, a2, a3, a4);
    s3 = v0;
    v0 = -126;
    if (s3 != v0) goto L_0021B054;
    a1 = (*(volatile s32 *) (u32) (sp + 104));
    if (a1 < 0) goto L_0021B05C;
    (*(volatile u32 *) (u32) (s4 + 208)) = (u32) a1; goto L_0021AFB4;
L_0021B054:;
    v0 = s3; goto L_0021B10C;
L_0021B05C:;
    { s32 c_ = a1 <= 0; v0 = a1; if (c_) goto L_0021B0B4; }
    v0 = 0; goto L_0021B0B4;
    v0 = -10;
L_0021B070:;
    v0 = (s32) ((u32) 0 - (u32) v0);
    v1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff9310U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = -125;
    s2 = (*(volatile s32 *) (u32) v1);
    if (s2 == v0) goto L_0021B0C8;
    v0 = -124;
    if (s2 == v0) goto L_0021B0C8;
    v0 = -127;
    if (s2 == v0) goto L_0021B0C8;
L_0021B0AC:;
    goto L_0021AFB4;
L_0021B0B4:;
    at = a1 < -10;
    if (at == 0) goto L_0021B070;
    v0 = -10; goto L_0021B070;
L_0021B0C8:;
    a0 = s1; func_0021CD70(a0, a1);
    goto L_0021B0AC;
L_0021B0D8:;
    if (v1 == s0) goto L_0021B100;
L_0021B0E0:;
    a2 = (s32) ((u32) a2 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != s0) goto L_0021B0E0;
L_0021B100:;
    s3 = (s32) ((u32) a3 - (u32) a4);
    goto L_0021B054;
L_0021B10C:;
    return v0;
}
