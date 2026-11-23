/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021CA90(s32, s32, s32, s32, s32);
void func_0021CD70(s32, s32);
void memclr(s32, s32);

s32 func_0021B300(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
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
    { s32 c_ = at == 0; (*(volatile u16 *) (u32) (sp + 102)) = (u16) v1; if (c_) goto L_0021B358; }
    v0 = (s32) 0x540000U;
    a3 = (*(volatile s32 *) (u32) (v0 + -32256));
L_0021B358:;
    v0 = (s32) 0x540000U;
    s1 = 0;
    v0 = (*(volatile s32 *) (u32) (v0 + -32256));
    { s32 c_ = v0 == 0; a1 = 0; if (c_) goto L_0021B448; }
    a1 = a0; goto L_0021B448;
    v1 = (s32) ((u32) sp + 0x66U);
L_0021B378:;
    v1 = (*(volatile s16 *) (u32) v1);
    if (v1 == v0) goto L_0021B3C0;
    at = 0 < a1;
    { s32 c_ = at == 0; a2 = 0; if (c_) goto L_0021B3C0; }
L_0021B390:;
    v0 = (*(volatile s16 *) (u32) (a3 + 2));
    if (v0 != v1) goto L_0021B3B0;
    v0 = (*(volatile s16 *) (u32) a3);
    if (v0 != a0) goto L_0021B3B0;
    s1 = a3; goto L_0021B3C0;
L_0021B3B0:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v0 = a2 < a1;
    { s32 c_ = v0 != 0; a3 = (s32) ((u32) a3 + 0x10U); if (c_) goto L_0021B390; }
L_0021B3C0:;
    a0 = 1;
    a1 = (s32) ((u32) sp + 0x6cU);
    a2 = (s32) ((u32) sp + 0x68U);
    a3 = 11;
    a4 = s4; v0 = func_0021CA90(a0, a1, a2, a3, a4);
    s3 = v0;
    v0 = -126;
    if (s3 != v0) goto L_0021B58C;
    a1 = (*(volatile s32 *) (u32) (sp + 104));
    if (a1 < 0) goto L_0021B460;
L_0021B3F4:;
    if (s2 == 0) goto L_0021B50C;
    if (s2 == 0) goto L_0021B58C;
    (*(volatile u32 *) (u32) (s4 + 32)) = (u32) s2;
    a4 = 0;
    a2 = (*(volatile s32 *) (u32) (s4 + 168));
    a0 = (*(volatile s32 *) (u32) (s4 + 172));
    v1 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = v1 == a0; a3 = 0; if (c_) goto L_0021B4DC; }
    a1 = a2;
L_0021B424:;
    a1 = (s32) ((u32) a1 + 0x4U);
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != a0) goto L_0021B424;
    goto L_0021B4DC;
L_0021B448:;
    a0 = (*(volatile s16 *) (u32) (sp + 100));
    v0 = -1;
    if (a0 == v0) goto L_0021B3C0;
    v1 = (s32) ((u32) sp + 0x66U); goto L_0021B378;
L_0021B460:;
    { s32 c_ = a1 <= 0; v0 = a1; if (c_) goto L_0021B4B8; }
    v0 = 0; goto L_0021B4B8;
    v0 = -10;
L_0021B474:;
    v0 = (s32) ((u32) 0 - (u32) v0);
    v1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff92e0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = -125;
    s2 = (*(volatile s32 *) (u32) v1);
    if (s2 == v0) goto L_0021B4CC;
    v0 = -124;
    if (s2 == v0) goto L_0021B4CC;
    v0 = -127;
    if (s2 == v0) goto L_0021B4CC;
L_0021B4B0:;
    goto L_0021B3F4;
L_0021B4B8:;
    at = a1 < -10;
    if (at == 0) goto L_0021B474;
    v0 = -10; goto L_0021B474;
L_0021B4CC:;
    a0 = s1; func_0021CD70(a0, a1);
    goto L_0021B4B0;
L_0021B4DC:;
    if (v1 == s0) goto L_0021B500;
L_0021B4E4:;
    a2 = (s32) ((u32) a2 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != s0) goto L_0021B4E4;
L_0021B500:;
    s3 = (s32) ((u32) a3 - (u32) a4);
    v0 = s3; goto L_0021B590;
L_0021B50C:;
    a0 = (s32) 0x530000U;
    a1 = 1536;
    a0 = (s32) ((u32) a0 + 0x7c00U); memclr(a0, a1);
    a2 = (*(volatile s32 *) (u32) (s4 + 168));
    a4 = 0;
    v1 = (*(volatile s32 *) (u32) (s4 + 172));
    a0 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = a0 == v1; a3 = 0; if (c_) goto L_0021B558; }
    a1 = a2;
L_0021B538:;
    a1 = (s32) ((u32) a1 + 0x4U);
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != v1) goto L_0021B538;
L_0021B558:;
    v1 = (s32) 0x220000U;
    v1 = (s32) ((u32) v1 + 0xffffa1b0U);
    if (a0 == v1) goto L_0021B588;
L_0021B568:;
    a2 = (s32) ((u32) a2 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != v1) goto L_0021B568;
L_0021B588:;
    s3 = (s32) ((u32) a3 - (u32) a4);
L_0021B58C:;
    v0 = s3;
L_0021B590:;
    return v0;
}
