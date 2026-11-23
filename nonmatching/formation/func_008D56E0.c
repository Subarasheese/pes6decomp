/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001FAB60(s32, s32, s32, s32);
s32 func_001FABB0(s32, s32, s32, s32);
void func_008D7C70(s32, s32, s32, s32, s32, s32, s32, s32);

void func_008D56E0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = a1;
    if (s4 == 0) goto L_008D591C;
    if (s3 != 0) { a2 = 0; goto L_008D5718; }
    (*(volatile u32 *) (u32) (s4 + 244)) = (u32) 0; goto L_008D591C;
L_008D5718:;
    a1 = (s32) ((u32) s3 + (u32) a2);
    a0 = (s32) ((u32) s4 + (u32) a2);
    v1 = (*(volatile u8 *) (u32) (a1 + 1894));
    a2 = (s32) ((u32) a2 + 0x8U);
    v0 = a2 < 32;
    (*(volatile u8 *) (u32) (a0 + 248)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (a1 + 51));
    (*(volatile u8 *) (u32) (a0 + 313)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (a1 + 1895));
    (*(volatile u8 *) (u32) (a0 + 249)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (a1 + 52));
    (*(volatile u8 *) (u32) (a0 + 314)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (a1 + 1896));
    (*(volatile u8 *) (u32) (a0 + 250)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (a1 + 53));
    (*(volatile u8 *) (u32) (a0 + 315)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (a1 + 1897));
    (*(volatile u8 *) (u32) (a0 + 251)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (a1 + 54));
    (*(volatile u8 *) (u32) (a0 + 316)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (a1 + 1898));
    (*(volatile u8 *) (u32) (a0 + 252)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (a1 + 55));
    (*(volatile u8 *) (u32) (a0 + 317)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (a1 + 1899));
    (*(volatile u8 *) (u32) (a0 + 253)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (a1 + 56));
    (*(volatile u8 *) (u32) (a0 + 318)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (a1 + 1900));
    (*(volatile u8 *) (u32) (a0 + 254)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (a1 + 57));
    (*(volatile u8 *) (u32) (a0 + 319)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (a1 + 1901));
    (*(volatile u8 *) (u32) (a0 + 255)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (a1 + 58));
    { s32 c_ = v0 != 0; (*(volatile u8 *) (u32) (a0 + 320)) = (u8) v1; if (c_) goto L_008D5718; }
    s0 = 0;
    s2 = 0;
    s1 = s4;
L_008D57B8:;
    a0 = (*(volatile u8 *) (u32) (s3 + 1854));
    v0 = (s32) ((u32) s4 + (u32) s0);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) s3 + (u32) v1);
    v1 = (s32) ((u32) v1 + (u32) s0);
    v1 = (*(volatile u8 *) (u32) (v1 + 2026));
    { s32 c_ = s0 == 0; (*(volatile u8 *) (u32) (v0 + 280)) = (u8) v1; if (c_) goto L_008D5820; }
    v1 = (*(volatile u8 *) (u32) (s3 + 1854));
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) s3 + (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v1 = (*(volatile u8 *) (u32) (v0 + 2004));
    v0 = (*(volatile u8 *) (u32) (v0 + 2005));
    (*(volatile u8 *) (u32) (s1 + 291)) = (u8) v1;
    (*(volatile u8 *) (u32) (s1 + 292)) = (u8) v0; goto L_008D5848;
L_008D5820:;
    a0 = 0;
    a1 = 0;
    a2 = 0; v0 = func_001FABB0(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (s1 + 291)) = (u8) v0;
    a0 = 0;
    a1 = 0;
    a2 = 0; v0 = func_001FAB60(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (s1 + 292)) = (u8) v0;
L_008D5848:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 11;
    s2 = (s32) ((u32) s2 + 0x2U);
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x2U); if (c_) goto L_008D57B8; }
    v1 = (s32) ((u32) s4 + 0xf8U);
    v0 = 0;
    (*(volatile u32 *) (u32) (s4 + 244)) = (u32) v1;
    a2 = (s32) ((u32) sp + 0x70U);
L_008D586C:;
    a1 = (s32) ((u32) s3 + (u32) v0);
    a0 = (*(volatile u8 *) (u32) (a1 + 1894));
    v0 = (s32) ((u32) v0 + 0x5U);
    v1 = v0 < 6;
    a0 = (s32) ((u32) s3 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) (a0 + 51));
    (*(volatile u8 *) (u32) a2) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a1 + 1895));
    a0 = (s32) ((u32) s3 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) (a0 + 51));
    (*(volatile u8 *) (u32) (a2 + 1)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a1 + 1896));
    a0 = (s32) ((u32) s3 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) (a0 + 51));
    (*(volatile u8 *) (u32) (a2 + 2)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a1 + 1897));
    a0 = (s32) ((u32) s3 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) (a0 + 51));
    (*(volatile u8 *) (u32) (a2 + 3)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a1 + 1898));
    a0 = (s32) ((u32) s3 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) (a0 + 51));
    (*(volatile u8 *) (u32) (a2 + 4)) = (u8) a0;
    { s32 c_ = v1 != 0; a2 = (s32) ((u32) a2 + 0x5U); if (c_) goto L_008D586C; }
    v1 = (s32) ((u32) v0 + (u32) s3);
    a0 = (s32) ((u32) s4 + 0x15cU);
    v1 = (*(volatile u8 *) (u32) (v1 + 1894));
    v0 = (s32) ((u32) v0 + (u32) sp);
    a2 = (s32) ((u32) sp + 0x70U);
    a3 = (s32) ((u32) sp + 0x60U);
    a4 = 0;
    v1 = (s32) ((u32) v1 + (u32) s3);
    v1 = (*(volatile u8 *) (u32) (v1 + 51));
    (*(volatile u8 *) (u32) (v0 + 112)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (s3 + 1854));
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) s3 + (u32) v0);
    a1 = (s32) ((u32) v0 + 0x7d6U); func_008D7C70(a0, a1, a2, a3, a4, a5, a6, a7);
L_008D591C:;
    return;
}
