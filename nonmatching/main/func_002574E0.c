/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0017BD70(s32, s32, s32);
void func_0017BFF0(s32, s32, s32);
void func_0017DF60(s32, s32, s32);
void func_0027B870(s32, s32, s32, s32);
s32 func_0027B8C0(s32, s32, s32, s32, s32, s32, s32, s32);

void func_002574E0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 hi = 0, lo = 0;

    { s32 c_ = a1 == 0; s1 = a0; if (c_) goto L_00257504; }
    v1 = (*(volatile s8 *) (u32) (a1 + 1)); goto L_00257508;
L_00257504:;
    v1 = 2;
L_00257508:;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00257520; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00257520:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b4U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 16)); v0 = func_0027B8C0(a0, a1, a2, a3, a4, a5, a6, a7);
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    s0 = v0;
    (*(volatile u32 *) (u32) (s1 + 80)) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = 0; func_0027B870(a0, a1, a2, a3);
    s2 = 0;
    a0 = s0;
L_00257568:;
    a1 = s2;
    a2 = (s32) 0x20000000U; func_0017BD70(a0, a1, a2);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 54;
    if (v0 != 0) { a0 = s0; goto L_00257568; }
    v0 = (s32) 0x20010000U;
    a0 = s0;
    a1 = 0;
    a2 = v0 | 0x1111; func_0017BD70(a0, a1, a2);
    v0 = (s32) 0x20000000U;
    a0 = s0;
    a1 = 23;
    a2 = v0 | 0x11; func_0017BD70(a0, a1, a2);
    v0 = (s32) 0x20010000U;
    a0 = s0;
    a1 = 4;
    a2 = v0 | 0x1111; func_0017BD70(a0, a1, a2);
    v0 = (s32) 0x20000000U;
    a0 = s0;
    a1 = 33;
    a2 = v0 | 0x11; func_0017BD70(a0, a1, a2);
    v0 = (s32) 0x20010000U;
    a0 = s0;
    a1 = 2;
    a2 = v0 | 0x1110; func_0017BD70(a0, a1, a2);
    a0 = s0;
    a1 = 42;
    a2 = (s32) 0x20000000U; func_0017BD70(a0, a1, a2);
    v0 = (s32) 0x20000000U;
    a0 = s0;
    a1 = 40;
    a2 = v0 | 0x1; func_0017BD70(a0, a1, a2);
    v0 = (s32) 0x20000000U;
    a0 = s0;
    a1 = 19;
    a2 = v0 | 0x1111; func_0017BD70(a0, a1, a2);
    v0 = (s32) 0x20000000U;
    a0 = s0;
    a1 = 8;
    a2 = v0 | 0x1111; func_0017BD70(a0, a1, a2);
    v0 = (s32) 0x20000000U;
    a0 = s0;
    a1 = 9;
    a2 = v0 | 0x1111; func_0017BD70(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s1 + 5));
    at = v0 < 2;
    if (at == 0) { v1 = 2; goto L_0025765C; }
    v1 = 0;
L_0025765C:;
    v0 = 2;
    if (v1 == v0) { v1 = (*(volatile s32 *) (u32) s1); goto L_002577B8; }
    v0 = 1;
    if (v1 == v0) { v1 = (*(volatile s32 *) (u32) s1); goto L_00257720; }
    if (v1 == 0) { v1 = (*(volatile s32 *) (u32) s1); goto L_00257684; }
    v1 = (*(volatile s32 *) (u32) s1); goto L_00257850;
L_00257684:;
    v0 = (*(volatile s32 *) (u32) (v1 + 20));
    (*(volatile u32 *) (u32) (v1 + 44)) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = (*(volatile s8 *) (u32) (v1 + 5));
    if (v0 <= 0) { v1 = (*(volatile s32 *) (u32) s1); goto L_002576A8; }
    v0 = (*(volatile s32 *) (u32) (v1 + 24));
    (*(volatile u32 *) (u32) v0) = (u32) 0;
    v1 = (*(volatile s32 *) (u32) s1);
L_002576A8:;
    v0 = (*(volatile s8 *) (u32) (v1 + 5));
    at = v0 < 2;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) s1); goto L_002576C8; }
    v0 = (*(volatile s32 *) (u32) (v1 + 24));
    v1 = 1;
    (*(volatile u32 *) (u32) (v0 + 28)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) s1);
L_002576C8:;
    v0 = (*(volatile s8 *) (u32) (v1 + 5));
    at = v0 < 3;
    if (at != 0) { v0 = (*(volatile s32 *) (u32) s1); goto L_002576E8; }
    v0 = (*(volatile s32 *) (u32) (v1 + 24));
    v1 = 1;
    (*(volatile u32 *) (u32) (v0 + 56)) = (u32) v1;
    v0 = (*(volatile s32 *) (u32) s1);
