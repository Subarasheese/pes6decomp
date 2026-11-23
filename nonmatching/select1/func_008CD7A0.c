/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);
void func_008B2E50(s32, s32);
void func_008B2F10(s32, s32, s32, s32);
void func_008B2F30(s32, s32, s32, s32);
s32 func_008CC830(void);
void memset(s32, s32, s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

void func_008CD7A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[520];
    s32 sp = (s32) (u32) frame;

    v0 = func_008CC830();
    s0 = v0;
    if (s0 == 0) { ; goto L_008CD914; }
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = 0;
    a2 = 4096; memset(a0, a1, a2);
    v0 = (s32) 0xc80000U;
    a0 = v0 | 0x43; v0 = func_001F08B0(a0);
    s1 = v0;
    v0 = (s32) 0xc80000U;
    a0 = v0 | 0x4f; v0 = func_001F08B0(a0);
    a1 = (s32) 0x8e0000U;
    a2 = s1;
    a3 = v0;
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = (s32) ((u32) a1 + 0xffffaac0U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (s0 + 12));
    a1 = (s32) ((u32) sp + 0x40U); func_008B2F30(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (s0 + 214));
    if (v0 != 0) { s1 = 0; goto L_008CD89C; }
    s1 = 0;
    a0 = s1 & 0xff;
L_008CD828:;
    at = a0 < 5;
    if (at == 0) goto L_008CD868;
    v0 = (s32) 0x20000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = v0 | 0x11f;
    v1 = (s32) ((u32) s0 + (u32) v1);
    a1 = (s32) ((u32) a0 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v1 + 20));
    s2 = (s32) ((u32) v1 + 0x14U); func_008B2F10(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) s2);
    a1 = 1; func_008B2E50(a0, a1);
    goto L_008CD880;
L_008CD868:;
    v0 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) s0 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 20));
    a1 = 0; func_008B2E50(a0, a1);
L_008CD880:;
    v1 = (s32) ((u32) s1 + 0x1U);
    s1 = v1 & 0xff;
    v1 = s1 < 6;
    if (v1 != 0) { a0 = s1 & 0xff; goto L_008CD828; }
    goto L_008CD910;
L_008CD89C:;
    a0 = s1 & 0xff;
L_008CD8A0:;
    at = a0 < 6;
    if (at == 0) goto L_008CD8E0;
    v0 = (s32) 0x20000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = v0 | 0x11f;
    v1 = (s32) ((u32) s0 + (u32) v1);
    a1 = (s32) ((u32) a0 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v1 + 20));
    s2 = (s32) ((u32) v1 + 0x14U); func_008B2F10(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) s2);
    a1 = 1; func_008B2E50(a0, a1);
    goto L_008CD8F8;
L_008CD8E0:;
    v0 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) s0 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 20));
    a1 = 0; func_008B2E50(a0, a1);
L_008CD8F8:;
    v1 = (s32) ((u32) s1 + 0x1U);
    s1 = v1 & 0xff;
    v1 = s1 < 6;
    if (v1 != 0) { a0 = s1 & 0xff; goto L_008CD8A0; }
L_008CD910:;
L_008CD914:;
    return;
}
