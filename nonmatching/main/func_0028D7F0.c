/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001C6158(s64, s64, s64, s64);
s64 func_0028F230(s64, s64, s64, s64, s64);
s64 func_002937A0(s64, s64, s64, s64);
s64 func_002B89E0(s64);

s64 func_0028D7F0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s64 frame[32];
    s64 sp = (s32) (u32) frame;

    s7 = a2;
    s5 = a0;
    s4 = a1;
    a0 = a4;
    s0 = a3; v0 = func_002B89E0(a0);
    s6 = v0 & 0xff;
    v1 = 255;
    if (s6 == v1) goto L_0028D980;
    v1 = (s32) ((u32) s0 + (u32) s6);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 != 0) goto L_0028D858;
    goto L_0028D984;
L_0028D858:;
    v0 = (s32) ((u32) s6 << 2);
    s3 = 0;
    v0 = (s32) ((u32) v0 + (u32) s4);
    s0 = (s32) ((u32) sp + 0x90U);
    s2 = (*(volatile s32 *) (u32) (v0 + 168));
L_0028D86C:;
    v0 = (s32) ((u32) s4 + (u32) s3);
    s1 = (*(volatile u8 *) (u32) (v0 + 296));
    a0 = s1; v0 = func_002937A0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    v1 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff9de0U);
    v0 = (s32) 0x3e0000U;
    a3 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffff9d60U);
    a5 = 0;
    a2 = (s32) ((u32) v0 + (u32) a0);
    a4 = (s32) ((u32) sp + 0xf0U);
    v0 = (s32) 0x3e0000U;
    v1 = 1;
    v0 = (s32) ((u32) v0 + 0xffff9da0U);
    a1 = (s32) ((u32) v0 + (u32) a0);
    a0 = 2;
L_0028D8B8:;
    if (a5 == a0) goto L_0028D8D8;
    if (a5 == v1) goto L_0028D8D0;
    goto L_0028D8E0;
L_0028D8D0:;
    v0 = (*(volatile s32 *) (u32) a3); goto L_0028D8E8;
L_0028D8D8:;
    v0 = (*(volatile s32 *) (u32) a2); goto L_0028D8E8;
L_0028D8E0:;
    v0 = (*(volatile s32 *) (u32) a1);
L_0028D8E8:;
    (*(volatile u32 *) (u32) a4) = (u32) v0;
    a5 = (s32) ((u32) a5 + 0x1U);
    v0 = a5 < 3;
    { s32 c_ = v0 != 0; a4 = (s32) ((u32) a4 + 0x4U); if (c_) goto L_0028D8B8; }
    a2 = s1;
    a0 = s5;
    a1 = s2;
    a3 = (s32) ((u32) sp + 0xf0U);
    a4 = 100; v0 = func_0028F230(a0, a1, a2, a3, a4);
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) s3;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 11;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x8U); if (c_) goto L_0028D86C; }
    a3 = (s32) 0x290000U;
    a0 = (s32) ((u32) sp + 0x90U);
    a1 = 11;
    a2 = 8;
    a3 = (s32) ((u32) a3 + 0xffffdd60U); v0 = func_001C6158(a0, a1, a2, a3);
    a0 = (s32) ((u32) sp + 0x94U);
    v1 = (*(volatile s32 *) (u32) a0);
    { s32 c_ = v1 != 0; a1 = 0; if (c_) goto L_0028D96C; }
    v1 = (*(volatile u8 *) (u32) (s2 + 1));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 60);
    if (v1 == 0) goto L_0028D96C;
    a1 = (s32) ((u32) a1 + 0x1U);
L_0028D96C:;
    v1 = (s32) ((u32) a1 << 3);
    (*(volatile u8 *) (u32) (s7 + 189)) = (u8) s6;
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v1);
    (*(volatile u8 *) (u32) (s7 + 190)) = (u8) v1;
L_0028D980:;
L_0028D984:;
    return v0;
}
