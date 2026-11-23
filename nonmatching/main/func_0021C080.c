/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021CA90(s32, s32, s32, s32, s32);
s32 func_0021CCE0(s32, s32);
void func_0021CD70(s32, s32);

s32 func_0021C080(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = a1;
    s2 = a2;
    a0 = 1;
    a1 = (s32) ((u32) sp + 0x6cU);
    a2 = (s32) ((u32) sp + 0x68U);
    a3 = a0;
    a4 = s4;
    v0 = func_0021CA90(a0, a1, a2, a3, a4);
    s1 = v0;
    v0 = -126;
    if (s1 != v0) goto L_0021C24C;
    v0 = (s32) 0x540000U;
    a0 = (*(volatile s16 *) (u32) (s4 + 12));
    a1 = (*(volatile s32 *) (u32) (v0 + -32252));
    a3 = 0;
    v1 = (*(volatile s16 *) (u32) (s4 + 14));
    (*(volatile u16 *) (u32) (sp + 100)) = (u16) a0;
    at = 0 < a1;
    { s32 c_ = at == 0; (*(volatile u16 *) (u32) (sp + 102)) = (u16) v1; if (c_) goto L_0021C0FC; }
    v0 = (s32) 0x540000U;
    a3 = (*(volatile s32 *) (u32) (v0 + -32256));
L_0021C0FC:;
    v0 = (s32) 0x540000U;
    s0 = 0;
    v0 = (*(volatile s32 *) (u32) (v0 + -32256));
    { s32 c_ = v0 == 0; a2 = 0; if (c_) goto L_0021C1EC; }
    a2 = a1; goto L_0021C1EC;
L_0021C118:;
    v1 = (*(volatile s16 *) (u32) v1);
    if (v1 == v0) goto L_0021C160;
    at = 0 < a2;
    { s32 c_ = at == 0; a1 = 0; if (c_) goto L_0021C160; }
L_0021C130:;
    v0 = (*(volatile s16 *) (u32) (a3 + 2));
    if (v0 != v1) goto L_0021C150;
    v0 = (*(volatile s16 *) (u32) a3);
    if (v0 != a0) goto L_0021C150;
    s0 = a3; goto L_0021C160;
L_0021C150:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < a2;
    { s32 c_ = v0 != 0; a3 = (s32) ((u32) a3 + 0x10U); if (c_) goto L_0021C130; }
L_0021C160:;
    a2 = (*(volatile s32 *) (u32) (s4 + 40));
    a1 = (*(volatile s32 *) (u32) (sp + 104));
    { s32 c_ = s0 == 0; v1 = (*(volatile s32 *) (u32) (s4 + 36)); if (c_) goto L_0021C190; }
    v0 = 2;
    if (v1 == v0) goto L_0021C180;
    a2 = (s32) ((u32) a2 << 3);
L_0021C180:;
    (*(volatile u16 *) (u32) (s0 + 4)) = (u16) v1;
    a0 = s0;
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) a2; func_0021CD70(a0, a1);
L_0021C190:;
    a0 = s0;
    a1 = s3; v0 = func_0021CCE0(a0, a1);
    v1 = 1;
    if (v0 == v1) goto L_0021C24C;
    (*(volatile u32 *) (u32) (s4 + 32)) = (u32) v0;
    a5 = 0;
    a3 = (*(volatile s32 *) (u32) (s4 + 168));
    a1 = (*(volatile s32 *) (u32) (s4 + 172));
    a0 = (*(volatile s32 *) (u32) a3);
    { s32 c_ = a0 == a1; a4 = 0; if (c_) goto L_0021C204; }
    a2 = a3;
L_0021C1C8:;
    a2 = (s32) ((u32) a2 + 0x4U);
    a5 = (s32) ((u32) a5 + 0x1U);
    v1 = (*(volatile s32 *) (u32) a2);
    if (v1 != a1) goto L_0021C1C8;
    goto L_0021C204;
L_0021C1EC:;
    a0 = (*(volatile s16 *) (u32) (sp + 100));
    v0 = -1;
    if (a0 == v0) goto L_0021C160;
    v1 = (s32) ((u32) sp + 0x66U); goto L_0021C118;
L_0021C204:;
    if (a0 == s2) goto L_0021C228;
L_0021C20C:;
    a3 = (s32) ((u32) a3 + 0x4U);
    a4 = (s32) ((u32) a4 + 0x1U);
    v1 = (*(volatile s32 *) (u32) a3);
    if (v1 != s2) goto L_0021C20C;
L_0021C228:;
    v1 = (s32) 0x530000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 31568));
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) a4 - (u32) a5); if (c_) goto L_0021C24C; }
    a0 = 1;
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + 31568)) = (u32) a0;
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + 31572)) = (u32) v0;
L_0021C24C:;
    v0 = s1;
    return v0;
}
