/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EEDA0(s32, s32);
s32 func_002D5870(s32);
s32 func_002D58A0(s32);
s32 func_0099FF80(s32, s32);
void func_00C70A50(s32, s32, s32, s32, s32, s32);
void func_00C711D0(s32, s32);
void func_00C71510(s32, s32);
s32 func_00C8B1C0(void);

void func_00C70810(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x590000U;
    v1 = (s32) 0xcd0000U;
    a0 = (s32) ((u32) sp + 0x4fU);
    a3 = (*(volatile u8 *) (u32) (v0 + 7628));
    a2 = (s32) ((u32) a3 << 6);
    a1 = a3 ^ 0x1;
    a3 = (s32) ((u32) a2 - (u32) a3);
    v0 = (s32) 0xcb0000U;
    a2 = a1 & 0xff;
    a4 = (*(volatile s32 *) (u32) (v0 + 13056));
    a1 = (s32) ((u32) a3 << 2);
    a3 = (s32) ((u32) a1 - (u32) a3);
    a1 = (s32) ((u32) a2 << 6);
    a4 = (s32) ((u32) a4 + 0x8U);
    a2 = (s32) ((u32) a1 - (u32) a2);
    v0 = (s32) 0xcd0000U;
    a1 = (s32) ((u32) a3 << 2);
    a3 = (s32) ((u32) a4 + (u32) a1);
    a1 = (s32) ((u32) a2 << 2);
    a3 = (*(volatile s16 *) (u32) a3);
    a1 = (s32) ((u32) a1 - (u32) a2);
    a2 = (s32) ((u32) a1 << 2);
    a2 = (s32) ((u32) a4 + (u32) a2);
    (*(volatile u16 *) (u32) (v1 + -17148)) = (u16) a3;
    v1 = (*(volatile s16 *) (u32) a2);
    a1 = (s32) ((u32) sp + 0x4eU);
    (*(volatile u16 *) (u32) (v0 + -17144)) = (u16) v1;
    (*(volatile u8 *) (u32) (sp + 79)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 78)) = (u8) 0; v0 = func_0099FF80(a0, a1);
    a1 = v0 & 0xff;
    v0 = 3;
    { s32 c_ = a1 == v0; v1 = (*(volatile u8 *) (u32) (sp + 79)); if (c_) goto L_00C708C8; }
    v0 = 1;
    if (a1 == v0) { v0 = (s32) ((u32) v1 + 0x2dU); goto L_00C708C0; }
    (*(volatile u8 *) (u32) (sp + 79)) = (u8) v1; goto L_00C708D4;
L_00C708C0:;
    v1 = v0 & 0xff; goto L_00C708D0;
L_00C708C8:;
    v0 = (s32) ((u32) v1 + 0xfU);
    v1 = v0 & 0xff;
L_00C708D0:;
    (*(volatile u8 *) (u32) (sp + 79)) = (u8) v1;
L_00C708D4:;
    v0 = (s32) 0xcd0000U;
    v1 = v1 & 0xff;
    a0 = (*(volatile u8 *) (u32) (sp + 78));
    (*(volatile u16 *) (u32) (v0 + -17140)) = (u16) v1;
    v1 = (s32) 0xcd0000U;
    v0 = (s32) 0xcd0000U;
    (*(volatile u16 *) (u32) (v1 + -17136)) = (u16) a0;
    (*(volatile u16 *) (u32) (v0 + -17132)) = (u16) a1; func_00C70A50(a0, a1, a2, a3, a4, a5);
    v0 = func_00C8B1C0();
    if (v0 != 0) goto L_00C70988;
    s1 = (s32) 0xcd0000U;
    s2 = 0;
    s1 = (s32) ((u32) s1 + 0xffffbcd0U);
L_00C70914:;
    s0 = (*(volatile u16 *) (u32) (s1 + 52));
    v0 = (*(volatile u16 *) (u32) (s1 + 54));
    if (v0 == s0) goto L_00C70938;
    a0 = s2;
    a1 = s0; func_00C711D0(a0, a1);
    (*(volatile u16 *) (u32) (s1 + 54)) = (u16) s0;
L_00C70938:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 2;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00C70914; }
    s1 = (s32) 0xcd0000U;
    s2 = 0;
    s1 = (s32) ((u32) s1 + 0xffffbcd0U);
L_00C70954:;
    s0 = (*(volatile u16 *) (u32) (s1 + 60));
    v0 = (*(volatile u16 *) (u32) (s1 + 62));
    if (v0 == s0) goto L_00C70978;
    a0 = s2;
    a1 = s0; func_00C71510(a0, a1);
    (*(volatile u16 *) (u32) (s1 + 62)) = (u16) s0;
L_00C70978:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 3;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00C70954; }
L_00C70988:;
    a0 = (s32) 0xcd0000U;
    a0 = (s32) ((u32) a0 + 0xffffbcd0U); v0 = func_002D5870(a0);
    v1 = 1;
    if (v0 != v1) goto L_00C70A38;
    a0 = (s32) 0xcd0000U;
    a0 = (s32) ((u32) a0 + 0xffffbcd0U); v0 = func_002D58A0(a0);
    s0 = v0;
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -12428));
    a1 = s0 & 0xff; func_001EEDA0(a0, a1);
    s1 = (s32) 0xcd0000U;
    s2 = 0;
    s1 = (s32) ((u32) s1 + 0xffffcf88U);
L_00C709CC:;
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = s0 & 0xff; func_001EEDA0(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 4;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00C709CC; }
    s1 = (s32) 0xcd0000U;
    s2 = 0;
    s1 = (s32) ((u32) s1 + 0xffffcf78U);
L_00C709F4:;
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = s0 & 0xff; func_001EEDA0(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 4;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00C709F4; }
    s1 = (s32) 0xcd0000U;
    s2 = 0;
    s1 = (s32) ((u32) s1 + 0xffffcf98U);
L_00C70A1C:;
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = s0 & 0xff; func_001EEDA0(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 7;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00C70A1C; }
L_00C70A38:;
    return;
}
