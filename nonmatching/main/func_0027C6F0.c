/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Texture_GetCacheKey(s32);
s32 func_00145750(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_001CDAD0(s32);

s32 func_0027C6F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;

    v1 = (*(volatile s32 *) (u32) (a0 + 68));
    if (v1 == 0) goto L_0027C960;
    s0 = (*(volatile s32 *) (u32) a0);
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) v1;
    a0 = (*(volatile s32 *) (u32) (s0 + 4)); v0 = func_001CDAD0(a0);
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    v1 = (*(volatile s32 *) (u32) a0);
    v1 = 0 < v1;
    { s32 c_ = v1 != 0; s2 = 0; if (c_) goto L_0027C8D0; }
    v1 = (*(volatile s32 *) (u32) (a0 + 4));
L_0027C744:;
    a2 = 0;
    v1 = (*(volatile s32 *) (u32) v1);
    a0 = (*(volatile s32 *) (u32) (v1 + 32));
    at = 0 < a0;
    { s32 c_ = at == 0; a1 = (s32) ((u32) v1 + 0x20U); if (c_) goto L_0027C8A8; }
    at = a0 < 9;
    { s32 c_ = at != 0; v1 = (s32) ((u32) a0 + 0xfffffff8U); if (c_) goto L_0027C868; }
    at = a0 < 0;
    a5 = 0;
    { s32 c_ = at != 0; a3 = 0; if (c_) goto L_0027C908; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = a0 < at;
    if (at == 0) goto L_0027C908;
    a3 = 1; goto L_0027C908;
    a3 = (s32) 0x80000000U;
L_0027C798:;
    a3 = a0 & a3;
    { s32 c_ = a3 != 0; a4 = 1; if (c_) goto L_0027C7B0; }
    if (a3 == 0) goto L_0027C7B0;
    a4 = 0;
L_0027C7B0:;
    if (a4 == 0) goto L_0027C7BC;
    a5 = 1;
L_0027C7BC:;
    if (a5 == 0) goto L_0027C868;
    a5 = 0;
    a4 = s0;
    a3 = (s32) ((u32) a1 + 0x4U);
L_0027C7D0:;
    a7 = (*(volatile s32 *) (u32) a3);
    a2 = (s32) ((u32) a2 + 0x8U);
    a6 = a2 < v1;
    a7 = (s32) ((u32) a7 + (u32) a5);
    a7 = (*(volatile s32 *) (u32) a7);
    (*(volatile u32 *) (u32) (a4 + 8)) = (u32) a7;
    a7 = (*(volatile s32 *) (u32) a3);
    a7 = (s32) ((u32) a7 + (u32) a5);
    a7 = (*(volatile s32 *) (u32) (a7 + 4));
    (*(volatile u32 *) (u32) (a4 + 12)) = (u32) a7;
    a7 = (*(volatile s32 *) (u32) a3);
    a7 = (s32) ((u32) a7 + (u32) a5);
    a7 = (*(volatile s32 *) (u32) (a7 + 8));
    (*(volatile u32 *) (u32) (a4 + 16)) = (u32) a7;
    a7 = (*(volatile s32 *) (u32) a3);
    a7 = (s32) ((u32) a7 + (u32) a5);
    a7 = (*(volatile s32 *) (u32) (a7 + 12));
    (*(volatile u32 *) (u32) (a4 + 20)) = (u32) a7;
    a7 = (*(volatile s32 *) (u32) a3);
    a7 = (s32) ((u32) a7 + (u32) a5);
    a7 = (*(volatile s32 *) (u32) (a7 + 16));
    (*(volatile u32 *) (u32) (a4 + 24)) = (u32) a7;
    a7 = (*(volatile s32 *) (u32) a3);
    a7 = (s32) ((u32) a7 + (u32) a5);
    a7 = (*(volatile s32 *) (u32) (a7 + 20));
    (*(volatile u32 *) (u32) (a4 + 28)) = (u32) a7;
    a7 = (*(volatile s32 *) (u32) a3);
    a7 = (s32) ((u32) a7 + (u32) a5);
    a7 = (*(volatile s32 *) (u32) (a7 + 24));
    (*(volatile u32 *) (u32) (a4 + 32)) = (u32) a7;
    a7 = (*(volatile s32 *) (u32) a3);
    a7 = (s32) ((u32) a7 + (u32) a5);
    a7 = (*(volatile s32 *) (u32) (a7 + 28));
    a5 = (s32) ((u32) a5 + 0x20U);
    (*(volatile u32 *) (u32) (a4 + 36)) = (u32) a7;
    { s32 c_ = a6 != 0; a4 = (s32) ((u32) a4 + 0x20U); if (c_) goto L_0027C7D0; }
L_0027C868:;
    at = a2 < a0;
    if (at == 0) goto L_0027C8A8;
    a5 = (s32) ((u32) a2 << 2);
    a3 = (s32) ((u32) a1 + 0x4U);
    a4 = (s32) ((u32) s0 + (u32) a5);
L_0027C880:;
    a1 = (*(volatile s32 *) (u32) a3);
    a2 = (s32) ((u32) a2 + 0x1U);
    v1 = a2 < a0;
    a1 = (s32) ((u32) a1 + (u32) a5);
    a1 = (*(volatile s32 *) (u32) a1);
    a5 = (s32) ((u32) a5 + 0x4U);
    (*(volatile u32 *) (u32) (a4 + 8)) = (u32) a1;
    { s32 c_ = v1 != 0; a4 = (s32) ((u32) a4 + 0x4U); if (c_) goto L_0027C880; }
L_0027C8A8:;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    s2 = (*(volatile s32 *) (u32) (v1 + 32));
    a0 = (s32) ((u32) v1 + 0x20U);
    v1 = 0 < s2;
    { s32 c_ = v1 != 0; s3 = 0; if (c_) goto L_0027C918; }
L_0027C8C8:;
    goto L_0027C964;
L_0027C8D0:;
    s1 = 0;
L_0027C8D4:;
    v0 = (*(volatile s32 *) (u32) (a0 + 4));
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x20U); v0 = func_001CDAD0(a0);
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = (*(volatile s32 *) (u32) a0);
    v1 = s2 < v1;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_0027C8D4; }
    v1 = (*(volatile s32 *) (u32) (a0 + 4)); goto L_0027C744;
L_0027C908:;
    if (a3 == 0) goto L_0027C7BC;
    a3 = (s32) 0x80000000U; goto L_0027C798;
L_0027C918:;
    s1 = (s32) ((u32) a0 + 0x4U);
    s4 = 0;
L_0027C920:;
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = (s32) ((u32) v0 + (u32) s4);
    s5 = (*(volatile s32 *) (u32) v0);
    a0 = s5; v0 = Pes6Texture_GetCacheKey(a0);
    (*(volatile u32 *) (u32) (s0 + 248)) = (u32) v0;
    a0 = s5;
    (*(volatile u32 *) (u32) (s0 + 408)) = (u32) s5; v0 = func_00145750(a0, a1, a2, a3, a4, a5, a6, a7);
    s3 = (s32) ((u32) s3 + 0x1U);
    s4 = (s32) ((u32) s4 + 0x4U);
    v1 = s3 < s2;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_0027C920; }
    goto L_0027C8C8;
L_0027C960:;
L_0027C964:;
    return v0;
}
