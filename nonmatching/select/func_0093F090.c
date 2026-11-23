/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00246550(s32);
void func_008B2E90(s32, s32, s32, s32);
void func_008B2EE0(s32, s32, s32, s32);

void func_0093F090(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x960000U;
    v1 = 4;
    s2 = (s32) 0x540000U;
    a0 = (*(volatile s8 *) (u32) (v0 + 31384));
    { s32 c_ = a0 == v1; s2 = (s32) ((u32) s2 + 0xffffc300U); if (c_) goto L_0093F0FC; }
    v0 = 3;
    if (a0 == v0) { s4 = 90; goto L_0093F0F4; }
    v0 = 1;
    if (a0 == v0) { s4 = 66; goto L_0093F0EC; }
    s4 = 38; goto L_0093F108;
L_0093F0EC:;
    s6 = 52; goto L_0093F10C;
L_0093F0F4:;
    s6 = 93; goto L_0093F10C;
L_0093F0FC:;
    s4 = 101;
    s6 = 104; goto L_0093F10C;
L_0093F108:;
    s6 = 52;
L_0093F10C:;
    v0 = (s32) 0x960000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 32064));
    { s32 c_ = v0 < 0; s5 = 0; if (c_) goto L_0093F188; }
    s3 = 0;
    s1 = (s32) ((u32) s4 << 2);
    s0 = (s32) ((u32) s6 << 2);
L_0093F128:;
    a0 = (s32) ((u32) sp + 0x9cU);
    a1 = 2; func_008B2E90(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s2 + 20));
    v0 = (s32) ((u32) s1 + (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) s3);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (*(volatile s32 *) (u32) (sp + 156)); func_008B2EE0(a0, a1, a2, a3);
    a0 = (s32) ((u32) sp + 0x98U);
    a1 = 2; func_008B2E90(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s2 + 20));
    v0 = (s32) ((u32) s0 + (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) s3);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (*(volatile s32 *) (u32) (sp + 152)); func_008B2EE0(a0, a1, a2, a3);
    v0 = (s32) 0x960000U;
    s5 = (s32) ((u32) s5 + 0x1U);
    v0 = (*(volatile s32 *) (u32) (v0 + 32064));
    at = v0 < s5;
    { s32 c_ = at == 0; s3 = (s32) ((u32) s3 + 0x4U); if (c_) goto L_0093F128; }
L_0093F188:;
    a0 = (s32) ((u32) sp + 0x94U);
    a1 = 3; func_008B2E90(a0, a1, a2, a3);
    v0 = (s32) 0x960000U;
    v1 = (*(volatile s32 *) (u32) (s2 + 20));
    v0 = (*(volatile s8 *) (u32) (v0 + 31385));
    v0 = (s32) ((u32) s4 + (u32) v0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (*(volatile s32 *) (u32) (sp + 148)); func_008B2EE0(a0, a1, a2, a3);
    a0 = (s32) ((u32) sp + 0x90U);
    a1 = 3; func_008B2E90(a0, a1, a2, a3);
    v0 = (s32) 0x960000U;
    v1 = (*(volatile s32 *) (u32) (s2 + 20));
    v0 = (*(volatile s8 *) (u32) (v0 + 31385));
    v0 = (s32) ((u32) s6 + (u32) v0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (*(volatile s32 *) (u32) (sp + 144)); func_008B2EE0(a0, a1, a2, a3);
    v1 = (s32) 0x960000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 32064));
    { s32 c_ = v1 < 0; s3 = 0; if (c_) goto L_0093F288; }
    s1 = (s32) ((u32) s4 << 2);
    s5 = (s32) 0x960000U;
    s0 = (s32) ((u32) s6 << 2);
    s5 = (s32) ((u32) s5 + 0x7d40U);
    s4 = 0;
L_0093F20C:;
    a0 = (*(volatile s32 *) (u32) (s5 + 4)); v0 = func_00246550(a0);
    v1 = 1;
    if (v0 != v1) goto L_0093F268;
    a0 = (s32) ((u32) sp + 0x8cU);
    a1 = 4; func_008B2E90(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s2 + 20));
    v0 = (s32) ((u32) s1 + (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) s4);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (*(volatile s32 *) (u32) (sp + 140)); func_008B2EE0(a0, a1, a2, a3);
    a0 = (s32) ((u32) sp + 0x88U);
    a1 = 4; func_008B2E90(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s2 + 20));
    v0 = (s32) ((u32) s0 + (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) s4);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (*(volatile s32 *) (u32) (sp + 136)); func_008B2EE0(a0, a1, a2, a3);
L_0093F268:;
    v1 = (s32) 0x960000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 32064));
    s3 = (s32) ((u32) s3 + 0x1U);
    s5 = (s32) ((u32) s5 + 0x4U);
    at = v1 < s3;
    { s32 c_ = at == 0; s4 = (s32) ((u32) s4 + 0x4U); if (c_) goto L_0093F20C; }
L_0093F288:;
    return;
}
