/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void memset(s32, s32, s32);

void func_00338EE0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, s0 = 0, s1 = 0, s2 = 0;

    v0 = (s32) 0x5f0000U;
    s2 = a0;
    s1 = a1;
    v0 = (*(volatile u8 *) (u32) (v0 + 7360));
    s0 = (s32) 0x5f0000U;
    { s32 c_ = v0 == 0; s0 = (s32) ((u32) s0 + 0x1cc0U); if (c_) goto L_00338F18; }
    v0 = 0; goto L_003390B4;
L_00338F18:;
    a0 = s0;
    a1 = 0;
    a2 = 336; memset(a0, a1, a2);
    v0 = (s32) ((u32) s0 + 0x94U);
    a1 = 1;
    (*(volatile u32 *) (u32) (s0 + 256)) = (u32) v0;
    v1 = (s32) 0x340000U;
    v1 = (s32) ((u32) v1 + 0xffff85a0U);
    v0 = (s32) ((u32) s0 + 0xf0U);
    (*(volatile u32 *) (u32) (s0 + 168)) = (u32) v0;
    a0 = 0;
    v0 = 33;
    (*(volatile u32 *) (u32) (s0 + 148)) = (u32) v1;
    (*(volatile u32 *) (u32) (s0 + 240)) = (u32) v1;
    v1 = (s32) ((u32) s1 + 0xffffffffU);
    (*(volatile u32 *) (u32) (s0 + 332)) = (u32) s2;
    (*(volatile u8 *) (u32) s0) = (u8) a1;
    (*(volatile u32 *) (u32) (s0 + 248)) = (u32) v0;
    (*(volatile u32 *) (u32) (s0 + 156)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 176)) = (u32) a1;
    (*(volatile u32 *) (u32) (s0 + 164)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 268)) = (u32) a1;
    { s32 c_ = v1 <= 0; (*(volatile u32 *) (u32) (s0 + 260)) = (u32) 0; if (c_) goto L_003390B0; }
    at = v1 < 9;
    { s32 c_ = at != 0; v0 = (s32) ((u32) s1 + 0xfffffff7U); if (c_) goto L_00339068; }
    { s32 c_ = v1 < 0; a2 = 0; if (c_) goto L_00338FA8; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = v1 < at;
    if (at == 0) goto L_00338FA8;
    a2 = a1;
L_00338FA8:;
    if (a2 == 0) goto L_00339068;
    v1 = 0;
L_00338FB4:;
    a3 = (*(volatile s32 *) (u32) (s0 + 332));
    a1 = (s32) ((u32) v1 + 0x5cU);
    t4 = (s32) ((u32) v1 + 0xb8U);
    a7 = (s32) ((u32) v1 + 0x114U);
    a6 = (s32) ((u32) v1 + 0x170U);
    a5 = (s32) ((u32) v1 + 0x1ccU);
    a2 = (s32) ((u32) a3 + (u32) a1);
    a4 = (s32) ((u32) v1 + 0x228U);
    a1 = (s32) ((u32) a3 + (u32) v1);
    a0 = (s32) ((u32) a0 + 0x8U);
    (*(volatile u32 *) (u32) (a1 + 20)) = (u32) a2;
    a3 = (s32) ((u32) v1 + 0x2e0U);
    t6 = (*(volatile s32 *) (u32) (s0 + 332));
    a2 = (s32) ((u32) v1 + 0x284U);
    a1 = a0 < v0;
    t5 = (s32) ((u32) t6 + (u32) t4);
    t4 = (s32) ((u32) t6 + (u32) v1);
    (*(volatile u32 *) (u32) (t4 + 112)) = (u32) t5;
    t5 = (*(volatile s32 *) (u32) (s0 + 332));
    t4 = (s32) ((u32) t5 + (u32) a7);
    a7 = (s32) ((u32) t5 + (u32) v1);
    (*(volatile u32 *) (u32) (a7 + 204)) = (u32) t4;
    t4 = (*(volatile s32 *) (u32) (s0 + 332));
    a7 = (s32) ((u32) t4 + (u32) a6);
    a6 = (s32) ((u32) t4 + (u32) v1);
    (*(volatile u32 *) (u32) (a6 + 296)) = (u32) a7;
    a7 = (*(volatile s32 *) (u32) (s0 + 332));
    a6 = (s32) ((u32) a7 + (u32) a5);
    a5 = (s32) ((u32) a7 + (u32) v1);
    (*(volatile u32 *) (u32) (a5 + 388)) = (u32) a6;
    a6 = (*(volatile s32 *) (u32) (s0 + 332));
    a5 = (s32) ((u32) a6 + (u32) a4);
    a4 = (s32) ((u32) a6 + (u32) v1);
    (*(volatile u32 *) (u32) (a4 + 480)) = (u32) a5;
    a5 = (*(volatile s32 *) (u32) (s0 + 332));
    a4 = (s32) ((u32) a5 + (u32) a2);
    a2 = (s32) ((u32) a5 + (u32) v1);
    (*(volatile u32 *) (u32) (a2 + 572)) = (u32) a4;
    a4 = (*(volatile s32 *) (u32) (s0 + 332));
    a2 = (s32) ((u32) a4 + (u32) a3);
    v1 = (s32) ((u32) a4 + (u32) v1);
    (*(volatile u32 *) (u32) (v1 + 664)) = (u32) a2;
    { s32 c_ = a1 != 0; v1 = a3; if (c_) goto L_00338FB4; }
L_00339068:;
    a3 = (s32) ((u32) s1 + 0xffffffffU);
    at = a0 < a3;
    if (at == 0) goto L_003390B0;
    v0 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 - (u32) a0);
    a4 = (s32) ((u32) v0 << 2);
L_0033908C:;
    v1 = (*(volatile s32 *) (u32) (s0 + 332));
    a2 = (s32) ((u32) a4 + 0x5cU);
    a0 = (s32) ((u32) a0 + 0x1U);
    v0 = a0 < a3;
    a1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (s32) ((u32) v1 + (u32) a4);
    (*(volatile u32 *) (u32) (v1 + 20)) = (u32) a1;
    { s32 c_ = v0 != 0; a4 = a2; if (c_) goto L_0033908C; }
L_003390B0:;
    v0 = 1;
L_003390B4:;
    return;
}
