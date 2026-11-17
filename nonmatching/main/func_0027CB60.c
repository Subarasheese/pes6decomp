/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00145590(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_002CB8C0(s32);

s32 func_0027CB60(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    v1 = (s32) ((u32) a0 << 3);
    a1 = (s32) ((u32) v1 + (u32) a0);
    a1 = (s32) ((u32) a1 << 3);
    v1 = (s32) 0x5a0000U;
    a1 = (s32) ((u32) a1 - (u32) a0);
    v1 = (s32) ((u32) v1 + 0xfffffbf0U);
    a1 = (s32) ((u32) a1 << 3);
    at = (u64) a0 < (u64) (s64) 7;
    { s32 c_ = at == 0; s0 = (s32) ((u32) v1 + (u32) a1); if (c_) goto L_0027CC80; }
    v1 = (s32) ((u32) a0 << 2);
    a0 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) a0 + 0xffff9cd0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x27cbb8U) goto L_0027CBB8; if (t_ == 0x27cc30U) goto L_0027CC30; }
L_0027CBB8:;
    a1 = 0;
    a0 = s0;
L_0027CBC0:;
    (*(volatile u32 *) (u32) (a0 + 8)) = (u32) 0;
    a1 = (s32) ((u32) a1 + 0x8U);
    (*(volatile u32 *) (u32) (a0 + 12)) = (u32) 0;
    v1 = a1 < 40;
    (*(volatile u32 *) (u32) (a0 + 16)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 20)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 24)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 28)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 32)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 36)) = (u32) 0;
    { s32 c_ = v1 != 0; a0 = (s32) ((u32) a0 + 0x20U); if (c_) goto L_0027CBC0; }
    s1 = 0;
    s2 = s0;
L_0027CBF8:;
    a0 = (*(volatile s32 *) (u32) (s2 + 408));
    if (a0 == 0) goto L_0027CC18;
    v0 = func_00145590(a0, a1, a2, a3, a4, a5, a6, a7);
    (*(volatile u32 *) (u32) (s2 + 408)) = (u32) 0;
    (*(volatile u32 *) (u32) (s2 + 248)) = (u32) 0;
L_0027CC18:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 40;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_0027CBF8; }
    (*(volatile u32 *) (u32) s0) = (u32) 0; goto L_0027CC84;
L_0027CC30:;
    a0 = 0;
    a1 = s0;
L_0027CC38:;
    (*(volatile u32 *) (u32) (a1 + 8)) = (u32) 0;
    a0 = (s32) ((u32) a0 + 0x8U);
    (*(volatile u32 *) (u32) (a1 + 12)) = (u32) 0;
    v1 = a0 < 52;
    (*(volatile u32 *) (u32) (a1 + 16)) = (u32) 0;
    (*(volatile u32 *) (u32) (a1 + 20)) = (u32) 0;
    (*(volatile u32 *) (u32) (a1 + 24)) = (u32) 0;
    (*(volatile u32 *) (u32) (a1 + 28)) = (u32) 0;
    (*(volatile u32 *) (u32) (a1 + 32)) = (u32) 0;
    (*(volatile u32 *) (u32) (a1 + 36)) = (u32) 0;
    { s32 c_ = v1 != 0; a1 = (s32) ((u32) a1 + 0x20U); if (c_) goto L_0027CC38; }
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) s0);
    (*(volatile u32 *) (u32) (v1 + 8)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + 12)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + 16)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + 20)) = (u32) 0;
L_0027CC80:;
    (*(volatile u32 *) (u32) s0) = (u32) 0;
L_0027CC84:;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    if (v1 == 0) goto L_0027CCDC;
    a0 = (s32) 0x5a0000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xb78U);
L_0027CC9C:;
    v0 = (*(volatile s32 *) (u32) a0);
    if (v0 != v1) { a1 = (s32) ((u32) a1 + 0x1U); goto L_0027CCC0; }
    v0 = (s32) 0x5a0000U;
    v1 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) v0 + 0xb78U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) v0) = (u32) 0; goto L_0027CCD0;
L_0027CCC0:;
    v0 = a1 < 3;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x4U); if (c_) goto L_0027CC9C; }
L_0027CCD0:;
    a0 = (*(volatile s32 *) (u32) (s0 + 4)); v0 = func_002CB8C0(a0);
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) 0;
L_0027CCDC:;
    return v0;
}