L_002576E8:;
    v1 = 1;
    a1 = 2;
    v0 = (*(volatile s32 *) (u32) (v0 + 28));
    (*(volatile u32 *) (u32) v0) = (u32) v1;
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = (*(volatile s32 *) (u32) (v0 + 28));
    (*(volatile u32 *) (u32) (v0 + 40)) = (u32) v1;
    a0 = (*(volatile s32 *) (u32) s1);
    a2 = 16; func_0017BFF0(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = (*(volatile s32 *) (u32) (v0 + 28));
    (*(volatile u8 *) (u32) (v0 + 53)) = (u8) 0; goto L_0025784C;
L_00257720:;
    v0 = (*(volatile s32 *) (u32) (v1 + 20));
    v0 = (s32) ((u32) v0 + 0x8U);
    (*(volatile u32 *) (u32) (v1 + 44)) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = (*(volatile s8 *) (u32) (v1 + 5));
    if (v0 <= 0) { v1 = (*(volatile s32 *) (u32) s1); goto L_00257748; }
    v0 = (*(volatile s32 *) (u32) (v1 + 24));
    (*(volatile u32 *) (u32) v0) = (u32) 0;
    v1 = (*(volatile s32 *) (u32) s1);
L_00257748:;
    v0 = (*(volatile s8 *) (u32) (v1 + 5));
    at = v0 < 2;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) s1); goto L_00257764; }
    v0 = (*(volatile s32 *) (u32) (v1 + 24));
    (*(volatile u32 *) (u32) (v0 + 28)) = (u32) 0;
    v1 = (*(volatile s32 *) (u32) s1);
L_00257764:;
    v0 = (*(volatile s8 *) (u32) (v1 + 5));
    at = v0 < 3;
    if (at != 0) { v0 = (*(volatile s32 *) (u32) s1); goto L_00257780; }
    v0 = (*(volatile s32 *) (u32) (v1 + 24));
    (*(volatile u32 *) (u32) (v0 + 56)) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) s1);
L_00257780:;
    v1 = 1;
    a1 = 2;
    v0 = (*(volatile s32 *) (u32) (v0 + 28));
    (*(volatile u32 *) (u32) v0) = (u32) v1;
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = (*(volatile s32 *) (u32) (v0 + 28));
    (*(volatile u32 *) (u32) (v0 + 40)) = (u32) v1;
    a0 = (*(volatile s32 *) (u32) s1);
    a2 = 16; func_0017BFF0(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = (*(volatile s32 *) (u32) (v0 + 28));
    (*(volatile u8 *) (u32) (v0 + 53)) = (u8) 0; goto L_0025784C;
L_002577B8:;
    v0 = (*(volatile s32 *) (u32) (v1 + 20));
    v0 = (s32) ((u32) v0 + 0x10U);
    (*(volatile u32 *) (u32) (v1 + 44)) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = (*(volatile s8 *) (u32) (v1 + 5));
    if (v0 <= 0) { v1 = (*(volatile s32 *) (u32) s1); goto L_002577E0; }
    v0 = (*(volatile s32 *) (u32) (v1 + 24));
    (*(volatile u32 *) (u32) v0) = (u32) 0;
    v1 = (*(volatile s32 *) (u32) s1);
L_002577E0:;
    v0 = (*(volatile s8 *) (u32) (v1 + 5));
    at = v0 < 2;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) s1); goto L_002577FC; }
    v0 = (*(volatile s32 *) (u32) (v1 + 24));
    (*(volatile u32 *) (u32) (v0 + 28)) = (u32) 0;
    v1 = (*(volatile s32 *) (u32) s1);
L_002577FC:;
    v0 = (*(volatile s8 *) (u32) (v1 + 5));
    at = v0 < 3;
    if (at != 0) { v0 = (*(volatile s32 *) (u32) s1); goto L_00257818; }
    v0 = (*(volatile s32 *) (u32) (v1 + 24));
    (*(volatile u32 *) (u32) (v0 + 56)) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) s1);
L_00257818:;
    v1 = 1;
    a1 = 2;
    v0 = (*(volatile s32 *) (u32) (v0 + 28));
    (*(volatile u32 *) (u32) v0) = (u32) v1;
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = (*(volatile s32 *) (u32) (v0 + 28));
    (*(volatile u32 *) (u32) (v0 + 40)) = (u32) v1;
    a0 = (*(volatile s32 *) (u32) s1);
    a2 = 16; func_0017BFF0(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = (*(volatile s32 *) (u32) (v0 + 28));
    (*(volatile u8 *) (u32) (v0 + 53)) = (u8) 0;
L_0025784C:;
    v1 = (*(volatile s32 *) (u32) s1);
L_00257850:;
    a1 = 101;
    v0 = (*(volatile s32 *) (u32) (v1 + 32));
    v0 = (s32) ((u32) v0 + 0x14U);
    (*(volatile u32 *) (u32) (v1 + 52)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) s1);
    v1 = (*(volatile s32 *) (u32) (v0 + 20));
    v0 = (*(volatile s32 *) (u32) (v0 + 32));
    v1 = (*(volatile s32 *) (u32) (v1 + 12));
    (*(volatile u32 *) (u32) (v0 + 24)) = (u32) v1;
    a0 = (*(volatile s32 *) (u32) s1);
    a2 = 9102; func_0017DF60(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = 100;
    a2 = 9102; func_0017DF60(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = 104;
    a2 = 9102; func_0017DF60(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = 113;
    a2 = 9102; func_0017DF60(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = 114;
    a2 = 9102; func_0017DF60(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = 111;
    a2 = 9102; func_0017DF60(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = 102;
    a2 = 9102; func_0017DF60(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = 115;
    a2 = 9102; func_0017DF60(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = 118;
    a2 = 9102; func_0017DF60(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = 103;
    a2 = 9102; func_0017DF60(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = 149;
    a2 = 9102; func_0017DF60(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) s1);
    a0 = (s32) 0x250000U;
    a0 = (s32) ((u32) a0 + 0x7950U);
    (*(volatile u32 *) (u32) (v1 + 288)) = (u32) a0;
    v1 = (*(volatile s32 *) (u32) s1);
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    return;
}
