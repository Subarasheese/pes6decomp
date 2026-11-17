/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0028F230(s64, s64, s64, s64, s64);
s64 func_002937A0(s64, s64, s64, s64);
s64 func_002C7280(s64, s64);

s64 func_0028F860(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[12];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x3e0000U;
    v1 = a2 & 0xff;
    v0 = (s32) ((u32) v0 + 0xffff9e28U);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = 15;
    s3 = a0;
    s0 = (*(volatile u8 *) (u32) v1);
    s2 = a1;
    { s32 c_ = s0 == v0; s1 = a3; if (c_) goto L_0028F8CC; }
    v0 = 29;
    if (s0 == v0) goto L_0028F8CC;
    v0 = 22;
    if (s0 == v0) goto L_0028F8CC;
    v0 = 8;
    if (s0 == v0) goto L_0028F8CC;
    a0 = s0; goto L_0028F914;
L_0028F8CC:;
    a0 = s2;
    a1 = 1; v0 = func_002C7280(a0, a1);
    if (v0 != 0) goto L_0028F910;
    v0 = 15;
    if (s0 == v0) { s0 = (s64) ((u64) 0 + (u64) (s64) 16); goto L_0028F910; }
    v0 = 29;
    if (s0 == v0) { s0 = (s64) ((u64) 0 + (u64) (s64) 30); goto L_0028F910; }
    v0 = 22;
    if (s0 == v0) { s0 = (s64) ((u64) 0 + (u64) (s64) 23); goto L_0028F910; }
    v0 = 8;
    if (s0 == v0) { s0 = (s64) ((u64) 0 + (u64) (s64) 9); goto L_0028F910; }
L_0028F910:;
    a0 = s0;
L_0028F914:;
    v0 = func_002937A0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    v1 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff9de0U);
    v0 = (s32) 0x3e0000U;
    a3 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffff9d60U);
    a5 = 0;
    a2 = (s32) ((u32) v0 + (u32) a0);
    a4 = (s32) ((u32) sp + 0x50U);
    v0 = (s32) 0x3e0000U;
    v1 = 1;
    v0 = (s32) ((u32) v0 + 0xffff9da0U);
    a1 = (s32) ((u32) v0 + (u32) a0);
    a0 = 2;
L_0028F958:;
    if (a5 == a0) goto L_0028F978;
    if (a5 == v1) goto L_0028F970;
    goto L_0028F980;
L_0028F970:;
    v0 = (*(volatile s32 *) (u32) a3); goto L_0028F988;
L_0028F978:;
    v0 = (*(volatile s32 *) (u32) a2); goto L_0028F988;
L_0028F980:;
    v0 = (*(volatile s32 *) (u32) a1);
L_0028F988:;
    (*(volatile u32 *) (u32) a4) = (u32) v0;
    a5 = (s32) ((u32) a5 + 0x1U);
    v0 = a5 < 3;
    { s32 c_ = v0 != 0; a4 = (s32) ((u32) a4 + 0x4U); if (c_) goto L_0028F958; }
    a0 = s3;
    a1 = s2;
    a2 = s0;
    a4 = s1;
    a3 = (s32) ((u32) sp + 0x50U); v0 = func_0028F230(a0, a1, a2, a3, a4);
    return v0;
}
